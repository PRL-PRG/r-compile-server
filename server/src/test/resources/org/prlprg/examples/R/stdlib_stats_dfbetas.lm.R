#? stdlib
`dfbetas.lm` <- function (model, infl = lm.influence(model, do.coef = TRUE), 
    ...) 
{
    qrm <- qr(model)
    xxi <- chol2inv(qrm$qr, qrm$rank)
    db <- dfbeta(model, infl)
    if (length(dim(db)) == 3L) 
        db <- aperm(db, c(1L, 3:2))
    db/outer(infl$sigma, sqrt(diag(xxi)))
}
