#? stdlib
`suppressWarnings` <- function (expr, classes = "warning") 
{
    withCallingHandlers(expr, warning = function(w) if (inherits(w, 
        classes)) 
        tryInvokeRestart("muffleWarning"))
}
