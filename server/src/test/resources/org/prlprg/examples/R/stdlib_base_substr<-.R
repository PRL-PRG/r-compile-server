#? stdlib
`substr<-` <- function (x, start, stop, value) 
.Internal(`substr<-`(x, as.integer(start), as.integer(stop), 
    value))
