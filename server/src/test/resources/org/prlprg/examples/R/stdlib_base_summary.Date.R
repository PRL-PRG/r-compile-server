#? stdlib
`summary.Date` <- function (object, digits = 12L, ...) 
{
    x <- summary.default(unclass(object), digits = digits, ...)
    if (m <- match("NA's", names(x), 0L)) {
        NAs <- as.integer(x[m])
        x <- x[-m]
        attr(x, "NAs") <- NAs
    }
    .Date(x, c("summaryDefault", "table", oldClass(object)))
}
