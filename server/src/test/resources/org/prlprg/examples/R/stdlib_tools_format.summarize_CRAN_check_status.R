#? stdlib
`format.summarize_CRAN_check_status` <- function (x, header = NA, ...) 
{
    if (is.na(header)) 
        header <- (length(x) > 1L)
    if (header) {
        s <- sprintf("Package: %s", names(x))
        x <- sprintf("%s\n%s\n\n%s", s, gsub(".", "*", s), x)
    }
    x
}
