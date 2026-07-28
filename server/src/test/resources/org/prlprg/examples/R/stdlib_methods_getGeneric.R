#? stdlib
`getGeneric` <- function (f, mustFind = FALSE, where, package = "") 
{
    if (is.function(f)) {
        if (is(f, "genericFunction")) 
            return(f)
        else if (is.primitive(f)) 
            return(genericForBasic(.primname(f), mustFind = mustFind))
        else stop("argument 'f' must be a string, generic function, or primitive: got an ordinary function")
    }
    value <- if (missing(where)) 
        .getGeneric(f, , package)
    else .getGeneric(f, where, package)
    if (is.null(value) && !is.null(baseDef <- baseenv()[[f]])) {
        if (is.function(baseDef)) {
            value <- genericForBasic(f, mustFind = FALSE)
            if (is(value, "genericFunction")) 
                value <- .cacheGeneric(f, value)
        }
    }
    if (is.function(value)) 
        value
    else {
        if (nzchar(package) && is.na(match(package, c("methods", 
            "base")))) {
            value <- tryCatch({
                ev <- getNamespace(package)
                .getGeneric(f, ev, package)
            }, error = function(e) NULL)
        }
        if (is.function(value)) 
            value
        else if (mustFind) 
            stop(gettextf("no generic function found for %s", 
                sQuote(f)), domain = NA)
        else NULL
    }
}
