#? stdlib
`.isSingleName` <- function (x) 
{
    if (!is.character(x)) 
        return(paste0("required to be a character vector, got an object of class \"", 
            class(x)[[1L]], "\""))
    if (length(x) != 1) 
        return(paste0("required to be a character vector of length 1, got length ", 
            length(x)))
    if (is.na(x) || !nzchar(x)) 
        return(paste0("required a non-empty string, got \"", 
            x, "\""))
    TRUE
}
