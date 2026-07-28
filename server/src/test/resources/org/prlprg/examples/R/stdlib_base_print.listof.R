#? stdlib
`print.listof` <- function (x, nl = TRUE, ...) 
{
    nn <- names(x)
    ll <- length(x)
    if (length(nn) != ll) 
        nn <- paste("Component", seq.int(ll))
    for (i in seq_len(ll)) {
        cat(nn[i], if (nl) 
            ":\n"
        else ": ")
        print(x[[i]], ...)
        if (nl) 
            cat("\n")
    }
    invisible(x)
}
