#? stdlib
`Sys.getpid` <- function () 
.Internal(Sys.getpid())

# Examples\donttest{
Sys.getpid()

## Show files opened from this R process
if(.Platform$OS.type == "unix") ## on Unix-alikes such Linux, macOS, FreeBSD:
   system(paste("lsof -p", Sys.getpid()))
}
