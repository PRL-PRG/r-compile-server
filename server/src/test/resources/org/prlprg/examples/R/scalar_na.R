# Scalar builtins on `NA` and on integer overflow, after unboxing.
x <- NA_integer_
y <- 2L
big <- 2147483647L
r <- NA_real_
l <- NA
s <- NA_character_

j <- x < y
k <- x <= y
m <- x > y
n <- x >= y
o <- x == y
p <- x != y
q <- r < 1
t <- r == 1
u <- x < 1.5
v <- l == TRUE
w <- s == "a"
a <- x + y
b <- x - y
c <- x * y
d <- -x
e <- x / y
f <- x + 1.5
g <- x^y
h <- abs(x)
z <- big + 1L
list(a, b, c, d, e, f, g, h, j, k, m, n, o, p, q, t, u, v, w, z)
