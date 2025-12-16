#? stdlib
`asS3` <- function (object, flag = TRUE, complete = TRUE) 
.Internal(setS4Object(object, !as.logical(flag), complete))
