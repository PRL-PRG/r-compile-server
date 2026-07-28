#? stdlib
`specialCompletions` <- function (text, spl) 
{
    wm <- which.max(spl)
    op <- names(spl)[wm]
    opStart <- spl[wm]
    opEnd <- opStart + nchar(op)
    if (opStart < 1) 
        return(character())
    prefix <- substr(text, 1L, opStart - 1L)
    suffix <- substr(text, opEnd, 1000000L)
    if (op == "?") 
        return(helpCompletions(prefix, suffix))
    if (opStart <= 1) 
        return(character())
    comps <- specialOpCompletionsHelper(op, suffix, prefix)
    if (length(comps) == 0L) 
        comps <- ""
    sprintf("%s%s%s", prefix, op, comps)
}
