#? stdlib
`Sys.setlocale` <- function (category = "LC_ALL", locale = "") 
{
    category <- match(category, .LC.categories)
    if (is.na(category)) 
        stop("invalid 'category' argument")
    .Internal(Sys.setlocale(category, locale))
}
