#? stdlib
`doi_db` <- function (dois, parents) 
{
    db <- list2DF(list(DOI = trimws(as.character(dois)), Parent = as.character(parents)))
    class(db) <- c("doi_db", "data.frame")
    db
}
