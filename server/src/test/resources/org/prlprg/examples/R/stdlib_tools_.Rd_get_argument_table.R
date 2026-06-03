#? stdlib
`.Rd_get_argument_table` <- function (x) 
{
    x <- .Rd_get_section(x, "arguments")
    if (!length(x)) 
        return(matrix(character(), 0L, 2L))
    x <- x[RdTags(x) == "\\item"]
    if (!length(x)) 
        return(matrix(character(), 0L, 2L))
    x <- lapply(x[lengths(x) == 2L], vapply, FUN.VALUE = "", 
        function(block) .Rd_deparse(block[RdTags(block) != "COMMENT"]))
    matrix(unlist(x), ncol = 2L, byrow = TRUE)
}
