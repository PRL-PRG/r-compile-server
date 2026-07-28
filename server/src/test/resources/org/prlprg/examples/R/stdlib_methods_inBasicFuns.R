#? stdlib
`inBasicFuns` <- function (f) 
{
    fun <- .BasicFunsList[[f]]
    !is.null(fun) && !identical(fun, FALSE)
}
