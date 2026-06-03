#? stdlib
`simpleCondition` <- function (message, call = NULL) 
{
    class <- c("simpleCondition", "condition")
    structure(list(message = as.character(message), call = call), 
        class = class)
}
