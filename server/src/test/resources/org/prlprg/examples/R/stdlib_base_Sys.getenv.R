#? stdlib
`Sys.getenv` <- function (x = NULL, unset = "", names = NA) 
{
    if (is.null(x)) {
        x <- .Internal(Sys.getenv(character(), ""))
        m <- regexpr("=", x, fixed = TRUE)
        n <- substring(x, 1L, m - 1L)
        v <- substring(x, m + 1L)
        if (isFALSE(names)) 
            v[sort.list(n)]
        else {
            v <- structure(v, names = n)
            structure(class = "Dlist", v[sort.list(n)])
        }
    }
    else {
        v <- .Internal(Sys.getenv(as.character(x), as.character(unset)))
        if (isTRUE(names) || (length(x) > 1L && !isFALSE(names))) 
            structure(v, names = x)
        else v
    }
}
