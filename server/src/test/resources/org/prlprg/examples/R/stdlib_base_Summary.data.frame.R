#? stdlib
`Summary.data.frame` <- function (..., na.rm) 
{
    args <- list(...)
    args <- lapply(args, function(x) {
        x <- as.matrix(x)
        if (!is.numeric(x) && !is.logical(x) && !is.complex(x)) 
            stop("only defined on a data frame with all numeric-alike variables")
        x
    })
    do.call(.Generic, c(args, na.rm = na.rm))
}
