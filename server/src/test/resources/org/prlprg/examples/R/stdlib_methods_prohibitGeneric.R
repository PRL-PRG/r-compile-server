#? stdlib
`prohibitGeneric` <- function (name, where = topenv(parent.frame())) 
{
    .saveToImplicitGenerics(name, FALSE, where)
}
