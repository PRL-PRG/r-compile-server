#? stdlib
`showNonASCIIfile` <- function (file) 
showNonASCII(readLines(file, warn = FALSE))
