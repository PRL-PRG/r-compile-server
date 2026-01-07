#!/usr/bin/env Rscript

library(rsh)

test_env <- new.env()

test_env$add <- function(a, b) {
  a + b
}

test_env$fac <- function(n) {
  if (n <= 1) return(1)
  n * factorial(n - 1)
}

test_env$fib<- function(n) {
  if (n <= 1) return(n)
  a <- 0
  b <- 1
  for (i in 2:n) {
    temp <- a + b
    a <- b
    b <- temp
  }
  b
}

result <- rsh_cmppkg(test_env, quiet = FALSE)
print(result)

expect_true(is_compiled(test_env$add))
expect_true(is_compiled(test_env$fac))
expect_true(is_compiled(test_env$fib))
