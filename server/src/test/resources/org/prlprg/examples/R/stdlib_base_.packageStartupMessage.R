#? stdlib
`.packageStartupMessage` <- function (message, call = NULL) 
structure(list(message = message, call = call), class = c("packageStartupMessage", 
    "simpleMessage", "message", "condition"))
