#? stdlib
`as.data.frame.list` <- function (x, row.names = NULL, optional = FALSE, ..., cut.names = FALSE, 
    col.names = names(x), fix.empty.names = TRUE, new.names = !missing(col.names), 
    check.names = !optional, stringsAsFactors = FALSE) 
{
    if (cut.names) {
        maxL <- if (is.logical(cut.names)) 
            256L
        else as.integer(cut.names)
        if (any(long <- nchar(col.names, "bytes", keepNA = FALSE) > 
            maxL)) 
            col.names[long] <- paste(substr(col.names[long], 
                1L, maxL - 6L), "...")
        else cut.names <- FALSE
    }
    m <- match(names(formals(data.frame))[-1L], col.names, 0L)
    if (any.m <- any(m)) 
        col.names[m] <- paste0("..adfl.", col.names[m])
    if (new.names || any.m || cut.names) 
        names(x) <- col.names
    alis <- c(list(check.names = check.names, fix.empty.names = fix.empty.names, 
        stringsAsFactors = stringsAsFactors), if (!missing(row.names)) list(row.names = row.names))
    x <- do.call(data.frame, c(x, alis))
    if (new.names && !check.names && length(names(x)) == length(col.names) && 
        any(naNm <- is.na(col.names))) 
        names(x)[naNm] <- col.names[naNm]
    if (any.m) 
        names(x) <- sub("^\\.\\.adfl\\.", "", names(x))
    x
}
