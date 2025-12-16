#? stdlib
`.ErrorReplace` <- function (from, to, value) 
stop(gettextf("no 'replace' method was defined for 'as(x, \"%s\") <- value' for class %s", 
    to, dQuote(class(from))), domain = NA)
