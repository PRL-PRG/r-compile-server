#? stdlib
`proj.default` <- function (object, onedf = TRUE, ...) 
{
    if (!inherits(object$qr, "qr")) 
        stop("argument does not include a 'qr' component")
    if (is.null(object$effects)) 
        stop("argument does not include an 'effects' component")
    RB <- c(object$effects[seq(object$rank)], rep.int(0, nrow(object$qr$qr) - 
        object$rank))
    prj <- as.matrix(qr.Q(object$qr, Dvec = RB))
    DN <- dimnames(object$qr$qr)
    dimnames(prj) <- list(DN[[1L]], DN[[2L]][seq(ncol(prj))])
    prj
}
