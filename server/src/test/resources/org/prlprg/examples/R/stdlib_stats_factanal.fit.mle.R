#? stdlib
`factanal.fit.mle` <- function (cmat, factors, start = NULL, lower = 0.005, control = NULL, 
    ...) 
{
    FAout <- function(Psi, S, q) {
        sc <- diag(1/sqrt(Psi))
        Sstar <- sc %*% S %*% sc
        E <- eigen(Sstar, symmetric = TRUE)
        L <- E$vectors[, 1L:q, drop = FALSE]
        load <- L %*% diag(sqrt(pmax(E$values[1L:q] - 1, 0)), 
            q)
        diag(sqrt(Psi)) %*% load
    }
    FAfn <- function(Psi, S, q) {
        sc <- diag(1/sqrt(Psi))
        Sstar <- sc %*% S %*% sc
        E <- eigen(Sstar, symmetric = TRUE, only.values = TRUE)
        e <- E$values[-(1L:q)]
        e <- sum(log(e) - e) - q + nrow(S)
        -e
    }
    FAgr <- function(Psi, S, q) {
        sc <- diag(1/sqrt(Psi))
        Sstar <- sc %*% S %*% sc
        E <- eigen(Sstar, symmetric = TRUE)
        L <- E$vectors[, 1L:q, drop = FALSE]
        load <- L %*% diag(sqrt(pmax(E$values[1L:q] - 1, 0)), 
            q)
        load <- diag(sqrt(Psi)) %*% load
        g <- load %*% t(load) + diag(Psi) - S
        diag(g)/Psi^2
    }
    p <- ncol(cmat)
    if (is.null(start)) 
        start <- (1 - 0.5 * factors/p)/diag(solve(cmat))
    res <- optim(start, FAfn, FAgr, method = "L-BFGS-B", lower = lower, 
        upper = 1, control = c(list(fnscale = 1, parscale = rep(0.01, 
            length(start))), control), q = factors, S = cmat)
    Lambda <- FAout(res$par, cmat, factors)
    dimnames(Lambda) <- list(dimnames(cmat)[[1L]], paste0("Factor", 
        1L:factors))
    p <- ncol(cmat)
    dof <- 0.5 * ((p - factors)^2 - p - factors)
    un <- setNames(res$par, colnames(cmat))
    class(Lambda) <- "loadings"
    ans <- list(converged = res$convergence == 0, loadings = Lambda, 
        uniquenesses = un, correlation = cmat, criteria = c(objective = res$value, 
            counts = res$counts), factors = factors, dof = dof, 
        method = "mle")
    class(ans) <- "factanal"
    ans
}
