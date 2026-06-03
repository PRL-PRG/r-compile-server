#? stdlib
`print.changedFiles` <- function (x, verbose = FALSE, ...) 
{
    if (length(x$added)) 
        cat("Files added:\n", paste0("  ", x$added, collapse = "\n"), 
            "\n", sep = "")
    if (length(x$deleted)) 
        cat("Files deleted:\n", paste0("  ", x$deleted, collapse = "\n"), 
            "\n", sep = "")
    changes <- x$changes
    if (!verbose) {
        changes <- changes[rowSums(changes, na.rm = TRUE) > 0, 
            , drop = FALSE]
        changes <- changes[, colSums(changes, na.rm = TRUE) > 
            0, drop = FALSE]
    }
    if (verbose || nrow(changes)) {
        cat("File changes:\n")
        print(changes)
    }
    invisible(x)
}
