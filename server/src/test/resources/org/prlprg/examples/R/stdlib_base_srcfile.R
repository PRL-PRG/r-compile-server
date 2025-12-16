#? stdlib
`srcfile` <- function (filename, encoding = getOption("encoding"), Enc = "unknown") 
{
    stopifnot(is.character(filename), length(filename) == 1L)
    e <- new.env(hash = FALSE, parent = emptyenv())
    e$wd <- getwd()
    e$filename <- filename
    e$timestamp <- file.mtime(filename)
    if (identical(encoding, "unknown")) 
        encoding <- "native.enc"
    e$encoding <- encoding
    e$Enc <- Enc
    class(e) <- "srcfile"
    return(e)
}

# Examples
src <- srcfile(system.file("DESCRIPTION", package = "base"))
\dontdiff{summary(src)}
getSrcLines(src, 1, 4)
ref <- srcref(src, c(1, 1, 2, 1000))
ref
print(ref, useSource = FALSE)

