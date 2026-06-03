#? stdlib
`[.noquote` <- function (x, ...) 
{
    attr <- attributes(x)
    r <- unclass(x)[...]
    attributes(r) <- c(attributes(r), attr[is.na(match(names(attr), 
        c("dim", "dimnames", "names")))])
    r
}
