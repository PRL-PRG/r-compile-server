#? stdlib
`open.connection` <- function (con, open = "r", blocking = TRUE, ...) 
.Internal(open(con, open, blocking))
