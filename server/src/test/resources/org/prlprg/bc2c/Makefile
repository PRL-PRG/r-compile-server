RSH_HOME := /home/krikava/r-compile-server/code
R_HOME := $(RSH_HOME)/external/R
R := $(R_HOME)/bin/R
CC := gcc
CFLAGS := -I$(RSH_HOME)/server/backend \
		  -I$(R_HOME)/include \
		  -fpic \
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
		  -shared \
          -DRSH_TESTS

all: run

compile:
	$(CC) $(CFLAGS) -DNDEBUG -g -O3 -o f.so f.c

compile-release-debug:
	$(CC) $(CFLAGS) -DDEBUG -g3 -ggdb -O3 -o f.so f.c

compile-debug:
	$(CC) $(CFLAGS) -DDEBUG -g3 -ggdb -O0 -o f.so f.c

run: compile
	$(R) -f driver.R

run-debug: compile-debug
	$(R) -f driver.R

gdb-release: compile-release-debug
	$(R) -d gdb -f driver.R

gdb-debug: compile-debug
	$(R) -d gdb -f driver.R

rr-release: compile-release-debug
	$(R) -d rr -f driver.R

rr-debug: compile-debug
	$(R) -d rr -f driver.R
