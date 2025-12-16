#? stdlib
`mahalanobis` <- function (x, center, cov, inverted = FALSE, ...) 
{
    x <- if (is.vector(x)) 
        matrix(x, ncol = length(x))
    else as.matrix(x)
    if (!isFALSE(center)) 
        x <- sweep(x, 2L, center)
    if (!inverted) 
        cov <- solve(cov, ...)
    setNames(rowSums(x %*% cov * x), rownames(x))
}

# Examples
require(graphics)

ma <- cbind(1:6, 1:3)
(S <-  var(ma))
mahalanobis(c(0, 0), 1:2, S)

x <- matrix(rnorm(100*3), ncol = 3)
stopifnot(mahalanobis(x, 0, diag(ncol(x))) == rowSums(x*x))
        ##- Here, D^2 = usual squared Euclidean distances

Sx <- cov(x)
D2 <- mahalanobis(x, colMeans(x), Sx)
plot(density(D2, bw = 0.5),
     main="Squared Mahalanobis distances, n=100, p=3") ; rug(D2)
qqplot(qchisq(ppoints(100), df = 3), D2,
       main = expression("Q-Q plot of Mahalanobis" * ~D^2 *
                         " vs. quantiles of" * ~ chi[3]^2))
abline(0, 1, col = 'gray')

