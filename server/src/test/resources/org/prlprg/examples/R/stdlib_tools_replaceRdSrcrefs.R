#? stdlib
`replaceRdSrcrefs` <- function (Rd, srcref) 
{
    if (!is.null(attr(Rd, "srcref"))) 
        attr(Rd, "srcref") <- srcref
    if (is.list(Rd)) 
        for (i in seq_along(Rd)) Rd[[i]] <- replaceRdSrcrefs(Rd[[i]], 
            srcref)
    Rd
}
