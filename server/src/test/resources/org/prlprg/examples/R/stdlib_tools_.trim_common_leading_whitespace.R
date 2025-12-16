#? stdlib
`.trim_common_leading_whitespace` <- function (x) 
{
    y <- sub("^([ \t]*).*", "\\1", x)
    n <- nchar(y)
    if (any(n == 0)) 
        return(x)
    i <- grep("\t", y, fixed = TRUE)
    if (length(i)) {
        wids <- vapply(strsplit(y[i], ""), function(e) {
            p <- which(e == "\t")
            d <- diff(c(0, p))
            sum(d + 8 - (d%%8)) + length(e) - p[length(p)]
        }, 0)
        x[i] <- paste0(strrep(" ", wids), substring(x[i], n[i] + 
            1L))
        n[i] <- wids
    }
    substring(x, min(n) + 1L)
}
