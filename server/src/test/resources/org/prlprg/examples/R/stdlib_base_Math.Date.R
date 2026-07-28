#? stdlib
`Math.Date` <- function (x, ...) 
stop(gettextf("%s not defined for \"Date\" objects", .Generic), 
    domain = NA)
