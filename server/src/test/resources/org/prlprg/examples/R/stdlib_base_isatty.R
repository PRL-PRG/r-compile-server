#? stdlib
`isatty` <- function (con) 
{
    if (!inherits(con, "terminal")) 
        FALSE
    else .Internal(isatty(con))
}
