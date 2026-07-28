#? stdlib
`weekdays.POSIXt` <- function (x, abbreviate = FALSE) 
{
    format(x, ifelse(abbreviate, "%a", "%A"))
}
