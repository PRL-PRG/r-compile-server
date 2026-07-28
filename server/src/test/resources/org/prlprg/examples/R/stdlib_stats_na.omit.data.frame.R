#? stdlib
`na.omit.data.frame` <- function (object, ...) 
{
    n <- length(object)
    omit <- logical(nrow(object))
    vars <- seq_len(n)
    for (j in vars) {
        x <- object[[j]]
        if (!is.atomic(x)) 
            next
        x <- is.na(x)
        d <- dim(x)
        if (is.null(d) || length(d) != 2L) 
            omit <- omit | x
        else for (ii in 1L:d[2L]) omit <- omit | x[, ii]
    }
    xx <- object[!omit, , drop = FALSE]
    if (any(omit > 0L)) {
        temp <- setNames(seq(omit)[omit], attr(object, "row.names")[omit])
        attr(temp, "class") <- "omit"
        attr(xx, "na.action") <- temp
    }
    xx
}
