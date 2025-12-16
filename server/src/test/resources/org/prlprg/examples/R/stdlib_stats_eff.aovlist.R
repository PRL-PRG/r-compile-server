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

# Examples
## An example from Yates (1932),
## a 2^3 design in 2 blocks replicated 4 times

Block <- gl(8, 4)
A <- factor(c(0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,
              0,1,0,1,0,1,0,1,0,1,0,1))
B <- factor(c(0,0,1,1,0,0,1,1,0,1,0,1,1,0,1,0,0,0,1,1,
              0,0,1,1,0,0,1,1,0,0,1,1))
C <- factor(c(0,1,1,0,1,0,0,1,0,0,1,1,0,0,1,1,0,1,0,1,
              1,0,1,0,0,0,1,1,1,1,0,0))
Yield <- c(101, 373, 398, 291, 312, 106, 265, 450, 106, 306, 324, 449,
           272, 89, 407, 338, 87, 324, 279, 471, 323, 128, 423, 334,
           131, 103, 445, 437, 324, 361, 302, 272)
aovdat <- data.frame(Block, A, B, C, Yield)

old <- getOption("contrasts")
options(contrasts = c("contr.helmert", "contr.poly"))
\dontdiff{
(fit <- aov(Yield ~ A*B*C + Error(Block), data = aovdat))
}
eff.aovlist(fit)
options(contrasts = old)

