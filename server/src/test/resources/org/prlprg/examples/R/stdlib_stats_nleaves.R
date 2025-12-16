#? stdlib
`nleaves` <- function (node) 
{
    if (is.leaf(node)) 
        return(1L)
    todo <- NULL
    count <- 0L
    repeat {
        while (length(node)) {
            child <- node[[1L]]
            node <- node[-1L]
            if (is.leaf(child)) {
                count <- count + 1L
            }
            else {
                todo <- list(node = child, todo = todo)
            }
        }
        if (is.null(todo)) {
            break
        }
        else {
            node <- todo$node
            todo <- todo$todo
        }
    }
    count
}
