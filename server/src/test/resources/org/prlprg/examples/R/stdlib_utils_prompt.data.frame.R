#? stdlib
`prompt.data.frame` <- function (object, filename = NULL, name = NULL, ...) 
{
    if (missing(name)) 
        name <- if (is.character(object)) 
            object
        else {
            name <- substitute(object)
            if (is.name(name)) 
                as.character(name)
            else stop("cannot determine a usable name")
        }
    if (is.null(filename)) 
        filename <- paste0(name, ".Rd")
    x <- if (!missing(object)) 
        object
    else {
        x <- get(name, envir = parent.frame())
    }
    promptData(x, filename = filename, name = name)
}
