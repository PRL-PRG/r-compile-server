#? stdlib
`aperm.table` <- function (a, perm = NULL, resize = TRUE, keep.class = TRUE, ...) 
{
    r <- aperm.default(a, perm, resize = resize)
    if (keep.class) 
        class(r) <- class(a)
    r
}
