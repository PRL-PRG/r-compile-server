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

# Examples\dontdiff{
## whether HOST is set will be shell-dependent e.g. Solaris' csh did not.
Sys.getenv(c("R_HOME", "R_PAPERSIZE", "R_PRINTCMD", "HOST"))

s <- Sys.getenv() # *all* environment variables
op <- options(width=111) # (nice printing)
names(s)    # all settings (the values could be very long)
head(s, 12) # using the Dlist print() method

## Language and Locale settings -- but rather use Sys.getlocale()
s[grep("^L(C|ANG)", names(s))]
## typically R-related:
s[grep("^_?R_", names(s))]
options(op)# reset
}
