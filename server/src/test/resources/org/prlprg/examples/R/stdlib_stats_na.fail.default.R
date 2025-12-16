#? stdlib
`na.fail.default` <- function (object, ...) 
{
    ok <- complete.cases(object)
    if (all(ok)) 
        object
    else stop("missing values in object")
}
