#? stdlib
`RweaveEvalWithOpt` <- function (expr, options) 
{
    if (options$eval) {
        res <- try(withVisible(eval(expr, .GlobalEnv)), silent = TRUE)
        if (inherits(res, "try-error")) 
            return(res)
        if (options$print || (options$term && res$visible)) {
            if (.isMethodsDispatchOn() && isS4(res$value)) 
                methods::show(res$value)
            else print(res$value)
        }
    }
    res
}
