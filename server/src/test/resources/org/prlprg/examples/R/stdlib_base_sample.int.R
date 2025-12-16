#? stdlib
`sample.int` <- function (n, size = n, replace = FALSE, prob = NULL, useHash = (n > 
    1e+07 && !replace && is.null(prob) && size <= n/2)) 
{
    stopifnot(length(n) == 1L)
    if (useHash) {
        stopifnot(is.null(prob), !replace)
        .Internal(sample2(n, size))
    }
    else .Internal(sample(n, size, replace, prob))
}
