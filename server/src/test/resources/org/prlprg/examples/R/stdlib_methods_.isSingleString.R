#? stdlib
`.isSingleString` <- function (what) 
is.character(what) && isTRUE(nzchar(what))
