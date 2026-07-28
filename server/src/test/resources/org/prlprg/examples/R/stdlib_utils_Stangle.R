#? stdlib
`Stangle` <- function (file, driver = Rtangle(), syntax = getOption("SweaveSyntax"), 
    encoding = "", ...) 
Sweave(file = file, driver = driver, encoding = encoding, ...)
