#? stdlib
`slotNames` <- function (x) 
if (is(x, "classRepresentation")) names(x@slots) else .slotNames(x)
