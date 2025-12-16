#? stdlib
`icuGetCollate` <- function (type = c("actual", "valid")) 
{
    type <- match.arg(type)
    .Internal(icuGetCollate(match(type, c("actual", "valid"))))
}
