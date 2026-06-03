#? stdlib
`asDateBuilt` <- function (built) 
{
    as.Date(strsplit(built, split = "; ", fixed = TRUE)[[1L]][[3L]], 
        format = "%Y-%m-%d")
}
