#? stdlib
`nlminb` <- function (start, objective, gradient = NULL, hessian = NULL, 
    ..., scale = 1, control = list(), lower = -Inf, upper = Inf) 
{
    par <- setNames(as.double(start), names(start))
    n <- length(par)
    iv <- integer(78 + 3 * n)
    v <- double(130 + (n * (n + 27))/2)
    .Call(C_port_ivset, 2, iv, v)
    if (length(control)) {
        nms <- names(control)
        if (!is.list(control) || is.null(nms)) 
            stop("'control' argument must be a named list")
        pos <- pmatch(nms, names(port_cpos))
        if (any(nap <- is.na(pos))) {
            warning(sprintf(ngettext(length(nap), "unrecognized control element named %s ignored", 
                "unrecognized control elements named %s ignored"), 
                paste(sQuote(nms[nap]), collapse = ", ")), domain = NA)
            pos <- pos[!nap]
            control <- control[!nap]
        }
        ivpars <- pos <= 4
        vpars <- !ivpars
        if (any(ivpars)) 
            iv[port_cpos[pos[ivpars]]] <- as.integer(unlist(control[ivpars]))
        if (any(vpars)) 
            v[port_cpos[pos[vpars]]] <- as.double(unlist(control[vpars]))
    }
    obj <- quote(objective(.par, ...))
    rho <- new.env(parent = environment())
    assign(".par", par, envir = rho)
    grad <- hess <- low <- upp <- NULL
    if (!is.null(gradient)) {
        grad <- quote(gradient(.par, ...))
        if (!is.null(hessian)) {
            if (is.logical(hessian)) 
                stop("logical 'hessian' argument not allowed.  See documentation.")
            hess <- quote(hessian(.par, ...))
        }
    }
    if (any(lower != -Inf) || any(upper != Inf)) {
        low <- rep_len(as.double(lower), length(par))
        upp <- rep_len(as.double(upper), length(par))
    }
    else low <- upp <- numeric()
    .Call(C_port_nlminb, obj, grad, hess, rho, low, upp, d = rep_len(as.double(scale), 
        length(par)), iv, v)
    iv1 <- iv[1L]
    list(par = get(".par", envir = rho), objective = v[10L], 
        convergence = (if (iv1 %in% 3L:6L) 0L else 1L), iterations = iv[31L], 
        evaluations = c(`function` = iv[6L], gradient = iv[30L]), 
        message = if (19 <= iv1 && iv1 <= 43) {
            if (any(B <- iv1 == port_cpos)) sprintf("'control' component '%s' = %g, is out of range", 
                names(port_cpos)[B], v[iv1]) else sprintf("V[IV[1]] = V[%d] = %g is out of range (see PORT docu.)", 
                iv1, v[iv1])
        } else port_msg(iv1))
}

# Examples\donttest{
x <- rnbinom(100, mu = 10, size = 10)
hdev <- function(par)
    -sum(dnbinom(x, mu = par[1], size = par[2], log = TRUE))
nlminb(c(9, 12), hdev)
nlminb(c(20, 20), hdev, lower = 0, upper = Inf)
nlminb(c(20, 20), hdev, lower = 0.001, upper = Inf)

## slightly modified from the S-PLUS help page for nlminb
# this example minimizes a sum of squares with known solution y
sumsq <- function( x, y) {sum((x-y)^2)}
y <- rep(1,5)
x0 <- rnorm(length(y))
nlminb(start = x0, sumsq, y = y)
# now use bounds with a y that has some components outside the bounds
y <- c( 0, 2, 0, -2, 0)
nlminb(start = x0, sumsq, lower = -1, upper = 1, y = y)
# try using the gradient
sumsq.g <- function(x, y) 2*(x-y)
nlminb(start = x0, sumsq, sumsq.g,
       lower = -1, upper = 1, y = y)
# now use the hessian, too
sumsq.h <- function(x, y) diag(2, nrow = length(x))
nlminb(start = x0, sumsq, sumsq.g, sumsq.h,
       lower = -1, upper = 1, y = y)

## Rest lifted from optim help page

fr <- function(x) {   ## Rosenbrock Banana function
    x1 <- x[1]
    x2 <- x[2]
    100 * (x2 - x1 * x1)^2 + (1 - x1)^2
}
grr <- function(x) { ## Gradient of 'fr'
    x1 <- x[1]
    x2 <- x[2]
    c(-400 * x1 * (x2 - x1 * x1) - 2 * (1 - x1),
       200 *      (x2 - x1 * x1))
}
nlminb(c(-1.2,1), fr)
nlminb(c(-1.2,1), fr, grr)


flb <- function(x)
    { p <- length(x); sum(c(1, rep(4, p-1)) * (x - c(1, x[-p])^2)^2) }
## 25-dimensional box constrained
## par[24] is *not* at boundary
nlminb(rep(3, 25), flb, lower = rep(2, 25), upper = rep(4, 25))
## trying to use a too small tolerance:
r <- nlminb(rep(3, 25), flb, control = list(rel.tol = 1e-16))
stopifnot(grepl("rel.tol", r$message))
}
