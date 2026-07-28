#? stdlib
`Vectorize` <- function (FUN, vectorize.args = arg.names, SIMPLIFY = TRUE, USE.NAMES = TRUE) 
{
    arg.names <- as.list(formals(FUN))
    arg.names[["..."]] <- NULL
    arg.names <- names(arg.names)
    vectorize.args <- as.character(vectorize.args)
    if (!length(vectorize.args)) 
        return(FUN)
    if (!all(vectorize.args %in% arg.names)) 
        stop("must specify names of formal arguments for 'vectorize'")
    collisions <- arg.names %in% c("FUN", "SIMPLIFY", "USE.NAMES", 
        "vectorize.args")
    if (any(collisions)) 
        stop(sQuote("FUN"), " may not have argument(s) named ", 
            paste(sQuote(arg.names[collisions]), collapse = ", "))
    rm(arg.names, collisions)
    (function() {
        FUNV <- function() {
            args <- lapply(as.list(match.call())[-1L], eval, 
                parent.frame())
            names <- names(args) %||% character(length(args))
            dovec <- names %in% vectorize.args
            do.call("mapply", c(FUN = FUN, args[dovec], MoreArgs = list(args[!dovec]), 
                SIMPLIFY = SIMPLIFY, USE.NAMES = USE.NAMES))
        }
        formals(FUNV) <- formals(FUN)
        environment(FUNV) <- parent.env(environment())
        FUNV
    })()
}

# Examples
# We use rep.int as rep is primitive
vrep <- Vectorize(rep.int)
vrep(1:4, 4:1)
vrep(times = 1:4, x = 4:1)

vrep <- Vectorize(rep.int, "times")
vrep(times = 1:4, x = 42)

f <- function(x = 1:3, y) c(x, y)
vf <- Vectorize(f, SIMPLIFY = FALSE)
f(1:3, 1:3)
vf(1:3, 1:3)
vf(y = 1:3) # Only vectorizes y, not x

# Nonlinear regression contour plot, based on nls() example
require(graphics)
SS <- function(Vm, K, resp, conc) {
    pred <- (Vm * conc)/(K + conc)
    sum((resp - pred)^2 / pred)
}
vSS <- Vectorize(SS, c("Vm", "K"))
Treated <- subset(Puromycin, state == "treated")

Vm <- seq(140, 310, length.out = 50)
K <- seq(0, 0.15, length.out = 40)
SSvals <- outer(Vm, K, vSS, Treated$rate, Treated$conc)
contour(Vm, K, SSvals, levels = (1:10)^2, xlab = "Vm", ylab = "K")

# combn() has an argument named FUN
combnV <- Vectorize(function(x, m, FUNV = NULL) combn(x, m, FUN = FUNV),
                    vectorize.args = c("x", "m"))
combnV(4, 1:4)
combnV(4, 1:4, sum)

