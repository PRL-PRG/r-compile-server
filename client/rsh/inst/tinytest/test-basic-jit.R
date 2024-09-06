expect_equal <- function(a, b) {
  print(a)
  stopifnot(identical(a, b))
}

expect_true <- function(a) stopifnot(a)
expect_false <- function(a) stopifnot(!a)

fa <- function(x) {
  42 + x
}

# The tinytest runner sources the file into an environment that contains
# all the expect_* functions and other helpers.
# We do not want all that to be sent back to the server compiler.
# environment(f) <- new.env(parent = globalenv())


compiler::enableJIT(3)
rsh::rsh_jit_enable()
expect_false(rsh::is_compiled(f))

fa(1)
fa(2)
fa(3)
# expect_equal(f(1), 43)
# expect_equal(f(2), 44)
# expect_equal(f(3), 45)

expect_true(rsh::is_compiled(fa))
expect_equal(f(4), 46)
