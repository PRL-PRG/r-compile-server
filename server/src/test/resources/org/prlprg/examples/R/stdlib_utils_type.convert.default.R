#? stdlib
`type.convert.default` <- function (x, na.strings = "NA", as.is, dec = ".", numerals = c("allow.loss", 
    "warn.loss", "no.loss"), tryLogical = TRUE, ...) 
{
    if (is.array(x)) 
        storage.mode(x) <- "character"
    else x <- as.character(x)
    if (missing(as.is)) {
        warning("'as.is' should be specified by the caller; using TRUE")
        as.is <- TRUE
    }
    .External2(C_typeconvert, x, na.strings, as.is, dec, match.arg(numerals), 
        tryLogical)
}
