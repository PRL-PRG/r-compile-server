#? stdlib
`[.terms` <- function (termobj, i) 
{
    resp <- if (attr(termobj, "response")) 
        termobj[[2L]]
    newformula <- attr(termobj, "term.labels")[i]
    if (!is.null(off <- attr(termobj, "offset"))) 
        newformula <- c(newformula, as.character(attr(termobj, 
            "variables")[off + 1L]))
    if (length(newformula) == 0L) 
        newformula <- "1"
    newformula <- reformulate(newformula, resp, attr(termobj, 
        "intercept"), environment(termobj))
    result <- terms(newformula, specials = names(attr(termobj, 
        "specials")))
    addindex <- function(index, offset) ifelse(index < 0, index - 
        offset, ifelse(index == 0, 0, index + offset))
    if (is.logical(i)) 
        i <- which(rep_len(i, length.out = length(attr(termobj, 
            "term.labels"))))
    response <- attr(termobj, "response")
    if (response) 
        iOpt <- c(if (max(i) > 0) response, addindex(i, max(response)))
    else iOpt <- i
    if (!is.null(predvars <- attr(termobj, "predvars"))) 
        attr(result, "predvars") <- predvars[c(if (max(iOpt) > 
            0) 1, addindex(iOpt, 1))]
    if (!is.null(dataClasses <- attr(termobj, "dataClasses"))) 
        attr(result, "dataClasses") <- dataClasses[iOpt]
    result
}
