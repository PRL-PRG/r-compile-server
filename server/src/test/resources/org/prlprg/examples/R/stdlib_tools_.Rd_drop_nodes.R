#? stdlib
`.Rd_drop_nodes` <- function (x, predicate) 
{
    recurse <- function(e) {
        if (is.list(e)) {
            a <- attributes(e)
            e <- lapply(e[!vapply(e, predicate, NA)], recurse)
            attributes(e) <- a
        }
        e
    }
    recurse(x)
}
