#? stdlib
`list2DF` <- function (x = list(), nrow = 0L) 
{
    stopifnot(is.list(x), is.null(nrow) || nrow >= 0L)
    if (n <- length(x)) {
        if (length(nrow <- unique(lengths(x))) > 1L) 
            stop("all variables should have the same length")
    }
    else {
        if (is.null(nrow)) 
            nrow <- 0L
    }
    if (is.null(names(x))) 
        names(x) <- character(n)
    class(x) <- "data.frame"
    attr(x, "row.names") <- .set_row_names(nrow)
    x
}

# Examples
## Create a data frame holding a list of character vectors and the
## corresponding lengths:
x <- list(character(), "A", c("B", "C"))
n <- lengths(x)
list2DF(list(x = x, n = n))

## Create data frames with no variables and the desired number of rows:
list2DF()
list2DF(nrow = 3L)

