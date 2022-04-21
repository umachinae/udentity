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
#   File: uuuid.pri
#
# Author: $author$
#   Date: 3/17/2022
#
# generic QtCreator project .pri file for framework udentity executable uuuid
########################################################################

########################################################################
# uuuid

# uuuid TARGET
#
uuuid_TARGET = uuuid

# uuuid INCLUDEPATH
#
uuuid_INCLUDEPATH += \
$${udentity_INCLUDEPATH} \

# uuuid DEFINES
#
uuuid_DEFINES += \
$${udentity_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# uuuid OBJECTIVE_HEADERS
#
#uuuid_OBJECTIVE_HEADERS += \
#$${UDENTITY_SRC}/xos/app/console/uuuid/main.hh \

# uuuid OBJECTIVE_SOURCES
#
#uuuid_OBJECTIVE_SOURCES += \
#$${UDENTITY_SRC}/xos/app/console/uuuid/main.mm \

########################################################################
# uuuid HEADERS
#
uuuid_HEADERS += \
$${UDENTITY_SRC}/xos/network/ethernet/actual/address.hpp \
$${UDENTITY_SRC}/xos/network/ethernet/address.hpp \
$${UDENTITY_SRC}/xos/network/ethernet/bsd/address.hpp \
$${UDENTITY_SRC}/xos/network/ethernet/systemv/address.hpp \
$${UDENTITY_SRC}/xos/network/ethernet/os/os.hpp \
$${UDENTITY_SRC}/xos/network/ethernet/os/address.hpp \
$${UDENTITY_SRC}/xos/network/universal/unique/actual/identifier.hpp \
$${UDENTITY_SRC}/xos/network/universal/unique/identifier.hpp \
$${UDENTITY_SRC}/xos/network/universal/unique/posix/identifier.hpp \
$${UDENTITY_SRC}/xos/network/universal/unique/microsoft/windows/identifier.hpp \
$${UDENTITY_SRC}/xos/network/universal/unique/os/identifier.hpp \
\
$${UDENTITY_SRC}/xos/app/console/uuuid/main_opt.hpp \
$${UDENTITY_SRC}/xos/app/console/uuuid/main.hpp \

# uuuid SOURCES
#
uuuid_SOURCES += \
$${UDENTITY_SRC}/xos/network/ethernet/os/os.cpp \
$${UDENTITY_SRC}/xos/network/ethernet/os/address.cpp \
$${UDENTITY_SRC}/xos/network/universal/unique/os/identifier.cpp \
\
$${UDENTITY_SRC}/xos/app/console/uuuid/main_opt.cpp \
$${UDENTITY_SRC}/xos/app/console/uuuid/main.cpp \

########################################################################
# uuuid FRAMEWORKS
#
uuuid_FRAMEWORKS += \
$${udentity_FRAMEWORKS} \

# uuuid LIBS
#
uuuid_LIBS += \
$${udentity_LIBS} \

########################################################################
# NO Qt
QT -= gui core

