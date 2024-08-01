GCH := Rsh.h.gch

build:
	gcc \
	-DNDEBUG \
	-I. \
	-I/usr/local/include \
	-fpic \
	-fno-plt \
	-fexceptions \
	-Wformat \
	-Werror=format-security \
	-Wno-comment \
	-fstack-clash-protection \
	-fcf-protection \
	-flto=auto \
	-ffat-lto-objects \
	-Wall \
	-pedantic \
	-g \
	-fdiagnostics-color=always \
	-x c-header \
	-c Rsh.h \
	-o $(GCH)

clean:
	rm -f $(GCH)
