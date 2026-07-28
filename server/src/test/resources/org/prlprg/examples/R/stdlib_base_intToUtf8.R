#? stdlib
`intToUtf8` <- function (x, multiple = FALSE, allow_surrogate_pairs = FALSE) 
.Internal(intToUtf8(x, multiple, allow_surrogate_pairs))
