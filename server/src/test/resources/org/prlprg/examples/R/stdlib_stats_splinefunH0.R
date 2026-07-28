#? stdlib
`splinefunH0` <- function (x0, y0, m, dx = x0[-1L] - x0[-length(x0)]) 
{
    function(x, deriv = 0, extrapol = c("linear", "cubic")) {
        extrapol <- match.arg(extrapol)
        deriv <- as.integer(deriv)
        if (deriv < 0 || deriv > 3) 
            stop("'deriv' must be between 0 and 3")
        i <- findInterval(x, x0, all.inside = (extrapol == "cubic"))
        if (deriv == 0) 
            interp <- function(x, i) {
                h <- dx[i]
                t <- (x - x0[i])/h
                t1 <- t - 1
                h01 <- t * t * (3 - 2 * t)
                h00 <- 1 - h01
                tt1 <- t * t1
                h10 <- tt1 * t1
                h11 <- tt1 * t
                y0[i] * h00 + h * m[i] * h10 + y0[i + 1] * h01 + 
                  h * m[i + 1] * h11
            }
        else if (deriv == 1) 
            interp <- function(x, i) {
                h <- dx[i]
                t <- (x - x0[i])/h
                t1 <- t - 1
                h01 <- -6 * t * t1
                h10 <- (3 * t - 1) * t1
                h11 <- (3 * t - 2) * t
                (y0[i + 1] - y0[i])/h * h01 + m[i] * h10 + m[i + 
                  1] * h11
            }
        else if (deriv == 2) 
            interp <- function(x, i) {
                h <- dx[i]
                t <- (x - x0[i])/h
                h01 <- 6 * (1 - 2 * t)
                h10 <- 2 * (3 * t - 2)
                h11 <- 2 * (3 * t - 1)
                ((y0[i + 1] - y0[i])/h * h01 + m[i] * h10 + m[i + 
                  1] * h11)/h
            }
        else interp <- function(x, i) {
            h <- dx[i]
            h01 <- -12
            h10 <- 6
            h11 <- 6
            ((y0[i + 1] - y0[i])/h * h01 + m[i] * h10 + m[i + 
                1] * h11)/h
        }
        if (extrapol == "linear" && any(iXtra <- (iL <- (i == 
            0)) | (iR <- (i == (n <- length(x0)))))) {
            r <- x
            if (any(iL)) 
                r[iL] <- if (deriv == 0) 
                  y0[1L] + m[1L] * (x[iL] - x0[1L])
                else if (deriv == 1) 
                  m[1L]
                else 0
            if (any(iR)) 
                r[iR] <- if (deriv == 0) 
                  y0[n] + m[n] * (x[iR] - x0[n])
                else if (deriv == 1) 
                  m[n]
                else 0
            ini <- !iXtra
            r[ini] <- interp(x[ini], i[ini])
            r
        }
        else {
            interp(x, i)
        }
    }
}
