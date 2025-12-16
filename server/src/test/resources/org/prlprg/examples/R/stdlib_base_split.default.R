#? stdlib
`split.default` <- function (x, f, drop = FALSE, sep = ".", lex.order = FALSE, ...) 
{
    if (!missing(...)) 
        .NotYetUsed(deparse(...), error = FALSE)
    if (is.list(f)) 
        f <- interaction(f, drop = drop, sep = sep, lex.order = lex.order)
    else if (!is.factor(f)) 
        f <- as.factor(f)
    else if (drop) 
        f <- factor(f)
    storage.mode(f) <- "integer"
    if (is.null(attr(x, "class"))) 
        return(.Internal(split(x, f)))
    ind <- .Internal(split(seq_along(x), f))
    lapply(ind, function(i) x[i])
}
