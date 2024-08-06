#!/bin/sh

export CXXFLAGS="-O0 -ggdb3"
export CPPFLAGS="-O0 -ggdb3"
export CFLAGS="-O0 -ggdb3"

./configure &&
	make clean &&
	bear -- make
