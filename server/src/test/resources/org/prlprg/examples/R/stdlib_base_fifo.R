#? stdlib
`fifo` <- function (description, open = "", blocking = FALSE, encoding = getOption("encoding")) 
.Internal(fifo(description, open, blocking, encoding))
