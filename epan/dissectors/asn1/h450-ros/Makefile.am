# Wireshark - Network traffic analyzer
# By Gerald Combs <gerald@wireshark.org>
# Copyright 1998 Gerald Combs
#
# SPDX-License-Identifier: GPL-2.0-or-later

include ../Makefile.inc

PROTOCOL_NAME = h450-ros

# The file needs to use h450 for the filter elements etc
PROTO_OPT = -p h450.ros

EXPORT_FILES = \
	$(PROTOCOL_NAME)-exp.cnf

EXT_ASN_FILE_LIST = ../ros/Remote-Operations-Information-Objects.asn

ASN_FILE_LIST = Remote-Operations-Apdus.asn

# The packet-$(PROTOCOL_NAME)-template.h and $(PROTOCOL_NAME).asn
# files do not exist for all protocols: Please add/remove as required.
EXTRA_DIST = \
	$(EXTRA_DIST_COMMON) \
	$(ASN_FILE_LIST) \
	packet-$(PROTOCOL_NAME)-template.c \
	packet-$(PROTOCOL_NAME)-template.h \
	$(PROTOCOL_NAME).cnf

SRC_FILES = \
	$(EXTRA_DIST) \
	$(EXT_ASN_FILE_LIST)

A2W_FLAGS=

EXTRA_CNF = \
	$(builddir)/../ros/ros-inv.cnf \
	$(builddir)/../ros/ros-res.cnf \
	$(builddir)/../ros/ros-err.cnf \
	$(builddir)/../ros/ros-rej.cnf
