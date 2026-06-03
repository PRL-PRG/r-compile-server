#? stdlib
`hasLoadAction` <- function (aname, where = topenv(parent.frame())) 
exists(.actionMetaName(aname), envir = where, inherits = FALSE)
