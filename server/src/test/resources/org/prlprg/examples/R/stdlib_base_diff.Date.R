#? stdlib
`diff.Date` <- function (x, lag = 1L, differences = 1L, ...) 
{
    ismat <- is.matrix(x)
    xlen <- if (ismat) 
        dim(x)[1L]
    else length(x)
    if (length(lag) != 1L || length(differences) > 1L || lag < 
        1L || differences < 1L) 
        stop("'lag' and 'differences' must be integers >= 1")
    if (lag * differences >= xlen) 
        return(.difftime(numeric(), units = "days"))
    r <- x
    i1 <- -seq_len(lag)
    if (ismat) 
        for (i in seq_len(differences)) r <- r[i1, , drop = FALSE] - 
            r[-nrow(r):-(nrow(r) - lag + 1L), , drop = FALSE]
    else for (i in seq_len(differences)) r <- r[i1] - r[-length(r):-(length(r) - 
        lag + 1L)]
    dots <- list(...)
    if ("units" %in% names(dots) && dots$units != "auto") 
        units(r) <- match.arg(dots$units, choices = setdiff(eval(formals(difftime)$units), 
            "auto"))
    r
}
