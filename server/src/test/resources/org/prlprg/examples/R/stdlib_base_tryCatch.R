#? stdlib
`tryCatch` <- function (expr, ..., finally) 
{
    tryCatchList <- function(expr, names, parentenv, handlers) {
        nh <- length(names)
        if (nh > 1L) 
            tryCatchOne(tryCatchList(expr, names[-nh], parentenv, 
                handlers[-nh]), names[nh], parentenv, handlers[[nh]])
        else if (nh == 1L) 
            tryCatchOne(expr, names, parentenv, handlers[[1L]])
        else expr
    }
    tryCatchOne <- function(expr, name, parentenv, handler) {
        doTryCatch <- function(expr, name, parentenv, handler) {
            .Internal(.addCondHands(name, list(handler), parentenv, 
                environment(), FALSE))
            expr
        }
        value <- doTryCatch(return(expr), name, parentenv, handler)
        if (is.null(value[[1L]])) {
            msg <- .Internal(geterrmessage())
            call <- value[[2L]]
            cond <- simpleError(msg, call)
        }
        else if (is.character(value[[1L]])) {
            msg <- value[[1L]]
            call <- value[[2L]]
            cond <- simpleError(msg, call)
        }
        else cond <- value[[1L]]
        value[[3L]](cond)
    }
    if (!missing(finally)) 
        on.exit(finally)
    handlers <- list(...)
    classes <- names(handlers)
    parentenv <- parent.frame()
    if (length(classes) != length(handlers)) 
        stop("condition handlers must be specified with a condition class")
    tryCatchList(expr, classes, parentenv, handlers)
}
