#? stdlib
`simpleMessage` <- function (message, call = NULL) 
structure(list(message = message, call = call), class = c("simpleMessage", 
    "message", "condition"))
