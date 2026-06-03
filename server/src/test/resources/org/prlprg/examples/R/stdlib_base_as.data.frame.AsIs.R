#? stdlib
`as.data.frame.AsIs` <- function (x, row.names = NULL, optional = FALSE, ...) 
{
    if (length(dim(x)) == 2L) 
        as.data.frame.model.matrix(x, row.names, optional)
    else {
        nrows <- length(x)
        nm <- deparse1(substitute(x))
        if (is.null(row.names)) {
            autoRN <- FALSE
            if (nrows == 0L) 
                row.names <- character()
            else if (length(row.names <- names(x)) == nrows && 
                !anyDuplicated(row.names)) {
            }
            else {
                autoRN <- TRUE
                row.names <- .set_row_names(nrows)
            }
        }
        else autoRN <- is.integer(row.names) && length(row.names) == 
            2L && is.na(rn1 <- row.names[[1L]]) && rn1 < 0
        value <- list(x)
        if (!optional) 
            names(value) <- nm
        class(value) <- "data.frame"
        attr(value, "row.names") <- row.names
        value
    }
}
