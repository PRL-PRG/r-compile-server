library(rcp)

# Minimal function: f(x) = x + 1
# Expected Bytecode:
# 1. GETVAR x
# 2. LDCONST 1
# 3. ADD
# 4. RETURN
f <- function(x) x + 1

cat("Compiling minimal function...\n")
f_jit <- rcp::rcp_cmpfun(f, list(name="f_jit"))

cat("Executing function...\n")
res <- f_jit(10)
cat("Result:", res, "\n")