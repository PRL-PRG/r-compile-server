#? stdlib
`computeRestarts` <- function (cond = NULL) 
{
    val <- NULL
    i <- 1L
    repeat {
        r <- .Internal(.getRestart(i))
        if (is.null(r)) 
            return(val)
        else if (is.null(cond) || is.null(r$test) || r$test(cond)) 
            val <- c(val, list(r))
        i <- i + 1L
    }
}
