#? stdlib
`anova.loess` <- function (object, ...) 
{
    objects <- list(object, ...)
    responses <- as.character(lapply(objects, function(x) as.character(x$terms[[2L]])))
    sameresp <- responses == responses[1L]
    if (!all(sameresp)) {
        objects <- objects[sameresp]
        warning(gettextf("models with response %s removed because response differs from model 1", 
            sQuote(deparse(responses[!sameresp]))), domain = NA)
    }
    nmodels <- length(objects)
    if (nmodels <= 1L) 
        stop("no models to compare")
    models <- as.character(lapply(objects, function(x) x$call))
    descr <- paste0("Model ", format(1L:nmodels), ": ", models, 
        collapse = "\n")
    delta1 <- sapply(objects, function(x) x$one.delta)
    delta2 <- sapply(objects, function(x) x$two.delta)
    s <- sapply(objects, function(x) x$s)
    enp <- sapply(objects, function(x) x$enp)
    rss <- s^2 * delta1
    max.enp <- order(enp)[nmodels]
    d1diff <- abs(diff(delta1))
    dfnum <- c(d1diff^2/abs(diff(delta2)))
    dfden <- (delta1^2/delta2)[max.enp]
    Fvalue <- c(NA, (abs(diff(rss))/d1diff)/s[max.enp]^2)
    pr <- pf(Fvalue, dfnum, dfden, lower.tail = FALSE)
    ans <- data.frame(ENP = round(enp, 2L), RSS = rss, `F-value` = Fvalue, 
        `Pr(>F)` = pr, check.names = FALSE)
    attr(ans, "heading") <- paste0(descr, "\n\n", "Analysis of Variance:   denominator df ", 
        format(round(dfden, 2L)), "\n")
    class(ans) <- c("anova", "data.frame")
    ans
}
