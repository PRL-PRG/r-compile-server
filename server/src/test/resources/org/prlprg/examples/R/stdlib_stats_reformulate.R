#? stdlib
`reformulate` <- function (termlabels, response = NULL, intercept = TRUE, env = parent.frame()) 
{
    if (!is.character(termlabels) || !length(termlabels)) 
        stop("'termlabels' must be a character vector of length at least one")
    termtext <- paste(termlabels, collapse = "+")
    if (!intercept) 
        termtext <- paste(termtext, "- 1")
    terms <- str2lang(termtext)
    fexpr <- if (is.null(response)) 
        call("~", terms)
    else call("~", if (is.character(response)) {
        if (length(response) != 1) stop(gettextf("'%s' must be a character string", 
            "response"), domain = NA)
        tryCatch(str2lang(response), error = function(e) {
            sc <- sys.calls()
            sc1 <- lapply(sc, `[[`, 1L)
            isF <- function(cl) is.symbol(cl) && cl == quote(reformulate)
            reformCall <- sc[[match(TRUE, vapply(sc1, isF, NA))]]
            warning(warningCondition(message = paste(sprintf("Unparseable 'response' \"%s\"; use is deprecated.  Use as.name(.) or `..`!", 
                response), conditionMessage(e), sep = "\n"), 
                class = c("reformulate", "deprecatedWarning"), 
                call = reformCall))
            as.symbol(response)
        })
    } else response, terms)
    formula(fexpr, env)
}
