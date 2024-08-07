## Verify that the builtin compilation and our bytecode compilation
## produce the same results when loading a library

dyn.load(file.path(R.home(), "library", "rsh", "libs", "rsh.so"), local = FALSE)

## the package to test
pkg_name = "lattice"
pkg_path = file.path(R.home(), "src", "library", "Recommended", paste(pkg_name, "tgz", sep="."))

library("withr")
library("diffobj")
## install.packages("diffmatchpatch")
## library("diffmatchpatch")

## load symbols from locally compiled (RBC) namespace
local_ns_symbols <- local ({
  install_dir <- local_tempdir()

  Sys.setenv(R_PROFILE = file.path(getwd(), "tests", "profiles", "local.R"))
  install.packages(pkg_path, lib=install_dir, repos=NULL, type="source")
  unloadNamespace(pkg_name)
  ns <- loadNamespace(pkg_name, lib.loc=install_dir)

  as.list(ns)
})

## load symbols from remotely compiled namespace
remote_ns_symbols <- local ({
  install_dir <- local_tempdir()

  Sys.setenv(R_PROFILE = file.path(getwd(), "tests", "profiles", "remote.R"))
  install.packages(pkg_path, lib=install_dir, repos=NULL, type="source")
  unloadNamespace(pkg_name)
  ns <- loadNamespace(pkg_name, lib.loc=install_dir)

  as.list(ns)
})

for (i in 1:length(local_ns_symbols)) {
  local <- local_ns_symbols[[i]]
  remote <- remote_ns_symbols[[i]]

  if (is.function(local) & is.function(remote)) {
    local_str <- capture.output(str(compiler::disassemble(local)))
    remote_str <- capture.output(str(compiler::disassemble(remote)))
  } else {
    local_str <- capture.output(str(local))
    remote_str <- capture.output(str(remote))
  }

  if (!identical(local_str, remote_str)) {
    write(paste("ERROR: local/remote mismatch for ", names(local_ns_symbols)[i], " [", i, "]", sep=""), stderr())
    print(diffChr(local_str, remote_str, mode="sidebyside"))
  } else {
    write(paste("local/remote are identical for ", names(local_ns_symbols)[i], " [", i, "]", sep=""), stdout())
  }

  write("\n")
}

