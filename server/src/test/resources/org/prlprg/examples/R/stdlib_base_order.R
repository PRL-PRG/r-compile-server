#? stdlib
`order` <- function (..., na.last = TRUE, decreasing = FALSE, method = c("auto", 
    "shell", "radix")) 
{
    z <- list(...)
    decreasing <- as.logical(decreasing)
    if (length(z) == 1L && is.numeric(x <- z[[1L]]) && !is.object(x) && 
        length(x) > 0) {
        if (.Internal(sorted_fpass(x, decreasing, na.last))) 
            return(seq_along(x))
    }
    method <- match.arg(method)
    if (any(vapply(z, is.object, logical(1L)))) {
        z <- lapply(z, function(x) if (is.object(x)) 
            as.vector(xtfrm(x))
        else x)
        return(do.call("order", c(z, list(na.last = na.last, 
            decreasing = decreasing, method = method))))
    }
    if (method == "auto") {
        useRadix <- all(vapply(z, function(x) {
            (is.numeric(x) || is.factor(x) || is.logical(x)) && 
                is.integer(length(x))
        }, logical(1L)))
        method <- if (useRadix) 
            "radix"
        else "shell"
    }
    if (method != "radix" && !is.na(na.last)) {
        if (length(decreasing) > 1L) 
            stop("'decreasing' of length > 1 is only for method = \"radix\"")
        return(.Internal(order(na.last, decreasing, ...)))
    }
    if (method == "radix") {
        decreasing <- rep_len(as.logical(decreasing), length(z))
        return(.Internal(radixsort(na.last, decreasing, FALSE, 
            TRUE, ...)))
    }
    if (any(diff((l.z <- lengths(z)) != 0L))) 
        stop("argument lengths differ")
    na <- vapply(z, is.na, rep.int(NA, l.z[1L]))
    ok <- if (is.matrix(na)) 
        rowSums(na) == 0L
    else !any(na)
    if (all(!ok)) 
        return(integer())
    z[[1L]][!ok] <- NA
    ans <- do.call("order", c(z, list(decreasing = decreasing)))
    ans[ok[ans]]
}

# Examples
require(stats)

(ii <- order(x <- c(1,1,3:1,1:4,3), y <- c(9,9:1), z <- c(2,1:9)))
## 6  5  2  1  7  4 10  8  3  9
rbind(x, y, z)[,ii] # shows the reordering (ties via 2nd & 3rd arg)

## Suppose we wanted descending order on y.
## A simple solution for numeric 'y' is
rbind(x, y, z)[, order(x, -y, z)]
## More generally we can make use of xtfrm
cy <- as.character(y)
rbind(x, y, z)[, order(x, -xtfrm(cy), z)]
## The radix sort supports multiple 'decreasing' values:
rbind(x, y, z)[, order(x, cy, z, decreasing = c(FALSE, TRUE, FALSE),
                       method="radix")]

## Sorting data frames:
dd <- transform(data.frame(x, y, z),
                z = factor(z, labels = LETTERS[9:1]))
## Either as above {for factor 'z' : using internal coding}:
dd[ order(x, -y, z), ]
## or along 1st column, ties along 2nd, ... *arbitrary* no.{columns}:
dd[ do.call(order, dd), ]

set.seed(1)  # reproducible example:
d4 <- data.frame(x = round(   rnorm(100)), y = round(10*runif(100)),
                 z = round( 8*rnorm(100)), u = round(50*runif(100)))
(d4s <- d4[ do.call(order, d4), ])
(i <- which(diff(d4s[, 3]) == 0))
#   in 2 places, needed 3 cols to break ties:
d4s[ rbind(i, i+1), ]

## rearrange matched vectors so that the first is in ascending order
x <- c(5:1, 6:8, 12:9)
y <- (x - 5)^2
o <- order(x)
rbind(x[o], y[o])

## tests of na.last
a <- c(4, 3, 2, NA, 1)
b <- c(4, NA, 2, 7, 1)
z <- cbind(a, b)
(o <- order(a, b)); z[o, ]
(o <- order(a, b, na.last = FALSE)); z[o, ]
(o <- order(a, b, na.last = NA)); z[o, ]

\donttest{
##  speed examples on an average laptop for long vectors:
##  factor/small-valued integers:
x <- factor(sample(letters, 1e7, replace = TRUE))
system.time(o <- sort.list(x, method = "quick", na.last = NA)) # 0.1 sec
stopifnot(!is.unsorted(x[o]))
system.time(o <- sort.list(x, method = "radix")) # 0.05 sec, 2X faster
stopifnot(!is.unsorted(x[o]))
##  large-valued integers:
xx <- sample(1:200000, 1e7, replace = TRUE)
system.time(o <- sort.list(xx, method = "quick", na.last = NA)) # 0.3 sec
system.time(o <- sort.list(xx, method = "radix")) # 0.2 sec
##  character vectors:
xx <- sample(state.name, 1e6, replace = TRUE)
system.time(o <- sort.list(xx, method = "shell")) # 2 sec
system.time(o <- sort.list(xx, method = "radix")) # 0.007 sec, 300X faster
##  double vectors:
xx <- rnorm(1e6)
system.time(o <- sort.list(xx, method = "shell")) # 0.4 sec
system.time(o <- sort.list(xx, method = "quick", na.last = NA)) # 0.1 sec
system.time(o <- sort.list(xx, method = "radix")) # 0.05 sec, 2X faster
}
