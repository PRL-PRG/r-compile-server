#? stdlib
`.filled.contour` <- function (x, y, z, levels, col) 
{
    if (!is.matrix(z) || nrow(z) <= 1L || ncol(z) <= 1L) 
        stop("no proper 'z' matrix specified")
    .External.graphics(C_filledcontour, x, y, z, levels, col)
    invisible()
}
