# `choose(n, m)` compiled to a direct `.Internal` call ran `atan2` (the wrong `op`), so this
# `stopifnot` failed. The shape of the identity loop in `stdlib_utils_combn`.
m <- c(1, 2, 3)
for (n in 1:3)
  for (m in 0:n) stopifnot(is.array(cc <- matrix(0, m, choose(n, m))),
                           dim(cc) == c(m, choose(n, m)))
