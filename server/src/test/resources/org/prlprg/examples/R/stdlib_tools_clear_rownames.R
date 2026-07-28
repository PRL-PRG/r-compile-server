#? stdlib
`clear_rownames` <- function (val) 
{
    rownames(val) <- NULL
    val
}
