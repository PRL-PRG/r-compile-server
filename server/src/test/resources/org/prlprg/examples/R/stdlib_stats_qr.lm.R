#? stdlib
`qr.lm` <- function (x, ...) 
{
    x$qr %||% stop("lm object does not have a proper 'qr' component.\n Rank zero or should not have used lm(.., qr=FALSE).")
}
