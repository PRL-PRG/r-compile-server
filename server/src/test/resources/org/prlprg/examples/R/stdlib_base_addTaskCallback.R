#? stdlib
`addTaskCallback` <- function (f, data = NULL, name = character()) 
{
    if (!is.function(f)) 
        stop("handler must be a function")
    val <- .Call(.C_R_addTaskCallback, f, data, !missing(data), 
        as.character(name))
    val + 1L
}
