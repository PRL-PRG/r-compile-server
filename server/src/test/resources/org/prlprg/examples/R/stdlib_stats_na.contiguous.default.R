#? stdlib
`na.contiguous.default` <- function (object, doTsp = !is.null(attr(object, "tsp")), ...) 
{
    if (!length(object)) 
        return(object)
    tm <- time(object)
    xfreq <- frequency(object)
    if (is.matrix(object)) 
        good <- apply(!is.na(object), 1L, all)
    else good <- !is.na(object)
    if (!sum(good)) 
        stop("all times contain an NA")
    tt <- c(0L, cumsum(!good))
    ln <- sapply(0:max(tt), function(i) sum(tt == i))
    seg <- (seq_along(ln)[ln == max(ln)])[1L] - 1L
    keep <- (tt == seg)[-1L]
    st <- min(which(keep))
    if (!good[st]) 
        st <- st + 1L
    en <- max(which(keep))
    omit <- integer()
    n <- NROW(object)
    if (st > 1L) 
        omit <- c(omit, 1L:(st - 1L))
    if (en < n) 
        omit <- c(omit, (en + 1L):n)
    if (length(omit)) {
        cl <- class(object)
        force(doTsp)
        object <- if (is.matrix(object)) 
            object[st:en, ]
        else object[st:en]
        attr(omit, "class") <- "omit"
        attr(object, "na.action") <- omit
        if (doTsp) 
            tsp(object) <- c(tm[st], tm[en], xfreq)
        if (!is.null(cl)) 
            class(object) <- cl
    }
    object
}
