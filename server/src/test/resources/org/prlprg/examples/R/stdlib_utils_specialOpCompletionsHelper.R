#? stdlib
`specialOpCompletionsHelper` <- function (op, suffix, prefix) 
{
    tryToEval <- function(s) {
        tryCatch(eval(str2expression(s), envir = .GlobalEnv), 
            error = function(e) e)
    }
    switch(op, `$` = {
        if (.CompletionEnv$settings[["ops"]]) {
            object <- tryToEval(prefix)
            if (inherits(object, "error")) suffix else {
                .DollarNames(object, pattern = sprintf("^%s", 
                  makeRegexpSafe(suffix)))
            }
        } else suffix
    }, `@` = {
        if (.CompletionEnv$settings[["ops"]]) {
            object <- tryToEval(prefix)
            if (inherits(object, "error")) suffix else {
                .AtNames(object, pattern = sprintf("^%s", makeRegexpSafe(suffix)))
            }
        } else suffix
    }, `::` = {
        if (.CompletionEnv$settings[["ns"]]) {
            nse <- tryCatch(unique(c(getNamespaceExports(prefix), 
                if (prefix != "base") names(getNamespaceInfo(prefix, 
                  "lazydata")))), error = identity)
            if (inherits(nse, "error")) suffix else {
                findMatches(sprintf("^%s", makeRegexpSafe(suffix)), 
                  nse)
            }
        } else suffix
    }, `:::` = {
        if (.CompletionEnv$settings[["ns"]]) {
            ns <- tryCatch(getNamespace(prefix), error = function(e) e)
            if (inherits(ns, "error")) suffix else {
                if (!.CompletionEnv$settings[["fuzzy"]]) ls(ns, 
                  all.names = TRUE, pattern = sprintf("^%s", 
                    makeRegexpSafe(suffix))) else findMatches(sprintf("^%s", 
                  makeRegexpSafe(suffix)), ls(ns, all.names = TRUE))
            }
        } else suffix
    }, `[` = , `[[` = {
        comps <- normalCompletions(suffix)
        if (length(comps)) comps else suffix
    })
}
