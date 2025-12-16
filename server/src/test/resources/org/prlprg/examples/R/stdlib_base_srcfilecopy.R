#? stdlib
`srcfilecopy` <- function (filename, lines, timestamp = Sys.time(), isFile = FALSE) 
{
    stopifnot(is.character(filename), length(filename) == 1L)
    e <- new.env(parent = emptyenv())
    if (any(grepl("\n", lines, fixed = TRUE, useBytes = TRUE))) 
        lines <- unlist(strsplit(sub("$", "\n", as.character(lines)), 
            "\n"))
    e$filename <- filename
    e$wd <- getwd()
    e$isFile <- isFile
    e$lines <- as.character(lines)
    e$fixedNewlines <- TRUE
    e$timestamp <- timestamp
    e$Enc <- "unknown"
    class(e) <- c("srcfilecopy", "srcfile")
    return(e)
}
