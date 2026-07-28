#? stdlib
`print.packageIQR` <- function (x, ...) 
{
    db <- x$results
    out <- if (nrow(db) > 0L) 
        lapply(split(seq_len(nrow(db)), db[, "Package"]), function(ind) db[ind, 
            c("Item", "Title"), drop = FALSE])
    outFile <- tempfile("RpackageIQR")
    outConn <- file(outFile, open = "w")
    first <- TRUE
    for (pkg in names(out)) {
        writeLines(paste0(ifelse(first, "", "\n"), x$title, " in package ", 
            sQuote(pkg), ":\n"), outConn)
        writeLines(formatDL(out[[pkg]][, "Item"], out[[pkg]][, 
            "Title"]), outConn)
        first <- FALSE
    }
    if (first) {
        close(outConn)
        unlink(outFile)
        writeLines(paste("no", tolower(x$title), "found"))
        if (!is.null(x$footer)) 
            writeLines(c("", x$footer))
    }
    else {
        if (!is.null(x$footer)) 
            writeLines(c("\n", x$footer), outConn)
        close(outConn)
        file.show(outFile, delete.file = TRUE, title = paste("R", 
            tolower(x$title)))
    }
    invisible(x)
}
