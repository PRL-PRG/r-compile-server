#? stdlib
`.SHLIB` <- function () 
{
    status <- .shlib_internal(commandArgs(TRUE))
    q("no", status = (status != 0), runLast = FALSE)
}
