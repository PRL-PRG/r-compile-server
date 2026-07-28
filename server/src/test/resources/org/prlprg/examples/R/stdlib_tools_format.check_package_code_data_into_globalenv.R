#? stdlib
`format.check_package_code_data_into_globalenv` <- function (x, ...) 
{
    if (!length(x)) 
        return(character())
    c("Found the following calls to data() loading into the global environment:", 
        unlist(Map(.format_calls_in_file, x, names(x))))
}
