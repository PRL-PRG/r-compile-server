#? stdlib
`SweaveSyntConv` <- function (file, syntax, output = NULL) 
{
    if (is.character(syntax)) 
        syntax <- get(syntax)
    if (!identical(class(syntax), "SweaveSyntax")) 
        stop(gettextf("target syntax not of class %s", dQuote("SweaveSyntax")), 
            domain = NA)
    if (is.null(syntax$trans)) 
        stop("target syntax contains no translation table")
    insynt <- SweaveGetSyntax(file)
    text <- readLines(file)
    if (is.null(output)) 
        output <- sub(insynt$extension, syntax$trans$extension, 
            basename(file))
    TN <- names(syntax$trans)
    for (n in TN) if (n != "extension") 
        text <- gsub(insynt[[n]], syntax$trans[[n]], text)
    cat(text, file = output, sep = "\n")
    cat("Wrote file", output, "\n")
}

# Examples
testfile <- system.file("Sweave", "Sweave-test-1.Rnw", package = "utils")
oldwd <- setwd(tempdir())

## convert the file to latex syntax
SweaveSyntConv(testfile, SweaveSyntaxLatex)

## and run it through Sweave
Sweave("Sweave-test-1.Stex")

 if(!interactive()) unlink("Sweave-test-1*") ; setwd(oldwd) 

