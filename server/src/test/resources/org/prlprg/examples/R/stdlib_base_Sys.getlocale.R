#? stdlib
`Sys.getlocale` <- function (category = "LC_ALL") 
{
    category <- match(category, .LC.categories)
    if (is.na(category)) 
        stop("invalid 'category' argument")
    .Internal(Sys.getlocale(category))
}
