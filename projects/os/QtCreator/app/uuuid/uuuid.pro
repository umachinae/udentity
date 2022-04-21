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
#   File: uuuid.pro
#
# Author: $author$
#   Date: 3/17/2022
#
# os specific QtCreator project .pro file for framework udentity executable uuuid
########################################################################
#
# Debug: udentity/build/os/QtCreator/Debug/bin/uuuid
# Release: udentity/build/os/QtCreator/Release/bin/uuuid
# Profile: udentity/build/os/QtCreator/Profile/bin/uuuid
#
include(../../../../../build/QtCreator/udentity.pri)
include(../../../../QtCreator/udentity.pri)
include(../../udentity.pri)
include(../../../../QtCreator/app/uuuid/uuuid.pri)

TARGET = $${uuuid_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${uuuid_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${uuuid_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${uuuid_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${uuuid_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${uuuid_HEADERS} \
$${uuuid_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${uuuid_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${uuuid_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${uuuid_LIBS} \
$${FRAMEWORKS} \

########################################################################

