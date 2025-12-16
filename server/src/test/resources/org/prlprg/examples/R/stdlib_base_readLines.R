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

# Examples
fil <- tempfile(fileext = ".data")
cat("TITLE extra line", "2 3 5 7", "", "11 13 17", file = fil,
    sep = "\n")
readLines(fil, n = -1)
unlink(fil) # tidy up

## difference in blocking
fil <- tempfile("test")
cat("123\nabc", file = fil)
\dontdiff{readLines(fil) # line with a warning}

con <- file(fil, "r", blocking = FALSE)
readLines(con) # "123"
cat(" def\n", file = fil, append = TRUE)
readLines(con) # gets both
close(con)

unlink(fil) # tidy up


