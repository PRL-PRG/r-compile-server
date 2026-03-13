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

df <- rcp::rcp_get_types_df(fib)
stopifnot(!is.null(df))
stopifnot(is.data.frame(df))
# Must have columns: x, dots_count, ret
stopifnot(identical(names(df), c("x", "dots_count", "ret")))
# fib(3) makes exactly 5 calls
stopifnot(nrow(df) == 5L)
# All argument and return types must be double
stopifnot(all(df$x   == "double"))
stopifnot(all(df$dots_count == 0L))
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
stopifnot(identical(names(df2), c("x", "dots_count", "ret")))
stopifnot(nrow(df2) == 1L)
assert_eq(df2$x[1],   "double", "f: argument type")
assert_eq(df2$dots_count[1], 0L, "f: dots_count")
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

df3 <- rcp::rcp_get_types_df(g)
stopifnot(!is.null(df3))
stopifnot(is.data.frame(df3))
stopifnot(identical(names(df3), c("x", "y", "dots_count", "ret")))
stopifnot(nrow(df3) == 3L)

assert_eq(df3$x[1],   "double",    "g call 1: x type")
assert_eq(df3$y[1],   "character", "g call 1: y type")
assert_eq(df3$dots_count[1], 0L,     "g call 1: dots_count")
assert_eq(df3$ret[1], "double",    "g call 1: ret type")

assert_eq(df3$x[2],   "integer",   "g call 2: x type")
assert_eq(df3$y[2],   "character", "g call 2: y type")
assert_eq(df3$dots_count[2], 0L,     "g call 2: dots_count")
assert_eq(df3$ret[2], "integer",   "g call 2: ret type")

assert_eq(df3$x[3],   "character", "g call 3: x type")
assert_eq(df3$y[3],   "double",    "g call 3: y type")
assert_eq(df3$dots_count[3], 0L,     "g call 3: dots_count")
assert_eq(df3$ret[3], "character", "g call 3: ret type")

cat("Test 3 (g): OK\n")

# ---------------------------------------------------------------------------
# Test 4: varargs — h
# Dots are expanded by observed call-time names with positional suffixes.
# ---------------------------------------------------------------------------
h <- function(a, ...) {
  cat(a, ..., "\n")
}
h <- rcp::rcp_cmpfun(h, list(name = "h"))
h(1,       "hello")        # a=double, ..1=character
h("world", 4L, "three")    # a=character, ..1=integer, ..2=character
h(4L, t=89)                 # a=integer, t..1=double

df4 <- rcp::rcp_get_types_df("h")
stopifnot(!is.null(df4))
stopifnot(is.data.frame(df4))
# Columns include fixed arg, expanded dots, dots_count and ret
stopifnot(identical(names(df4), c("a", "..1", "..2", "t..1", "dots_count", "ret")))
stopifnot(nrow(df4) == 3L)

assert_eq(df4$a[1],          "double",    "h call 1: a type")
assert_eq(df4[["..1"]][1],  "character", "h call 1: ..1 type")
assert_eq(df4[["..2"]][1],  NA_character_,"h call 1: ..2 absent")
assert_eq(df4[["t..1"]][1], NA_character_,"h call 1: t..1 absent")
assert_eq(df4$dots_count[1], 1L,          "h call 1: dots_count")
assert_eq(df4$ret[1],        "NULL",      "h call 1: ret type")

assert_eq(df4$a[2],          "character", "h call 2: a type")
assert_eq(df4[["..1"]][2],  "integer",   "h call 2: ..1 type")
assert_eq(df4[["..2"]][2],  "character", "h call 2: ..2 type")
assert_eq(df4[["t..1"]][2], NA_character_,"h call 2: t..1 absent")
assert_eq(df4$dots_count[2], 2L,          "h call 2: dots_count")
assert_eq(df4$ret[2],        "NULL",      "h call 2: ret type")

