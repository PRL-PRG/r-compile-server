#? stdlib
`re_group` <- function (s) 
if (length(s)) paste0("(", s, ")") else character()
