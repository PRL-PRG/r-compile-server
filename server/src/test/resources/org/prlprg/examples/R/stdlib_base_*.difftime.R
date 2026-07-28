#? stdlib
`*.difftime` <- function (e1, e2) 
{
    if (inherits(e1, "difftime") && inherits(e2, "difftime")) 
        stop("both arguments of * cannot be \"difftime\" objects")
    if (inherits(e2, "difftime")) {
        tmp <- e1
        e1 <- e2
        e2 <- tmp
    }
    .difftime(e2 * unclass(e1), attr(e1, "units"))
}
