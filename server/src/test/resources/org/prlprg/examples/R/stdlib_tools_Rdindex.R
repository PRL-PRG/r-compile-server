#? stdlib
`Rdindex` <- function (RdFiles, outFile = "", type = NULL, width = 0.9 * getOption("width"), 
    indent = NULL) 
{
    if ((length(RdFiles) == 1L) && dir.exists(RdFiles)) {
        docsDir <- RdFiles
        if (dir.exists(file.path(docsDir, "man"))) 
            docsDir <- file.path(docsDir, "man")
        RdFiles <- list_files_with_type(docsDir, "docs")
    }
    if (outFile == "") 
        outFile <- stdout()
    else if (is.character(outFile)) {
        outFile <- file(outFile, "w")
        on.exit(close(outFile))
    }
    if (!inherits(outFile, "connection")) 
        stop("argument 'outFile' must be a character string or connection")
    db <- .build_Rd_db(files = RdFiles, stages = "build")
    index <- .build_Rd_index(Rd_contents(db), type = type)
    writeLines(formatDL(index, width = width, indent = indent), 
        outFile)
}
