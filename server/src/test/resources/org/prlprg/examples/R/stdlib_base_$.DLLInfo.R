#? stdlib
`$.DLLInfo` <- function (x, name) 
getNativeSymbolInfo(as.character(name), PACKAGE = x)
