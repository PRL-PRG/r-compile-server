#? stdlib
`makepredictcall.poly` <- function (var, call) 
{
    if (as.character(call)[1L] == "poly" || (is.call(call) && 
        identical(eval(call[[1L]]), poly))) 
        call$coefs <- attr(var, "coefs")
    call
}
