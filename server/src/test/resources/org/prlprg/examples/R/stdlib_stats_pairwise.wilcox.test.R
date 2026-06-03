#? stdlib
`pairwise.wilcox.test` <- function (x, g, p.adjust.method = p.adjust.methods, paired = FALSE, 
    ...) 
{
    p.adjust.method <- match.arg(p.adjust.method)
    DNAME <- paste(deparse1(substitute(x)), "and", deparse1(substitute(g)))
    g <- factor(g)
    METHOD <- NULL
    compare.levels <- function(i, j) {
        xi <- x[as.integer(g) == i]
        xj <- x[as.integer(g) == j]
        if (is.null(METHOD)) {
            wt <- wilcox.test(xi, xj, paired = paired, ...)
            METHOD <<- wt$method
            wt$p.value
        }
        else wilcox.test(xi, xj, paired = paired, ...)$p.value
    }
    PVAL <- pairwise.table(compare.levels, levels(g), p.adjust.method)
    ans <- list(method = METHOD, data.name = DNAME, p.value = PVAL, 
        p.adjust.method = p.adjust.method)
    class(ans) <- "pairwise.htest"
    ans
}

# Examples
attach(airquality)
Month <- factor(Month, labels = month.abb[5:9])
## These give warnings because of ties :
pairwise.wilcox.test(Ozone, Month)
pairwise.wilcox.test(Ozone, Month, p.adjust.method = "bonf")
detach()

