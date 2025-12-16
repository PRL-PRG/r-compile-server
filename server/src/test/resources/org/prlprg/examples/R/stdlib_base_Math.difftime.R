#? stdlib
`Math.difftime` <- function (x, ...) 
{
    switch(.Generic, abs = , sign = , floor = , ceiling = , trunc = , 
        round = , signif = {
            units <- attr(x, "units")
            .difftime(NextMethod(), units)
        }, stop(gettextf("'%s' not defined for \"difftime\" objects", 
            .Generic), domain = NA))
}
