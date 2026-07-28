#? stdlib
`simpleError` <- function (message, call = NULL) 
{
    class <- c("simpleError", "error", "condition")
    structure(list(message = as.character(message), call = call), 
        class = class)
}
