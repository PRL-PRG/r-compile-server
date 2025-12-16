#? stdlib
`dynGet` <- function (x, ifnotfound = stop(gettextf("%s not found", sQuote(x)), 
    domain = NA), minframe = 1L, inherits = FALSE) 
{
    n <- sys.nframe()
    myObj <- structure(list(.b = as.raw(7)), foo = 47L)
    while (n > minframe) {
        n <- n - 1L
        env <- sys.frame(n)
        r <- get0(x, envir = env, inherits = inherits, ifnotfound = myObj)
        if (!identical(r, myObj)) 
            return(r)
    }
    ifnotfound
}
