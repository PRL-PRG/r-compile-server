#? stdlib
`format.check_code_usage_in_package` <- function (x, ...) 
{
    if (length(x)) {
        ind <- grepl(": partial argument match of", x, fixed = TRUE)
        if (any(ind)) 
            x <- c(x[ind], x[!ind])
    }
    if (length(x)) {
        y <- .canonicalize_quotes(x)
        m <- regexec("no visible global function definition for '(.*)'", 
            y)
        funs <- vapply(Filter(length, regmatches(y, m)), `[`, 
            "", 2L)
        m <- regexec("no visible binding for global variable '(.*)'", 
            y)
        vars <- vapply(Filter(length, regmatches(y, m)), `[`, 
            "", 2L)
        y <- sort(unique(c(funs, vars)))
        c(strwrap(x, indent = 0L, exdent = 2L), if (length(y)) {
            c("Undefined global functions or variables:", strwrap(paste(y, 
                collapse = " "), indent = 2L, exdent = 2L))
        })
    }
    else character()
}
