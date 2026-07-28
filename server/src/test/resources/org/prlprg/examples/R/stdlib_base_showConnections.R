#? stdlib
`showConnections` <- function (all = FALSE) 
{
    gc()
    set <- getAllConnections()
    if (!all) 
        set <- set[set > 2L]
    ans <- matrix("", length(set), 7L)
    for (i in seq_along(set)) ans[i, ] <- unlist(summary.connection(set[i]))
    rownames(ans) <- set
    colnames(ans) <- c("description", "class", "mode", "text", 
        "isopen", "can read", "can write")
    if (!all) 
        ans[ans[, 5L] == "opened", , drop = FALSE]
    else ans[, , drop = FALSE]
}

# Examples
showConnections(all = TRUE)


c(isatty(stdin()), isatty(stdout()), isatty(stderr()))

