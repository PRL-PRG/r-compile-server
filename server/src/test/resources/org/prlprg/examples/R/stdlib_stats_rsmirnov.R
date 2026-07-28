#? stdlib
`rsmirnov` <- function (n, sizes, z = NULL, alternative = c("two.sided", "less", 
    "greater")) 
{
    alternative <- match.arg(alternative)
    if (!length(n) || n == 0L) 
        return(numeric(0L))
    if (n < 0) 
        stop("invalid arguments")
    n <- floor(n)
    if (length(sizes) != 2L) 
        stop("argument 'sizes' must be a vector of length 2")
    n.x <- sizes[1L]
    n.y <- sizes[2L]
    if (n.x < 1) 
        stop("not enough 'x' data")
    if (n.y < 1) 
        stop("not enough 'y' data")
    n.x <- floor(n.x)
    n.y <- floor(n.y)
    rt <- if (is.null(z)) 
        rep.int(1L, n.x + n.y)
    else table(z)
    two.sided <- (alternative == "two.sided")
    sizes <- if (alternative == "less") 
        c(n.y, n.x)
    else c(n.x, n.y)
    .Call(C_Smirnov_sim, as.integer(rt), as.integer(sizes), as.integer(n), 
        as.integer(two.sided))
}
