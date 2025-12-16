#? stdlib
`showNonASCII` <- function (x) 
{
    ind <- .Call(C_nonASCII, x)
    if (any(ind)) {
        message(paste0(which(ind), ": ", iconv(x[ind], "", "ASCII", 
            sub = "byte"), collapse = "\n"), domain = NA)
    }
    invisible(x[ind])
}

# Examples
out <- c(
"fran\xE7ais: test of showNonASCII():",
"\\details{",
"   This is a good line",
"   This has an \xfcmlaut in it.",
"   OK again.",
"}")
f <- tempfile()
cat(out, file = f, sep = "\n")

\dontdiff{showNonASCIIfile(f)}
unlink(f)

