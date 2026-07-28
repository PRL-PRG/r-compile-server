#? stdlib
`scan` <- function (file = "", what = double(), nmax = -1L, n = -1L, sep = "", 
    quote = if (identical(sep, "\n")) "" else "'\"", dec = ".", 
    skip = 0L, nlines = 0L, na.strings = "NA", flush = FALSE, 
    fill = FALSE, strip.white = FALSE, quiet = FALSE, blank.lines.skip = TRUE, 
    multi.line = TRUE, comment.char = "", allowEscapes = FALSE, 
    fileEncoding = "", encoding = "unknown", text, skipNul = FALSE) 
{
    na.strings <- as.character(na.strings)
    if (!missing(n)) {
        if (missing(nmax)) 
            nmax <- n/pmax(length(what), 1L)
        else stop("either specify 'nmax' or 'n', but not both.")
    }
    if (missing(file) && !missing(text)) {
        file <- textConnection(text, encoding = "UTF-8")
        encoding <- "UTF-8"
        on.exit(close(file))
    }
    if (is.character(file)) 
        if (file == "") 
            file <- stdin()
        else {
            file <- if (nzchar(fileEncoding)) 
                file(file, "r", encoding = fileEncoding)
            else file(file, "r")
            on.exit(close(file))
        }
    if (!inherits(file, "connection")) 
        stop("'file' must be a character string or connection")
    .Internal(scan(file, what, nmax, sep, dec, quote, skip, nlines, 
        na.strings, flush, fill, strip.white, quiet, blank.lines.skip, 
        multi.line, comment.char, allowEscapes, encoding, skipNul))
}

# Examples
cat("TITLE extra line", "2 3 5 7", "11 13 17", file = "ex.data", sep = "\n")
pp <- scan("ex.data", skip = 1, quiet = TRUE)
scan("ex.data", skip = 1)
scan("ex.data", skip = 1, nlines = 1) # only 1 line after the skipped one
scan("ex.data", what = list("","","")) # flush is F -> read "7"
scan("ex.data", what = list("","",""), flush = TRUE)
unlink("ex.data") # tidy up

## "inline" usage
scan(text = "1 2 3")


