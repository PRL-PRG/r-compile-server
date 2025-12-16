#? stdlib
`str.data.frame` <- function (object, ...) 
{
    if (!is.data.frame(object)) {
        warning("str.data.frame() called with non-data.frame -- coercing to one.")
        object <- data.frame(object)
    }
    cl <- oldClass(object)
    cl <- cl[cl != "data.frame"]
    if (0 < length(cl)) 
        cat("Classes", paste(sQuote(cl), collapse = ", "), "and ")
    cat("'data.frame':\t", nrow(object), " obs. of  ", (p <- length(object)), 
        " variable", if (p != 1) 
            "s", if (p > 0) 
            ":", "\n", sep = "")
    if (length(l <- list(...)) && any("give.length" == names(l))) 
        invisible(NextMethod("str", ...))
    else invisible(NextMethod("str", give.length = structure(FALSE, 
        from = "data.frame"), ...))
}
