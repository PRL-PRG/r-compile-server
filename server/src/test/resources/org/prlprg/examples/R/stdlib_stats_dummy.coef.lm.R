#? stdlib
`dummy.coef.lm` <- function (object, use.na = FALSE, ...) 
{
    xl <- object$xlevels
    if (!length(xl)) 
        return(as.list(coef(object)))
    Terms <- terms(object)
    tl <- attr(Terms, "term.labels")
    int <- attr(Terms, "intercept")
    facs <- attr(Terms, "factors")[-1, , drop = FALSE]
    Terms <- delete.response(Terms)
    mf <- object$model %||% model.frame(object)
    nvars <- setNames(, vars <- dimnames(facs)[[1]])
    xtlv <- lapply(nvars, function(i) {
        x <- mf[, i, drop = TRUE]
        levels(x) %||% if (is.character(x)) 
            xl[[i]]
    })
    nxl <- pmax(lengths(xtlv), 1L)
    lterms <- apply(facs, 2L, function(x) prod(nxl[x > 0]))
    nl <- sum(lterms)
    args <- lapply(nvars, function(i) if (nxl[i] == 1) 
        rep.int(1, nl)
    else factor(rep.int(xtlv[[i]][1L], nl), levels = xtlv[[i]]))
    dummy <- do.call(data.frame, args)
    names(dummy) <- vars
    pos <- 0L
    rn <- rep.int(tl, lterms)
    rnn <- character(nl)
    for (j in tl) {
        i <- vars[facs[, j] > 0]
        ifac <- i[nxl[i] > 1]
        lt.j <- lterms[[j]]
        if (length(ifac) == 0L) {
            rnn[pos + 1L] <- j
        }
        else {
            p.j <- pos + seq_len(lt.j)
            if (length(ifac) == 1L) {
                dummy[p.j, ifac] <- x.i <- xtlv[[ifac]]
                rnn[p.j] <- as.character(x.i)
            }
            else {
                tmp <- expand.grid(xtlv[ifac], KEEP.OUT.ATTRS = FALSE)
                dummy[p.j, ifac] <- tmp
                rnn[p.j] <- apply(as.matrix(tmp), 1L, paste, 
                  collapse = ":")
            }
        }
        pos <- pos + lt.j
    }
    attr(dummy, "terms") <- attr(mf, "terms")
    lcontr <- object$contrasts
    lci <- vapply(dummy, is.factor, NA)
    lcontr <- lcontr[names(lci)[lci]]
    mm <- model.matrix(Terms, dummy, lcontr, xl)
    if (anyNA(mm)) {
        warning("some terms will have NAs due to the limits of the method")
        mm[is.na(mm)] <- NA
    }
    coef <- object$coefficients
    if (!use.na) 
        coef[is.na(coef)] <- 0
    asgn <- attr(mm, "assign")
    res <- setNames(vector("list", length(tl)), tl)
    if (isM <- is.matrix(coef)) {
        for (j in seq_along(tl)) {
            keep <- which(asgn == j)
            cf <- coef[keep, , drop = FALSE]
            ij <- rn == tl[j]
            cf <- if (any(na <- is.na(cf))) {
                if (ncol(cf) >= 2) 
                  stop("multivariate case with missing coefficients is not yet implemented")
                rj <- t(mm[ij, keep[!na], drop = FALSE] %*% cf[!na])
                rj[apply(mm[ij, keep[na], drop = FALSE] != 0, 
                  1L, any)] <- NA
                rj
            }
            else t(mm[ij, keep, drop = FALSE] %*% cf)
            dimnames(cf) <- list(colnames(coef), rnn[ij])
            res[[j]] <- cf
        }
    }
    else {
        for (j in seq_along(tl)) {
            keep <- which(asgn == j)
            cf <- coef[keep]
            ij <- rn == tl[j]
            res[[j]] <- if (any(na <- is.na(cf))) {
                rj <- setNames(drop(mm[ij, keep[!na], drop = FALSE] %*% 
                  cf[!na]), rnn[ij])
                rj[apply(mm[ij, keep[na], drop = FALSE] != 0, 
                  1L, any)] <- NA
                rj
            }
            else setNames(drop(mm[ij, keep, drop = FALSE] %*% 
                cf), rnn[ij])
        }
    }
    if (int > 0) 
        res <- c(list(`(Intercept)` = if (isM) coef[int, ] else coef[int]), 
            res)
    structure(res, class = "dummy_coef", matrix = isM)
}
