#? stdlib
`.make_numeric_version` <- function (x, strict = TRUE, regexp, classes = NULL) 
{
    nms <- names(x)
    if (!length(x)) {
        y <- list()
    }
    else {
        if (!is.character(x)) {
            msg <- gettextf("invalid non-character version specification 'x' (type: %s)", 
                typeof(x))
            stop(msg, domain = NA)
        }
        x <- as.character(x)
        y <- rep.int(list(integer()), length(x))
        valid_numeric_version_regexp <- sprintf("^%s$", regexp)
        ok <- grepl(valid_numeric_version_regexp, x)
        if (strict && !all(i <- (ok | is.na(x)))) 
            stop(gettextf("invalid version specification %s", 
                paste(sQuote(unique(x[!i])), collapse = ", ")), 
                call. = FALSE, domain = NA)
        y[ok] <- lapply(strsplit(x[ok], "[.-]"), as.integer)
    }
    names(y) <- nms
    class(y) <- unique(c(classes, "numeric_version"))
    y
}
