#? stdlib
`count.fields` <- function (file, sep = "", quote = "\"'", skip = 0, blank.lines.skip = TRUE, 
    comment.char = "#") 
{
    if (is.character(file)) {
        file <- file(file)
        on.exit(close(file))
    }
    if (!inherits(file, "connection")) 
        stop("'file' must be a character string or connection")
    .External(C_countfields, file, sep, quote, skip, blank.lines.skip, 
        comment.char)
}

# Examples
fil <- tempfile()
cat("NAME", "1:John", "2:Paul", file = fil, sep = "\n")
count.fields(fil, sep = ":")
unlink(fil)

