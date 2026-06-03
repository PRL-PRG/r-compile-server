#? stdlib
`model.matrix.lm` <- function (object, ...) 
{
    if (n_match <- match("x", names(object), 0L)) 
        object[[n_match]]
    else {
        data <- model.frame(object, xlev = object$xlevels, ...)
        if (exists(".GenericCallEnv", inherits = FALSE)) 
            NextMethod("model.matrix", data = data, contrasts.arg = object$contrasts)
        else {
            dots <- list(...)
            dots$data <- dots$contrasts.arg <- NULL
            do.call("model.matrix.default", c(list(object = object, 
                data = data, contrasts.arg = object$contrasts), 
                dots))
        }
    }
}
