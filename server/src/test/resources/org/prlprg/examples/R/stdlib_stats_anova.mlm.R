#? stdlib
`anova.mlm` <- function (object, ..., test = c("Pillai", "Wilks", "Hotelling-Lawley", 
    "Roy", "Spherical"), Sigma = diag(nrow = p), T = Thin.row(Proj(M) - 
    Proj(X)), M = diag(nrow = p), X = ~0, idata = data.frame(index = seq_len(p)), 
    tol = 1e-07) 
{
    if (length(list(object, ...)) > 1) {
        cl <- match.call()
        cl[[1L]] <- anova.mlmlist
        return(eval.parent(cl))
    }
    else {
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
        title <- "Analysis of Variance Table\n"
        transformnote <- if (!missing(T)) 
            c("\nContrast matrix", apply(format(T), 1L, paste, 
                collapse = " "))
        else c(if (!Xmis) c("\nContrasts orthogonal to", if (is.matrix(orig.X)) apply(format(X), 
            2L, paste, collapse = " ") else deparse(formula(orig.X)), 
            "", if (!Mmis) c("\nContrasts spanned by", if (is.matrix(orig.M)) apply(format(M), 
                2L, paste, collapse = " ") else deparse(formula(orig.M)), 
                "")))
        epsnote <- NULL
        ssd <- SSD(object)
        rk <- object$rank
        pp <- nrow(T)
        if (rk > 0) {
            p1 <- 1L:rk
            comp <- object$effects[p1, , drop = FALSE]
            asgn <- object$assign[object$qr$pivot][p1]
            nmeffects <- c("(Intercept)", attr(object$terms, 
                "term.labels"))
            tlabels <- nmeffects[1 + unique(asgn)]
            ix <- split(seq_len(nrow(comp)), asgn)
            ss <- lapply(ix, function(i) crossprod(comp[i, , 
                drop = FALSE]))
            df <- lengths(split(asgn, asgn))
        }
        else {
        }
        test <- match.arg(test)
        nmodels <- length(ss)
        if (test == "Spherical") {
            df.res <- ssd$df
            sph <- sphericity(ssd, T = T, Sigma = Sigma)
            epsnote <- c(paste(format(c("Greenhouse-Geisser epsilon:", 
                "Huynh-Feldt epsilon:")), format(c(sph$GG.eps, 
                sph$HF.eps), digits = 4L)), "")
            Psi <- T %*% Sigma %*% t(T)
            stats <- matrix(NA, nmodels + 1, 6L)
            colnames(stats) <- c("F", "num Df", "den Df", "Pr(>F)", 
                "G-G Pr", "H-F Pr")
            for (i in seq_len(nmodels)) {
                s2 <- Tr(solve(Psi, T %*% ss[[i]] %*% t(T)))/pp/df[i]
                Fval <- s2/sph$sigma
                stats[i, 1L:3L] <- abs(c(Fval, df[i] * pp, df.res * 
                  pp))
            }
            stats[, 4] <- pf(stats[, 1L], stats[, 2L], stats[, 
                3L], lower.tail = FALSE)
            stats[, 5] <- pf(stats[, 1L], stats[, 2L] * sph$GG.eps, 
                stats[, 3L] * sph$GG.eps, lower.tail = FALSE)
            stats[, 6] <- pf(stats[, 1L], stats[, 2L] * min(1, 
                sph$HF.eps), stats[, 3L] * min(1, sph$HF.eps), 
                lower.tail = FALSE)
        }
        else {
            sc <- sqrt(diag(T %*% ssd$SSD %*% t(T)))
            D <- sqrt(sc^2 + rowSums(as.matrix(sapply(ss, function(X) diag(T %*% 
                X %*% t(T))))))
            sc <- ifelse(sc/D < 1e-06, 1, 1/sc)
            scm <- tcrossprod(sc)
            df.res <- ssd$df
            rss.qr <- qr((T %*% ssd$SSD %*% t(T)) * scm, tol = tol)
            if (rss.qr$rank < pp) 
                stop(gettextf("residuals have rank %s < %s", 
                  rss.qr$rank, pp), domain = NA)
            eigs <- array(NA, c(nmodels, pp))
            stats <- matrix(NA, nmodels + 1L, 5L, dimnames = list(NULL, 
                c(test, "approx F", "num Df", "den Df", "Pr(>F)")))
            for (i in seq_len(nmodels)) {
                eigs[i, ] <- Re(eigen(qr.coef(rss.qr, (T %*% 
                  ss[[i]] %*% t(T)) * scm), symmetric = FALSE, 
                  only.values = TRUE)$values)
                stats[i, 1L:4L] <- switch(test, Pillai = Pillai(eigs[i, 
                  ], df[i], df.res), Wilks = Wilks(eigs[i, ], 
                  df[i], df.res), `Hotelling-Lawley` = HL(eigs[i, 
                  ], df[i], df.res), Roy = Roy(eigs[i, ], df[i], 
                  df.res))
                ok <- stats[, 2L] >= 0 & stats[, 3L] > 0 & stats[, 
                  4L] > 0
                ok <- !is.na(ok) & ok
                stats[ok, 5L] <- pf(stats[ok, 2L], stats[ok, 
                  3L], stats[ok, 4L], lower.tail = FALSE)
            }
        }
        table <- data.frame(Df = c(df, ssd$df), stats, check.names = FALSE)
        row.names(table) <- c(tlabels, "Residuals")
        structure(table, heading = c(title, transformnote, epsnote), 
            class = c("anova", "data.frame"))
    }
}

# Examples
require(graphics)
utils::example(SSD) # Brings in the mlmfit and reacttime objects

mlmfit0 <- update(mlmfit, ~0)

### Traditional tests of intrasubj. contrasts
## Using MANOVA techniques on contrasts:
anova(mlmfit, mlmfit0, X = ~1)

## Assuming sphericity
anova(mlmfit, mlmfit0, X = ~1, test = "Spherical")


### tests using intra-subject 3x2 design
idata <- data.frame(deg = gl(3, 1, 6, labels = c(0, 4, 8)),
                    noise = gl(2, 3, 6, labels = c("A", "P")))

anova(mlmfit, mlmfit0, X = ~ deg + noise,
      idata = idata, test = "Spherical")
anova(mlmfit, mlmfit0, M = ~ deg + noise, X = ~ noise,
      idata = idata, test = "Spherical" )
anova(mlmfit, mlmfit0, M = ~ deg + noise, X = ~ deg,
      idata = idata, test = "Spherical" )

f <- factor(rep(1:2, 5)) # bogus, just for illustration
mlmfit2 <- update(mlmfit, ~f)
anova(mlmfit2, mlmfit, mlmfit0, X = ~1, test = "Spherical")
anova(mlmfit2, X = ~1, test = "Spherical")
# one-model form, eqiv. to previous

### There seems to be a strong interaction in these data
plot(colMeans(reacttime))

