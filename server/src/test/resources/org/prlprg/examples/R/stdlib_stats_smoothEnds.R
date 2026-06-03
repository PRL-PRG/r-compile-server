#? stdlib
`smoothEnds` <- function (y, k = 3) 
{
    med3 <- function(a, b, c) {
        m <- b
        if (a < b) {
            if (c < b) 
                m <- if (a >= c) 
                  a
                else c
        }
        else {
            if (c > b) 
                m <- if (a <= c) 
                  a
                else c
        }
        m
    }
    med.3 <- function(x) {
        if (anyNA(x)) 
            mean.default(x[!is.na(x)], na.rm = TRUE)
        else med3(x[[1L]], x[[2L]], x[[3L]])
    }
    med3i <- function(a, b, c) {
        if (anyNA(x <- c(a, b, c))) 
            mean.default(x[!is.na(x)], na.rm = TRUE)
        else med3(a, b, c)
    }
    med.odd <- function(x, n = length(x)) {
        if (anyNA(x)) 
            n <- length(x <- x[!is.na(x)])
        if (half <- (n + 1L)%/%2L) 
            sort(x, partial = half)[half]
        else x[1L]
    }
    k <- as.integer(k)
    if (k < 0L || k%%2L == 0L) 
        stop("bandwidth 'k' must be >= 1 and odd!")
    k <- k%/%2L
    if (k < 1L) 
        return(y)
    n <- length(y)
    n_1 <- n - 1L
    n_2 <- n - 2L
    sm <- y
    if (k >= 2L) {
        sm[2L] <- med.3(y[1:3])
        sm[n_1] <- med.3(y[c(n, n_1, n_2)])
        if (k >= 3L) {
            for (i in 3:k) {
                j <- 2L * i - 1L
                sm[i] <- med.odd(y[1L:j], j)
                sm[n - i + 1L] <- med.odd(y[(n + 1L - j):n], 
                  j)
            }
        }
    }
    sm[1L] <- med3i(y[1L], sm[2L], sm[2L] - 2L * (sm[3L] - sm[2L]))
    sm[n] <- med3i(y[n], sm[n_1], sm[n_1] - 2L * (sm[n_2] - sm[n_1]))
    sm
}

# Examples
require(graphics)

y <- ys <- (-20:20)^2
y [c(1,10,21,41)] <-  c(100, 30, 400, 470)
s7k <- runmed(y, 7, endrule = "keep")
s7. <- runmed(y, 7, endrule = "const")
s7m <- runmed(y, 7)
col3 <- c("midnightblue","blue","steelblue")
plot(y, main = "Running Medians -- runmed(*, k=7, endrule = X)")
lines(ys, col = "light gray")
matlines(cbind(s7k, s7.,s7m), lwd = 1.5, lty = 1, col = col3)
eRules <- c("keep","constant","median")
legend("topleft", paste("endrule", eRules, sep = " = "),
       col = col3, lwd = 1.5, lty = 1, bty = "n")

stopifnot(identical(s7m, smoothEnds(s7k, 7)))

## With missing values (for R >= 3.6.1):
yN <- y; yN[c(2,40)] <- NA
rN <- sapply(eRules, function(R) runmed(yN, 7, endrule=R))
matlines(rN, type = "b", pch = 4, lwd = 3, lty=2,
         col = adjustcolor(c("red", "orange4", "orange1"), 0.5))
yN[c(1, 20:21)] <- NA # additionally
rN. <- sapply(eRules, function(R) runmed(yN, 7, endrule=R))
head(rN., 4); tail(rN.) # more NA's too, still not *so* many:
stopifnot(exprs = {
   !anyNA(rN[,2:3])
   identical(which(is.na(rN[,"keep"])), c(2L, 40L))
   identical(which(is.na(rN.), arr.ind=TRUE, useNames=FALSE),
             cbind(c(1:2,40L), 1L))
   identical(rN.[38:41, "median"], c(289,289, 397, 470))
})

