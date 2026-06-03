#? stdlib
`loadedPackageCompletions` <- function (text, add = rc.getOption("package.suffix")) 
{
    if (.CompletionEnv$settings[["ns"]]) {
        s <- loadedNamespaces()
        comps <- findExactMatches(sprintf("^%s", makeRegexpSafe(text)), 
            s)
        if (length(comps) && !is.null(add)) 
            sprintf("%s%s", comps, add)
        else comps
    }
    else character()
}
