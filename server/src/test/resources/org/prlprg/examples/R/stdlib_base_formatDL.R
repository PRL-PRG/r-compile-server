#? stdlib
`formatDL` <- function (x, y, style = c("table", "list"), width = 0.9 * getOption("width"), 
    indent = NULL) 
{
    if (is.list(x)) {
        if (length(x) == 2L && diff(lengths(x)) == 0L) {
            y <- x[[2L]]
            x <- x[[1L]]
        }
        else stop("incorrect value for 'x'")
    }
    else if (is.matrix(x)) {
        if (NCOL(x) == 2L) {
            y <- x[, 2L]
            x <- x[, 1L]
        }
        else stop("incorrect value for 'x'")
    }
    else if (missing(y) && !is.null(nms <- names(x))) {
        y <- x
        x <- nms
    }
    else if (length(x) != length(y)) 
        stop("'x' and 'y' must have the same length")
    x <- as.character(x)
    if (!length(x)) 
        return(x)
    y <- as.character(y)
    style <- match.arg(style)
    if (is.null(indent)) 
        indent <- switch(style, table = width/3, list = width/9)
    indent <- min(indent, 0.5 * width)
    indentString <- strrep(" ", indent)
    if (style == "table") {
        i <- (nchar(x, type = "w") > indent - 3L)
        if (any(i)) 
            x[i] <- paste0(x[i], "\n", indentString)
        i <- !i
        if (any(i)) 
            x[i] <- formatC(x[i], width = indent, flag = "-")
        y <- lapply(strwrap(y, width = width - indent, simplify = FALSE), 
            paste, collapse = paste0("\n", indentString))
        r <- paste0(x, unlist(y))
    }
    else if (style == "list") {
        y <- strwrap(paste0(x, ": ", y), exdent = indent, width = width, 
            simplify = FALSE)
        r <- unlist(lapply(y, paste, collapse = "\n"))
    }
    r
}
