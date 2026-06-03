#? stdlib
`print.packageInfo` <- function (x, ...) 
{
    outFile <- tempfile("RpackageInfo")
    writeLines(format(x), outFile)
    file.show(outFile, delete.file = TRUE, title = gettextf("Documentation for package %s", 
        sQuote(x$name)))
    invisible(x)
}
