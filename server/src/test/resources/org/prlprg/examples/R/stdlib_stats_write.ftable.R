#? stdlib
`write.ftable` <- function (x, file = "", quote = TRUE, append = FALSE, digits = getOption("digits"), 
    sep = " ", ...) 
{
    r <- format.ftable(x, quote = quote, digits = digits, ...)
    cat(t(r), file = file, append = append, sep = c(rep(sep, 
        ncol(r) - 1L), "\n"))
    invisible(x)
}
