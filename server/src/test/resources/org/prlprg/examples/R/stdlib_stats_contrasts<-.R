#? stdlib
`contrasts<-` <- function (x, how.many = NULL, value) 
{
    if (is.logical(x)) 
        x <- factor(x, levels = c(FALSE, TRUE))
    if (!is.factor(x)) 
        stop("contrasts apply only to factors")
    if (nlevels(x) < 2L) 
        stop("contrasts can be applied only to factors with 2 or more levels")
    if (is.function(value)) 
        value <- value(levels(x))
    if ((is.n <- is.numeric(value)) || (isS4(value) && methods::is(value, 
        "Matrix"))) {
        if (is.n) 
            value <- as.matrix(value)
        nlevs <- nlevels(x)
        if (nrow(value) != nlevs) 
            stop("wrong number of contrast matrix rows")
        n1 <- if (missing(how.many) || is.null(how.many)) 
            nlevs - 1L
        else how.many
        nc <- ncol(value)
        rownames(value) <- levels(x)
        if (nc < n1) {
            if (!is.n) 
                value <- as.matrix(value)
            cm <- qr(cbind(1, value))
            if (cm$rank != nc + 1) 
                stop("singular contrast matrix")
            cm <- qr.qy(cm, diag(nlevs))[, 2L:nlevs]
            cm[, 1L:nc] <- value
            dimnames(cm) <- list(levels(x), NULL)
            if (!is.null(nmcol <- dimnames(value)[[2L]])) 
                dimnames(cm)[[2L]] <- c(nmcol, rep.int("", n1 - 
                  nc))
        }
        else cm <- value[, 1L:n1, drop = FALSE]
    }
    else if (is.character(value)) 
        cm <- value
    else if (is.null(value)) 
        cm <- NULL
    else stop("numeric contrasts or contrast name expected")
    attr(x, "contrasts") <- cm
    x
}
