#? stdlib
`print.libraryIQR` <- function (x, ...) 
{
    s <- format(x)
    if (!length(s)) {
        message("no packages found")
    }
    else {
        outFile <- tempfile("RlibraryIQR")
        writeLines(s, outFile)
        file.show(outFile, delete.file = TRUE, title = gettext("R packages available"))
    }
    invisible(x)
}
