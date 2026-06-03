#? stdlib
`$<-.data.frame` <- function (x, name, value) 
{
    cl <- oldClass(x)
    class(x) <- NULL
    nrows <- .row_names_info(x, 2L)
    if (!is.null(value)) {
        N <- NROW(value)
        if (N > nrows) 
            stop(sprintf(ngettext(N, "replacement has %d row, data has %d", 
                "replacement has %d rows, data has %d"), N, nrows), 
                domain = NA)
        if (N < nrows) 
            if (N > 0L && (nrows%%N == 0L) && length(dim(value)) <= 
                1L) 
                value <- rep(value, length.out = nrows)
            else stop(sprintf(ngettext(N, "replacement has %d row, data has %d", 
                "replacement has %d rows, data has %d"), N, nrows), 
                domain = NA)
        if (is.atomic(value) && !is.null(names(value))) 
            names(value) <- NULL
    }
    x[[name]] <- value
    class(x) <- cl
    return(x)
}
