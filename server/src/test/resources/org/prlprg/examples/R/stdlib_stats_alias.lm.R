#? stdlib
`alias.lm` <- function (object, complete = TRUE, partial = FALSE, partial.pattern = FALSE, 
    ...) 
{
    CompPatt <- function(x, ...) {
        x[abs(x) < 1e-06] <- 0
        MASS::fractions(x)
    }
    PartPatt <- function(x) {
        z <- zapsmall(x) != 0
        if (any(z)) {
            xx <- abs(signif(x[z], 2))
            ll <- length(unique(xx))
            if (ll > 10L) 
                xx <- cut(xx, 9L)
            else if (ll == 1L) 
                x[] <- 1
            x[z] <- paste0(ifelse(x[z] > 0, " ", "-"), xx)
        }
        x[!z] <- ""
        collabs <- colnames(x)
        collabs <- if (length(collabs)) 
            abbreviate(sub(".", "", collabs, fixed = TRUE), 3L)
        else 1L:ncol(x)
        colnames(x) <- collabs
        class(x) <- "mtable"
        x
    }
    Model <- object$terms
    attributes(Model) <- NULL
    value <- list(Model = Model)
    R <- qr(object)$qr
    R <- R[1L:min(dim(R)), , drop = FALSE]
    R[lower.tri(R)] <- 0
    d <- dim(R)
    rank <- object$rank
    p <- d[2L]
    if (complete) {
        value$Complete <- if (is.null(p) || rank == p) 
            NULL
        else {
            p1 <- 1L:rank
            X <- R[p1, p1]
            Y <- R[p1, -p1, drop = FALSE]
            beta12 <- as.matrix(qr.coef(qr(X), Y))
            CompPatt(t(beta12))
        }
    }
    if (partial) {
        tmp <- suppressWarnings(summary.lm(object)$cov.unscaled)
        ses <- sqrt(diag(tmp))
        beta11 <- tmp/outer(ses, ses)
        beta11[row(beta11) >= col(beta11)] <- 0
        beta11[abs(beta11) < 1e-06] <- 0
        if (all(beta11 == 0)) 
            beta11 <- NULL
        else if (partial.pattern) 
            beta11 <- PartPatt(beta11)
        value$Partial <- beta11
    }
    class(value) <- "listof"
    value
}
