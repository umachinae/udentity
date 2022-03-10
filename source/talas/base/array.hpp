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
///   File: array.hpp
///
/// Author: $author$
///   Date: 3/7/2022
///////////////////////////////////////////////////////////////////////
#ifndef TALAS_BASE_ARRAY_HPP
#define TALAS_BASE_ARRAY_HPP

#include "xos/base/array.hpp"

namespace xos {
namespace protocol {
namespace tls {

class exported plaintext;

} /// namespace tls
} /// namespace protocol
} /// namespace xos

namespace talas {

/// class arrayt
template 
<typename TWhat,
 typename TSize = size_t, TSize VDefaultSize = XOS_ARRAY_DEFAULT_SIZE,
 class TExtends = xos::base::arrayt<TWhat, TSize, VDefaultSize>, 
 class TImplements = typename TExtends::implements>

class exported arrayt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef arrayt derives;

    typedef xos::protocol::tls::plaintext plaintext_t;
    typedef TWhat what_t;
    enum { default_size = VDefaultSize };

    /// constructor / destructor
    arrayt(const what_t* elements, size_t length): extends(elements, length) {
    }
    arrayt(ssize_t length): extends(length) {
    }
    arrayt(const arrayt& copy): extends(copy) {
    }
    arrayt() {
    }
    virtual ~arrayt() {
    }

    /// plaintext
    virtual plaintext_t* is_plaintext() const {
        return 0;
    }
}; /// class arrayt

/// class arrayst
template 
<typename TElement, typename TWhat = TElement*,
 typename TSize = size_t, TSize VDefaultSize = XOS_ARRAY_DEFAULT_SIZE,
 class TExtends = talas::arrayt<TWhat, TSize, VDefaultSize>, 
 class TImplements = typename TExtends::implements>

class exported arrayst: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef arrayst derives;

    typedef TElement element_t;
    typedef TWhat what_t;
    enum { default_size = VDefaultSize };

    /// constructor / destructor
    arrayst(const what_t* elements, size_t length): extends(elements, length) {
    }
    arrayst(ssize_t length): extends(length) {
    }
    arrayst(const arrayst& copy): extends(copy) {
    }
    arrayst() {
    }
    virtual ~arrayst() {
    }

    /// new_instance
    virtual element_t* new_instance() {
        element_t* instance = 0;
        instance = new element_t;
        return instance;
    }

}; /// class arrayst

typedef xos::base::implement_base array_implements;
typedef xos::base::base array_extends;

typedef xos::base::char_array char_array_t;
typedef xos::base::tchar_array tchar_array_t;
typedef xos::base::wchar_array wchar_array_t;

typedef xos::base::word_array word_array_t;

typedef xos::base::arrayt<char_array_t*> char_arrays_t;
typedef xos::base::arrayt<tchar_array_t*> tchar_arrays_t;
typedef xos::base::arrayt<wchar_array_t*> wchar_arrays_t;

typedef xos::base::arrayt<word_array_t*> word_arrays_t;

typedef talas::arrayt<byte_t> byte_array_t;
typedef talas::arrayst<byte_array_t> byte_arrays_t;

} /// namespace talas

#endif /// TALAS_BASE_ARRAY_HPP
