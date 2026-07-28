#? stdlib
`print.data.frame` <- function (x, ..., digits = NULL, quote = FALSE, right = TRUE, 
    row.names = TRUE, max = NULL) 
{
    n <- length(row.names(x))
    if (length(x) == 0L) {
        cat(sprintf(ngettext(n, "data frame with 0 columns and %d row", 
            "data frame with 0 columns and %d rows"), n), "\n", 
            sep = "")
    }
    else if (n == 0L) {
        print.default(names(x), quote = FALSE)
        cat(gettext("<0 rows> (or 0-length row.names)\n"))
    }
    else {
        if (is.null(max)) 
            max <- getOption("max.print", 99999L)
        if (!is.finite(max)) 
            stop("invalid 'max' / getOption(\"max.print\"): ", 
                max)
        omit <- (n0 <- max%/%length(x)) < n
        m <- as.matrix(format.data.frame(if (omit) 
            x[seq_len(n0), , drop = FALSE]
        else x, digits = digits, na.encode = FALSE))
        if (!isTRUE(row.names)) 
            dimnames(m)[[1L]] <- if (isFALSE(row.names)) 
                rep.int("", if (omit) 
                  n0
                else n)
            else row.names
        print(m, ..., quote = quote, right = right, max = max)
        if (omit) 
            cat(" [ reached 'max' / getOption(\"max.print\") -- omitted", 
                n - n0, "rows ]\n")
    }
    invisible(x)
}

# Examples
(dd <- data.frame(x = 1:8, f = gl(2,4), ch = letters[1:8]))
     # print() with defaults
print(dd, quote = TRUE, row.names = FALSE)
     # suppresses row.names and quotes all entries

