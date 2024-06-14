BEAR := $(shell command -v bear 2> /dev/null)
R := LD_PRELOAD=/usr/lib/llvm-17/lib/libLLVM-17.so ../../../resources/R-4.3.2/bin/R

ifdef BEAR
		BEAR := $(BEAR)
endif

.PHONY: all build check document test install

all: document build check

build:
	$(BEAR) -- $(R) CMD build .

clean:
	-rm -f rsh*tar.gz
	-rm -fr rsh.Rcheck
	-rm -rf src/*.o src/*.so

document:
	$(R) -e 'devtools::document()'

install:
	$(R) CMD INSTALL .
