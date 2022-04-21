///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2022 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 3/17/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_UUUID_MAIN_HPP
#define XOS_APP_CONSOLE_UUUID_MAIN_HPP

#include "xos/app/console/uuuid/main_opt.hpp"
#include "xos/network/ethernet/os/address.hpp"
#include "xos/network/universal/unique/os/identifier.hpp"

namespace xos {
namespace app {
namespace console {
namespace uuuid {

/// class maint
template 
<class TExtends = xos::app::console::uuuid::main_opt, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint(): run_(0), index_(0) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// ...generate_run
    virtual int generate_run(int argc, char_t** argv, char_t** env) {
        int err = 0, &index = this->index();
        xos::network::universal::unique::identifier &uuid = this->uuid();
        
        LOGGER_IS_LOGGED_DEBUG("uuid.generate(index = " << signed_to_string(index) << ")...");
        if ((uuid.generate(index))) {
            LOGGER_IS_LOGGED_DEBUG("...uuid.generate(index = " << signed_to_string(index) << ")");
            this->outln(uuid.string().chars());
        } else {
            LOGGER_IS_LOGGED_ERROR("...failed on uuid.generate(index = " << signed_to_string(index) << ")");
        }
        return err;
    }

    /// ...ethernet_name_run
    virtual int ethernet_name_run(int argc, char_t** argv, char_t** env) {
        int err = 0, &index = this->index();
        string_t& name = this->name();
        const char_t* chars = 0; size_t length = 0;
        
        if ((chars = name.has_chars(length))) {
            this->outln(chars, length);
        } else {
            xos::network::ethernet::os::address& ethernet = this->ethernet();
            xos::network::ethernet::actual::address *address = 0;
    
            if ((address = ethernet.set_to_adapter(index))) {
                if ((chars = ethernet.adapter_name().has_chars(length))) {
                    this->outln(chars, length);
                }
            }
        }
        return err;
    }

    /// ...ethernet_index_run
    virtual int ethernet_index_run(int argc, char_t** argv, char_t** env) {
        int err = 0, &index = this->index();
        this->outln(signed_to_string(index).chars());
        return err;
    }

    /// ...ethernet_address_run
    virtual int ethernet_address_run(int argc, char_t** argv, char_t** env) {
        int err = 0, &index = this->index();
        xos::network::ethernet::os::address& ethernet = this->ethernet();
        xos::network::ethernet::actual::address *address = 0;

        if ((address = ethernet.set_to_adapter(index))) {
            const char_t* chars = 0; size_t length = 0;
            
            if ((chars = ethernet.actual_string().has_chars(length))) {
                this->outln(chars, length);
            }
        }
        return err;
    }

    /// on...option
    virtual int on_set_ethernet_index_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0, &index = this->index();

        if ((optarg) && (optarg[0])) {
            string_t a(optarg);
            index = a.to_signed();
        }
        return err;
    }

    /// ...
    virtual int& index() const {
        return (int&)index_;
    }
    virtual string_t& name() const {
        return (string_t&)name_;
    }
    virtual xos::network::ethernet::os::address& ethernet() const {
        return (xos::network::ethernet::os::address&)ethernet_;
    }
    virtual xos::network::universal::unique::identifier& uuid() const {
        return (xos::network::universal::unique::identifier&)uuid_;
    }

protected:
    int index_;
    string_t name_;
    xos::network::ethernet::os::address ethernet_;
    xos::network::universal::unique::os::identifier uuid_;
}; /// class maint
typedef maint<> main;

} /// namespace uuuid
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_UUUID_MAIN_HPP
