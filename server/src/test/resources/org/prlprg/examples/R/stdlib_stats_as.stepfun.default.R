#? stdlib
`as.stepfun.default` <- function (x, ...) 
{
    if (is.stepfun(x)) 
        x
    else stop("no 'as.stepfun' method available for 'x'")
}
