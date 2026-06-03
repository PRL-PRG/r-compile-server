#? stdlib
`.AtNames.default` <- function (x, pattern = "") 
{
    if (isS4(x)) 
        findMatches(pattern, methods::slotNames(x))
    else character()
}
