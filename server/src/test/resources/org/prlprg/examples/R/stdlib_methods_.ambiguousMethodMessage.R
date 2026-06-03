#? stdlib
`.ambiguousMethodMessage` <- function (cond) 
{
    selected <- attr(cond, "selected")
    if (is.null(selected)) {
        message(cond$message)
    }
    else {
        possible <- attr(cond, "candidates")
        message(gettextf("Note: method with signature %s chosen for function %s,\n target signature %s.\n %s would also be valid", 
            sQuote(selected), sQuote(attr(cond, "generic")), 
            sQuote(attr(cond, "target")), paste0("\"", possible[is.na(match(possible, 
                selected))], "\"", collapse = ", ")), domain = NA)
    }
}
