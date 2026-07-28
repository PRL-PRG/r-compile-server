#? stdlib
`summary.tukeysmooth` <- function (object, ...) 
{
    cat(attr(object, "kind"), "Tukey smoother resulting from\n", 
        deparse(attr(object, "call")), ";  n =", length(object), 
        "\n")
    if (attr(object, "twiced")) 
        cat(" __twiced__ ")
    if (!is.null(it <- attr(object, "iter"))) 
        cat(" used", it, "iterations\n")
    if (!is.null(ch <- attr(object, "changed"))) 
        cat(if (!ch) 
            " NOT", "changed\n")
    if (length(oldClass(object)) > 1L) 
        NextMethod()
    else {
        y <- object
        attributes(y) <- NULL
        summary(y, ...)
    }
}
