#? stdlib
`errorCondition` <- function (message, ..., class = NULL, call = NULL) 
structure(list(message = as.character(message), call = call, 
    ...), class = c(class, "error", "condition"))
