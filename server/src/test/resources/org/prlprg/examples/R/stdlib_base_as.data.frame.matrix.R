#? stdlib
`as.data.frame.matrix` <- function (x, row.names = NULL, optional = FALSE, make.names = TRUE, 
    ..., stringsAsFactors = FALSE) 
{
    d <- dim(x)
    nrows <- d[[1L]]
    ncols <- d[[2L]]
    ic <- seq_len(ncols)
    dn <- dimnames(x)
    if (is.null(row.names)) 
        row.names <- dn[[1L]]
    collabs <- dn[[2L]]
    if (any(empty <- !nzchar(collabs))) 
        collabs[empty] <- paste0("V", ic)[empty]
    value <- vector("list", ncols)
    if (mode(x) == "character" && stringsAsFactors) {
        for (i in ic) value[[i]] <- as.factor(x[, i])
    }
    else {
        for (i in ic) value[[i]] <- as.vector(x[, i])
    }
    autoRN <- (is.null(row.names) || length(row.names) != nrows)
    if (length(collabs) == ncols) 
        names(value) <- collabs %||% character()
    else if (!optional) 
        names(value) <- paste0("V", ic)
    class(value) <- "data.frame"
    if (autoRN) 
        attr(value, "row.names") <- .set_row_names(nrows)
    else .rowNamesDF(value, make.names = make.names) <- row.names
    value
}
