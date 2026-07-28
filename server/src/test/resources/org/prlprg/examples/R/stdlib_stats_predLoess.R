#? stdlib
`predLoess` <- function (y, x, newx, s, weights, robust, span, degree, normalize, 
    parametric, drop.square, surface, cell, family, kd, divisor, 
    se = FALSE) 
{
    D <- NCOL(x)
    N <- NROW(x)
    M <- NROW(newx)
    x <- as.matrix(x)
    newx <- as.matrix(newx)
    if (any(divisor != 1)) {
        newx <- newx/rep(divisor, rep_len(M, D))
        x <- x/rep(divisor, rep_len(N, D))
    }
    sum.drop.sqr <- sum(drop.square)
    nonparametric <- sum(!parametric)
    order.parametric <- order(parametric)
    x <- x[, order.parametric, drop = FALSE]
    x.evaluate <- newx[, order.parametric, drop = FALSE]
    order.drop.sqr <- (2L - drop.square)[order.parametric]
    storage.mode(x) <- "double"
    storage.mode(y) <- "double"
    if (surface == "direct") {
        nas <- rowSums(is.na(newx)) > 0
        fit <- rep_len(NA_real_, length(nas))
        x.evaluate <- x.evaluate[!nas, , drop = FALSE]
        M <- nrow(x.evaluate)
        if (se) {
            se.fit <- fit
            z <- .C(C_loess_dfitse, y, x, as.double(x.evaluate), 
                as.double(weights * robust), as.double(robust), 
                as.integer(family == "gaussian"), as.double(span), 
                as.integer(degree), as.integer(nonparametric), 
                as.integer(order.drop.sqr), as.integer(sum.drop.sqr), 
                as.integer(D), as.integer(N), as.integer(M), 
                fit = double(M), L = double(N * M))[c("fit", 
                "L")]
            fit[!nas] <- z$fit
            ses <- rowSums(matrix(z$L^2, M, N)/rep(weights, rep_len(M, 
                N)))
            se.fit[!nas] <- s * sqrt(ses)
        }
        else {
            fit[!nas] <- .C(C_loess_dfit, y, x, as.double(x.evaluate), 
                as.double(weights * robust), as.double(span), 
                as.integer(degree), as.integer(nonparametric), 
                as.integer(order.drop.sqr), as.integer(sum.drop.sqr), 
                as.integer(D), as.integer(N), as.integer(M), 
                fit = double(M))$fit
        }
    }
    else {
        ranges <- apply(x, 2L, range)
        inside <- rowSums((x.evaluate <= rep(ranges[2L, ], rep_len(M, 
            D))) & (x.evaluate >= rep(ranges[1L, ], rep_len(M, 
            D)))) == D
        inside[is.na(inside)] <- FALSE
        M1 <- sum(inside)
        fit <- rep_len(NA_real_, M)
        if (any(inside)) 
            fit[inside] <- .C(C_loess_ifit, as.integer(kd$parameter), 
                as.integer(kd$a), as.double(kd$xi), as.double(kd$vert), 
                as.double(kd$vval), as.integer(M1), as.double(x.evaluate[inside, 
                  ]), fit = double(M1))$fit
        if (se) {
            se.fit <- rep_len(NA_real_, M)
            if (any(inside)) {
                L <- .C(C_loess_ise, y, x, as.double(x.evaluate[inside, 
                  ]), as.double(weights), as.double(span), as.integer(degree), 
                  as.integer(nonparametric), as.integer(order.drop.sqr), 
                  as.integer(sum.drop.sqr), as.double(span * 
                    cell), as.integer(D), as.integer(N), as.integer(M1), 
                  double(M1), L = double(N * M1))$L
                tmp <- rowSums(matrix(L^2, M1, N)/rep(weights, 
                  rep_len(M1, N)))
                se.fit[inside] <- s * sqrt(tmp)
            }
        }
    }
    rn <- rownames(newx)
    if (se) {
        if (!is.null(rn)) 
            names(fit) <- names(se.fit) <- rn
        list(fit = fit, se.fit = drop(se.fit), residual.scale = s)
    }
    else {
        if (!is.null(rn)) 
            names(fit) <- rn
        fit
    }
}
