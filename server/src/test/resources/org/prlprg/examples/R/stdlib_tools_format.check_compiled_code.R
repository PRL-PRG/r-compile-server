#? stdlib
`format.check_compiled_code` <- function (x, ...) 
{
    if (!length(x)) 
        return(character())
    paste(unlist(lapply(x, format)), collapse = "\n")
}
