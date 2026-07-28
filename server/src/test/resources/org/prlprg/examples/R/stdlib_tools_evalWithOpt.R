#? stdlib
`evalWithOpt` <- function (expr, options, env) 
{
    res <- tagged("", "COMMENT")
    if (options$eval) {
        result <- tryCatch(withVisible(eval(expr, env)), error = function(e) e)
        if (inherits(result, "error")) 
            return(result)
        switch(options$results, text = if (result$visible) res <- paste(as.character(result$value), 
            collapse = " "), verbatim = if (result$visible) print(result$value), 
            rd = res <- result$value)
    }
    return(res)
}
