#? stdlib
`de` <- function (..., Modes = list(), Names = NULL) 
{
    sdata <- list(...)
    snames <- as.character(substitute(list(...))[-1L])
    if (is.null(sdata)) {
        if (is.null(Names)) {
            odata <- vector("list", length = max(1, length(Modes)))
        }
        else {
            if ((length(Names) != length(Modes)) && length(Modes)) {
                warning("'modes' argument ignored")
                Modes <- list()
            }
            odata <- vector("list", length = length(Names))
            names(odata) <- Names
        }
        ncols <- rep.int(1, length(odata))
        coltypes <- rep.int(1, length(odata))
    }
    else {
        ncols <- de.ncols(sdata)
        coltypes <- ncols[, 2L]
        ncols <- ncols[, 1]
        odata <- de.setup(sdata, snames, ncols)
        if (length(Names)) 
            if (length(Names) != length(odata)) 
                warning("'names' argument ignored")
            else names(odata) <- Names
        if (length(Modes)) 
            if (length(Modes) != length(odata)) {
                warning("'modes' argument ignored")
                Modes <- list()
            }
    }
    rdata <- dataentry(odata, as.list(Modes))
    if (any(coltypes != 1L)) {
        if (length(rdata) == sum(ncols)) 
            rdata <- de.restore(rdata, ncols, coltypes, snames, 
                sdata)
        else warning("could not restore variables properly")
    }
    return(rdata)
}
