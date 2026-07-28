#? stdlib
`.Rd_get_methods_description_table` <- function (x) 
{
    y <- matrix(character(), 0L, 2L)
    x <- .Rd_get_section(x, "Methods", FALSE)
    if (!length(x)) 
        return(y)
    x <- .Rd_get_section(x, "describe")
    if (!length(x)) 
        return(y)
    x <- x[RdTags(x) == "\\item"]
    if (!length(x)) 
        return(y)
    x <- lapply(x[lengths(x) == 2L], sapply, .Rd_deparse)
    matrix(unlist(x), ncol = 2L, byrow = TRUE)
}
