all: test

test:
	gcc \
		-DNDEBUG \
		-I. \
		-Iinclude \
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
		-pedantic \
		-g \
		-O3 \
		-S \
		test.c
	gcc \
		-DNDEBUG \
		-I. \
		-Iinclude \
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
		-pedantic \
		-g \
		-shared \
		-O3 \
		test.c \
		-o \
		test.so
	../../resources/R-4.3.2/bin/R -f driver.R
