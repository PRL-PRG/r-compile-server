#? stdlib
`format.check_package_code_attach` <- function (x, ...) 
{
    if (!length(x)) 
        return(character())
    c("Found the following calls to attach():", unlist(Map(.format_calls_in_file, 
        x, names(x))))
}
