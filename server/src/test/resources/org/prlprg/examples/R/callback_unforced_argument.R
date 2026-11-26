# GNU-R's `outer` calls `FUN(X, Y, ...)` with unforced promises. The interpreter runs `outer` in
# GNU-R and `f` in a callback, which must not record the arguments as forced promises.
f <- function(i, j) i + j
for (k in 1:12) {
  r <- outer(1:2, 1:3, f)
}
r
