#? stdlib
`readLines` <- function (con = stdin(), n = -1L, ok = TRUE, warn = TRUE, encoding = "unknown", 
    skipNul = FALSE) 
{
    if (is.character(con)) {
        con <- file(con, "r")
        on.exit(close(con))
    }
    .Internal(readLines(con, n, ok, warn, encoding, skipNul))
}
