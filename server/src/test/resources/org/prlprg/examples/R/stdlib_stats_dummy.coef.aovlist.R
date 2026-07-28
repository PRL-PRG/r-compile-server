#? stdlib
`dummy.coef.aovlist` <- function (object, use.na = FALSE, ...) 
{
    xl <- attr(object, "xlevels")
    if (!length(xl)) 
        return(as.list(coef(object)))
    Terms <- terms(object, specials = "Error")
    err <- attr(Terms, "specials")$Error - 1
    tl <- attr(Terms, "term.labels")[-err]
    int <- attr(Terms, "intercept")
    facs <- attr(Terms, "factors")[-c(1, 1 + err), -err, drop = FALSE]
    stopifnot(length(names(object)) == (N <- length(object)))
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
    args <- setNames(vector("list", length(vars)), vars)
    args <- lapply(nvars, function(i) if (nxl[[i]] == 1) 
        rep.int(1, nl)
    else factor(rep.int(xl[[i]][1L], nl), levels = xl[[i]]))
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
    form <- paste0("~", paste0(tl, collapse = " + "), if (!int) 
        "- 1")
    lcontr <- object$contrasts
    lci <- vapply(dummy, is.factor, NA)
    lcontr <- lcontr[names(lci)[lci]]
    mm <- model.matrix(terms(formula(form)), dummy, lcontr, xl)
    tl <- c("(Intercept)", tl)
    res <- setNames(vector("list", N), names(object))
    allasgn <- attr(mm, "assign")
    for (i in names(object)) {
        coef <- object[[i]]$coefficients
        if (!use.na) 
            coef[is.na(coef)] <- 0
        asgn <- object[[i]]$assign
        uasgn <- unique(asgn)
        tll <- tl[1L + uasgn]
        mod <- setNames(vector("list", length(tll)), tll)
        if ((isM <- is.matrix(coef))) {
            for (j in uasgn) {
                keep <- which(asgn == j)
                cf <- coef[keep, , drop = FALSE]
                ij <- rn == tl[j]
                cf <- if (any(na <- is.na(cf))) {
                  if (ncol(cf) >= 2) 
                    stop("multivariate case with missing coefficients is not yet implemented")
                  if (j == 0) {
                    structure(cf[!na], names = "(Intercept)")
                  }
                  else {
                    rj <- t(mm[ij, keep[!na], drop = FALSE] %*% 
                      cf[!na])
                    rj[apply(mm[ij, keep[na], drop = FALSE] != 
                      0, 1L, any)] <- NA
                    rj
                  }
                }
                else {
                  if (j == 0) 
                    structure(cf, names = "(Intercept)")
                  else t(mm[ij, keep, drop = FALSE] %*% cf)
                }
                dimnames(cf) <- list(colnames(coef), rnn[ij])
                mod[[tl[j + 1L]]] <- cf
            }
        }
        else {
            for (j in uasgn) {
                keep <- which(asgn == j)
                cf <- coef[keep]
                mod[[tl[j + 1L]]] <- if (j == 0) {
                  structure(cf, names = "(Intercept)")
                }
                else {
                  ij <- rn == tl[j + 1L]
                  if (any(na <- is.na(cf))) {
                    rj <- setNames(drop(mm[ij, keep[!na], drop = FALSE] %*% 
                      cf[!na]), rnn[ij])
                    rj[apply(mm[ij, keep[na], drop = FALSE] != 
                      0, 1L, any)] <- NA
                    rj
                  }
                  else setNames(drop(mm[ij, allasgn == j, drop = FALSE] %*% 
                    cf), rnn[ij])
                }
            }
        }
        res[[i]] <- structure(mod, matrix = isM)
    }
    structure(res, class = "dummy_coef_list")
}
