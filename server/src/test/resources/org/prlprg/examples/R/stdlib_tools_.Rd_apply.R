#? stdlib
`.Rd_apply` <- function (x, f) 
{
    recurse <- function(e) {
        if (is.list(e)) {
            a <- attributes(e)
            e <- lapply(e, f)
            e <- lapply(e[!vapply(e, is.null, NA)], recurse)
            attributes(e) <- a
        }
        e
    }
    recurse(x)
}
