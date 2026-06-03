#? stdlib
`as.personList.default` <- function (x) 
{
    if (inherits(x, "person")) 
        return(x)
    do.call(c, lapply(x, as.person))
}
