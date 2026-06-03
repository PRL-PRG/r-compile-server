#? stdlib
`.Rd_find_nodes_with_tags` <- function (x, tags) 
{
    nodes <- list()
    recurse <- function(e) {
        if (any(attr(e, "Rd_tag") == tags)) 
            nodes <<- c(nodes, list(e))
        if (is.list(e)) 
            lapply(e, recurse)
    }
    lapply(x, recurse)
    nodes
}
