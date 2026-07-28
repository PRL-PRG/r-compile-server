#? stdlib
`prop.trend.test` <- function (x, n, score = seq_along(x)) 
{
    method <- "Chi-squared Test for Trend in Proportions"
    dname <- paste(deparse1(substitute(x)), "out of", deparse1(substitute(n)), 
        ",\n using scores:", paste(score, collapse = " "))
    x <- as.vector(x)
    n <- as.vector(n)
    p <- sum(x)/sum(n)
    w <- n/p/(1 - p)
    a <- anova(lm(freq ~ score, data = list(freq = x/n, score = as.vector(score)), 
        weights = w))
    chisq <- c(`X-squared` = a["score", "Sum Sq"])
    structure(list(statistic = chisq, parameter = c(df = 1), 
        p.value = pchisq(as.numeric(chisq), 1, lower.tail = FALSE), 
        method = method, data.name = dname), class = "htest")
}

# Examples
smokers  <- c( 83, 90, 129, 70 )
patients <- c( 86, 93, 136, 82 )
prop.test(smokers, patients)
prop.trend.test(smokers, patients)
prop.trend.test(smokers, patients, c(0,0,0,1))

