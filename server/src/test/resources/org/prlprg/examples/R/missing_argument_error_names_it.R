# The error for a missing argument without a default names the argument, as GNU-R's does, also in
# a compiled version (`checkMissing`).
f <- function(x) x
for (i in 1:12) f(i)
# The interpreter has no `$`, so the feedback stops here.
invisible(.Machine$integer.max)
tryCatch(f(), error = conditionMessage)
