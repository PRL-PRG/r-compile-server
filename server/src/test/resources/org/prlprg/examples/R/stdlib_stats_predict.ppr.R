#? stdlib
`predict.ppr` <- function (object, newdata, ...) 
{
    if (missing(newdata)) 
        return(fitted(object))
    if (!is.null(object$terms)) {
        newdata <- as.data.frame(newdata)
        rn <- row.names(newdata)
        Terms <- delete.response(object$terms)
        m <- model.frame(Terms, newdata, na.action = na.omit, 
            xlev = object$xlevels)
        if (!is.null(cl <- attr(Terms, "dataClasses"))) 
            .checkMFClasses(cl, m)
        keep <- match(row.names(m), rn)
        x <- model.matrix(Terms, m, contrasts.arg = object$contrasts)
    }
    else {
        x <- as.matrix(newdata)
        keep <- seq_len(nrow(x))
        rn <- dimnames(x)[[1L]]
    }
    if (ncol(x) != object$p) 
        stop("wrong number of columns in 'x'")
    res <- matrix(NA, length(keep), object$q, dimnames = list(rn, 
        object$ynames))
    res[keep, ] <- matrix(.Fortran(C_pppred, as.integer(nrow(x)), 
        as.double(x), as.double(object$smod), y = double(nrow(x) * 
            object$q), double(2 * object$smod[4L]))$y, ncol = object$q)
    drop(res)
}
