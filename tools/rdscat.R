#!/usr/bin/env Rscript

options(error=function() traceback(3))

indent_str <- function(indent) paste0(rep('  ', indent), collapse="")

out <- function(s, indent) {
  i <- indent_str(indent)
  s <- gsub("\n", paste0("\n", i), s)
  s <- paste0(i, s)
  cat(s, '\n')
}

inspect_attributes <- function(v, indent) {
  as <- attributes(v)
  if (is.null(as)) {
    return()
  }

  out("attributes:", indent)
  inspect_list_like(as, indent + 1)
}

inspect.default <- function(v, indent=0) {
  s <- paste0("<", typeof(v), "> ", paste0(format(v), collapse=" "))
  out(s, indent)
  inspect_attributes(v, indent)
}

inspect.environment <- function(v, indent=0) {
  env_name <- environmentName(v)

  if (nchar(env_name) > 0) {
    out(paste0("<environment namespace:", env_name, ">"), indent)
    return();
  }

  out("<environment>", indent)
  inspect_list_like(as.list(v), indent)
  inspect_attributes(v, indent)
}

inspect.list <- function(x, indent=0) {
  out("<list>", indent)
  inspect_list_like(x, indent)
  inspect_attributes(v, indent)
}

inspect_list_like <- function(x, indent) {
  seq <- names(x)
  if (is.null(seq)) {
    seq <- seq_along(x)
  }

  for (i in seq) {
    out(paste0(i, ":"), indent)
    inspect(x[[i]], indent + 1)
  }
}

inspect.bytecode <- function(x, indent=0) {
  capture.output(d <- compiler::disassemble(x))
  ops <- d[[2]]
  consts <- d[[3]]


  out("<bytecode>", indent)
  indent <- indent + 1
  out("ops", indent)
  for (i in seq_along(ops)) {
    out(ops[[i]], indent + 1)
  }

  out("constant pool", indent)
  for (i in seq_along(consts)) {
    inspect(consts[[i]], indent + 1)
  }
}

inspect <- function(v, ...) {
  UseMethod("inspect")
}

filename <- commandArgs(trailingOnly=T)
v <- readRDS(filename)
invisible(inspect(v))
