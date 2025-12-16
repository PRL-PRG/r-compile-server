#? stdlib
`as.data.frame.data.frame` <- function (x, row.names = NULL, ...) 
{
    cl <- oldClass(x)
    i <- match("data.frame", cl)
    if (i > 1L) 
        class(x) <- cl[-(1L:(i - 1L))]
    if (!is.null(row.names)) {
        nr <- .row_names_info(x, 2L)
        if (length(row.names) == nr) 
            attr(x, "row.names") <- row.names
        else stop(sprintf(ngettext(nr, "invalid 'row.names', length %d for a data frame with %d row", 
            "invalid 'row.names', length %d for a data frame with %d rows"), 
            length(row.names), nr), domain = NA)
    }
    x
}
