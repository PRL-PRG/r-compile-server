#? stdlib
`as.data.frame.character` <- function (x, ..., stringsAsFactors = FALSE) 
{
    nm <- deparse1(substitute(x))
    if (stringsAsFactors) 
        x <- factor(x)
    if (!"nm" %in% ...names()) 
        as.data.frame.vector(x, ..., nm = nm)
    else as.data.frame.vector(x, ...)
}
