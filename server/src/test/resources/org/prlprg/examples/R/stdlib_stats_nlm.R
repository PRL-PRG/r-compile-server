#? stdlib
`nlm` <- function (f, p, ..., hessian = FALSE, typsize = rep(1, length(p)), 
    fscale = 1, print.level = 0, ndigit = 12, gradtol = 1e-06, 
    stepmax = max(1000 * sqrt(sum((p/typsize)^2)), 1000), steptol = 1e-06, 
    iterlim = 100, check.analyticals = TRUE) 
{
    print.level <- as.integer(print.level)
    if (print.level < 0 || print.level > 2) 
        stop("'print.level' must be in {0,1,2}")
    msg <- (1 + c(8, 0, 16))[1 + print.level]
    if (!check.analyticals) 
        msg <- msg + (2 + 4)
    .External2(C_nlm, function(x) f(x, ...), p, hessian, typsize, 
        fscale, msg, ndigit, gradtol, stepmax, steptol, iterlim)
}

# Examples
f <- function(x) sum((x-1:length(x))^2)
nlm(f, c(10,10))
nlm(f, c(10,10), print.level = 2)
utils::str(nlm(f, c(5), hessian = TRUE))

f <- function(x, a) sum((x-a)^2)
nlm(f, c(10,10), a = c(3,5))
f <- function(x, a)
{
    res <- sum((x-a)^2)
    attr(res, "gradient") <- 2*(x-a)
    res
}
nlm(f, c(10,10), a = c(3,5))

## more examples, including the use of derivatives.


