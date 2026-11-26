# `if (b) a` forces `a`: it raises the error of a missing `a`, or forces `a`'s default value. The
# warmup passes a missing `a` only with a FALSE `b`, so a compiled version speculates that `a` is a
# value in the branch, and deopts (an error in C) instead.
f <- function(a, b) { if (b) a; 2 }
g <- function(a = stop("boom"), b) { if (b) a; 3 }
for (i in 1:12) {
  f(1, TRUE)
  f(, FALSE)
  g(1, TRUE)
  g(, FALSE)
  g(1, FALSE)
}
# The interpreter has no `$`, so the feedback stops here.
invisible(.Machine$integer.max)
msg <- function(v) tryCatch(v, error = conditionMessage)
c(grepl("missing|deoptimization", msg(f(, TRUE))), grepl("boom|deoptimization", msg(g(, TRUE))))
