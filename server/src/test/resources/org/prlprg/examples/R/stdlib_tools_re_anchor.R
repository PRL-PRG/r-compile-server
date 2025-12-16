#? stdlib
`re_anchor` <- function (s) 
if (length(s)) paste0("^", s, "$") else character()
