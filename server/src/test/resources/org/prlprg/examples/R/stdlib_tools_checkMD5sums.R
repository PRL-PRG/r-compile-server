#? stdlib
`checkMD5sums` <- function (package, dir) 
{
    if (missing(dir)) 
        dir <- find.package(package, quiet = TRUE)
    if (length(dir) != 1L) 
        return(NA)
    md5file <- file.path(dir, "MD5")
    if (!file.exists(md5file)) 
        return(NA)
    inlines <- readLines(md5file)
    xx <- sub("^([0-9a-fA-F]*)(.*)", "\\1", inlines)
    nmxx <- names(xx) <- sub("^[0-9a-fA-F]* [ |*](.*)", "\\1", 
        inlines)
    dot <- getwd()
    if (is.null(dot)) 
        stop("current working directory cannot be ascertained")
    setwd(dir)
    x <- md5sum(dir(dir, recursive = TRUE))
    setwd(dot)
    x <- x[names(x) != "MD5"]
    nmx <- names(x)
    res <- TRUE
    not.here <- (nmxx %notin% nmx)
    if (any(not.here)) {
        res <- FALSE
        if (sum(not.here) > 1L) 
            cat("files", paste(sQuote(nmxx[not.here]), collapse = ", "), 
                "are missing\n", sep = " ")
        else cat("file", sQuote(nmxx[not.here]), "is missing\n", 
            sep = " ")
    }
    nmxx <- nmxx[!not.here]
    diff <- xx[nmxx] != x[nmxx]
    if (any(diff)) {
        res <- FALSE
        files <- nmxx[diff]
        if (length(files) > 1L) 
            cat("files", paste(sQuote(files), collapse = ", "), 
                "have the wrong MD5 checksums\n", sep = " ")
        else cat("file", sQuote(files), "has the wrong MD5 checksum\n")
    }
    res
}
