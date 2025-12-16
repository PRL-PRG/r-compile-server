#? stdlib
`readCitationFile` <- function (file, meta = NULL) 
{
    meta <- as.list(meta)
    exprs <- tools:::.parse_CITATION_file(file, meta$Encoding)
    rval <- list()
    mheader <- NULL
    mfooter <- NULL
    envir <- new.env(hash = TRUE)
    assign("meta", meta, envir = envir)
    for (expr in exprs) {
        x <- eval(expr, envir = envir)
        if (inherits(x, "bibentry")) 
            rval <- c(rval, list(x))
    }
    rlen <- length(rval)
    if (rlen == 1L) 
        rval <- rval[[1L]]
    else if (rlen > 1L) 
        rval <- do.call(c, rval)
    .citation(rval, meta$Package)
}
