#? stdlib
`gc` <- function (verbose = getOption("verbose"), reset = FALSE, full = TRUE) 
{
    res <- .Internal(gc(verbose, reset, full))
    res <- matrix(res, 2L, 7L, dimnames = list(c("Ncells", "Vcells"), 
        c("used", "(Mb)", "gc trigger", "(Mb)", "limit (Mb)", 
            "max used", "(Mb)")))
    if (all(is.na(res[, 5L]))) 
        res[, -5L]
    else res
}

# Examples\donttest{
gc() #- do it now
gcinfo(TRUE) #-- in the future, show when R does it
##            vvvvv use larger to *show* something
x <- integer(100000); for(i in 1:18) x <- c(x, i)
gcinfo(verbose = FALSE) #-- don't show it anymore

gc(TRUE)

gc(reset = TRUE)
}
