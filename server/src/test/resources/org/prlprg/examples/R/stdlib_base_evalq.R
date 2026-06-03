#? stdlib
`evalq` <- function (expr, envir = parent.frame(), enclos = if (is.list(envir) || 
    is.pairlist(envir)) parent.frame() else baseenv()) 
.Internal(eval(substitute(expr), envir, enclos))
