#? stdlib
`$.person` <- function (x, name) 
{
    if (!length(x)) 
        return(NULL)
    name <- match.arg(name, person_field_names)
    y <- lapply(unclass(x), `[[`, name)
    if (length(y) == 1L) 
        y <- y[[1L]]
    y
}
