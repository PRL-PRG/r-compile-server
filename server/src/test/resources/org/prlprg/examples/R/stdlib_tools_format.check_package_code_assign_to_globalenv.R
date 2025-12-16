#? stdlib
`format.check_package_code_assign_to_globalenv` <- function (x, ...) 
{
    if (!length(x)) 
        return(character())
    c("Found the following assignments to the global environment:", 
        unlist(Map(.format_calls_in_file, x, names(x))))
}
