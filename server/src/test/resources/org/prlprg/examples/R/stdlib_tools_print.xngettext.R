#? stdlib
`print.xngettext` <- function (x, ...) 
{
    lapply(x, function(x) {
        e <- encodeString(x)
        cat("\nmsgid        = ", e[1L], "\nmsgid_plural = ", 
            e[2L], "\n", sep = "")
    })
    invisible(x)
}
