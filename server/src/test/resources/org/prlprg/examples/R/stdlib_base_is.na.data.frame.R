#? stdlib
`is.na.data.frame` <- function (x) 
{
    y <- if (length(x)) {
        do.call(cbind, lapply(x, is.na))
    }
    else matrix(FALSE, length(row.names(x)), 0)
    if (.row_names_info(x) > 0L) 
        rownames(y) <- row.names(x)
    y
}
