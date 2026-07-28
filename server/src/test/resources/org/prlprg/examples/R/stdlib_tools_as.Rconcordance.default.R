#? stdlib
`as.Rconcordance.default` <- function (x, ...) 
{
    s <- sub("^.*(concordance){1}?", "concordance", sub("[^[:digit:]]*$", 
        "", x))
    s <- grep("^concordance:", s, value = TRUE)
    if (!length(s)) 
        return(NULL)
    result <- stringToConcordance(s[1])
    for (line in s[-1]) result <- addConcordance(result, line)
    result
}
