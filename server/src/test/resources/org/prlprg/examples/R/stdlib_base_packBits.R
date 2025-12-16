#? stdlib
`packBits` <- function (x, type = c("raw", "integer", "double")) 
{
    type <- match.arg(type)
    .Internal(packBits(x, type))
}
