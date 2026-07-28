#? stdlib
`na.omit.ts` <- function (object, ...) 
{
    tm <- time(object)
    xfreq <- frequency(object)
    if (is.matrix(object)) 
        good <- which(apply(!is.na(object), 1L, all))
    else good <- which(!is.na(object))
    if (!length(good)) 
        stop("all times contain an NA")
    omit <- integer()
    n <- NROW(object)
    st <- min(good)
    if (st > 1) 
        omit <- c(omit, 1L:(st - 1))
    en <- max(good)
    if (en < n) 
        omit <- c(omit, (en + 1):n)
    cl <- attr(object, "class")
    if (length(omit)) {
        object <- if (is.matrix(object)) 
            object[st:en, ]
        else object[st:en]
        attr(omit, "class") <- "omit"
        attr(object, "na.action") <- omit
        tsp(object) <- c(tm[st], tm[en], xfreq)
        if (!is.null(cl)) 
            class(object) <- cl
    }
    if (anyNA(object)) 
        stop("time series contains internal NAs")
    object
}
