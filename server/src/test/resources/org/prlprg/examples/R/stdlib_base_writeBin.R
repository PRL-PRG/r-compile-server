#? stdlib
`writeBin` <- function (object, con, size = NA_integer_, endian = .Platform$endian, 
    useBytes = FALSE) 
{
    if (!endian %in% c("big", "little", "swap")) 
        stop("invalid 'endian' argument")
    swap <- endian != .Platform$endian
    if (!is.vector(object) || mode(object) == "list") 
        stop("can only write vector objects")
    if (is.character(con)) {
        con <- file(con, "wb")
        on.exit(close(con))
    }
    .Internal(writeBin(object, con, size, swap, useBytes))
}
