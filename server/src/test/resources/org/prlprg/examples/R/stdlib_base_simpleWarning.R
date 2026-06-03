#? stdlib
`simpleWarning` <- function (message, call = NULL) 
{
    class <- c("simpleWarning", "warning", "condition")
    structure(list(message = as.character(message), call = call), 
        class = class)
}
