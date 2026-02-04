library(rcp)

# Recursive function
# test_add(4) -> calls test_add(3) -> calls test_add(2) -> returns 12
test_add <- function(x) {
  if (x > 2) {
    return(test_add(x - 1))
  } else {
    return(x + 10)
  }
}

cat("Compiling recursive function...\n")
# Compile
test_add <- rcp::rcp_cmpfun(test_add, list(name="test_add"))

cat("Executing recursive function...\n")
res <- test_add(4)
cat("Result:", res, "\n")

