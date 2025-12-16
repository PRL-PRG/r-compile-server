#? stdlib
`fuzzyApropos` <- function (what) 
{
    stopifnot(is.character(what))
    x <- character(0L)
    for (i in seq_along(search())) {
        li <- findFuzzyMatches(what, ls(pos = i, all.names = TRUE))
        if (length(li)) {
            x <- c(x, li)
        }
    }
    findFuzzyMatches(what, x)
}
