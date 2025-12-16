#? stdlib
`numericDeriv` <- function (expr, theta, rho = parent.frame(), dir = 1, eps = .Machine$double.eps^(1/if (central) 3 else 2), 
    central = FALSE) 
{
    dir <- rep_len(dir, length(theta))
    stopifnot(is.finite(eps), eps > 0)
    val <- .Call(C_numeric_deriv, expr, theta, rho, dir, eps, 
        central)
    if (!is.null(d <- dim(val))) {
        if (d[length(d)] == 1L) 
            d <- d[-length(d)]
        if (length(d) > 1L) 
            dim(attr(val, "gradient")) <- c(d, dim(attr(val, 
                "gradient"))[-1L])
    }
    val
}

# Examples
myenv <- new.env()
myenv$mean <- 0.
myenv$sd   <- 1.
myenv$x    <- seq(-3., 3., length.out = 31)
nD <- numericDeriv(quote(pnorm(x, mean, sd)), c("mean", "sd"), myenv)
str(nD)

## Visualize :
require(graphics)
matplot(myenv$x, cbind(c(nD), attr(nD, "gradient")), type="l")
abline(h=0, lty=3)
## "gradient" is close to the true derivatives, you don't see any diff.:
curve( - dnorm(x), col=2, lty=3, lwd=2, add=TRUE)
curve(-x*dnorm(x), col=3, lty=3, lwd=2, add=TRUE)
##
\dontdiff{# shows 1.609e-8 on most platforms
all.equal(attr(nD,"gradient"),
          with(myenv, cbind(-dnorm(x), -x*dnorm(x))))
}

