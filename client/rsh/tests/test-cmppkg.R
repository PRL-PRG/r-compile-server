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

cat("=== Testing rsh_cmppkg without output_dir ===\n")
result <- rsh_cmppkg(test_env, quiet = FALSE)
print(result)

expect_true(is_compiled(test_env$add))
expect_true(is_compiled(test_env$fac))
expect_true(is_compiled(test_env$fib))

cat("\n=== Testing rsh_cmppkg with output_dir ===\n")
output_dir <- tempfile()
dir.create(output_dir, recursive = TRUE)
cat("Output directory:", output_dir, "\n\n")

test_env2 <- create_env()

result_with_files <- rsh_cmppkg(test_env2, output_dir = output_dir, quiet = FALSE)
print(result_with_files)

expect_true(is_compiled(test_env2$add))
expect_true(is_compiled(test_env2$fac))
expect_true(is_compiled(test_env2$fib))

# Check that output files were created
cat("\n=== Checking output files ===\n")
output_files <- list.files(output_dir, full.names = TRUE)
cat("Files created in output directory:\n")
for (file in output_files) {
  file_info <- file.info(file)
  cat("- ", basename(file), " (", file_info$size, " bytes)\n")
}

expected_files <- c("add.o", "add.RDS", "fac.o", "fac.RDS", "fib.o", "fib.RDS")
actual_files <- basename(output_files)
for (expected in expected_files) {
  expect_true(expected %in% actual_files)
}

unlink(output_dir, recursive = TRUE)
