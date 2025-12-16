#? stdlib
`print.packageDescription` <- function (x, abbrCollate = 0.8 * getOption("width"), ...) 
{
    xx <- x
    xx[] <- lapply(xx, function(x) if (is.na(x)) 
        "NA"
    else x)
    if (abbrCollate > 0 && any(names(xx) == "Collate")) {
        wrds <- strsplit(xx$Collate, "[ \t\n]")[[1L]]
        if (n <- length(wrds)) {
            k <- sum((cumsum(nchar(wrds, "w")) + seq.int(0, n - 
                1)) <= abbrCollate)
            if (k < n) 
                xx$Collate <- paste(c(wrds[seq_len(k)], "....."), 
                  collapse = " ")
        }
    }
    write.dcf(as.data.frame.list(xx, optional = TRUE))
    cat("\n-- File:", attr(x, "file"), "\n")
    if (!is.null(attr(x, "fields"))) {
        cat("-- Fields read: ")
        cat(attr(x, "fields"), sep = ", ")
        cat("\n")
    }
    invisible(x)
}
