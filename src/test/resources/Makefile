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
          -shared

all: test

compile-release:
	$(CC) $(CFLAGS) -O3 -o f.so f.c

compile-release-debug:
	$(CC) $(CFLAGS) -g3 -ggdb -O3 -o f.so f.c

compile-debug:
	$(CC) $(CFLAGS) -g3 -ggdb -O0 -o f.so f.c

test: compile-release
	$(R) -f driver.R

release-debug: compile-release-debug
	$(R) -d gdb -f driver.R

debug: compile-debug
	$(R) -d gdb -f driver.R
