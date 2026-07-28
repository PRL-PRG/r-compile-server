#? stdlib
`.Rd_drop_nodes_with_tags` <- function (x, tags) 
{
    recurse <- function(e) {
        if (is.list(e)) {
            a <- attributes(e)
            e <- lapply(e[is.na(match(RdTags(e), tags))], recurse)
            attributes(e) <- a
        }
        e
    }
    recurse(x)
}
