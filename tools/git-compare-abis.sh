#!/bin/bash
#
# checks if Wireshark's ABI has been changes since last release (tag)
#
# Copyright 2011 Balint Reczey <balint@balintreczey.hu>
#
# Wireshark - Network traffic analyzer
# By Gerald Combs <gerald@wireshark.org>
# Copyright 1998 Gerald Combs
#
# SPDX-License-Identifier: GPL-2.0-or-later

# check if Wireshark's ABI has been changes since last release (tag)
set -e

CORE_COUNT=4
if [ -r /proc/cpuinfo ] ; then
	CORE_COUNT=`grep -c ^processor /proc/cpuinfo`
elif sysctl hw.ncpu > /dev/null 2>&1 ; then
        CORE_COUNT=`sysctl -n hw.ncpu`
fi

BUILD_COMMAND="$1"

if [ -z "$BUILD_COMMAND" ]; then
	BUILD_COMMAND="./autogen.sh && ./configure && make -j$CORE_COUNT && make dumpabi"
	echo "No build command provided. Using"
	echo "    $BUILD_COMMAND"
fi

# build current version
bash -c "$BUILD_COMMAND"

cd `git rev-parse --show-toplevel`
# we are at top level

# e.g. "v1.10.6-rc1"
LAST_TAG=`git describe --tags --abbrev=0`
# Add extra directory levels to keep '-I../..' + '#include "../some_file.h"
# from matching top-level files.
LAST_TAG_DIR="compare-abis/build/$LAST_TAG"

rm -rf compare-abis
mkdir -p $LAST_TAG_DIR
git archive $LAST_TAG | tar -x -C $LAST_TAG_DIR

# build latest tag
(cd $LAST_TAG_DIR && bash -c "$BUILD_COMMAND")

exec tools/compare-abis.sh `pwd`/$LAST_TAG_DIR `pwd`
