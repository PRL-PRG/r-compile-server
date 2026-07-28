#? stdlib
`.primname` <- function (object) 
{
    f <- .Call(C_R_get_primname, object)
    if (f == "as.double") 
        "as.numeric"
    else f
}
