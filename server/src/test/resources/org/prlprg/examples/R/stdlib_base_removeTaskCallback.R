#? stdlib
`removeTaskCallback` <- function (id) 
{
    if (!is.character(id)) 
        id <- as.integer(id)
    .Call(.C_R_removeTaskCallback, id)
}
