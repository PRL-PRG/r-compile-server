#? stdlib
`na.exclude.default` <- function (object, ...) 
{
    if (!is.atomic(object)) 
        return(object)
    d <- dim(object)
    if (length(d) > 2L) 
        return(object)
    omit <- seq_along(object)[is.na(object)]
    if (length(omit) == 0L) 
        return(object)
    if (length(d)) {
        omit <- unique(((omit - 1)%%d[1L]) + 1L)
        nm <- rownames(object)
        object <- object[-omit, , drop = FALSE]
    }
    else {
        nm <- names(object)
        object <- object[-omit]
    }
    if (any(omit > 0L)) {
        names(omit) <- nm[omit]
        attr(omit, "class") <- "exclude"
        attr(object, "na.action") <- omit
    }
    object
}
