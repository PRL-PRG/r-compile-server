#? stdlib
`summary.aov` <- function (object, intercept = FALSE, split, expand.split = TRUE, 
    keep.zero.df = TRUE, ...) 
{
    splitInteractions <- function(split, factors, names, asgn, 
        df.names) {
        ns <- names(split)
        for (i in unique(asgn)) {
            if (i == 0 || names[i + 1L] %in% ns) 
                next
            f <- rownames(factors)[factors[, i] > 0]
            sp <- f %in% ns
            if (any(sp)) {
                if (sum(sp) > 1L) {
                  old <- split[f[sp]]
                  nn <- setNames(nm = f[sp])
                  marg <- lapply(nn, function(x) df.names[asgn == 
                    (match(x, names) - 1L)])
                  term.coefs <- strsplit(df.names[asgn == i], 
                    ":", fixed = TRUE)
                  ttc <- sapply(term.coefs, function(x) x[sp])
                  rownames(ttc) <- nn
                  splitnames <- setNames(nm = apply(expand.grid(lapply(old, 
                    names)), 1L, function(x) paste(x, collapse = ".")))
                  tmp <- sapply(nn, function(i) names(old[[i]])[match(ttc[i, 
                    ], marg[[i]])])
                  tmp <- apply(tmp, 1L, function(x) paste(x, 
                    collapse = "."))
                  new <- lapply(splitnames, function(x) match(x, 
                    tmp))
                  split[[names[i + 1L]]] <- new[sapply(new, function(x) length(x) > 
                    0L)]
                }
                else {
                  old <- split[[f[sp]]]
                  marg.coefs <- df.names[asgn == (match(f[sp], 
                    names) - 1L)]
                  term.coefs <- strsplit(df.names[asgn == i], 
                    ":", fixed = TRUE)
                  ttc <- sapply(term.coefs, function(x) x[sp])
                  new <- lapply(old, function(x) seq_along(ttc)[ttc %in% 
                    marg.coefs[x]])
                  split[[names[i + 1L]]] <- new
                }
            }
        }
        split
    }
    asgn <- object$assign[object$qr$pivot[1L:object$rank]]
    uasgn <- unique(asgn)
    nterms <- length(uasgn)
    effects <- object$effects
    if (!is.null(effects)) 
        effects <- as.matrix(effects)[seq_along(asgn), , drop = FALSE]
    rdf <- object$df.residual
    nmeffect <- c("(Intercept)", attr(object$terms, "term.labels"))
    coef <- as.matrix(object$coefficients)
    resid <- as.matrix(object$residuals)
    wt <- object$weights
    if (!is.null(wt)) 
        resid <- resid * sqrt(wt)
    nresp <- NCOL(resid)
    ans <- vector("list", nresp)
    if (nresp > 1) {
        names(ans) <- character(nresp)
        for (y in 1L:nresp) {
            cn <- colnames(resid)[y]
            if (is.null(cn) || cn == "") 
                cn <- y
            names(ans)[y] <- paste(" Response", cn)
        }
    }
    if (!is.null(effects) && !missing(split)) {
        ns <- names(split)
        if (!is.null(Terms <- object$terms)) {
            if (!is.list(split)) 
                stop("the 'split' argument must be a list")
            if (!all(ns %in% nmeffect)) {
                na <- sum(!ns %in% nmeffect)
                stop(sprintf(ngettext(na, "unknown name %s in the 'split' list", 
                  "unknown names %s in the 'split' list"), paste(sQuote(ns[na]), 
                  collapse = ", ")), domain = NA)
            }
        }
        if (expand.split) {
            df.names <- names(coef(object))
            split <- splitInteractions(split, attr(Terms, "factors"), 
                nmeffect, asgn, df.names)
            ns <- names(split)
        }
    }
    for (y in 1L:nresp) {
        if (is.null(effects)) {
            nterms <- 0L
            df <- ss <- ms <- numeric()
            nmrows <- character()
        }
        else {
            df <- ss <- numeric()
            nmrows <- character()
            for (i in seq(nterms)) {
                ai <- (asgn == uasgn[i])
                df <- c(df, sum(ai))
                ss <- c(ss, sum(effects[ai, y]^2))
                nmi <- nmeffect[1 + uasgn[i]]
                nmrows <- c(nmrows, nmi)
                if (!missing(split) && !is.na(int <- match(nmi, 
                  ns))) {
                  df <- c(df, lengths(split[[int]]))
                  if (is.null(nms <- names(split[[int]]))) 
                    nms <- paste0("C", seq_along(split[[int]]))
                  ss <- c(ss, unlist(lapply(split[[int]], function(i, 
                    e) sum(e[i]^2), effects[ai, y])))
                  nmrows <- c(nmrows, paste0("  ", nmi, ": ", 
                    nms))
                }
            }
        }
        if (rdf > 0L) {
            df <- c(df, rdf)
            ss <- c(ss, sum(resid[, y]^2))
            nmrows <- c(nmrows, "Residuals")
        }
        nt <- length(df)
        ms <- ifelse(df > 0L, ss/df, NA)
        x <- list(Df = df, `Sum Sq` = ss, `Mean Sq` = ms)
        if (rdf > 0L) {
            TT <- ms/ms[nt]
            TP <- pf(TT, df, rdf, lower.tail = FALSE)
            TT[nt] <- TP[nt] <- NA
            x$"F value" <- TT
            x$"Pr(>F)" <- TP
        }
        class(x) <- c("anova", "data.frame")
        attr(x, "row.names") <- format(nmrows)
        if (!keep.zero.df) 
            x <- x[df > 0L, ]
        pm <- pmatch("(Intercept)", row.names(x), 0L)
        if (!intercept && pm > 0L) 
            x <- x[-pm, ]
        ans[[y]] <- x
    }
    class(ans) <- c("summary.aov", "listof")
    attr(ans, "na.action") <- object$na.action
    ans
}

# Examples
## For a simple example see example(aov)

# Cochran and Cox (1957, p.164)
# 3x3 factorial with ordered factors, each is average of 12.
CC <- data.frame(
    y = c(449, 413, 326, 409, 358, 291, 341, 278, 312)/12,
    P = ordered(gl(3, 3)), N = ordered(gl(3, 1, 9))
)
CC.aov <- aov(y ~ N * P, data = CC , weights = rep(12, 9))
summary(CC.aov)

# Split both main effects into linear and quadratic parts.
summary(CC.aov, split = list(N = list(L = 1, Q = 2),
                             P = list(L = 1, Q = 2)))

# Split only the interaction
summary(CC.aov, split = list("N:P" = list(L.L = 1, Q = 2:4)))

# split on just one var
summary(CC.aov, split = list(P = list(lin = 1, quad = 2)))
summary(CC.aov, split = list(P = list(lin = 1, quad = 2)),
        expand.split = FALSE)
