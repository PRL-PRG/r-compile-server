BEAR := $(shell command -v bear 2> /dev/null)

ifdef BEAR
		BEAR := $(BEAR)
endif

.PHONY: all build check document test install

all: document build check

build:
	$(BEAR) -- R CMD build .

clean:
	-rm -f rsh*tar.gz
	-rm -fr rsh.Rcheck
	-rm -rf src/*.o src/*.so

document:
	R -e 'devtools::document()'

install: clean
	R CMD INSTALL .
