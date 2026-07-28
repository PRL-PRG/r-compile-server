#? stdlib
`printLog0` <- function (Log, ...) 
{
    cat(..., sep = "")
    if (Log$con > 0L) 
        cat(..., file = Log$con, sep = "")
}
