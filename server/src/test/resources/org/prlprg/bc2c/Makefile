RSH_HOME := /home/krikava/r-compile-server/code
R_HOME := ~/r-compile-server/resources/R-4.3.2
R := $(R_HOME)/bin/R
CC := gcc
CFLAGS := -DNDEBUG \
		-I$(RSH_HOME)/backend/include\
		-fpic \
		-march=x86-64 \
		-mtune=generic \
		-pipe \
		-fno-plt \
		-fexceptions \
		-fstack-clash-protection \
		-fcf-protection \
		-flto=auto \
		-ffat-lto-objects \
		-Wformat \
		-Werror=format-security \
		-Wall \
		-Winline \
		-Wno-unused-but-set-variable \
		-Wno-comments \
		-pedantic \
		-DRSH_TESTS \
		-shared

all: release

release:
	$(CC) $(CFLAGS) -O3 -o f.so f.c
	$(R) -f driver.R

debug-release:
	$(CC) $(CFLAGS) -g3 -ggdb -O3 -o f.so f.c
	$(R) -d gdb -f driver.R

debug:
	$(CC) $(CFLAGS) -g3 -ggdb -O0 -o f.so f.c
	$(R) -d gdb -f driver.R
