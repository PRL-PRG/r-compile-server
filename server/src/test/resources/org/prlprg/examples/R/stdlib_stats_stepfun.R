#? stdlib
`stepfun` <- function (x, y, f = as.numeric(right), ties = "ordered", right = FALSE) 
{
    if (is.unsorted(x)) 
        stop("stepfun: 'x' must be ordered increasingly")
    n <- length(x)
    if (n < 1) 
        stop("'x' must have length >= 1")
    n1 <- n + 1L
    if (length(y) != n1) 
        stop("'y' must be one longer than 'x'")
    rval <- approxfun(x, y[-if (right) 
        n1
    else 1], method = "constant", yleft = y[1L], yright = y[n1], 
        f = f, ties = ties)
    class(rval) <- c("stepfun", class(rval))
    attr(rval, "call") <- sys.call()
    rval
}

# Examples
y0 <- c(1., 2., 4., 3.)
sfun0  <- stepfun(1:3, y0, f = 0)
sfun.2 <- stepfun(1:3, y0, f = 0.2)
sfun1  <- stepfun(1:3, y0, f = 1)
sfun1c <- stepfun(1:3, y0, right = TRUE) # hence f=1
sfun0
summary(sfun0)
summary(sfun.2)

## look at the internal structure:
unclass(sfun0)
ls(envir = environment(sfun0))

x0 <- seq(0.5, 3.5, by = 0.25)
rbind(x = x0, f.f0 = sfun0(x0), f.f02 = sfun.2(x0),
      f.f1 = sfun1(x0), f.f1c = sfun1c(x0))
## Identities :
stopifnot(identical(y0[-1], sfun0 (1:3)), # right = FALSE
          identical(y0[-4], sfun1c(1:3))) # right = TRUE

