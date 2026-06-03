#? stdlib
`mauchly.test.SSD` <- function (object, Sigma = diag(nrow = p), T = Thin.row(Proj(M) - 
    Proj(X)), M = diag(nrow = p), X = ~0, idata = data.frame(index = seq_len(p)), 
    ...) 
{
    p <- ncol(object$SSD)
    Xmis <- missing(X)
    Mmis <- missing(M)
    if (missing(T)) {
        orig.X <- X
        orig.M <- M
        if (inherits(M, "formula")) 
            M <- model.matrix(M, idata)
        if (inherits(X, "formula")) 
            X <- model.matrix(X, idata)
        if (Rank(cbind(M, X)) != Rank(M)) 
            stop("X does not define a subspace of M")
    }
    Psi <- T %*% Sigma %*% t(T)
    B <- T %*% object$SSD %*% t(T)
    pp <- nrow(T)
    U <- solve(Psi, B)
    n <- object$df
    logW <- log(det(U)) - pp * log(Tr(U/pp))
    rho <- 1 - (2 * pp^2 + pp + 2)/(6 * pp * n)
    w2 <- (pp + 2) * (pp - 1) * (pp - 2) * (2 * pp^3 + 6 * pp^2 + 
        3 * p + 2)/(288 * (n * pp * rho)^2)
    z <- -n * rho * logW
    f <- pp * (pp + 1)/2 - 1
    Pr1 <- pchisq(z, f, lower.tail = FALSE)
    Pr2 <- pchisq(z, f + 4, lower.tail = FALSE)
    pval <- Pr1 + w2 * (Pr2 - Pr1)
    transformnote <- if (!missing(T)) 
        c("\nContrast matrix", apply(format(T), 1L, paste, collapse = " "))
    else c(if (!Xmis) c("\nContrasts orthogonal to", if (is.matrix(orig.X)) apply(format(X), 
        2L, paste, collapse = " ") else deparse(formula(orig.X)), 
        "", if (!Mmis) c("\nContrasts spanned by", if (is.matrix(orig.M)) apply(format(M), 
            2L, paste, collapse = " ") else deparse(formula(orig.M)), 
            "")))
    retval <- list(statistic = c(W = exp(logW)), p.value = pval, 
        method = c("Mauchly's test of sphericity", transformnote), 
        data.name = paste("SSD matrix from", deparse(object$call), 
            collapse = " "))
    class(retval) <- "htest"
    retval
}
