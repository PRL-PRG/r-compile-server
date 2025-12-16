#? stdlib
`r2dtable` <- function (n, r, c) 
{
    if (length(n <- as.integer(n)) == 0L || (n < 0) || is.na(n)) 
        stop("invalid argument 'n'")
    if (length(r <- as.integer(r)) <= 1L || any(r < 0) || anyNA(r)) 
        stop("invalid argument 'r'")
    if (length(c <- as.integer(c)) <= 1L || any(c < 0) || anyNA(c)) 
        stop("invalid argument 'c'")
    if (sum(r) != sum(c)) 
        stop("arguments 'r' and 'c' must have the same sums")
    .Call(C_r2dtable, n, r, c)
}

# Examples
## Fisher's Tea Drinker data.
TeaTasting <-
matrix(c(3, 1, 1, 3),
       nrow = 2,
       dimnames = list(Guess = c("Milk", "Tea"),
                       Truth = c("Milk", "Tea")))
## Simulate permutation test for independence based on the maximum
## Pearson residuals (rather than their sum).
rowTotals <- rowSums(TeaTasting)
colTotals <- colSums(TeaTasting)
nOfCases <- sum(rowTotals)
expected <- outer(rowTotals, colTotals) / nOfCases
maxSqResid <- function(x) max((x - expected) ^ 2 / expected)
simMaxSqResid <-
    sapply(r2dtable(1000, rowTotals, colTotals), maxSqResid)
sum(simMaxSqResid >= maxSqResid(TeaTasting)) / 1000
## Fisher's exact test gives p = 0.4857 ...

