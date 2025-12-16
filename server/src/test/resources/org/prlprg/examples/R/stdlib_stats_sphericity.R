#? stdlib
`sphericity` <- function (object, Sigma = diag(nrow = p), T = Thin.row(Proj(M) - 
    Proj(X)), M = diag(nrow = p), X = ~0, idata = data.frame(index = seq_len(p))) 
{
    p <- ncol(object$SSD)
    if (missing(T)) {
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
    sigma <- Tr(U)/pp/object$df
    lambda <- Re(eigen(U, only.values = TRUE)$values)
    GG.eps <- sum(lambda)^2/sum(lambda^2)/pp
    n <- object$df
    HF.eps <- ((n + 1) * pp * GG.eps - 2)/(pp * (n - pp * GG.eps))
    return(list(GG.eps = GG.eps, HF.eps = HF.eps, sigma = sigma))
}
