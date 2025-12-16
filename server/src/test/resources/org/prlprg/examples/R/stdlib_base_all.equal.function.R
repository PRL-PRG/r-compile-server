#? stdlib
`all.equal.function` <- function (target, current, check.environment = TRUE, ...) 
{
    msg <- all.equal.language(target, current, ...)
    if (check.environment) {
        ee <- identical(environment(target), environment(current), 
            ignore.environment = FALSE)
        if (!ee) 
            ee <- all.equal.environment(environment(target), 
                environment(current), ...)
        if (isTRUE(msg)) 
            ee
        else c(msg, if (!isTRUE(ee)) ee)
    }
    else msg
}
