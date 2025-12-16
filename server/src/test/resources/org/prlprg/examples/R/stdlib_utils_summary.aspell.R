#? stdlib
`summary.aspell` <- function (object, ...) 
{
    words <- sort(unique(object$Original))
    if (length(words)) {
        writeLines("Possibly misspelled words:")
        print(words)
    }
    invisible(words)
}
