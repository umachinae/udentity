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
#   File: udty.pro
#
# Author: $author$
#   Date: 3/3/2022
#
# os specific QtCreator project .pro file for framework udentity executable udty
########################################################################
#
# Debug: udentity/build/os/QtCreator/Debug/bin/udty
# Release: udentity/build/os/QtCreator/Release/bin/udty
# Profile: udentity/build/os/QtCreator/Profile/bin/udty
#
include(../../../../../build/QtCreator/udentity.pri)
include(../../../../QtCreator/udentity.pri)
include(../../udentity.pri)
include(../../../../QtCreator/app/udty/udty.pri)

TARGET = $${udty_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${udty_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${udty_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${udty_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${udty_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${udty_HEADERS} \
$${udty_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${udty_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${udty_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${udty_LIBS} \
$${FRAMEWORKS} \

########################################################################

