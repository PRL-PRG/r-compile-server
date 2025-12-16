#? stdlib
`ts.intersect` <- function (..., dframe = FALSE) 
.cbind.ts(list(...), .makeNamesTs(...), dframe = dframe, union = FALSE)
