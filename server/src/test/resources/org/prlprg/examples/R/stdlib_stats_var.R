#? stdlib
`var` <- function (x, y = NULL, na.rm = FALSE, use) 
{
    if (missing(use)) 
        use <- if (na.rm) 
            "na.or.complete"
        else "everything"
    na.method <- pmatch(use, c("all.obs", "complete.obs", "pairwise.complete.obs", 
        "everything", "na.or.complete"))
    if (is.na(na.method)) 
        stop("invalid 'use' argument")
    if (is.data.frame(x)) 
        x <- as.matrix(x)
    else if (!is.null(x)) 
        stopifnot(is.atomic(x))
    if (is.data.frame(y)) 
        y <- as.matrix(y)
    else if (!is.null(y)) 
        stopifnot(is.atomic(y))
    .Call(C_cov, x, y, na.method, FALSE)
}
