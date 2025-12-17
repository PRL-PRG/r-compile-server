#? stdlib
`use` <- function (package, include.only) 
invisible(library(package, lib.loc = NULL, character.only = TRUE, 
    logical.return = TRUE, include.only = include.only, attach.required = FALSE))
