#? stdlib
`is.primitive` <- function (x) 
switch(typeof(x), special = , builtin = TRUE, FALSE)
