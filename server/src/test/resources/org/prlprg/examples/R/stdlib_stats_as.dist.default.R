#? stdlib
`as.dist.default` <- function (m, diag = FALSE, upper = FALSE) 
{
    if (inherits(m, "dist")) 
        ans <- m
    else {
        m <- as.matrix(m)
        if (!is.numeric(m)) 
            storage.mode(m) <- "numeric"
        p <- nrow(m)
        if (ncol(m) != p) 
            warning("non-square matrix")
        ans <- m[row(m) > col(m)]
        attributes(ans) <- NULL
        if (!is.null(rownames(m))) 
            attr(ans, "Labels") <- rownames(m)
        else if (!is.null(colnames(m))) 
            attr(ans, "Labels") <- colnames(m)
        attr(ans, "Size") <- p
        attr(ans, "call") <- match.call()
        class(ans) <- "dist"
    }
    if (is.null(attr(ans, "Diag")) || !missing(diag)) 
        attr(ans, "Diag") <- diag
    if (is.null(attr(ans, "Upper")) || !missing(upper)) 
        attr(ans, "Upper") <- upper
    ans
}
