fa <- function(x) {
  42 + x
}

invisible(compiler::enableJIT(3))
rsh::rsh_jit_enable()
expect_false(rsh::is_compiled(fa))

expect_equals(fa(1), 43)
expect_equals(fa(2), 44)
expect_equals(fa(3), 45)

expect_true(rsh::is_compiled(fa))
