#? stdlib
`url_db` <- function (urls, parents) 
{
    db <- list2DF(list(URL = trimws(as.character(urls)), Parent = as.character(parents)))
    class(db) <- c("url_db", "data.frame")
    db
}
