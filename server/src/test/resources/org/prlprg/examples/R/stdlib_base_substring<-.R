#? stdlib
`substring<-` <- function (text, first, last = 1000000L, value) 
.Internal(`substr<-`(text, as.integer(first), as.integer(last), 
    value))
