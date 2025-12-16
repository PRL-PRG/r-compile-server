#? stdlib
`loess.smooth` <- function (x, y, span = 2/3, degree = 1, family = c("symmetric", 
    "gaussian"), evaluation = 50, ...) 
{
    notna <- !(is.na(x) | is.na(y))
    x <- x[notna]
    y <- y[notna]
    new.x <- seq.int(min(x), max(x), length.out = evaluation)
    control <- loess.control(...)
    w <- rep_len(1, length(y))
    family <- match.arg(family)
    iterations <- if (family == "gaussian") 
        1L
    else control$iterations
    kd <- simpleLoess(y, x, w, span, degree = degree, parametric = FALSE, 
        drop.square = FALSE, normalize = FALSE, statistics = "none", 
        surface = "interpolate", cell = control$cell, iterations = iterations, 
        iterTrace = control$iterTrace, trace.hat = control$trace.hat)$kd
    z <- .C(C_loess_ifit, as.integer(kd$parameter), as.integer(kd$a), 
        as.double(kd$xi), as.double(kd$vert), as.double(kd$vval), 
        as.integer(evaluation), as.double(new.x), fit = double(evaluation))$fit
    list(x = new.x, y = z)
}
