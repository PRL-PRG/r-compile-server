#? stdlib
`dget` <- function (file, keep.source = FALSE) 
eval(parse(file = file, keep.source = keep.source))
