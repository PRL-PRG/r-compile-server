.onLoad <- function(libname, pkgname) {
  cat(format(Sys.time()), Sys.getpid(), paste(commandArgs(), collapse = " "), "\n",
      file = file.path(libname, "rsh-probe-loaded"), append = TRUE)
  stop("rsh probe: this run loaded rsh; install the commit's real rsh into ", libname)
}
