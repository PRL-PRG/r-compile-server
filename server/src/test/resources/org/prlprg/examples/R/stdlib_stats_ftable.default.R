#? stdlib
`ftable.default` <- function (..., exclude = c(NA, NaN), row.vars = NULL, col.vars = NULL) 
{
    args <- list(...)
    if (length(args) == 0L) 
        stop("nothing to tabulate")
    x <- args[[1L]]
    if (is.list(x)) 
        x <- table(x, exclude = exclude)
    else if (inherits(x, "ftable") || (arr2 <- is.array(x) && 
        (length(dim(x)) > 1L))) {
        x <- as.table(x)
    }
    else if (!arr2) {
        x <- table(..., exclude = exclude)
    }
    dn <- dimnames(x)
    dx <- dim(x)
    n <- length(dx)
    if (!is.null(row.vars)) {
        if (is.character(row.vars)) {
            i <- pmatch(row.vars, names(dn))
            if (anyNA(i)) 
                stop("incorrect specification for 'row.vars'")
            row.vars <- i
        }
        else if (any((row.vars < 1) | (row.vars > n))) 
            stop("incorrect specification for 'row.vars'")
    }
    if (!is.null(col.vars)) {
        if (is.character(col.vars)) {
            i <- pmatch(col.vars, names(dn))
            if (anyNA(i)) 
                stop("incorrect specification for 'col.vars'")
            col.vars <- i
        }
        else if (any((col.vars < 1) | (col.vars > n))) 
            stop("incorrect specification for 'col.vars'")
    }
    i <- 1:n
    if (!is.null(row.vars) && !is.null(col.vars)) {
        all.vars <- sort(c(row.vars, col.vars))
        if ((p <- length(all.vars)) < n) {
            x <- if (p) 
                apply(x, all.vars, sum)
            else sum(x)
            row.vars <- match(row.vars, all.vars)
            col.vars <- match(col.vars, all.vars)
            dn <- dn[all.vars]
            dx <- dx[all.vars]
        }
    }
    else if (!is.null(row.vars)) 
        col.vars <- if (length(row.vars)) 
            i[-row.vars]
        else i
    else if (!is.null(col.vars)) 
        row.vars <- if (length(col.vars)) 
            i[-col.vars]
        else i
    else {
        row.vars <- seq_len(n - 1)
        col.vars <- n
    }
    if (length(perm <- c(rev(row.vars), rev(col.vars))) > 1) 
        x <- aperm(x, perm)
    dim(x) <- c(prod(dx[row.vars]), prod(dx[col.vars]))
    attr(x, "row.vars") <- dn[row.vars]
    attr(x, "col.vars") <- dn[col.vars]
    class(x) <- "ftable"
    x
}
