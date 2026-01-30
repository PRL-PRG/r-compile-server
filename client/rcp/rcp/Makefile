include common.mk

all: install

install:
	$(R) CMD INSTALL .

clean:
	$(MAKE) -C src -f Makevars clean

compile_commands.json:
	bear -- $(MAKE) clean install
