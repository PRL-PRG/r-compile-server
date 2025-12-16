#? stdlib
`.Rd_find_nodes` <- function (x, predicate) 
{
    nodes <- list()
    recurse <- function(e) {
        if (predicate(e)) 
            nodes <<- c(nodes, list(e))
        if (is.list(e)) 
            lapply(e, recurse)
    }
    lapply(x, recurse)
    nodes
}
