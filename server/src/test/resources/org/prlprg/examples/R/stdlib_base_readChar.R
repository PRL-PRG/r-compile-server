#? stdlib
`readChar` <- function (con, nchars, useBytes = FALSE) 
{
    if (is.character(con)) {
        con <- file(con, "rb")
        on.exit(close(con))
    }
    .Internal(readChar(con, as.integer(nchars), useBytes))
}

# Examples
## test fixed-length strings
zzfil <- tempfile("testchar")
zz <- file(zzfil, "wb")
x <- c("a", "this will be truncated", "abc")
nc <- c(3, 10, 3)
writeChar(x, zz, nc, eos = NULL)
writeChar(x, zz, eos = "\r\n")
close(zz)

zz <- file(zzfil, "rb")
readChar(zz, nc)
readChar(zz, nchar(x)+3) # need to read the terminator explicitly
close(zz)
unlink(zzfil)

