#? stdlib
`RtangleRuncode` <- function (object, chunk, options) 
{
    if (!(options$engine %in% c("R", "S"))) 
        return(object)
    chunkprefix <- RweaveChunkPrefix(options)
    if (options$split) {
        if (!grepl(.SweaveValidFilenameRegexp, chunkprefix)) 
            warning("file stem ", sQuote(chunkprefix), " is not portable", 
                call. = FALSE, domain = NA)
        outfile <- paste(chunkprefix, options$engine, sep = ".")
        if (!object$quiet) 
            cat(options$chunknr, ":", outfile, "\n")
        chunkout <- object$chunkout[chunkprefix][[1L]]
        if (is.null(chunkout)) {
            chunkout <- file(outfile, "w")
            if (!is.null(options$label)) 
                object$chunkout[[chunkprefix]] <- chunkout
        }
    }
    else chunkout <- object$output
    showOut <- options$eval || !object$drop.evalFALSE
    if (showOut) {
        annotate <- object$annotate
        if (is.logical(annotate) && annotate) {
            cat("###################################################\n", 
                "### code chunk number ", options$chunknr, ": ", 
                options$label %||% .RtangleCodeLabel(chunk), 
                if (!options$eval) 
                  " (eval = FALSE)", "\n", "###################################################\n", 
                file = chunkout, sep = "")
        }
        else if (is.function(annotate)) 
            annotate(options, chunk = chunk, output = chunkout)
    }
    hooks <- SweaveHooks(options, run = FALSE)
    for (k in hooks) cat("getOption(\"SweaveHooks\")[[\"", k, 
        "\"]]()\n", file = chunkout, sep = "")
    if (showOut) {
        if (!options$show.line.nos) 
            chunk <- grep("^#line ", chunk, value = TRUE, invert = TRUE)
        if (!options$eval) 
            chunk <- paste("##", chunk)
        cat(chunk, "\n", file = chunkout, sep = "\n")
    }
    if (is.null(options$label) && options$split) 
        close(chunkout)
    object
}
