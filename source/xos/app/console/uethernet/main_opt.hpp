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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 3/21/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_UETHERNET_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_UETHERNET_MAIN_OPT_HPP

#include "xos/app/console/udentity/main.hpp"

#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPT "name"
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTARG "[string]"
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTUSE "ethernet adapter name"
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTVAL_S "n::"
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTVAL_C 'n'
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTION \
   {XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPT, \
    XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTARG_RESULT, \
    XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTVAL_C}, \

#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPT "index"
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTARG "[0..n]"
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTUSE "ethernet adapter index"
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTVAL_S "i::"
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTVAL_C 'i'
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTION \
   {XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPT, \
    XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTARG_RESULT, \
    XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTVAL_C}, \

#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPT "address"
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTARG "[xx:xx:xx:xx:xx:xx]"
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTUSE "ethernet adapter address"
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTVAL_S "a::"
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTVAL_C 'a'
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTION \
   {XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPT, \
    XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTARG_RESULT, \
    XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTVAL_C}, \

#define XOS_APP_CONSOLE_UETHERNET_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTVAL_S \
   XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTVAL_S \
   XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTVAL_S \

#define XOS_APP_CONSOLE_UETHERNET_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTION \
   XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTION \
   XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTION \

#define XOS_APP_CONSOLE_UETHERNET_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_UETHERNET_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_UDENTITY_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_UETHERNET_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_UETHERNET_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_UDENTITY_MAIN_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_UETHERNET_MAIN_ARGS 0
#define XOS_APP_CONSOLE_UETHERNET_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace uethernet {

/// class main_optt
template 
<class TExtends = xos::app::console::udentity::main, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
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

    /// ...ethernet_name_run
    virtual int ethernet_name_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_ethernet_name_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_ethernet_name_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_ethernet_name_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_ethernet_name_run(argc, argv, env))) {
            int err2 = 0;
            err = ethernet_name_run(argc, argv, env);
            if ((err2 = after_ethernet_name_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_ethernet_name_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_ethernet_name_run;
        return err;
    }

    /// ...ethernet_index_run
    virtual int ethernet_index_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_ethernet_index_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_ethernet_index_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_ethernet_index_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_ethernet_index_run(argc, argv, env))) {
            int err2 = 0;
            err = ethernet_index_run(argc, argv, env);
            if ((err2 = after_ethernet_index_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_ethernet_index_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_ethernet_index_run;
        return err;
    }

    /// ...ethernet_address_run
    virtual int ethernet_address_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_ethernet_address_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_ethernet_address_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_ethernet_address_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_ethernet_address_run(argc, argv, env))) {
            int err2 = 0;
            err = ethernet_address_run(argc, argv, env);
            if ((err2 = after_ethernet_address_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_ethernet_address_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_ethernet_address_run;
        return err;
    }

    /// ...option...
    virtual int on_set_ethernet_name_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_ethernet_name_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_ethernet_name_option(optarg, optind, argc, argv, env))) {
                if (!(err = set_ethernet_name_run(argc, argv, env))) {
                }
            }
        } else {
            if (!(err = set_ethernet_name_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* ethernet_name_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTUSE;
        optarg = XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTARG;
        return chars;
    }
    virtual int on_set_ethernet_index_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_ethernet_index_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_ethernet_index_option(optarg, optind, argc, argv, env))) {
                if (!(err = set_ethernet_index_run(argc, argv, env))) {
                }
            }
        } else {
            if (!(err = set_ethernet_index_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* ethernet_index_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTUSE;
        optarg = XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTARG;
        return chars;
    }
    virtual int on_set_ethernet_address_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_ethernet_address_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if (!(err = on_set_ethernet_address_option(optarg, optind, argc, argv, env))) {
                if (!(err = set_ethernet_address_run(argc, argv, env))) {
                }
            }
        } else {
            if (!(err = set_ethernet_address_run(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual const char_t* ethernet_address_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTUSE;
        optarg = XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTARG;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTVAL_C:
            err = this->on_ethernet_name_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTVAL_C:
            err = this->on_ethernet_index_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTVAL_C:
            err = this->on_ethernet_address_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_NAME_OPTVAL_C:
            chars = this->ethernet_name_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_INDEX_OPTVAL_C:
            chars = this->ethernet_index_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_UETHERNET_MAIN_ETHERNET_ADDRESS_OPTVAL_C:
            chars = this->ethernet_address_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_UETHERNET_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_UETHERNET_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_UETHERNET_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_UETHERNET_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace uethernet
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_UETHERNET_MAIN_OPT_HPP
