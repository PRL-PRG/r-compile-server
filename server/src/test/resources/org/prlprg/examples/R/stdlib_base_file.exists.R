#? stdlib
`file.exists` <- function (...) 
.Internal(file.exists(c(...)))
