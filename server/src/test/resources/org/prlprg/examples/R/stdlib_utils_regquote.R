#? stdlib
`regquote` <- function (x) 
gsub("([*.?+^&\\[])", "\\\\\\1", x)
