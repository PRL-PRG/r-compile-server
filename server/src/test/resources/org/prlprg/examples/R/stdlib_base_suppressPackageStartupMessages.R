#? stdlib
`suppressPackageStartupMessages` <- function (expr) 
withCallingHandlers(expr, packageStartupMessage = function(c) tryInvokeRestart("muffleMessage"))
