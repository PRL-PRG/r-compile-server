#? stdlib
`RtangleSetup` <- function (file, syntax, output = NULL, annotate = TRUE, split = FALSE, 
    quiet = FALSE, drop.evalFALSE = FALSE, ...) 
{
    dots <- list(...)
    if (is.null(output)) {
        prefix.string <- basename(sub(syntax$extension, "", file))
        output <- paste0(prefix.string, ".R")
    }
    else prefix.string <- basename(sub("\\.[rsRS]$", "", output))
    if (!split) {
        if (identical(output, "stdout")) 
            output <- stdout()
        else if (identical(output, "stderr")) 
            output <- stderr()
        else {
            if (!quiet) 
                cat("Writing to file", output, "\n")
            encoding <- attr(file, "encoding")
            if (encoding %in% c("ASCII", "bytes")) 
                encoding <- ""
            output <- file(output, open = "w", encoding = encoding)
        }
        lines <- c(paste("###", sprintf("R code from vignette source '%s'", 
            file)), "")
        writeLines(lines, output)
    }
    else {
        if (!quiet) 
            cat("Writing chunks to files ...\n")
        output <- NULL
    }
    options <- list(split = split, prefix = TRUE, prefix.string = prefix.string, 
        engine = "R", eval = TRUE, show.line.nos = FALSE)
    options$.defaults <- options
    options[names(dots)] <- dots
    options <- RweaveLatexOptions(options)
    list(output = output, annotate = annotate, options = options, 
        chunkout = list(), quiet = quiet, syntax = syntax, drop.evalFALSE = drop.evalFALSE)
}
