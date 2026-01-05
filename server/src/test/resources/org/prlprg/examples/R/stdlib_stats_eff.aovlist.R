#? stdlib
`eff.aovlist` <- function (aovlist) 
{
    Terms <- terms(aovlist)
    if (names(aovlist)[[1L]] == "(Intercept)") 
        aovlist <- aovlist[-1L]
    pure.error.strata <- sapply(aovlist, function(x) is.null(x$qr))
    aovlist <- aovlist[!pure.error.strata]
    s.labs <- names(aovlist)
    s.terms <- lapply(aovlist, function(x) {
        asgn <- x$assign[x$qr$pivot[1L:x$rank]]
        attr(terms(x), "term.labels")[asgn]
    })
    t.labs <- attr(Terms, "term.labels")
    t.labs <- t.labs[t.labs %in% unlist(s.terms)]
    eff <- matrix(0, ncol = length(t.labs), nrow = length(s.labs), 
        dimnames = list(s.labs, t.labs))
    for (i in names(s.terms)) eff[i, s.terms[[i]]] <- 1
    cs <- colSums(eff)
    if (all(cs <= 1)) 
        return(eff[, cs > 0, drop = FALSE])
    nm <- t.labs[cs > 1]
    pl <- lapply(aovlist, function(x) {
        asgn <- x$assign[x$qr$pivot[1L:x$rank]]
        sp <- split(seq_along(asgn), attr(terms(x), "term.labels")[asgn])
        sp <- sp[names(sp) %in% nm]
        sapply(sp, function(x, y) {
            y <- y[x, x, drop = FALSE]
            res <- sum(diag(y)^2)
            if (nrow(y) > 1 && sum(y^2) > 1.01 * res) 
                stop("eff.aovlist: non-orthogonal contrasts would give an incorrect answer")
            res
        }, y = x$qr$qr)
    })
    for (i in names(pl)) eff[i, names(pl[[i]])] <- pl[[i]]
    cs <- colSums(eff)
    eff <- eff/rep(cs, each = nrow(eff))
    eff[, cs != 0, drop = FALSE]
}
