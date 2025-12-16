#? stdlib
`newBasic` <- function (Class, ...) 
{
    msg <- NULL
    value <- switch(Class, `NULL` = return(NULL), logical = , 
        numeric = , character = , complex = , double = , integer = , 
        raw = , list = as.vector(c(...), Class), expression = eval(substitute(expression(...))), 
        externalptr = {
            if (nargs() > 1) stop("'externalptr' objects cannot be initialized from new()")
            .newExternalptr()
        }, single = as.single(c(...)), array = if (!missing(...)) array(...) else structure(numeric(), 
            dim = 0L), matrix = if (!missing(...)) matrix(...) else matrix(0, 
            0L, 0L), ts = if (!missing(...)) stats::ts(...) else structure(NA, 
            tsp = c(1, 1, 1), class = "ts"), {
            args <- list(...)
            if (length(args) == 1L && is(args[[1L]], Class)) {
                value <- as(args[[1L]], Class)
            } else if (is.na(match(Class, .BasicClasses))) msg <- paste0("Calling new() on an undefined and non-basic class (\"", 
                Class, "\")") else msg <- gettextf("initializing objects from class %s with these arguments is not supported", 
                dQuote(Class))
        })
    if (is.null(msg)) 
        value
    else stop(msg, domain = NA)
}
