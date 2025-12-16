#? stdlib
`Sys.time` <- function () 
.POSIXct(.Internal(Sys.time()))

# Examples\donttest{
Sys.time()
## print with possibly greater accuracy:
op <- options(digits.secs = 6)
Sys.time()
options(op)

## locale-specific version of date()
format(Sys.time(), "%a %b %d %X %Y")

Sys.Date()
}
