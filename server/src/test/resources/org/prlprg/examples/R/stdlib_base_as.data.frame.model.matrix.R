#? stdlib
`as.data.frame.model.matrix` <- function (x, row.names = NULL, optional = FALSE, make.names = TRUE, 
    ...) 
{
    d <- dim(x)
    nrows <- d[[1L]]
    dn <- dimnames(x)
    row.names <- dn[[1L]]
    value <- list(x)
    if (!optional) 
        names(value) <- deparse(substitute(x))[[1L]]
    class(value) <- "data.frame"
    if (!is.null(row.names)) {
        row.names <- as.character(row.names)
        if (length(row.names) != nrows) 
            stop(sprintf(ngettext(length(row.names), "supplied %d row name for %d rows", 
                "supplied %d row names for %d rows"), length(row.names), 
                nrows), domain = NA)
        .rowNamesDF(value, make.names = make.names) <- row.names
    }
    else attr(value, "row.names") <- .set_row_names(nrows)
    value
}
