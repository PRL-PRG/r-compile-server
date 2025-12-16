#? stdlib
`optimize` <- function (f, interval, ..., lower = min(interval), upper = max(interval), 
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

# Examples
require(graphics)

f <- function (x, a) (x - a)^2
xmin <- optimize(f, c(0, 1), tol = 0.0001, a = 1/3)
xmin

## See where the function is evaluated:
optimize(function(x) x^2*(print(x)-1), lower = 0, upper = 10)

## "wrong" solution with unlucky interval and piecewise constant f():
f  <- function(x) ifelse(x > -1, ifelse(x < 4, exp(-1/abs(x - 1)), 10), 10)
fp <- function(x) { print(x); f(x) }

plot(f, -2,5, ylim = 0:1, col = 2)
optimize(fp, c(-4, 20))   # doesn't see the minimum
optimize(fp, c(-7, 20))   # ok

