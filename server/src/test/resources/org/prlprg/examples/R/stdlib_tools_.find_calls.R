#? stdlib
`.find_calls` <- function (x, predicate = NULL, recursive = FALSE) 
{
    calls <- list()
    if (!is.recursive(x) || isS4(x)) 
        return(calls)
    x <- if (is.call(x)) 
        list(x)
    else {
        if (is.object(x)) 
            class(x) <- NULL
        as.list(x)
    }
    f <- if (is.null(predicate)) 
        function(e) is.call(e)
    else function(e) is.call(e) && any(predicate(e))
    if (!recursive) 
        return(Filter(f, x))
    gatherer <- function(e) {
        if (f(e)) 
            calls <<- c(calls, list(e))
        if (is.recursive(e) && !is.environment(e) && !isS4(e)) {
            if (is.object(e)) 
                class(e) <- NULL
            e <- as.list(e)
            for (i in seq_along(e)) gatherer(e[[i]])
        }
    }
    gatherer(x)
    calls
}
