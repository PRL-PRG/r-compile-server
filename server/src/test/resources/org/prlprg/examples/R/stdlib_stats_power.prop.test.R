#? stdlib
`power.prop.test` <- function (n = NULL, p1 = NULL, p2 = NULL, sig.level = 0.05, power = NULL, 
    alternative = c("two.sided", "one.sided"), strict = FALSE, 
    tol = .Machine$double.eps^0.25) 
{
    if (sum(vapply(list(n, p1, p2, power, sig.level), is.null, 
        NA)) != 1) 
        stop("exactly one of 'n', 'p1', 'p2', 'power', and 'sig.level' must be NULL")
    assert_NULL_or_prob(sig.level)
    assert_NULL_or_prob(power)
    alternative <- match.arg(alternative)
    tside <- switch(alternative, one.sided = 1, two.sided = 2)
    p.body <- if (strict && tside == 2) 
        quote({
            qu <- qnorm(sig.level/tside, lower.tail = FALSE)
            d <- abs(p1 - p2)
            q1 <- 1 - p1
            q2 <- 1 - p2
            pbar <- (p1 + p2)/2
            qbar <- 1 - pbar
            v1 <- p1 * q1
            v2 <- p2 * q2
            vbar <- pbar * qbar
            pnorm((sqrt(n) * d - qu * sqrt(2 * vbar))/sqrt(v1 + 
                v2)) + pnorm((sqrt(n) * d + qu * sqrt(2 * vbar))/sqrt(v1 + 
                v2), lower.tail = FALSE)
        })
    else quote(pnorm((sqrt(n) * abs(p1 - p2) - (qnorm(sig.level/tside, 
        lower.tail = FALSE) * sqrt((p1 + p2) * (1 - (p1 + p2)/2))))/sqrt(p1 * 
        (1 - p1) + p2 * (1 - p2))))
    if (is.null(power)) 
        power <- eval(p.body)
    else if (is.null(n)) 
        n <- uniroot(function(n) eval(p.body) - power, c(1, 1e+07), 
            tol = tol, extendInt = "upX")$root
    else if (is.null(p1)) {
        p1 <- uniroot(function(p1) eval(p.body) - power, c(0, 
            p2), tol = tol, extendInt = "yes")$root
        if (p1 < 0) 
            warning("No p1 in [0, p2] can be found to achieve the desired power")
    }
    else if (is.null(p2)) {
        p2 <- uniroot(function(p2) eval(p.body) - power, c(p1, 
            1), tol = tol, extendInt = "yes")$root
        if (p2 > 1) 
            warning("No p2 in [p1, 1] can be found to achieve the desired power")
    }
    else if (is.null(sig.level)) {
        sig.level <- uniroot(function(sig.level) eval(p.body) - 
            power, c(1e-10, 1 - 1e-10), tol = tol, extendInt = "upX")$root
        if (sig.level < 0 || sig.level > 1) 
            warning("No significance level [0, 1] can be found to achieve the desired power")
    }
    else stop("internal error", domain = NA)
    structure(list(n = n, p1 = p1, p2 = p2, sig.level = sig.level, 
        power = power, alternative = alternative, note = "n is number in *each* group", 
        method = "Two-sample comparison of proportions power calculation"), 
        class = "power.htest")
}

# Examples
power.prop.test(n = 50, p1 = .50, p2 = .75)      ## => power = 0.740
power.prop.test(p1 = .50, p2 = .75, power = .90) ## =>     n = 76.7
power.prop.test(n = 50, p1 = .5, power = .90)    ## =>    p2 = 0.8026
power.prop.test(n = 50, p1 = .5, p2 = 0.9, power = .90, sig.level=NULL)
                                                 ## => sig.l = 0.00131
power.prop.test(p1 = .5, p2 = 0.501, sig.level=.001, power=0.90)
                                                 ## => n = 10451937
try(
 power.prop.test(n=30, p1=0.90, p2=NULL, power=0.8)
) # a warning  (which may become an error)
## Reason:
power.prop.test(      p1=0.90, p2= 1.0, power=0.8) ##-> n = 73.37

