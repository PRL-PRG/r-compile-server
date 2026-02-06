library(rcp)

cat("\033[1;36m──────────────────────────────────────────────────────────────\033[0m\n")
cat("\033[1mTest: basic compilation\033[0m\n\n")

test_add <- rcp::rcp_cmpfun(function(x) x + 1, list(name="test_add"))

cat("Checking if function was compiled...\n")
if (!rcp::is_compiled(test_add)) {
  cat("  \033[1;31mFAIL\033[0m test_add was not compiled\n")
  quit(status = 1)
}
cat("  \033[1;32mPASS\033[0m test_add is compiled\n")

cat("\nChecking if function works correctly...\n")
result <- test_add(5)
expected <- 6
if (result != expected) {
  cat(sprintf("  \033[1;31mFAIL\033[0m test_add(5) = %s, expected %s\n", result, expected))
  quit(status = 1)
}
cat(sprintf("  \033[1;32mPASS\033[0m test_add(5) = %s\n", result))

cat("\nTesting with multiple inputs...\n")
test_cases <- list(
  list(input = 0, expected = 1),
  list(input = -1, expected = 0),
  list(input = 100, expected = 101)
)

for (test_case in test_cases) {
  result <- test_add(test_case$input)
  if (result != test_case$expected) {
    cat(sprintf("  \033[1;31mFAIL\033[0m test_add(%s) = %s, expected %s\n",
                test_case$input, result, test_case$expected))
    quit(status = 1)
  }
}
cat("  \033[1;32mPASS\033[0m All test cases passed\n")

cat("\n\033[1;36m══════════════════════════════════════════════════════════════\033[0m\n")
cat("\033[1;32mAll tests passed!\033[0m\n")
cat("\033[1;36m══════════════════════════════════════════════════════════════\033[0m\n")
