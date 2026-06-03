#? stdlib
`.handleSimpleError` <- function (h, msg, call) 
h(simpleError(msg, call))
