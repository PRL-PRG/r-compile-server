#? stdlib
`checkPoFiles` <- function (language, dir = ".") 
{
    files <- list.files(path = dir, pattern = paste0(language, 
        "[.]po$"), full.names = TRUE, recursive = TRUE)
    result <- matrix(character(), ncol = 5L, nrow = 0L)
    for (f in files) {
        errs <- checkPoFile(f, strictPlural = startsWith(basename(f), 
            "R-"))
        if (nrow(errs)) 
            result <- rbind(result, errs)
    }
    structure(result, class = "check_po_files")
}

# Examples


