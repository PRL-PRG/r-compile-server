#? stdlib
`suppressMessages` <- function (expr, classes = "message") 
withCallingHandlers(expr, message = function(c) if (inherits(c, 
    classes)) tryInvokeRestart("muffleMessage"))
