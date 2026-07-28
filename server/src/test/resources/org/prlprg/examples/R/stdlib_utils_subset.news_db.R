#? stdlib
`subset.news_db` <- function (x, subset, ...) 
{
    do.call(news, list(substitute(subset), db = x))
}
