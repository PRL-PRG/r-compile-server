#? stdlib
`unmap` <- function (x) 
sub("^Rf_", "", gsub("^_|_$", "", trimws(x)))
