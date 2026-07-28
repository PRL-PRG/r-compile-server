#? stdlib
`.transitiveExtends` <- function (from, by, byExt, moreExts, strictBy) 
{
    what <- names(moreExts)
    for (i in seq_along(moreExts)) {
        toExt <- moreExts[[i]]
        to <- what[[i]]
        toExt <- .combineExtends(byExt, toExt, by, to, strictBy)
        moreExts[[i]] <- toExt
    }
    moreExts
}
