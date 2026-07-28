#? stdlib
`storage.mode` <- function (x) 
switch(tx <- typeof(x), closure = , builtin = , special = "function", 
    tx)
