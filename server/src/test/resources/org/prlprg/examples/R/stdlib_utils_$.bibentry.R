#? stdlib
`$.bibentry` <- function (x, name) 
{
    if (!length(x)) 
        return(NULL)
    y <- if (name %in% bibentry_attribute_names) 
        lapply(unclass(x), attr, name)
    else lapply(unclass(x), `[[`, tolower(name))
    if (length(y) == 1L) 
        y <- y[[1L]]
    y
}
