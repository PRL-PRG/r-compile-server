#? stdlib
`date` <- function () 
.Internal(date())

# Examples\dontdiff{
(d <- date())
nchar(d) == 24

## something similar in the current locale
##   depending on ctime; e.g. %e could be %d:
format(Sys.time(), "%a %b %e %H:%M:%S %Y")
}
