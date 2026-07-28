#? stdlib
`[.news_db` <- function (x, i, j, drop) 
{
    y <- NextMethod()
    if (inherits(y, "news_db") && !missing(i) && !is.null(bad <- attr(x, 
        "bad"))) {
        attr(y, "bad") <- bad[i]
    }
    y
}
