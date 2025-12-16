#? stdlib
`summary.POSIXct` <- function (object, digits = 15L, ...) 
{
    x <- summary.default(unclass(object), digits = digits, ...)
    if (m <- match("NA's", names(x), 0L)) {
        NAs <- as.integer(x[m])
        x <- x[-m]
        attr(x, "NAs") <- NAs
    }
    .POSIXct(x, tz = attr(object, "tzone"), cl = c("summaryDefault", 
        "table", oldClass(object)))
}
