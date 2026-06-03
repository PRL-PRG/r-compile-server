#? stdlib
`print.fileSnapshot` <- function (x, verbose = FALSE, ...) 
{
    cat("File snapshot:\n path = ", x$path, "\n timestamp = ", 
        x$timestamp, "\n file.info = ", x$file.info, "\n md5sum = ", 
        x$md5sum, "\n digest = ", deparse(x$digest, control = NULL), 
        "\n full.names = ", x$full.names, "\n args = ", deparse(x$args, 
            control = NULL), "\n ", nrow(x$info), " files recorded.\n", 
        sep = "")
    if (verbose) {
        if (ncol(x$info)) 
            print(x$info)
        else cat("Files:", rownames(x$info), sep = "\n ")
    }
    invisible(x)
}
