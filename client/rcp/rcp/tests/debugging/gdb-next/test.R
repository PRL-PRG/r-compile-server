library(rcp)

# Define a function with sequential operations
f_seq <- function(x) {
  # Each line/expression here corresponds to one or more bytecode instructions
  a <- x + 1
  b <- a * 2
  c <- b - 5
  return(c)
}

cat("Compiling sequential function...\n")
f_seq_jit <- rcp::rcp_cmpfun(f_seq, list(name="f_seq_jit"))

cat("Executing function...\n")
res <- f_seq_jit(10)
cat("Result:", res, "\n")

