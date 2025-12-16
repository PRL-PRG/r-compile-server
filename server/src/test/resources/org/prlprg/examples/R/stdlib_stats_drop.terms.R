#? stdlib
`drop.terms` <- function (termobj, dropx = NULL, keep.response = FALSE) 
{
    if (!length(dropx)) 
        if (keep.response) 
            termobj
        else delete.response(termobj)
    else {
        if (!inherits(termobj, "terms")) 
            stop(gettextf("'termobj' must be a object of class %s", 
                dQuote("terms")), domain = NA)
        response <- attr(termobj, "response")
        newformula <- attr(termobj, "term.labels")[-dropx]
        if (!is.null(off <- attr(termobj, "offset"))) 
            newformula <- c(newformula, as.character(attr(termobj, 
                "variables")[off + 1L]))
        newformula <- reformulate(newformula, response = if (response && 
            keep.response) 
            termobj[[2L]], intercept = attr(termobj, "intercept"), 
            env = environment(termobj))
        result <- terms(newformula, specials = names(attr(termobj, 
            "specials")))
        dropOpt <- if (response && !keep.response) 
            c(response, dropx + length(response))
        else dropx + max(response)
        if (!is.null(predvars <- attr(termobj, "predvars"))) {
            attr(result, "predvars") <- predvars[-(dropOpt + 
                1)]
        }
        if (!is.null(dataClasses <- attr(termobj, "dataClasses"))) {
            attr(result, "dataClasses") <- dataClasses[-dropOpt]
        }
        result
    }
}
