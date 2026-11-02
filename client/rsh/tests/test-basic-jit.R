fa <- function(x) {
  42 + x
}

invisible(compiler::enableJIT(3))
rsh::rsh_jit_enable(2L)
expect_equals(rsh::rsh_jit_tier(fa), "interpreted")

# GNU-R's JIT compiles a small top-level closure on its second call, so the third is the second
# the counting body counts.
expect_equals(fa(1), 43)
expect_equals(fa(2), 44)
expect_equals(fa(3), 45)

# Without `rsh_fir_connect`, the closure never asks the server and stays in the baseline.
expect_equals(rsh::rsh_jit_tier(fa), "baseline")
for (i in 1:10) {
  expect_equals(fa(i), 42 + i)
}
expect_equals(rsh::rsh_jit_tier(fa), "baseline")
expect_false(rsh::is_compiled(fa))
