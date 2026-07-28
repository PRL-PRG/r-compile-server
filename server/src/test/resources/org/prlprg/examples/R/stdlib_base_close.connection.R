#? stdlib
`close.connection` <- function (con, type = "rw", ...) 
.Internal(close(con, type))
