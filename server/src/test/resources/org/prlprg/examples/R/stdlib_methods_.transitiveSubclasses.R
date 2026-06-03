#? stdlib
`.transitiveSubclasses` <- function (by, to, toExt, moreExts, strictBy) 
{
    for (i in seq_along(moreExts)) {
        byExt <- moreExts[[i]]
        byExt <- .combineExtends(byExt, toExt, by, to, strictBy)
        moreExts[[i]] <- byExt
    }
    moreExts
}
