#? [opt.fir2c.opt.eval]crashes("deoptimization triggered")
# A FIŘ type such as `v1(R)` means "no attributes", so the type guard of a version that speculates
# on `v1(R)` fails for `c(a = 2)`, and the version deopts (C deopt isn't implemented yet, so this is
# an error). A guard that tests only the type and the length gives 3 without the name.
add <- function(a, b) a + b
for (i in 1:20) {
  x <- i + 0.5
  add(x, x)
}
# The interpreter has no `$`, so the feedback stops here and doesn't see the named value.
invisible(.Machine$integer.max)
add(c(a = 2), 1)