assert_eq(df4$a[3],          "integer",   "h call 3: a type")
assert_eq(df4[["..1"]][3],  NA_character_,"h call 3: ..1 absent")
assert_eq(df4[["..2"]][3],  NA_character_,"h call 3: ..2 absent")
assert_eq(df4[["t..1"]][3], "double",    "h call 3: t..1 type")
assert_eq(df4$dots_count[3], 1L,          "h call 3: dots_count")
assert_eq(df4$ret[3],        "NULL",      "h call 3: ret type")

cat("Test 4 (h): OK\n")

# ---------------------------------------------------------------------------
# Test 5: named-argument reordering without dots — p
# ---------------------------------------------------------------------------
p <- function(x, y) {
  cat(x, y, "\n")
  y
}
p <- rcp::rcp_cmpfun(p, list(name = "p"))
p(1, "hello")
p(y = 3, x = "world")

df5 <- rcp::rcp_get_types_df("p")
stopifnot(!is.null(df5))
stopifnot(is.data.frame(df5))
stopifnot(identical(names(df5), c("x", "y", "dots_count", "ret")))
stopifnot(nrow(df5) == 2L)

assert_eq(df5$x[1], "double",    "p call 1: x type")
assert_eq(df5$y[1], "character", "p call 1: y type")
assert_eq(df5$dots_count[1], 0L,  "p call 1: dots_count")
assert_eq(df5$ret[1], "character","p call 1: ret type")

assert_eq(df5$x[2], "character", "p call 2: x type")
assert_eq(df5$y[2], "double",    "p call 2: y type")
assert_eq(df5$dots_count[2], 0L,  "p call 2: dots_count")
assert_eq(df5$ret[2], "double",  "p call 2: ret type")

cat("Test 5 (p): OK\n")

# ---------------------------------------------------------------------------
# Test 6: rcp_get_types returns an environment with all traced functions
# ---------------------------------------------------------------------------
all_types <- rcp::rcp_get_types()
stopifnot(!is.null(all_types))
stopifnot(is.environment(all_types))
traced <- ls(all_types)
stopifnot("fib" %in% traced)
stopifnot("f"   %in% traced)
stopifnot("g"   %in% traced)
stopifnot("h"   %in% traced)
stopifnot("p"   %in% traced)

# Each entry is a list of call records with "arguments", "dots_count" and "ret" fields
fib_records <- all_types$fib
stopifnot(is.list(fib_records))
stopifnot(length(fib_records) == 5L)
first_record <- fib_records[[1]]
stopifnot(identical(sort(names(first_record)), c("arguments", "dots_count", "ret")))
stopifnot(is.integer(first_record$arguments))
stopifnot(is.integer(first_record$ret))
stopifnot(is.integer(first_record$dots_count))
stopifnot(identical(first_record$dots_count, 0L))

fib_only <- rcp::rcp_get_types(fib)
stopifnot(is.list(fib_only))
stopifnot(length(fib_only) == 5L)

fib_by_string <- rcp::rcp_get_types("fib")
stopifnot(identical(fib_by_string, fib_only))

cat("Test 6 (rcp_get_types): OK\n")

# ---------------------------------------------------------------------------
# Test 7: reset recorded type traces and ensure tracing resumes afterwards
# ---------------------------------------------------------------------------
stopifnot(!is.null(rcp::rcp_get_types_df("fib")))

reset_result <- rcp::rcp_reset_types()
stopifnot(is.null(reset_result))

all_types_reset <- rcp::rcp_get_types()
stopifnot(is.environment(all_types_reset))
stopifnot(identical(ls(all_types_reset), character(0)))
stopifnot(is.null(rcp::rcp_get_types_df("fib")))
stopifnot(is.null(rcp::rcp_get_types("fib")))

fib(2)
df_reset <- rcp::rcp_get_types_df("fib")
stopifnot(!is.null(df_reset))
stopifnot(is.data.frame(df_reset))
stopifnot(nrow(df_reset) == 3L)
stopifnot(all(df_reset$x == "double"))
stopifnot(all(df_reset$dots_count == 0L))
stopifnot(all(df_reset$ret == "double"))

cat("Test 7 (rcp_reset_types): OK\n")

cat("All type-tracing tests passed.\n")
