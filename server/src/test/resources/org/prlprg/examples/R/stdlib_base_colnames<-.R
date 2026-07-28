#? stdlib
`colnames<-` <- function (x, value) 
{
    if (is.data.frame(x)) {
        names(x) <- value
    }
    else {
        dn <- dimnames(x)
        if (is.null(dn)) {
            if (is.null(value)) 
                return(x)
            if ((nd <- length(dim(x))) < 2L) 
                stop("attempt to set 'colnames' on an object with less than two dimensions")
            dn <- vector("list", nd)
        }
        if (length(dn) < 2L) 
            stop("attempt to set 'colnames' on an object with less than two dimensions")
        if (is.null(value)) 
            dn[2L] <- list(NULL)
        else dn[[2L]] <- value
        dimnames(x) <- dn
    }
    x
}
