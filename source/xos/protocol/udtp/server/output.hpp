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
///   File: output.hpp
///
/// Author: $author$
///   Date: 3/7/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_PROTOCOL_UDTP_SERVER_OUTPUT_HPP
#define XOS_PROTOCOL_UDTP_SERVER_OUTPUT_HPP

#include "xos/protocol/udtp/base/output.hpp"
#include "xos/protocol/udtp/client/hello/messages.hpp"

#include "xos/crypto/hash/implemented/sha256.hpp"
#include "xos/crypto/cipher/implemented/aes.hpp"

namespace xos {
namespace protocol {
namespace udtp {
namespace server {

/// class outputt
template 
<class TClientHelloMessages = xos::protocol::udtp::client::hello::messages, 
 class TExtendsOutput = udtp::base::output, 
 class TExtends = TExtendsOutput, class TImplements = typename TExtends::implements>

class exported outputt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef outputt derives; 
    
    typedef TClientHelloMessages client_hello_messages_t;
    
    /// constructors / destructor
    outputt(const outputt& copy)
    : client_hello_messages_size_(0), 
      client_cipher_text_size_(copy.client_cipher_text_size_) {
        client_hello_messages_.set_length(client_hello_messages_size_);
        client_cipher_text_.set_length(client_cipher_text_size_);
    }
    outputt()
    : client_hello_messages_size_(0), 
      client_cipher_text_size_(1024*4) {
        client_hello_messages_.set_length(client_hello_messages_size_);
        client_cipher_text_.set_length(client_cipher_text_size_);
    }
    virtual ~outputt() {
    }

    /// ...output_client_hello_messages
    virtual int output_client_hello_messages() {
        int err = 0;
        const bool verbose = this->verbose_output();
        const ::talas::byte_arrays_t& client_hello_messages = this->client_hello_messages();
        ::talas::byte_array_t*const* arrays = 0; size_t length = 0;
        
        if ((arrays = client_hello_messages.has_elements(length))) {
            for (const ::talas::byte_array_t* array = *arrays; length; --length, ++arrays, array = *arrays) {
                if ((array)) {
                    xos::protocol::tls::plaintext *is_plaintext = 0;

                    if ((verbose)) {
                        this->outln("byte_array=\\");
                        this->output_hex(*array);
                        this->outln();
                    }
                    if ((is_plaintext = array->is_plaintext())) {
                        xos::protocol::tls::plaintext& plaintext = *is_plaintext;
                        
                        if ((err = output_client_plaintext_messages(plaintext))) {
                        }
                    }
                }
            }
        }
        return err;
    }
    /// ...output_client_hello_messages
    virtual int output_client_plaintext_messages(xos::protocol::tls::plaintext& plaintext) {
        int err = 0;
        const bool verbose = this->verbose_output();

        if ((plaintext.separate())) {
            const xos::protocol::tls::plaintext::type_t& content_type = plaintext.type();
            const byte_t* bytes = 0; size_t length = 0;

            if ((bytes = content_type.has_elements(length))) {
                const xos::protocol::tls::protocol::version& protocol_version = plaintext.version();

                if ((verbose)) {
                    this->outln("content_type=\\");
                    this->output_hex(content_type);
                    this->outln();
                }
                if ((bytes = protocol_version.has_elements(length))) {
                    const xos::protocol::tls::plaintext::fragment_length_t& fragment_length = plaintext.fragment_length();

                    if ((verbose)) {
                        this->outln("protocol_version=\\");
                        this->output_hex(protocol_version);
                        this->outln();
                    }
                    if ((bytes = fragment_length.has_elements(length))) {
                        const size_t fragment_length_value = fragment_length.value();
                        const xos::protocol::tls::plaintext::fragment_t& fragment = plaintext.fragment();
                        
                        if ((verbose)) {
                            this->outlln("fragment_length[", unsigned_to_string(fragment_length_value).chars(), "]=\\", null);
                            this->output_hex(fragment_length);
                            this->outln();
                        }
                        if ((bytes = fragment.has_elements(length))) {
                            
                            if ((verbose)) {
                                this->outln("fragment=\\");
                                this->output_hex(fragment);
                                this->outln();
                            }
                        }
                    }
                }
            }
        }
        return err;
    }

    /// on_set_client_hello_message_option
    virtual int on_set_client_hello_message_option(const char_t* client_hello_message) {
        int err = 0;
        client_hello_messages_string_.assign(client_hello_message);
        err = this->on_set_hex_literal_array(client_hello_messages_, client_hello_messages_string_);
        return err;
    }

    /// ...hello_messages...
    virtual client_hello_messages_t& client_hello_messages() const {
        return (client_hello_messages_t&)client_hello_messages_;
    }
    virtual size_t& client_chello_messages_size() const {
        return (size_t&)client_hello_messages_size_;
    }
    
    /// ...cipher_text...
    virtual byte_t* client_cipher_text_bytes(size_t& length) const {
        return client_cipher_text_.has_elements(length);
    }
    virtual ::talas::byte_array_t& client_cipher_text() const {
        return (::talas::byte_array_t&)client_cipher_text_;
    }
    virtual size_t& client_cipher_text_size() const {
        return (size_t&)client_cipher_text_size_;
    }
    
    /// ...plain_text...
    virtual const char_t* client_plain_text_chars(size_t& length) const {
        const ::talas::string_t& client_plain_text = this->client_plain_text();
        return client_plain_text.has_chars(length);
    }
    virtual ::talas::string_t& client_plain_text() const {
        return (::talas::string_t&)client_plain_text_;
    }

protected:
    size_t client_hello_messages_size_, client_cipher_text_size_;
    ::talas::string_t client_hello_messages_string_;
    client_hello_messages_t client_hello_messages_;
    ::talas::byte_array_t client_cipher_text_;
    ::talas::string_t client_plain_text_;
}; /// class outputt
typedef outputt<> output;

} /// namespace server
} /// namespace udtp
} /// namespace protocol
} /// namespace xos

#endif /// XOS_PROTOCOL_UDTP_SERVER_OUTPUT_HPP
