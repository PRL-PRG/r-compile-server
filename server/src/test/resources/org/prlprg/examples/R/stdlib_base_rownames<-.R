#? stdlib
`rownames<-` <- function (x, value) 
{
    if (is.data.frame(x)) {
        row.names(x) <- value
    }
    else {
        dn <- dimnames(x)
        if (is.null(dn)) {
            if (is.null(value)) 
                return(x)
            if ((nd <- length(dim(x))) < 1L) 
                stop("attempt to set 'rownames' on an object with no dimensions")
            dn <- vector("list", nd)
        }
        if (length(dn) < 1L) 
            stop("attempt to set 'rownames' on an object with no dimensions")
        if (is.null(value)) 
            dn[1L] <- list(NULL)
        else dn[[1L]] <- value
        dimnames(x) <- dn
    }
    x
}
