#? stdlib
`correctFilenameToken` <- function () 
{
    linebuffer <- .CompletionEnv[["linebuffer"]]
    lbss <- head.default(unlist(strsplit(linebuffer, "")), .CompletionEnv[["end"]])
    whichDoubleQuote <- lbss == "\""
    whichSingleQuote <- lbss == "'"
    insideDoubleQuote <- (sum(whichDoubleQuote)%%2 == 1)
    insideSingleQuote <- (sum(whichSingleQuote)%%2 == 1)
    loc.start <- if (insideDoubleQuote && insideSingleQuote) {
        max(which(whichDoubleQuote), which(whichSingleQuote))
    }
    else if (insideDoubleQuote) 
        max(which(whichDoubleQuote))
    else if (insideSingleQuote) 
        max(which(whichSingleQuote))
    else .CompletionEnv[["start"]]
    substring(linebuffer, loc.start + 1L, .CompletionEnv[["end"]])
}
