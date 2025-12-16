#? stdlib
`power.t.test` <- function (n = NULL, delta = NULL, sd = 1, sig.level = 0.05, power = NULL, 
    type = c("two.sample", "one.sample", "paired"), alternative = c("two.sided", 
        "one.sided"), strict = FALSE, tol = .Machine$double.eps^0.25) 
{
    if (sum(vapply(list(n, delta, sd, power, sig.level), is.null, 
        NA)) != 1) 
        stop("exactly one of 'n', 'delta', 'sd', 'power', and 'sig.level' must be NULL")
    assert_NULL_or_prob(sig.level)
    assert_NULL_or_prob(power)
    type <- match.arg(type)
    alternative <- match.arg(alternative)
    tsample <- switch(type, one.sample = 1, two.sample = 2, paired = 1)
    force(tsample)
    tside <- switch(alternative, one.sided = 1, two.sided = 2)
    if (tside == 2 && !is.null(delta)) 
        delta <- abs(delta)
    p.body <- if (strict && tside == 2) 
        quote({
            nu <- pmax(1e-07, n - 1) * tsample
            qu <- qt(sig.level/tside, nu, lower.tail = FALSE)
            pt(qu, nu, ncp = sqrt(n/tsample) * delta/sd, lower.tail = FALSE) + 
                pt(-qu, nu, ncp = sqrt(n/tsample) * delta/sd, 
                  lower.tail = TRUE)
        })
    else quote({
        nu <- pmax(1e-07, n - 1) * tsample
        pt(qt(sig.level/tside, nu, lower.tail = FALSE), nu, ncp = sqrt(n/tsample) * 
            delta/sd, lower.tail = FALSE)
    })
    if (is.null(power)) 
        power <- eval(p.body)
    else if (is.null(n)) 
        n <- uniroot(function(n) eval(p.body) - power, c(2, 1e+07), 
            tol = tol, extendInt = "upX")$root
    else if (is.null(sd)) 
        sd <- uniroot(function(sd) eval(p.body) - power, delta * 
            c(1e-07, 1e+07), tol = tol, extendInt = "downX")$root
    else if (is.null(delta)) 
        delta <- uniroot(function(delta) eval(p.body) - power, 
            sd * c(1e-07, 1e+07), tol = tol, extendInt = "upX")$root
    else if (is.null(sig.level)) 
        sig.level <- uniroot(function(sig.level) eval(p.body) - 
            power, c(1e-10, 1 - 1e-10), tol = tol, extendInt = "yes")$root
    else stop("internal error", domain = NA)
    NOTE <- switch(type, paired = "n is number of *pairs*, sd is std.dev. of *differences* within pairs", 
        two.sample = "n is number in *each* group", NULL)
    METHOD <- paste(switch(type, one.sample = "One-sample", two.sample = "Two-sample", 
        paired = "Paired"), "t test power calculation")
    structure(list(n = n, delta = delta, sd = sd, sig.level = sig.level, 
        power = power, alternative = alternative, note = NOTE, 
        method = METHOD), class = "power.htest")
}

# Examples
 power.t.test(n = 20, delta = 1)
 power.t.test(power = .90, delta = 1)
 power.t.test(power = .90, delta = 1, alternative = "one.sided")

