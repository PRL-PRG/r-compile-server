#? stdlib
`.is_call_from_replacement_function_usage` <- function (x) 
{
    ((length(x) == 3L) && identical(x[[1L]], quote(`<-`)) && 
        (length(x[[2L]]) > 1L) && is.symbol(x[[3L]]))
}
