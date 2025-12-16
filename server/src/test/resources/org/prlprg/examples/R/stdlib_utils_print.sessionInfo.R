#? stdlib
`print.sessionInfo` <- function (x, locale = TRUE, tzone = locale, RNG = !identical(x$RNGkind, 
    .RNGdefaults), ...) 
{
    mkLabel <- function(L, n) {
        vers <- sapply(L[[n]], function(x) x[["Version"]])
        pkg <- sapply(L[[n]], function(x) x[["Package"]])
        paste(pkg, vers, sep = "_")
    }
    cat(x$R.version$version.string, "\n", sep = "")
    cat("Platform: ", x$platform, "\n", sep = "")
    if (!is.null(x$running)) 
        cat("Running under: ", x$running, "\n", sep = "")
    cat("\n")
    cat("Matrix products: ", x$matprod, "\n", sep = "")
    blas <- x$BLAS
    if (is.null(blas)) 
        blas <- ""
    lapack <- x$LAPACK
    if (is.null(lapack)) 
        lapack <- ""
    if (blas == lapack && nzchar(blas)) 
        cat("BLAS/LAPACK:", blas)
    else {
        if (nzchar(blas)) 
            cat("BLAS:  ", blas, "\n")
        if (nzchar(lapack)) 
            cat("LAPACK:", lapack)
    }
    if (nzchar(lapack) && nzchar(LAver <- x$LA_version) && !grepl(LAver, 
        lapack, fixed = TRUE)) 
        cat(";  LAPACK version", LAver)
    cat("\n\n")
    if (RNG) {
        cat("Random number generation:\n", "RNG:    ", x$RNGkind[1], 
            "\n", "Normal: ", x$RNGkind[2], "\n", "Sample: ", 
            x$RNGkind[3], "\n", "\n")
    }
    if (locale) {
        cat("locale:\n")
        print(strsplit(x$locale, ";", fixed = TRUE)[[1]], quote = FALSE, 
            ...)
        if (!is.null(x$system.codepage) && x$system.codepage != 
            x$codepage) 
            cat("system code page: ", x$system.codepage, "\n", 
                sep = "")
        cat("\n")
    }
    if (tzone) {
        cat("time zone: ", x$tzone, "\n", sep = "")
        cat("tzcode source: ", x$tzcode_type, "\n", sep = "")
        cat("\n")
    }
    cat("attached base packages:\n")
    print(x$basePkgs, quote = FALSE, ...)
    if (!is.null(x$otherPkgs)) {
        cat("\nother attached packages:\n")
        print(mkLabel(x, "otherPkgs"), quote = FALSE, ...)
    }
    if (!is.null(x$loadedOnly)) {
        cat("\nloaded via a namespace (and not attached):\n")
        print(mkLabel(x, "loadedOnly"), quote = FALSE, ...)
    }
    invisible(x)
}
