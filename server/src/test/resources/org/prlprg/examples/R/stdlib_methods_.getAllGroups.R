#? stdlib
`.getAllGroups` <- function (funs) 
{
    start <- length(funs)
    for (i in seq_along(funs)) {
        groups <- funs[[i]]@group
        funs <- c(funs, lapply(groups, function(what) {
            f <- getGeneric(what)
            if (!is.function(f)) stop("failed to find expected group generic function: ", 
                what)
            f
        }))
    }
    if (length(funs) > start) {
        nmore <- length(funs) - start
        more <- Recall(funs[(start + 1):length(funs)])
        if (length(more) > nmore) 
            funs <- c(funs, more[(nmore + 1):length(more)])
    }
    funs
}
