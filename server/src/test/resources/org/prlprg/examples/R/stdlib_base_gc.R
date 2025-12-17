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
