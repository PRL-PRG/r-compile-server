#? stdlib
`pairwise.t.test` <- function (x, g, p.adjust.method = p.adjust.methods, pool.sd = !paired, 
    paired = FALSE, alternative = c("two.sided", "less", "greater"), 
    ...) 
{
    if (paired && pool.sd) 
        stop("pooling of SD is incompatible with paired tests")
    DNAME <- paste(deparse1(substitute(x)), "and", deparse1(substitute(g)))
    g <- factor(g)
    p.adjust.method <- match.arg(p.adjust.method)
    alternative <- match.arg(alternative)
    if (pool.sd) {
        METHOD <- "t tests with pooled SD"
        xbar <- tapply(x, g, mean, na.rm = TRUE)
        s <- tapply(x, g, sd, na.rm = TRUE)
        n <- tapply(!is.na(x), g, sum)
        degf <- n - 1
        total.degf <- sum(degf)
        pooled.sd <- sqrt(sum(ifelse(degf, s^2, 0) * degf)/total.degf)
        compare.levels <- function(i, j) {
            dif <- xbar[i] - xbar[j]
            se.dif <- pooled.sd * sqrt(1/n[i] + 1/n[j])
            t.val <- dif/se.dif
            if (alternative == "two.sided") 
                2 * pt(-abs(t.val), total.degf)
            else pt(t.val, total.degf, lower.tail = (alternative == 
                "less"))
        }
    }
    else {
        METHOD <- if (paired) 
            "paired t tests"
        else "t tests with non-pooled SD"
        compare.levels <- function(i, j) {
            xi <- x[as.integer(g) == i]
            xj <- x[as.integer(g) == j]
            t.test(xi, xj, paired = paired, alternative = alternative, 
                ...)$p.value
        }
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
pairwise.t.test(Ozone, Month)
pairwise.t.test(Ozone, Month, p.adjust.method = "bonf")
pairwise.t.test(Ozone, Month, pool.sd = FALSE)
detach()

