#? stdlib
`months.Date` <- function (x, abbreviate = FALSE) 
format(x, ifelse(abbreviate, "%b", "%B"))
