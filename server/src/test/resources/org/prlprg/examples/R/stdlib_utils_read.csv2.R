#? stdlib
`read.csv2` <- function (file, header = TRUE, sep = ";", quote = "\"", dec = ",", 
    fill = TRUE, comment.char = "", ...) 
read.table(file = file, header = header, sep = sep, quote = quote, 
    dec = dec, fill = fill, comment.char = comment.char, ...)
