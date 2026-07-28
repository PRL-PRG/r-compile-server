#? stdlib
`tagged` <- function (x, tag, srcref = NULL) 
{
    attr(x, "Rd_tag") <- tag
    attr(x, "srcref") <- srcref
    x
}
