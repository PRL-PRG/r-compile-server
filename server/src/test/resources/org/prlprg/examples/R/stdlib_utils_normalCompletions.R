#? stdlib
`normalCompletions` <- function (text, check.mode = TRUE, add.fun = rc.getOption("function.suffix")) 
{
    if (text == "") 
        character()
    else {
        comps <- if (.CompletionEnv$settings[["fuzzy"]]) 
            fuzzyApropos(sprintf("^%s", makeRegexpSafe(text)))
        else apropos(sprintf("^%s", makeRegexpSafe(text)), ignore.case = FALSE, 
            dot_internals = TRUE)
        if (.CompletionEnv$settings[["func"]] && check.mode && 
            !is.null(add.fun)) {
            which.function <- sapply(comps, function(s) exists(s, 
                mode = "function"))
            if (any(which.function)) 
                comps[which.function] <- sprintf("%s%s", comps[which.function], 
                  add.fun)
        }
        c(comps, keywordCompletions(text), loadedPackageCompletions(text))
    }
}
