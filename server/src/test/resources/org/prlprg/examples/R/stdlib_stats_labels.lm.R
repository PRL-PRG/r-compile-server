#? stdlib
`labels.lm` <- function (object, ...) 
{
    tl <- attr(object$terms, "term.labels")
    asgn <- object$assign[qr.lm(object)$pivot[1L:object$rank]]
    tl[unique(asgn)]
}
