#? stdlib
`RweaveLatexFinish` <- function (object, error = FALSE) 
{
    outputname <- summary(object$output)$description
    if (!object$quiet && !error) {
        if (!file.exists(outputname)) 
            stop(gettextf("the output file '%s' has disappeared", 
                outputname))
        cat("\n", sprintf("You can now run (pdf)latex on %s", 
            sQuote(outputname)), "\n", sep = "")
    }
    close(object$output)
    if (length(object$chunkout)) 
        for (con in object$chunkout) close(con)
    if (object$haveconcordance) {
        concordance <- list(srcLine = object$linesout, srcFile = object$srcFilenames[object$filenumout], 
            offset = 0)
        class(concordance) <- "Rconcordance"
        if (!is.null(concordance$srcFile)) {
            concordance <- as.character(concordance, targetfile = outputname)
            for (i in seq_along(concordance)) {
                special <- paste0("\\Sconcordance{", paste(strwrap(concordance[i]), 
                  collapse = " %\n"), "}\n")
                cat(special, file = object$concordfile, append = (i > 
                  1L))
            }
        }
    }
    invisible(outputname)
}
