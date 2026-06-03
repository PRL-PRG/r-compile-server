#? stdlib
`power.anova.test` <- function (groups = NULL, n = NULL, between.var = NULL, within.var = NULL, 
    sig.level = 0.05, power = NULL) 
{
    if (sum(vapply(list(groups, n, between.var, within.var, power, 
        sig.level), is.null, NA)) != 1) 
        stop("exactly one of 'groups', 'n', 'between.var', 'within.var', 'power', and 'sig.level' must be NULL")
    if (!is.null(groups) && groups < 2) 
        stop("number of groups must be at least 2")
    if (!is.null(n) && n < 2) 
        stop("number of observations in each group must be at least 2")
    assert_NULL_or_prob(sig.level)
    assert_NULL_or_prob(power)
    p.body <- quote({
        lambda <- (groups - 1) * n * (between.var/within.var)
        pf(qf(sig.level, groups - 1, (n - 1) * groups, lower.tail = FALSE), 
            groups - 1, (n - 1) * groups, lambda, lower.tail = FALSE)
    })
    if (is.null(power)) 
        power <- eval(p.body)
    else if (is.null(groups)) 
        groups <- uniroot(function(groups) eval(p.body) - power, 
            c(2, 100))$root
    else if (is.null(n)) 
        n <- uniroot(function(n) eval(p.body) - power, c(2, 1e+05))$root
    else if (is.null(within.var)) 
        within.var <- uniroot(function(within.var) eval(p.body) - 
            power, between.var * c(1e-07, 1e+07))$root
    else if (is.null(between.var)) 
        between.var <- uniroot(function(between.var) eval(p.body) - 
            power, within.var * c(1e-07, 1e+07))$root
    else if (is.null(sig.level)) 
        sig.level <- uniroot(function(sig.level) eval(p.body) - 
            power, c(1e-10, 1 - 1e-10))$root
    else stop("internal error", domain = NA)
    NOTE <- "n is number in each group"
    METHOD <- "Balanced one-way analysis of variance power calculation"
    structure(list(groups = groups, n = n, between.var = between.var, 
        within.var = within.var, sig.level = sig.level, power = power, 
        note = NOTE, method = METHOD), class = "power.htest")
}

# Examples
power.anova.test(groups = 4, n = 5, between.var = 1, within.var = 3)
# Power = 0.3535594

power.anova.test(groups = 4, between.var = 1, within.var = 3,
                 power = .80)
# n = 11.92613

## Assume we have prior knowledge of the group means:
groupmeans <- c(120, 130, 140, 150)
power.anova.test(groups = length(groupmeans),
                 between.var = var(groupmeans),
                 within.var = 500, power = .90) # n = 15.18834

