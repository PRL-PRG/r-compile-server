#? stdlib
`strptime` <- function (x, format, tz = "") 
.Internal(strptime(if (is.character(x)) x else if (is.object(x)) `names<-`(as.character(x), 
    names(x)) else `storage.mode<-`(x, "character"), format, 
    tz))
