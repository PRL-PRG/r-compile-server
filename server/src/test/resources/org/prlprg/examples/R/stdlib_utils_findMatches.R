#? stdlib
`findMatches` <- function (pattern, values, fuzzy, backtick) 
{
    if (missing(fuzzy)) 
        fuzzy <- isTRUE(.CompletionEnv$settings[["fuzzy"]])
    if (missing(backtick)) 
        backtick <- isTRUE(.CompletionEnv$settings[["backtick"]])
    comps <- if (fuzzy) 
        findFuzzyMatches(pattern, values)
    else findExactMatches(pattern, values)
    if (backtick && length(comps) && all(nzchar(comps))) 
        comps <- vapply(comps, FUN = function(comp) deparse1(as.name(comp), 
            backtick = TRUE), FUN.VALUE = "")
    comps
}
