#? stdlib
`anova.mlmlist` <- function (object, ..., test = c("Pillai", "Wilks", "Hotelling-Lawley", 
    "Roy", "Spherical"), Sigma = diag(nrow = p), T = Thin.row(Proj(M) - 
    Proj(X)), M = diag(nrow = p), X = ~0, idata = data.frame(index = seq_len(p)), 
    tol = 1e-07) 
{
    objects <- list(object, ...)
    p <- ncol(SSD(object)$SSD)
    Xmis <- missing(X)
    Mmis <- missing(M)
    if (missing(T)) {
        orig.M <- M
        orig.X <- X
        if (inherits(M, "formula")) 
            M <- model.matrix(M, idata)
        if (inherits(X, "formula")) 
            X <- model.matrix(X, idata)
        if (Rank(cbind(M, X)) != Rank(M)) 
            stop("X does not define a subspace of M")
    }
    pp <- nrow(T)
    responses <- as.character(lapply(objects, function(x) deparse(x$terms[[2L]])))
    sameresp <- responses == responses[1L]
    if (!all(sameresp)) {
        objects <- objects[sameresp]
        warning(gettextf("models with response %s removed because response differs from model 1", 
            sQuote(deparse(responses[!sameresp]))), domain = NA)
    }
    ns <- sapply(objects, function(x) length(x$residuals))
    if (any(ns != ns[1L])) 
        stop("models were not all fitted to the same size of dataset")
    nmodels <- length(objects)
    if (nmodels == 1) 
        return(anova.mlm(object))
    resdf <- as.numeric(lapply(objects, df.residual))
    df <- c(NA, diff(resdf))
    resssd <- lapply(objects, SSD)
    deltassd <- mapply(function(x, y) y$SSD - x$SSD, resssd[-nmodels], 
        resssd[-1L], SIMPLIFY = FALSE)
    resdet <- sapply(resssd, function(x) det(T %*% (x$SSD/x$df) %*% 
        t(T))^(1/pp))
    table <- data.frame(resdf, df, resdet)
    variables <- lapply(objects, function(x) paste(deparse(formula(x)), 
        collapse = "\n"))
    dimnames(table) <- list(seq_len(nmodels), c("Res.Df", "Df", 
        "Gen.var."))
    title <- "Analysis of Variance Table\n"
    topnote <- paste0("Model ", format(seq_len(nmodels)), ": ", 
        variables, collapse = "\n")
    transformnote <- if (!missing(T)) 
        c("\nContrast matrix", apply(format(T), 1L, paste, collapse = " "))
    else c(if (!Xmis) c("\nContrasts orthogonal to", if (is.matrix(orig.X)) apply(format(X), 
        2L, paste, collapse = " ") else deparse(formula(orig.X)), 
        "", if (!Mmis) c("\nContrasts spanned by", if (is.matrix(orig.M)) apply(format(M), 
            2L, paste, collapse = " ") else deparse(formula(orig.M)), 
            "")))
    epsnote <- NULL
    test <- match.arg(test)
    if (test == "Spherical") {
        bigmodel <- order(resdf)[1L]
        df.res <- resdf[bigmodel]
        sph <- sphericity(resssd[[bigmodel]], T = T, Sigma = Sigma)
        epsnote <- c(paste(format(c("Greenhouse-Geisser epsilon:", 
            "Huynh-Feldt epsilon:")), format(c(sph$GG.eps, sph$HF.eps), 
            digits = 4L)), "")
        Psi <- T %*% Sigma %*% t(T)
        stats <- matrix(NA, nmodels, 6L)
        dimnames(stats) <- list(seq_len(nmodels), c("F", "num Df", 
            "den Df", "Pr(>F)", "G-G Pr", "H-F Pr"))
        for (i in 2:nmodels) {
            s2 <- Tr(solve(Psi, T %*% deltassd[[i - 1]] %*% t(T)))/pp/df[i]
            Fval <- s2/sph$sigma
            stats[i, 1L:3] <- abs(c(Fval, df[i] * pp, df.res * 
                pp))
        }
        stats[, 4] <- pf(stats[, 1], stats[, 2], stats[, 3], 
            lower.tail = FALSE)
        stats[, 5] <- pf(stats[, 1], stats[, 2] * sph$GG.eps, 
            stats[, 3] * sph$GG.eps, lower.tail = FALSE)
        stats[, 6] <- pf(stats[, 1], stats[, 2] * min(1, sph$HF.eps), 
            stats[, 3] * min(1, sph$HF.eps), lower.tail = FALSE)
        table <- cbind(table, stats)
    }
    else if (!is.null(test)) {
        bigmodel <- order(resdf)[1L]
        df.res <- resdf[bigmodel]
        sc <- sqrt(diag(T %*% resssd[[bigmodel]]$SSD %*% t(T)))
        D <- sqrt(sc^2 + apply(abs(sapply(deltassd, function(X) diag((T %*% 
            X %*% t(T))))), 1, max))
        sc <- ifelse(sc/D < 1e-06, 1, 1/sc)
        scm <- tcrossprod(sc)
        rss.qr <- qr((T %*% resssd[[bigmodel]]$SSD %*% t(T)) * 
            scm, tol = tol)
        if (rss.qr$rank < pp) 
            stop(gettextf("residuals have rank %s < %s", rss.qr$rank, 
                pp), domain = NA)
        eigs <- array(NA, c(nmodels, pp))
        stats <- matrix(NA, nmodels, 5L)
        dimnames(stats) <- list(seq_len(nmodels), c(test, "approx F", 
            "num Df", "den Df", "Pr(>F)"))
        for (i in 2:nmodels) {
            sg <- (df[i] > 0) - (df[i] < 0)
            eigs[i, ] <- Re(eigen(qr.coef(rss.qr, sg * (T %*% 
                deltassd[[i - 1]] %*% t(T)) * scm), symmetric = FALSE, 
                only.values = TRUE)$values)
            stats[i, 1L:4] <- switch(test, Pillai = Pillai(eigs[i, 
                ], sg * df[i], resdf[bigmodel]), Wilks = Wilks(eigs[i, 
                ], sg * df[i], resdf[bigmodel]), `Hotelling-Lawley` = HL(eigs[i, 
                ], sg * df[i], resdf[bigmodel]), Roy = Roy(eigs[i, 
                ], sg * df[i], resdf[bigmodel]))
            ok <- stats[, 2] >= 0 & stats[, 3] > 0 & stats[, 
                4] > 0
            ok <- !is.na(ok) & ok
            stats[ok, 5] <- pf(stats[ok, 2], stats[ok, 3], stats[ok, 
                4], lower.tail = FALSE)
        }
        table <- cbind(table, stats)
    }
    structure(table, heading = c(title, topnote, transformnote, 
        epsnote), class = c("anova", "data.frame"))
}
