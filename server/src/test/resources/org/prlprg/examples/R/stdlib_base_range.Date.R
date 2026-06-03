#? stdlib
`range.Date` <- function (..., na.rm = FALSE, finite = FALSE) 
.rangeNum(..., na.rm = na.rm, finite = finite, isNumeric = function(.) TRUE)
