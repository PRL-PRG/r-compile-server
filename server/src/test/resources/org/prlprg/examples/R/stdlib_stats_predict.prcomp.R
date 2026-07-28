#? stdlib
`predict.prcomp` <- function (object, newdata, ...) 
{
    chkDots(...)
    if (missing(newdata)) {
        if (!is.null(object$x)) 
            return(object$x)
        else stop("no scores are available: refit with 'retx=TRUE'")
    }
    if (length(dim(newdata)) != 2L) 
        stop("'newdata' must be a matrix or data frame")
    nm <- rownames(object$rotation)
    if (!is.null(nm)) {
        if (!all(nm %in% colnames(newdata))) 
            stop("'newdata' does not have named columns matching one or more of the original columns")
        newdata <- newdata[, nm, drop = FALSE]
    }
    else {
        if (NCOL(newdata) != NROW(object$rotation)) 
            stop("'newdata' does not have the correct number of columns")
    }
    scale(newdata, object$center, object$scale) %*% object$rotation
}
