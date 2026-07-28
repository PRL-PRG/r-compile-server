#? stdlib
`attachedPackageCompletions` <- function (text, add = rc.getOption("package.suffix")) 
{
    if (.CompletionEnv$settings[["ns"]]) {
        s <- grep("^package", search(), value = TRUE)
        comps <- findExactMatches(sprintf("^%s", makeRegexpSafe(text)), 
            substr(s, 9L, 1000000L))
        if (length(comps) && !is.null(add)) 
            sprintf("%s%s", comps, add)
        else comps
    }
    else character()
}
