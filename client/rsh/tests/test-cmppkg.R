#!/usr/bin/env Rscript

library(rsh)

create_env <- function() {
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

  test_env
}

test_env <- create_env()

result <- rsh_cmppkg(test_env, quiet = FALSE)
print(result)

expect_true(is_compiled(test_env$add))
expect_true(is_compiled(test_env$fac))
expect_true(is_compiled(test_env$fib))

output_dir <- tempfile()
stopifnot(dir.create(output_dir, recursive = TRUE))

test_env2 <- create_env()

result_with_files <- rsh_cmppkg(test_env2, options = list(output_dir = output_dir), quiet = FALSE)

expect_true(is_compiled(test_env2$add))
expect_true(is_compiled(test_env2$fac))
expect_true(is_compiled(test_env2$fib))

# Check that all output files were created and are non-empty
expected_files <- c(
  "add.o", "add.RDS", "add.c",
  "fac.o", "fac.RDS", "fac.c",
  "fib.o", "fib.RDS", "fib.c"
)

actual_files <- list.files(output_dir)

for (expected in expected_files) {
  expect_true(expected %in% actual_files, paste("Missing file:", expected))
  file_path <- file.path(output_dir, expected)
  file_size <- file.info(file_path)$size
  expect_true(file_size > 0, paste("Empty file:", expected))
}

unlink(output_dir, recursive = TRUE)
