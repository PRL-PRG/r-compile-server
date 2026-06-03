#? stdlib
`[<-.POSIXlt` <- function (x, i, j, value) 
{
    if (!(mj <- missing(j))) 
        if (!is.character(j) || (length(j) != 1L)) 
            stop("component subscript must be a character string")
    if (!length(value)) 
        return(x)
    if ((mi <- missing(i)) && mj) 
        return(as.POSIXlt(value))
    cl <- oldClass(x)
    x <- unCfillPOSIXlt(x)
    if (mi) {
        x[[j]] <- value
    }
    else {
        ici <- is.character(i)
        nms <- names(x$year)
        if (mj) {
            value <- unclass(as.POSIXlt(value))
            if (ici) {
                for (n in names(x)) names(x[[n]]) <- nms
            }
            for (n in names(x)) x[[n]][i] <- value[[n]]
        }
        else {
            if (ici) {
                names(x[[j]]) <- nms
            }
            x[[j]][i] <- value
        }
    }
    class(x) <- cl
    x
}
