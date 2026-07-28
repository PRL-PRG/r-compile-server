#? stdlib
`predict.princomp` <- function (object, newdata, ...) 
{
    if (missing(newdata)) 
        return(object$scores)
    if (length(dim(newdata)) != 2L) 
        stop("'newdata' must be a matrix or data frame")
    p <- NCOL(object$loadings)
    nm <- rownames(object$loadings)
    if (!is.null(nm)) {
        if (!all(nm %in% colnames(newdata))) 
            stop("'newdata' does not have named columns matching one or more of the original columns")
        newdata <- newdata[, nm]
    }
    else {
        if (NCOL(newdata) != p) 
            stop("'newdata' does not have the correct number of columns")
    }
    scale(newdata, object$center, object$scale) %*% object$loadings
}
