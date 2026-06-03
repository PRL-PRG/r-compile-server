#? stdlib
`reQuote` <- function (x) 
{
    escape <- function(s) paste0("\\", s)
    re <- "[.*?+^$\\()[]"
    m <- gregexpr(re, x)
    regmatches(x, m) <- lapply(regmatches(x, m), escape)
    x
}
