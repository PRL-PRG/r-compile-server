#? stdlib
`weekdays.Date` <- function (x, abbreviate = FALSE) 
format(x, ifelse(abbreviate, "%a", "%A"))
