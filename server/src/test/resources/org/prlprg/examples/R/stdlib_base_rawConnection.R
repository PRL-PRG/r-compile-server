#? stdlib
`rawConnection` <- function (object, open = "r") 
{
    .Internal(rawConnection(deparse(substitute(object)), object, 
        open))
}

# Examples
zz <- rawConnection(raw(0), "r+") # start with empty raw vector
writeBin(LETTERS, zz)
seek(zz, 0)
readLines(zz) # raw vector has embedded nuls
seek(zz, 0)
writeBin(letters[1:3], zz)
rawConnectionValue(zz)
close(zz)

