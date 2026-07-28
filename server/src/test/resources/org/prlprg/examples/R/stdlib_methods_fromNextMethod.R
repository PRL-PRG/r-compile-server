#? stdlib
`fromNextMethod` <- function (call) 
{
    identical(call[[1L]], quote(.nextMethod))
}
