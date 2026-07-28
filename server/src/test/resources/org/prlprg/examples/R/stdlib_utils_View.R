#? stdlib
`View` <- function (x, title) 
{
    check_screen_device("View()")
    if (missing(title)) 
        title <- paste("Data:", deparse(substitute(x))[1])
    x0 <- as.data.frame(x)
    x <- as.list(format.data.frame(x0))
    rn <- row.names(x0)
    if (any(rn != seq_along(rn))) 
        x <- c(list(row.names = rn), x)
    if (!is.list(x) || !length(x) || !all(vapply(x, is.atomic, 
        NA)) || !max(lengths(x))) 
        stop("invalid 'x' argument")
    if (grepl("darwin", R.version$os)) 
        check_for_XQuartz(file.path(R.home("modules"), "R_de.so"))
    invisible(.External2(C_dataviewer, x, title))
}
