#? stdlib
`.as.roman` <- function (x, check.range = TRUE) 
{
    if (is.integer(x)) {
    }
    else if (is.double(x) || is.logical(x)) 
        x <- as.integer(x)
    else if (is.character(x)) {
        x <- if (all(dig.x <- !nzchar(x) | is.na(x) | grepl("^[[:digit:]]+$", 
            x))) 
            as.integer(x)
        else if (any(dig.x)) {
            r <- suppressWarnings(as.integer(x))
            r[!dig.x] <- .roman2numeric(x[!dig.x])
            r
        }
        else .roman2numeric(x)
    }
    else stop("cannot coerce 'x' to roman")
    if (check.range) 
        x[x <= 0L | x >= 4000L] <- NA
    class(x) <- "roman"
    x
}
