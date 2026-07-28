#? stdlib
`str.hashtab` <- function (object, ...) 
cat(sprintf("class 'hashtab': %d entries; type=\"%s\", addr=%s", 
    numhash(object), typhash(object), format(unclass(object)[[1]])), 
    "\n")
