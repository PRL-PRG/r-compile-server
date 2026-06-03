#? stdlib
`pushBack` <- function (data, connection, newLine = TRUE, encoding = c("", 
    "bytes", "UTF-8")) 
{
    if (length(encoding) > 1L) 
        encoding <- encoding[1]
    if (nzchar(encoding)) 
        encoding <- match.arg(encoding)
    type <- match(encoding, c("", "bytes", "UTF-8"))
    .Internal(pushBack(data, connection, newLine, type))
}

# Examples
zz <- textConnection(LETTERS)
readLines(zz, 2)
pushBack(c("aa", "bb"), zz)
pushBackLength(zz)
readLines(zz, 1)
pushBackLength(zz)
readLines(zz, 1)
readLines(zz, 1)
close(zz)

