#? stdlib
`rank` <- function (x, na.last = TRUE, ties.method = c("average", "first", 
    "last", "random", "max", "min")) 
{
    stopifnot(length(na.last) == 1L)
    nas <- is.na(x)
    nm <- names(x)
    ties.method <- match.arg(ties.method)
    if (is.factor(x)) 
        x <- as.integer(x)
    x <- x[!nas]
    y <- switch(ties.method, average = , min = , max = .Internal(rank(x, 
        length(x), ties.method)), first = sort.list(sort.list(x)), 
        last = sort.list(rev.default(sort.list(x, decreasing = TRUE))), 
        random = sort.list(order(x, stats::runif(sum(!nas)))))
    if (!is.na(na.last) && any(nas)) {
        yy <- NA
        NAkeep <- (na.last == "keep")
        if (NAkeep || na.last) {
            yy[!nas] <- y
            if (!NAkeep) 
                yy[nas] <- (length(y) + 1L):length(yy)
        }
        else {
            len <- sum(nas)
            yy[!nas] <- y + len
            yy[nas] <- seq_len(len)
        }
        y <- yy
        names(y) <- nm
    }
    else names(y) <- nm[!nas]
    y
}

# Examples
(r1 <- rank(x1 <- c(3, 1, 4, 15, 92)))
x2 <- c(3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5)
names(x2) <- letters[1:11]
(r2 <- rank(x2)) # ties are averaged

## rank() is "idempotent": rank(rank(x)) == rank(x) :
stopifnot(rank(r1) == r1, rank(r2) == r2)

## ranks without averaging
rank(x2, ties.method= "first")  # first occurrence wins
rank(x2, ties.method= "last")   #  last occurrence wins
rank(x2, ties.method= "random") # ties broken at random
rank(x2, ties.method= "random") # and again

## keep ties ties, no average
(rma <- rank(x2, ties.method= "max"))  # as used classically
(rmi <- rank(x2, ties.method= "min"))  # as in Sports
stopifnot(rma + rmi == round(r2 + r2))

## Comparing all tie.methods:
tMeth <- eval(formals(rank)$ties.method)
rx2 <- sapply(tMeth, function(M) rank(x2, ties.method=M))
cbind(x2, rx2)
## ties.method's does not matter w/o ties:
x <- sample(47)
rx <- sapply(tMeth, function(MM) rank(x, ties.method=MM))
stopifnot(all(rx[,1] == rx))

