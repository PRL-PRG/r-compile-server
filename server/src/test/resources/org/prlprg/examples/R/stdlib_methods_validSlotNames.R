#? stdlib
`validSlotNames` <- function (names) 
{
    if (is.na(match("class", names))) 
        names
    else stop("\"class\" is a reserved slot name and cannot be redefined")
}
