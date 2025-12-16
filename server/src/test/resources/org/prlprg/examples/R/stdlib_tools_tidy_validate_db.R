#? stdlib
`tidy_validate_db` <- function (x, paths = NULL, ignore = character()) 
{
    if (!is.null(paths)) 
        names(x) <- paths
    i <- vapply(x, inherits, NA, "error")
    e <- x[i]
    x <- Filter(length, x[!i])
    if (!length(x) && !length(e)) 
        return(NULL)
    y <- do.call(rbind, x)
    if (is.null(y)) {
        y <- list()
    }
    else {
        y <- cbind(path = rep.int(names(x), vapply(x, nrow, 0)), 
            y)
        if (length(ignore)) {
            y <- y[y[, "msg"] %notin% ignore, , drop = FALSE]
        }
    }
    if (length(e)) 
        attr(y, "errors") <- e
    y
}
