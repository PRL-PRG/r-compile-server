#? stdlib
`writeLines` <- function (text, con = stdout(), sep = "\n", useBytes = FALSE) 
{
    if (!is.character(text)) 
        stop("can only write character objects")
    if (is.character(con)) {
        con <- file(con, "w")
        on.exit(close(con))
    }
    .Internal(writeLines(text, con, sep, useBytes))
}
