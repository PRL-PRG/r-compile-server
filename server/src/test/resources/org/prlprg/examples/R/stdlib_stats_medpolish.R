#? stdlib
`medpolish` <- function (x, eps = 0.01, maxiter = 10L, trace.iter = TRUE, na.rm = FALSE) 
{
    z <- as.matrix(x)
    nr <- nrow(z)
    nc <- ncol(z)
    t <- 0
    r <- numeric(nr)
    c <- numeric(nc)
    oldsum <- 0
    for (iter in 1L:maxiter) {
        rdelta <- apply(z, 1L, median, na.rm = na.rm)
        z <- z - matrix(rdelta, nrow = nr, ncol = nc)
        r <- r + rdelta
        delta <- median(c, na.rm = na.rm)
        c <- c - delta
        t <- t + delta
        cdelta <- apply(z, 2L, median, na.rm = na.rm)
        z <- z - matrix(cdelta, nrow = nr, ncol = nc, byrow = TRUE)
        c <- c + cdelta
        delta <- median(r, na.rm = na.rm)
        r <- r - delta
        t <- t + delta
        newsum <- sum(abs(z), na.rm = na.rm)
        converged <- newsum == 0 || abs(newsum - oldsum) < eps * 
            newsum
        if (converged) 
            break
        oldsum <- newsum
        if (trace.iter) 
            cat(iter, ": ", newsum, "\n", sep = "")
    }
    if (converged) {
        if (trace.iter) 
            cat("Final: ", newsum, "\n", sep = "")
    }
    else warning(sprintf(ngettext(maxiter, "medpolish() did not converge in %d iteration", 
        "medpolish() did not converge in %d iterations"), maxiter), 
        domain = NA)
    names(r) <- rownames(z)
    names(c) <- colnames(z)
    ans <- list(overall = t, row = r, col = c, residuals = z, 
        name = deparse1(substitute(x)))
    class(ans) <- "medpolish"
    ans
}

# Examples
require(graphics)

## Deaths from sport parachuting;  from ABC of EDA, p.224:
deaths <-
    rbind(c(14,15,14),
          c( 7, 4, 7),
          c( 8, 2,10),
          c(15, 9,10),
          c( 0, 2, 0))
dimnames(deaths) <- list(c("1-24", "25-74", "75-199", "200++", "NA"),
                         paste(1973:1975))
deaths
(med.d <- medpolish(deaths))
plot(med.d)
## Check decomposition:
all(deaths ==
    med.d$overall + outer(med.d$row,med.d$col, `+`) + med.d$residuals)

