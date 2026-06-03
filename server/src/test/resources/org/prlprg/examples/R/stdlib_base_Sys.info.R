#? stdlib
`Sys.info` <- function () 
.Internal(Sys.info())

# Examples
Sys.info()
## An alternative (and probably better) way to get the login name on Unix
Sys.getenv("LOGNAME")

