#? stdlib
`loess` <- function (formula, data, weights, subset, na.action, model = FALSE, 
    span = 0.75, enp.target, degree = 2L, parametric = FALSE, 
    drop.square = FALSE, normalize = TRUE, family = c("gaussian", 
        "symmetric"), method = c("loess", "model.frame"), control = loess.control(...), 
    ...) 
{
    family <- match.arg(family)
    method <- match.arg(method)
    mf <- match.call(expand.dots = FALSE)
    mf$model <- mf$span <- mf$enp.target <- mf$degree <- mf$parametric <- mf$drop.square <- mf$normalize <- mf$family <- mf$method <- mf$control <- mf$... <- NULL
    mf[[1L]] <- quote(stats::model.frame)
    mf <- eval(mf, parent.frame())
    if (match.arg(method) == "model.frame") 
        return(mf)
    mt <- attr(mf, "terms")
    y <- model.response(mf, "numeric")
    w <- model.weights(mf) %||% rep_len(1, length(y))
    nmx <- as.character(attr(mt, "variables"))[-(1L:2)]
    x <- mf[, nmx, drop = FALSE]
    if (any(sapply(x, is.factor))) 
        stop("predictors must all be numeric")
    x <- as.matrix(x)
    D <- ncol(x)
    nmx <- setNames(nm = colnames(x))
    drop.square <- match(nmx, nmx[drop.square], 0L) > 0L
    parametric <- match(nmx, nmx[parametric], 0L) > 0L
    if (!match(degree, 0L:2L, 0L)) 
        stop("'degree' must be 0, 1 or 2")
    iterations <- if (family == "gaussian") 
        1L
    else control$iterations
    if (!missing(enp.target)) 
        if (!missing(span)) 
            warning("both 'span' and 'enp.target' specified: 'span' will be used")
        else {
            tau <- switch(degree + 1L, 1, D + 1, (D + 1) * (D + 
                2)/2) - sum(drop.square)
            span <- 1.2 * tau/enp.target
        }
    if (!is.list(control) || !is.character(control$surface) || 
        !is.character(control$statistics) || !is.character(control$trace.hat) || 
        !is.numeric(control$cell) || !is.numeric(iterations)) 
        stop("invalid 'control' argument")
    fit <- simpleLoess(y, x, w, span, degree = degree, parametric = parametric, 
        drop.square = drop.square, normalize = normalize, statistics = control$statistics, 
        surface = control$surface, cell = control$cell, iterations = iterations, 
        iterTrace = control$iterTrace, trace.hat = control$trace.hat)
    fit$call <- match.call()
    fit$terms <- mt
    fit$xnames <- nmx
    fit$x <- x
    fit$y <- y
    fit$weights <- w
    if (model) 
        fit$model <- mf
    fit$na.action <- attr(mf, "na.action")
    fit
}

# Examples
cars.lo <- loess(dist ~ speed, cars)
predict(cars.lo, data.frame(speed = seq(5, 30, 1)), se = TRUE)
# to allow extrapolation
cars.lo2 <- loess(dist ~ speed, cars,
                  control = loess.control(surface = "direct"))
predict(cars.lo2, data.frame(speed = seq(5, 30, 1)), se = TRUE)

