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
#   File: uethernet.pri
#
# Author: $author$
#   Date: 3/21/2022
#
# generic QtCreator project .pri file for framework udentity executable uethernet
########################################################################

########################################################################
# uethernet

# uethernet TARGET
#
uethernet_TARGET = uethernet

# uethernet INCLUDEPATH
#
uethernet_INCLUDEPATH += \
$${udentity_INCLUDEPATH} \

# uethernet DEFINES
#
uethernet_DEFINES += \
$${udentity_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# uethernet OBJECTIVE_HEADERS
#
#uethernet_OBJECTIVE_HEADERS += \
#$${UDENTITY_SRC}/xos/app/console/uethernet/main.hh \

# uethernet OBJECTIVE_SOURCES
#
#uethernet_OBJECTIVE_SOURCES += \
#$${UDENTITY_SRC}/xos/app/console/uethernet/main.mm \

########################################################################
# uethernet HEADERS
#
uethernet_HEADERS += \
$${UDENTITY_SRC}/xos/app/console/uethernet/main_opt.hpp \
$${UDENTITY_SRC}/xos/app/console/uethernet/main.hpp \

# uethernet SOURCES
#
uethernet_SOURCES += \
$${UDENTITY_SRC}/xos/app/console/uethernet/main_opt.cpp \
$${UDENTITY_SRC}/xos/app/console/uethernet/main.cpp \

########################################################################
# uethernet FRAMEWORKS
#
uethernet_FRAMEWORKS += \
$${udentity_FRAMEWORKS} \

# uethernet LIBS
#
uethernet_LIBS += \
$${udentity_LIBS} \

########################################################################
# NO Qt
QT -= gui core

