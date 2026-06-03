#? stdlib
`duplicated.numeric_version` <- function (x, incomparables = FALSE, ...) 
{
    x <- unclass(x)
    lens <- lengths(x, use.names = FALSE)
    need <- max(lens) - lens
    for (i in which((lens > 0) & (need > 0))) x[[i]] <- c(x[[i]], 
        rep.int(0L, need[i]))
    NextMethod("duplicated")
}
