#? stdlib
`simplify2array` <- function (x, higher = TRUE, except = c(0L, 1L)) 
{
    if (!length(x)) 
        return(x)
    if (length(common.len <- unique(lengths(x))) > 1L) 
        return(x)
    except <- as.integer(except)
    except <- except[except <= 1L]
    if ((common.len == 1L) && (1L %in% except)) {
        n <- length(x)
        r <- unlist(x, recursive = FALSE)
        if (length(r) == n) 
            r
        else x
    }
    else if (!(common.len %in% except)) {
        n <- length(x)
        r <- unlist(x, recursive = FALSE, use.names = FALSE)
        if (is.null(r)) 
            x
        else if (higher && length(c.dim <- unique(lapply(x, dim))) == 
            1 && is.numeric(c.dim <- c.dim[[1L]]) && prod(d <- c(c.dim, 
            n)) == length(r)) {
            iN1 <- is.null(n1 <- dimnames(x[[1L]]))
            n2 <- names(x)
            dnam <- if (!(iN1 && is.null(n2))) 
                c(if (iN1) rep.int(list(n1), length(c.dim)) else n1, 
                  list(n2))
            array(r, dim = d, dimnames = dnam)
        }
        else if (prod(d <- c(common.len, n)) == length(r)) 
            array(r, dim = d, dimnames = if (!(is.null(n1 <- names(x[[1L]])) & 
                is.null(n2 <- names(x)))) 
                list(n1, n2))
        else x
    }
    else x
}
