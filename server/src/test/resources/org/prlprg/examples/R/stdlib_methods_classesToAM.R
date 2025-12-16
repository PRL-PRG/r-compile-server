#? stdlib
`classesToAM` <- function (classes, includeSubclasses = FALSE, abbreviate = 2) 
{
    .mergeMatrices <- function(m1, m2) {
        if (nrow(m1) == 0) 
            return(m2)
        dn1 <- dimnames(m1)
        dn2 <- dimnames(m2)
        rows <- unique(c(dn1[[1]], dn2[[1]]))
        columns <- unique(c(dn1[[2]], dn2[[2]]))
        value <- matrix(0, length(rows), length(columns), dimnames = list(rows, 
            columns))
        value[dn1[[1]], dn1[[2]]] <- m1
        value[dn2[[1]], dn2[[2]]] <- m2
        value
    }
    if (length(includeSubclasses) == 1) 
        includeSubclasses <- rep.int(includeSubclasses, length(classes))
    if (!is(includeSubclasses, "logical") || length(includeSubclasses) != 
        length(classes)) 
        stop("argument 'includeSubclasses' must be a logical, either one value or a vector of the same length as argument 'classes'")
    value <- matrix(0, 0, 0)
    for (i in seq_along(classes)) {
        class <- classes[[i]]
        classDef <- getClass(class)
        value <- .mergeMatrices(value, .oneClassToAM(classDef, 
            includeSubclasses[[i]]))
    }
    abbr <- match(as.integer(abbreviate), 0:3) - 1
    if (length(abbr) != 1 || is.na(abbr)) 
        stop("argument 'abbreviate' must be 0, 1, 2, or 3")
    if (abbr%%2) 
        dimnames(value)[[1]] <- abbreviate(dimnames(value)[[1]])
    if (abbr%/%2) 
        dimnames(value)[[2]] <- abbreviate(dimnames(value)[[2]])
    value
}

# Examples

## the super- and subclasses of "standardGeneric"
## and "derivedDefaultMethod"
am <- classesToAM(list(class(show), class(getMethod(show))), TRUE)
am



