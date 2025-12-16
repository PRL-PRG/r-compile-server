#? stdlib
`mode<-` <- function (x, value) 
{
    if (storage.mode(x) == value) 
        return(x)
    if (is.factor(x)) 
        stop("invalid to change the storage mode of a factor")
    atr <- attributes(x)
    isSingle <- !is.null(attr(x, "Csingle"))
    setSingle <- value == "single"
    mde <- get(paste0("as.", value), mode = "function", envir = parent.frame())
    x <- mde(x)
    attributes(x) <- atr
    if (setSingle != isSingle) 
        attr(x, "Csingle") <- if (setSingle) 
            TRUE
    x
}
