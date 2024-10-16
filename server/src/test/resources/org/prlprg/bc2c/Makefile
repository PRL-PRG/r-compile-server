RSH_HOME := /workspace
R_HOME := $(RSH_HOME)/external/R
R := $(R_HOME)/bin/R
CC := gcc
CFLAGS := -I$(RSH_HOME)/client/rsh/src/bc2c \
		-I$(R_HOME)/include \
		-fPIC \
		-fno-plt \
		-fexceptions \
		-fstack-clash-protection \
		-flto=auto \
		-ffat-lto-objects \
		-Wformat \
		-Werror=format-security \
		-Wall \
		-Winline \
		-Wno-unused-but-set-variable \
		-Wno-comments \
		-Wno-unused-function \
		-pedantic \
		-shared \
		-DRSH_TESTS \
		-DRSH_PC

DRIVER := test.R
SOURCE := test.c
SHLIB := test.so

all: run

compile:
	$(CC) $(CFLAGS) -DNDEBUG -g -O3 -o $(SHLIB) $(SOURCE)

compile-release-debug:
	$(CC) $(CFLAGS) -g3 -ggdb -O3 -o $(SHLIB) $(SOURCE)

compile-debug:
	$(CC) $(CFLAGS) -g3 -ggdb -O0 -o $(SHLIB) $(SOURCE)

run: compile
	$(R) -f $(DRIVER)

run-debug: compile-debug
	$(R) -f $(DRIVER)

gdb-release: compile-release-debug
	$(R) -d gdb -f $(DRIVER)

gdb-debug: compile-debug
	$(R) -d gdb -f $(DRIVER)

rr-release: compile-release-debug
	$(R) -d rr -f $(DRIVER)

rr-debug: compile-debug
	$(R) -d rr -f $(DRIVER)
