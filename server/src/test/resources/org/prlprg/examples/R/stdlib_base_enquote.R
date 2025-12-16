#? stdlib
`enquote` <- function (cl) 
as.call(list(quote(base::quote), cl))
