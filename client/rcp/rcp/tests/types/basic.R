options(rcp.cmpfun.entry_exit_hooks = TRUE)
library(rcp)

# Helper: assert equality with a descriptive message
assert_eq <- function(actual, expected, msg) {
  if (!identical(actual, expected)) {
    cat("FAIL:", msg, "\n")
    cat("  expected:", deparse(expected), "\n")
    cat("  actual:  ", deparse(actual), "\n")
    stop("Assertion failed")
  }
}

# ---------------------------------------------------------------------------
# Test 1: single numeric argument — fib (all-double calls)
# fib(3) produces 5 recursive calls; all arguments and returns are double
# because R's subtraction of double - double literal yields double.
# ---------------------------------------------------------------------------
fib <- function(x) {
  if (x == 0) 0
  else if (x == 1) 1
  else fib(x - 2) + fib(x - 1)
}
fib <- rcp::rcp_cmpfun(fib, list(name = "fib"))
fib(3)   # double argument -> all recursive args are double

df <- rcp::rcp_get_types_df("fib")
stopifnot(!is.null(df))
stopifnot(is.data.frame(df))
# Must have columns: x, ret
stopifnot(identical(names(df), c("x", "ret")))
# fib(3) makes exactly 5 calls
stopifnot(nrow(df) == 5L)
# All argument and return types must be double
stopifnot(all(df$x   == "double"))
stopifnot(all(df$ret == "double"))

cat("Test 1 (fib): OK\n")

# ---------------------------------------------------------------------------
# Test 2: single numeric argument — arithmetic operations
# ---------------------------------------------------------------------------
f <- function(x) {
  y <- x + 1
  if (y > 0) {
    z <- x - 1
  } else {
    z <- x + 1
  }
  y <- z / y
  z
}
f <- rcp::rcp_cmpfun(f, list(name = "f"))
f(14)   # double argument, double return

df2 <- rcp::rcp_get_types_df("f")
stopifnot(!is.null(df2))
stopifnot(is.data.frame(df2))
stopifnot(identical(names(df2), c("x", "ret")))
stopifnot(nrow(df2) == 1L)
assert_eq(df2$x[1],   "double", "f: argument type")
assert_eq(df2$ret[1], "double", "f: return type")

cat("Test 2 (f): OK\n")

# ---------------------------------------------------------------------------
# Test 3: two arguments, mixed types across calls — g
# Both x and y are forced via cat(), so the entry hook records real types.
# ---------------------------------------------------------------------------
g <- function(x, y) {
  cat(x, y, "\n")
  x
}
g <- rcp::rcp_cmpfun(g, list(name = "g"))
g(34,     "hello")   # double, character -> double
g(1L,     "world!")  # integer, character -> integer
g("Nope", 456)       # character, double -> character

df3 <- rcp::rcp_get_types_df("g")
stopifnot(!is.null(df3))
stopifnot(is.data.frame(df3))
stopifnot(identical(names(df3), c("x", "y", "ret")))
stopifnot(nrow(df3) == 3L)

assert_eq(df3$x[1],   "double",    "g call 1: x type")
assert_eq(df3$y[1],   "character", "g call 1: y type")
assert_eq(df3$ret[1], "double",    "g call 1: ret type")

assert_eq(df3$x[2],   "integer",   "g call 2: x type")
assert_eq(df3$y[2],   "character", "g call 2: y type")
assert_eq(df3$ret[2], "integer",   "g call 2: ret type")

assert_eq(df3$x[3],   "character", "g call 3: x type")
assert_eq(df3$y[3],   "double",    "g call 3: y type")
assert_eq(df3$ret[3], "character", "g call 3: ret type")

cat("Test 3 (g): OK\n")

# ---------------------------------------------------------------------------
# Test 4: varargs — h
# The named parameter `a` is recorded with its real type; `...` shows as "..."
# ---------------------------------------------------------------------------
h <- function(a, ...) {
  cat(a, ..., "\n")
  a
}
h <- rcp::rcp_cmpfun(h, list(name = "h"))
h(1,       "hello")        # double a, returns double
h("world", 4L, "three")    # character a, returns character

df4 <- rcp::rcp_get_types_df("h")
stopifnot(!is.null(df4))
stopifnot(is.data.frame(df4))
# Columns must include "a", "...", and "ret"
stopifnot(identical(names(df4), c("a", "...", "ret")))
stopifnot(nrow(df4) == 2L)

assert_eq(df4$a[1],     "double",    "h call 1: a type")
assert_eq(df4[["..."]][1], "...",    "h call 1: ... type")
assert_eq(df4$ret[1],   "double",    "h call 1: ret type")

assert_eq(df4$a[2],     "character", "h call 2: a type")
assert_eq(df4[["..."]][2], "...",    "h call 2: ... type")
assert_eq(df4$ret[2],   "character", "h call 2: ret type")

cat("Test 4 (h): OK\n")

# ---------------------------------------------------------------------------
# Test 5: rcp_get_types returns an environment with all traced functions
# ---------------------------------------------------------------------------
all_types <- rcp::rcp_get_types()
stopifnot(!is.null(all_types))
stopifnot(is.environment(all_types))
traced <- ls(all_types)
stopifnot("fib" %in% traced)
stopifnot("f"   %in% traced)
stopifnot("g"   %in% traced)
stopifnot("h"   %in% traced)

# Each entry is a list of call records with "arguments" and "ret" fields
fib_records <- all_types$fib
stopifnot(is.list(fib_records))
stopifnot(length(fib_records) == 5L)
first_record <- fib_records[[1]]
stopifnot(identical(sort(names(first_record)), c("arguments", "ret")))
stopifnot(is.integer(first_record$arguments))
stopifnot(is.integer(first_record$ret))

cat("Test 5 (rcp_get_types): OK\n")

cat("All type-tracing tests passed.\n")
