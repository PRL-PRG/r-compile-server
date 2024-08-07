## Verify that the builtin compilation and our bytecode compilation
## produce the same results when loading a library

dyn.load("../../../resources/R-4.3.2/library/rsh/libs/rsh.so", local = FALSE)

## the package to test
pkg_path = file.path(R.home(), "src", "library", "Recommended", "codetools.tgz")

library("withr")

## load symbols from locally compiled (RBC) namespace
local_ns_symbols <- local ({
  install_dir <- local_tempdir()

  Sys.setenv(R_PROFILE = file.path(getwd(), "tests", "profiles", "local.R"))
  install.packages(pkg_path, lib=install_dir, repos=NULL, type="source")
  unloadNamespace("codetools")
  ns <- loadNamespace("codetools", lib.loc=install_dir)

  as.list(ns)
})

## load symbols from remotely compiled namespace
remote_ns_symbols <- local ({
  install_dir <- local_tempdir()

  Sys.setenv(R_PROFILE = file.path(getwd(), "tests", "profiles", "remote.R"))
  install.packages(pkg_path, lib=install_dir, repos=NULL, type="source")
  unloadNamespace("codetools")
  ns <- loadNamespace("codetools", lib.loc=install_dir)

  as.list(ns)
})

for (i in 1:length(local_ns_symbols)) {
  local = local_ns_symbols[[i]]
  remote = remote_ns_symbols[[i]]

  print(str(compiler::disassemble(local)) == str(compiler::disassemble(remote)))
}
