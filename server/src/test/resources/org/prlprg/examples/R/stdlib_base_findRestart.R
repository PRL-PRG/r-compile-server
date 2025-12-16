#? stdlib
`findRestart` <- function (name, cond = NULL) 
{
    i <- 1L
    repeat {
        r <- .Internal(.getRestart(i))
        if (is.null(r)) 
            return(NULL)
        else if (name == r[[1L]] && (is.null(cond) || is.null(r$test) || 
            r$test(cond))) 
            return(r)
        else i <- i + 1L
    }
}
