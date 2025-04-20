CC = gcc-14

# Default target
all: build

compile_stencils:
	@echo "Building stencils..."
	@mkdir -p build
	@$(CC) stencils/stencils.c -o build/stencils.o -c -ffunction-sections -fno-stack-protector -fcf-protection=none -fno-asynchronous-unwind-tables -Os -fno-pic -mcmodel=medium -fno-merge-constants -fno-jump-tables -I../external/R/include  -I../external/r-compile-server/client/rsh/src/bc2c

build_extractor:
	@echo "Building extractor..."
	@mkdir -p build
	@$(CC) extractor/extract_stencils.c -o build/extract_stencils -lbfd -Og -g -fsanitize=address -march=native

extract_stencils: compile_stencils build_extractor
	@echo "Extracting stencils..."
	@cd build && mkdir -p extracted && cd extracted && ../extract_stencils ../stencils.o

build_package: extract_stencils
	@echo "Building package..."
	@rm -f r-pkg/src/stencils
	@ln -sfn ../../build/extracted r-pkg/src/stencils
	@cd build && ../../external/R/bin/R CMD build ../r-pkg
	@cd build && sudo ../../external/R/bin/R CMD INSTALL rcp_0.0.0.9000.tar.gz


# Target to run all executables in sequence
build: build_package

# Clean target (optional, if needed)
clean:
	@echo "Cleaning up..."
	@rm -f r-pkg/src/stencils
	@rm -fr build
