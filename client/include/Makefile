# Saner makefile
MAKEFLAGS += --no-builtin-rules

BASE_DIR = $(realpath $(dir $(abspath $(lastword $(MAKEFILE_LIST))))/../..)
R_HOME ?= $(BASE_DIR)/external/R
GCH := Rsh.h.gch

build:
	gcc \
	-DNDEBUG \
	-I. \
	-I$(R_HOME)/include \
	-I/usr/local/include \
	-fpic \
	-fno-plt \
	-fexceptions \
	-fstack-clash-protection \
	-fcf-protection \
	-flto=auto \
	-ffat-lto-objects \
	-pedantic \
	-Wformat \
	-Werror=format-security \
	-Wno-comment \
	-Wall \
	-g \
	-fdiagnostics-color=always \
	-x c-header \
	-c Rsh.h \
	-o $(GCH)

clean:
	rm -f $(GCH)
