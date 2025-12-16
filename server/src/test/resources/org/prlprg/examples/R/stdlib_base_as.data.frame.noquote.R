#? stdlib
`as.data.frame.noquote` <- function (x, row.names = NULL, optional = FALSE, ..., nm = deparse1(substitute(x))) 
{
    if ((sys.nframe() <= 1L || !(identical(sys.function(-1L), 
        as.data.frame) || (.isMethodsDispatchOn() && methods::is(sys.function(-1L), 
        "derivedDefaultMethod") && identical(sys.function(-1L)@generic, 
        structure("as.data.frame", package = "base")))))) 
        .Deprecated(msg = gettextf("Direct call of '%s()' is deprecated.  Use '%s()' or '%s()' instead", 
            "as.data.frame.noquote", "as.data.frame.vector", 
            "as.data.frame"))
    force(nm)
    nrows <- length(x)
    if (is.null(row.names)) {
        if (nrows == 0L) 
            row.names <- character()
        else if (length(row.names <- names(x)) != nrows || anyDuplicated(row.names)) 
            row.names <- .set_row_names(nrows)
    }
    else if (!(is.character(row.names) || is.integer(row.names)) || 
        length(row.names) != nrows) 
        stop(gettextf("'row.names' is not a character or integer vector of length %d", 
            nrows), domain = NA)
    if (!is.null(names(x))) 
        names(x) <- NULL
    value <- list(x)
    if (!optional) 
        names(value) <- nm
    structure(value, row.names = row.names, class = "data.frame")
}
