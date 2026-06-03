#? stdlib
`.oneClassToAM` <- function (classDef, includeSubclasses = FALSE, short = FALSE) 
{
    findEdges <- function(extensions) {
        superclasses <- names(extensions)
        edges <- numeric()
        for (what in superclasses) {
            whatDef <- getClassDef(what, package = packageSlot(extensions[[what]]))
            ifrom <- match(what, nodes)
            if (is.null(whatDef) || is.na(ifrom)) 
                next
            exts <- whatDef@contains
            whatedges <- names(exts)
            ito <- match(whatedges, nodes, 0)
            for (i in seq_along(exts)) if (ito[[i]] > 0 && exts[[i]]@distance == 
                1) 
                edges <- c(edges, ifrom, ito[[i]])
        }
        edges
    }
    nodes <- c(classDef@className, names(classDef@contains))
    if (includeSubclasses) 
        nodes <- c(nodes, names(classDef@subclasses))
    nodes <- unique(nodes)
    labels <- if (isTRUE(short)) 
        abbreviate(nodes)
    else if (is.character(short)) {
        if (length(short) != length(nodes)) 
            stop(gettextf("needed the supplied labels vector of length %d, got %d", 
                length(nodes), length(short)), domain = NA)
        else short
    }
    else nodes
    size <- length(nodes)
    value <- matrix(0, size, size, dimnames = list(labels, labels))
    ifrom <- match(classDef@className, nodes)
    extensions <- classDef@contains
    superclasses <- names(extensions)
    ito <- match(superclasses, nodes)
    edges <- numeric()
    for (i in seq_along(extensions)) {
        exti <- extensions[[i]]
        if (exti@distance == 1) 
            edges <- c(edges, ifrom, ito[[i]])
    }
    edges <- c(edges, findEdges(classDef@contains))
    if (includeSubclasses) {
        edges <- c(edges, findEdges(classDef@subclasses))
    }
    edges <- t(matrix(edges, nrow = 2))
    value[edges] <- 1
    value
}
