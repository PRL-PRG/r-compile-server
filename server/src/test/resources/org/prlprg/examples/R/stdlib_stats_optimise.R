#? stdlib
`optimise` <- function (f, interval, ..., lower = min(interval), upper = max(interval), 
    maximum = FALSE, tol = .Machine$double.eps^0.25) 
{
    if (maximum) {
        val <- .External2(C_do_fmin, function(arg) -f(arg, ...), 
            lower, upper, tol)
        list(maximum = val, objective = f(val, ...))
    }
    else {
        val <- .External2(C_do_fmin, function(arg) f(arg, ...), 
            lower, upper, tol)
        list(minimum = val, objective = f(val, ...))
    }
}
