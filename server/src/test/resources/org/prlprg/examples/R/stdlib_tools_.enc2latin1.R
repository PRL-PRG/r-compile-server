#? stdlib
`.enc2latin1` <- function (x) 
{
    if (length(pos <- which(Encoding(x) == "UTF-8"))) 
        x[pos] <- iconv(x[pos], "UTF-8", "latin1", sub = "byte")
    x
}
