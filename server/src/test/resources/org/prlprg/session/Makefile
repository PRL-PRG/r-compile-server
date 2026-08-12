R_HOME := ../../../../../../../R

# `-undefined dynamic_lookup` because this is loaded into R, which supplies `Rf_error`, `TYPEOF`
# and friends: macOS's linker errors on undefined symbols by default, where ELF ld does not.
LDFLAGS := $(if $(findstring Darwin,$(shell uname -s)),-undefined dynamic_lookup,)

all: export-funtab.so
	$(R_HOME)/bin/R -f bootstrap.R

# Only regenerate `R_FunTab.txt`, which has to track whatever `R_FunTab` the vendored R was
# *built* with -- the generated C calls builtins by their index into it.
.PHONY: funtab
funtab: export-funtab.so
	$(R_HOME)/bin/R --slave --vanilla -e 'dyn.load("export-funtab.so"); .Call("export_funtab", "../../../../../main/resources/org/prlprg/session/R_FunTab.txt")'

export-funtab.so: export-funtab.c
	gcc -I$(R_HOME)/include -fPIC -shared $(LDFLAGS) export-funtab.c -o export-funtab.so
