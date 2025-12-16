#? stdlib
`.oldReplaceFun` <- function (from, to, value) 
stop(gettextf("explicit replacement not defined for as(x, \"%s\") <- value for old-style class %s", 
    to, dQuote(class(from)[1L])), domain = NA)
