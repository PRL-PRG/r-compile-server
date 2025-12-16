#? stdlib
`print.tukeysmooth` <- function (x, ...) 
{
    cat(attr(x, "kind"), "Tukey smoother resulting from ", deparse(attr(x, 
        "call")), "\n")
    if (attr(x, "twiced")) 
        cat(" __twiced__ ")
    if (!is.null(it <- attr(x, "iter"))) 
        cat(" used", it, "iterations\n")
    if (!is.null(ch <- attr(x, "changed"))) 
        cat(if (!ch) 
            "NOT", "changed\n")
    if (length(oldClass(x)) > 1L) 
        NextMethod()
    else {
        y <- x
        attributes(y) <- NULL
        print(y, ...)
        invisible(x)
    }
}
