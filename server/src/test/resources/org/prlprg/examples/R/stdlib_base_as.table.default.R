#? stdlib
`as.table.default` <- function (x, ...) 
{
    if (is.table(x)) 
        return(x)
    else if (is.array(x) || is.numeric(x)) {
        x <- as.array(x)
        structure(class = c("table", oldClass(x)), provideDimnames(x))
    }
    else stop("cannot coerce to a table")
}
