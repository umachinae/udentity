########################################################################
# Copyright (c) 1988-2022 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: udty.pri
#
# Author: $author$
#   Date: 3/3/2022
#
# generic QtCreator project .pri file for framework udentity executable udty
########################################################################

########################################################################
# udty

# udty TARGET
#
udty_TARGET = udty

# udty INCLUDEPATH
#
udty_INCLUDEPATH += \
$${udentity_INCLUDEPATH} \

# udty DEFINES
#
udty_DEFINES += \
$${udentity_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# udty OBJECTIVE_HEADERS
#
#udty_OBJECTIVE_HEADERS += \
#$${UDENTITY_SRC}/xos/app/console/udty/main.hh \

# udty OBJECTIVE_SOURCES
#
#udty_OBJECTIVE_SOURCES += \
#$${UDENTITY_SRC}/xos/app/console/udty/main.mm \

########################################################################
# udty HEADERS
#
udty_HEADERS += \
$${UDENTITY_SRC}/talas/base/array.hpp \
$${UDENTITY_SRC}/talas/io/hex/read_to_arrays.hpp \
\
$${UDENTITY_SRC}/xos/io/output.hpp \
$${UDENTITY_SRC}/xos/io/string/output.hpp \
$${UDENTITY_SRC}/xos/io/crt/file/output.hpp \
$${UDENTITY_SRC}/xos/io/console/output.hpp \
$${UDENTITY_SRC}/xos/io/crypto/output.hpp \
\
$${UDENTITY_SRC}/xos/protocol/tls/plaintext.hpp \
$${UDENTITY_SRC}/xos/protocol/tls/handshake/message.hpp \
\
$${UDENTITY_SRC}/xos/protocol/udtp/base/output.hpp \
$${UDENTITY_SRC}/xos/protocol/udtp/client/output.hpp \
$${UDENTITY_SRC}/xos/protocol/udtp/client/hello/messages.hpp \
$${UDENTITY_SRC}/xos/protocol/udtp/server/output.hpp \
\
$${UDENTITY_SRC}/xos/app/console/udentity/main_opt.hpp \
$${UDENTITY_SRC}/xos/app/console/udentity/main.hpp \
\
$${UDENTITY_SRC}/xos/app/console/crypto/main_opt.hpp \
$${UDENTITY_SRC}/xos/app/console/crypto/main.hpp \
\
$${UDENTITY_SRC}/xos/app/console/protocol/udtp/base/main_opt.hpp \
$${UDENTITY_SRC}/xos/app/console/protocol/udtp/base/main.hpp \
\
$${UDENTITY_SRC}/xos/app/console/protocol/udtp/client/main_opt.hpp \
$${UDENTITY_SRC}/xos/app/console/protocol/udtp/client/main.hpp \
\
$${UDENTITY_SRC}/xos/app/console/protocol/udtp/server/main_opt.hpp \
$${UDENTITY_SRC}/xos/app/console/protocol/udtp/server/main.hpp \
\
$${UDENTITY_SRC}/xos/app/console/udfy/main_opt.hpp \
$${UDENTITY_SRC}/xos/app/console/udfy/main.hpp \


# udty SOURCES
#
udty_SOURCES += \
$${UDENTITY_SRC}/talas/base/array.cpp \
$${UDENTITY_SRC}/talas/io/hex/read_to_arrays.cpp \
\
$${UDENTITY_SRC}/xos/protocol/tls/plaintext.cpp \
$${UDENTITY_SRC}/xos/protocol/tls/handshake/message.cpp \
\
$${UDENTITY_SRC}/xos/protocol/udtp/client/hello/messages.cpp \
$${UDENTITY_SRC}/xos/protocol/udtp/server/output.cpp \
\
$${UDENTITY_SRC}/xos/app/console/protocol/udtp/server/main_opt.cpp \
$${UDENTITY_SRC}/xos/app/console/protocol/udtp/server/main.cpp \

########################################################################
# udty FRAMEWORKS
#
udty_FRAMEWORKS += \
$${udentity_FRAMEWORKS} \

# udty LIBS
#
udty_LIBS += \
$${udentity_rsa_LIBS} \

########################################################################
# NO Qt
QT -= gui core
