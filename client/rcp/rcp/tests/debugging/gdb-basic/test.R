library(rcp)

# Define inner function
f_inner <- function(x) {
  # Simple operation
  return(x + 1)
}

# Define outer function that calls the compiled inner function
f_outer <- function(x) {
  # Call the JIT-compiled inner function
  y <- f_inner_jit(x)
  return(y * 2)
}

cat("Compiling inner function...\n")
f_inner_jit <- rcp::rcp_cmpfun(f_inner, list(name="inner_jit"))

cat("Compiling outer function...\n")
f_outer_jit <- rcp::rcp_cmpfun(f_outer, list(name="outer_jit"))

cat("Executing outer function...\n")
# This should trigger breakpoints in GDB
res <- f_outer_jit(10)
cat("Result:", res, "\n")

