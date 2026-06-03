#? stdlib
`Math.POSIXt` <- function (x, ...) 
{
    stop(gettextf("'%s' not defined for \"POSIXt\" objects", 
        .Generic), domain = NA)
}
