#? stdlib
`mget` <- function (x, envir = as.environment(-1L), mode = "any", ifnotfound, 
    inherits = FALSE) 
.Internal(mget(x, envir, mode, if (missing(ifnotfound)) list(function(x) stop(gettextf("value for %s not found", 
    sQuote(x)), call. = FALSE)) else ifnotfound, inherits))
