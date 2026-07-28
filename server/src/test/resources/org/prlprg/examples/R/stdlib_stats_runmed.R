#? stdlib
`runmed` <- function (x, k, endrule = c("median", "keep", "constant"), algorithm = NULL, 
    na.action = c("+Big_alternate", "-Big_alternate", "na.omit", 
        "fail"), print.level = 0) 
{
    n <- length(x)
    if (is.na(n)) 
        stop(gettextf("invalid value of %s", "length(x)"), domain = NA)
    k <- as.integer(k)
    if (is.na(k)) 
        stop(gettextf("invalid value of %s", "'k'"), domain = NA)
    if (k < 0L) 
        stop("'k' must be positive")
    if (k%%2L == 0L) 
        warning(gettextf("'k' must be odd!  Changing 'k' to %d", 
            k <- as.integer(1 + 2 * (k%/%2))), domain = NA)
    if (n == 0L) {
        x <- double()
        attr(x, "k") <- k
        return(x)
    }
    if (k > n) 
        warning(gettextf("'k' is bigger than 'n'!  Changing 'k' to %d", 
            k <- as.integer(1 + 2 * ((n - 1)%/%2))), domain = NA)
    algorithm <- if (missing(algorithm)) {
        if (k < 20L || n < 300L) 
            "Stuetzle"
        else "Turlach"
    }
    else match.arg(algorithm, c("Stuetzle", "Turlach"))
    endrule <- match.arg(endrule)
    iend <- switch(endrule, median = , keep = 0L, constant = 1L)
    na.actions <- eval(formals()$na.action, NULL, baseenv())
    iNAct <- if (missing(na.action)) 
        1L
    else pmatch(na.action, na.actions)
    if (print.level) 
        cat(sprintf(paste0("runmed(x, k=%d, endrule='%s' ( => iend=%d), algorithm='%s',\n", 
            "       na.*='%s' ( => iNAct=%d))\n"), k, endrule, 
            iend, algorithm, na.actions[[iNAct]], iNAct))
    res <- switch(algorithm, Turlach = .Call(C_runmed, as.double(x), 
        1, k, iend, iNAct, print.level), Stuetzle = .Call(C_runmed, 
        as.double(x), 0, k, iend, iNAct, print.level))
    if (endrule == "median") 
        res <- smoothEnds(res, k = k)
    attr(res, "k") <- k
    res
}

# Examples
require(graphics)

utils::example(nhtemp)
myNHT <- as.vector(nhtemp)
myNHT[20] <- 2 * nhtemp[20]
plot(myNHT, type = "b", ylim = c(48, 60), main = "Running Medians Example")
lines(runmed(myNHT, 7), col = "red")

## special: multiple y values for one x
plot(cars, main = "'cars' data and runmed(dist, 3)")
lines(cars, col = "light gray", type = "c")
with(cars, lines(speed, runmed(dist, k = 3), col = 2))


## nice quadratic with a few outliers
y <- ys <- (-20:20)^2
y [c(1,10,21,41)] <- c(150, 30, 400, 450)
all(y == runmed(y, 1)) # 1-neighbourhood <==> interpolation
plot(y) ## lines(y, lwd = .1, col = "light gray")
lines(lowess(seq(y), y, f = 0.3), col = "brown")
lines(runmed(y, 7), lwd = 2, col = "blue")
lines(runmed(y, 11), lwd = 2, col = "red")

## Lowess is not robust
y <- ys ; y[21] <- 6666 ; x <- seq(y)
col <- c("black", "brown","blue")
plot(y, col = col[1])
lines(lowess(x, y, f = 0.3), col = col[2])


lines(runmed(y, 7),      lwd = 2, col = col[3])
legend(length(y),max(y), c("data", "lowess(y, f = 0.3)", "runmed(y, 7)"),
       xjust = 1, col = col, lty = c(0, 1, 1), pch = c(1,NA,NA))

## An example with initial NA's - used to fail badly (notably for "Turlach"):
x15 <- c(rep(NA, 4), c(9, 9, 4, 22, 6, 1, 7, 5, 2, 8, 3))
rS15 <- cbind(Sk.3 = runmed(x15, k = 3, algorithm="S"),
              Sk.7 = runmed(x15, k = 7, algorithm="S"),
              Sk.11= runmed(x15, k =11, algorithm="S"))
rT15 <- cbind(Tk.3 = runmed(x15, k = 3, algorithm="T", print.level=1),
              Tk.7 = runmed(x15, k = 7, algorithm="T", print.level=1),
              Tk.9 = runmed(x15, k = 9, algorithm="T", print.level=1),
              Tk.11= runmed(x15, k =11, algorithm="T", print.level=1))
cbind(x15, rS15, rT15) # result for k=11  maybe a bit surprising ..
Tv <- rT15[-(1:3),]
stopifnot(3 <= Tv, Tv <= 9, 5 <= Tv[1:10,])
matplot(y = cbind(x15, rT15), type = "b", ylim = c(1,9), pch=1:5, xlab = NA,
        main = "runmed(x15, k, algo = \"Turlach\")")
mtext(paste("x15 <-", deparse(x15)))
points(x15, cex=2)
legend("bottomleft", legend=c("data", paste("k = ", c(3,7,9,11))),
       bty="n", col=1:5, lty=1:5, pch=1:5)

