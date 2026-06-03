#? stdlib
`summary.aovlist` <- function (object, ...) 
{
    if (!is.null(attr(object, "weights"))) 
        cat("Note: The results below are on the weighted scale\n")
    dots <- list(...)
    strata <- names(object)
    if (strata[1L] == "(Intercept)") {
        strata <- strata[-1L]
        object <- object[-1L]
    }
    x <- setNames(vector(length = length(strata), mode = "list"), 
        paste("Error:", strata))
    for (i in seq_along(strata)) x[[i]] <- do.call("summary", 
        c(list(object = object[[i]]), dots))
    class(x) <- "summary.aovlist"
    x
}
