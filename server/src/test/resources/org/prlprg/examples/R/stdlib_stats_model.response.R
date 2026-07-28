#? stdlib
`model.response` <- function (data, type = "any") 
{
    if (attr(attr(data, "terms"), "response")) {
        if (is.list(data) || is.data.frame(data)) {
            v <- data[[1L]]
            if (type == "numeric" && is.factor(v)) {
                warning("using type = \"numeric\" with a factor response will be ignored")
            }
            else if (type == "numeric" || type == "double") 
                storage.mode(v) <- "double"
            else if (type != "any") 
                stop("invalid response type")
            if (is.matrix(v) && ncol(v) == 1L) 
                dim(v) <- NULL
            if (is.object(v) && inherits(v, "AsIs")) 
                v <- unclass(v)
            rows <- attr(data, "row.names")
            if (nrows <- length(rows)) {
                if (length(v) == nrows) 
                  names(v) <- rows
                else if (length(dd <- dim(v)) == 2L) 
                  if (dd[1L] == nrows && !length((dn <- dimnames(v))[[1L]])) 
                    dimnames(v) <- list(rows, dn[[2L]])
            }
            return(v)
        }
        else stop("invalid 'data' argument")
    }
    else return(NULL)
}
