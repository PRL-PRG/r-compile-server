#? stdlib
`summary.factor` <- function (object, maxsum = 100L, ...) 
{
    nas <- is.na(object)
    ll <- levels(object)
    if (ana <- any(nas)) 
        maxsum <- maxsum - 1L
    tbl <- table(object)
    tt <- c(tbl)
    names(tt) <- dimnames(tbl)[[1L]]
    if (length(ll) > maxsum) {
        drop <- maxsum:length(ll)
        o <- sort.list(tt, decreasing = TRUE)
        tt <- c(tt[o[-drop]], `(Other)` = sum(tt[o[drop]]))
    }
    if (ana) 
        c(tt, `NA's` = sum(nas))
    else tt
}
