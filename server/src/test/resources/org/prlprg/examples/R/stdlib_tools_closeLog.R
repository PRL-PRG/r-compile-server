#? stdlib
`closeLog` <- function (Log) 
if (Log$con > 2L) close(Log$con)
