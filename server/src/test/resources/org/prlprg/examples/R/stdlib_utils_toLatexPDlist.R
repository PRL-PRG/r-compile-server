#? stdlib
`toLatexPDlist` <- function (pdList, sep = "~") 
{
    if (length(ver <- vapply(pdList, `[[`, "", "Version"))) {
        ver <- ver[sort(names(ver))]
        paste(names(ver), ver, sep = sep, collapse = ", ")
    }
    else ver
}
