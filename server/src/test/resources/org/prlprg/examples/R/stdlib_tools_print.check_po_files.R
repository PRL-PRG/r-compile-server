#? stdlib
`print.check_po_files` <- function (x, ...) 
{
    if (!nrow(x)) 
        cat("No errors\n")
    else for (i in 1:nrow(x)) {
        cols <- if (is.na(x[i, 2L])) 
            c(1L, 3:5)
        else 1:5
        cat(x[i, cols], sep = "\n")
        cat("\n")
    }
}
