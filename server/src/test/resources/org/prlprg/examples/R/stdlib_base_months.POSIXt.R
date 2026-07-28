#? stdlib
`months.POSIXt` <- function (x, abbreviate = FALSE) 
{
    format(x, ifelse(abbreviate, "%b", "%B"))
}
