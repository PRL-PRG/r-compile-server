#? stdlib
`searchpaths` <- function () 
{
    s <- search()
    paths <- lapply(seq_along(s), function(i) attr(as.environment(i), 
        "path"))
    paths[[length(s)]] <- system.file()
    m <- grep("^package:", s)
    if (length(m)) 
        paths[-m] <- as.list(s[-m])
    unlist(paths)
}
