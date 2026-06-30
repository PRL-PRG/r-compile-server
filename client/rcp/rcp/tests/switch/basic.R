library(rcp)

# Functional tests for the SWITCH opcode, compiled through rcp so the native
# Rsh_Switch stencil is exercised (not the AST interpreter).

# ---------------------------------------------------------------------------
# Helpers
# ---------------------------------------------------------------------------
assert_eq <- function(actual, expected, msg) {
  if (!identical(actual, expected)) {
    cat("FAIL:", msg, "\n")
    cat("  expected:", deparse(expected), "\n")
    cat("  actual:  ", deparse(actual), "\n")
    stop("Assertion failed")
  }
}

assert_err <- function(expr, pattern, msg) {
  e <- tryCatch(
    {
      force(expr)
      NULL
    },
    error = function(e) conditionMessage(e)
  )
  if (is.null(e) || !grepl(pattern, e, fixed = TRUE)) {
    cat("FAIL:", msg, "\n")
    cat("  expected error matching:", pattern, "\n")
    cat("  got:", if (is.null(e)) "no error" else e, "\n")
    stop("Assertion failed")
  }
}

assert_warn <- function(expr, pattern, msg) {
  w <- tryCatch(
    withCallingHandlers(
      {
        force(expr)
        NULL
      },
      warning = function(w) {
        stop(structure(
          class = c("caught_warning", "error", "condition"),
          list(message = conditionMessage(w))
        ))
      }
    ),
    error = function(e) conditionMessage(e)
  )
  if (is.null(w) || !grepl(pattern, w, fixed = TRUE)) {
    cat("FAIL:", msg, "\n")
    cat("  expected warning matching:", pattern, "\n")
    cat("  got:", if (is.null(w)) "no warning" else w, "\n")
    stop("Assertion failed")
  }
}

# ---------------------------------------------------------------------------
# Functions under test (compiled through rcp)
#
# These exercise every reachable specialization of the SWITCH stencil, keyed on
# (is_names_null, names_length, ioffsets_length) in compile.c:
#   variant 000  named,  names_len != 1, ioff_len != 1  -> f_char_dflt/nodf/fallthru
#   variant 010  single unnamed alt (names == ""),       -> f_single
#                names_len == 1, ioff_len != 1
#   variant 100  numeric (names NULL), ioff_len != 1     -> f_num / f_num2
#   variant 101  numeric (names NULL), ioff_len == 1     -> f_noalt
# Variants 001 and 011 are unreachable from R source: a named alternative always
# yields names_len >= 2 and ioff_len >= 2, and a single unnamed alt always yields
# ioff_len == 2, so "names present with exactly one offset" cannot occur. They are
# dead defensive specializations and cannot be triggered without hand-built bytecode.
# ---------------------------------------------------------------------------
f_char_dflt <- rcp::rcp_cmpfun(
  function(x) {
    switch(x,
      a = "A",
      b = "B",
      "DFLT"
    )
  },
  list(name = "f_char_dflt")
)
f_char_nodf <- rcp::rcp_cmpfun(
  function(x) {
    switch(x,
      a = "A",
      b = "B"
    )
  },
  list(name = "f_char_nodf")
)
f_fallthru <- rcp::rcp_cmpfun(
  function(x) {
    switch(x,
      a = ,
      b = "AB",
      c = "C"
    )
  },
  list(name = "f_fallthru")
)
f_num <- rcp::rcp_cmpfun(
  function(n) {
    switch(n,
      "one",
      "two",
      "three"
    )
  },
  list(name = "f_num")
)
f_num2 <- rcp::rcp_cmpfun(
  function(n) {
    switch(n,
      "one",
      "two"
    )
  },
  list(name = "f_num2")
)
f_noalt <- rcp::rcp_cmpfun(
  function(n) {
    switch(n
    )
  },
  list(name = "f_noalt")
)
f_single <- rcp::rcp_cmpfun(
  function(x) {
    switch(x,
      "ONLY"
    )
  },
  list(name = "f_single")
)

# ---------------------------------------------------------------------------
# 1. Character dispatch (names != R_NilValue, STRSXP EXPR, coffsets path)
# ---------------------------------------------------------------------------
assert_eq(f_char_dflt("a"), "A", "char: exact match a")
assert_eq(f_char_dflt("b"), "B", "char: exact match b")
assert_eq(f_char_dflt("z"), "DFLT", "char: unmatched -> default")
assert_eq(f_char_nodf("a"), "A", "char: matched, no default")
assert_eq(f_char_nodf("z"), NULL, "char: unmatched, no default -> NULL")
cat("Test 1 (character dispatch): OK\n")

# ---------------------------------------------------------------------------
# 2. Fall-through (empty alternative shares the next case's coffset)
# ---------------------------------------------------------------------------
assert_eq(f_fallthru("a"), "AB", "fallthrough a -> b body")
assert_eq(f_fallthru("b"), "AB", "fallthrough b body")
assert_eq(f_fallthru("c"), "C", "fallthrough c distinct")
cat("Test 2 (fall-through): OK\n")

# ---------------------------------------------------------------------------
# 3. Numeric dispatch (names == R_NilValue, ioffsets indexed by asInteger)
# ---------------------------------------------------------------------------
assert_eq(f_num(1), "one", "num: index 1")
assert_eq(f_num(3), "three", "num: index 3")
assert_eq(f_num(2.0), "two", "num: double index 2.0")
assert_eq(f_num2(3), NULL, "num: out-of-range high -> default/NULL")
assert_eq(f_num2(0), NULL, "num: out-of-range zero -> default/NULL")
assert_eq(f_num(NA_integer_), NULL, "num: NA index -> NULL")
cat("Test 3 (numeric dispatch): OK\n")

# ---------------------------------------------------------------------------
# 4. ALTREP / unboxed EXPR (compact integer sequence of length 1)
# ---------------------------------------------------------------------------
assert_eq(f_num(seq_len(1)), "one", "ISQ seq_len(1) -> index 1")
assert_eq(f_num(1:1), "one", "ISQ 1:1 -> index 1")
cat("Test 4 (ALTREP/ISQ EXPR): OK\n")

# ---------------------------------------------------------------------------
# 5. Factor EXPR: warns, treated as integer code
# ---------------------------------------------------------------------------
assert_warn(f_char_nodf(factor("a")), "EXPR is a \"factor\"", "factor warns")
assert_eq(
  suppressWarnings(f_char_nodf(factor("a", levels = c("a", "b")))),
  "A", "factor('a') code 1 -> first alternative"
)
cat("Test 5 (factor EXPR): OK\n")

# ---------------------------------------------------------------------------
# 6. EXPR length guard (isVector && length == 1)
# ---------------------------------------------------------------------------
assert_err(f_char_nodf(c("a", "b")), "EXPR must be a length 1 vector", "length-2 EXPR errors")
assert_err(f_char_nodf(character(0)), "EXPR must be a length 1 vector", "length-0 EXPR errors")
cat("Test 6 (length guard): OK\n")

# ---------------------------------------------------------------------------
# 7. No-alternatives warning (LENGTH(ioffsets) == 1)
# ---------------------------------------------------------------------------
assert_warn(f_noalt(1), "'switch' with no alternatives", "switch with no alternatives")
cat("Test 7 (no alternatives): OK\n")

# ---------------------------------------------------------------------------
# 8. Single unnamed alternative -> stencil variant 010 (names == "", len 1).
#    Numeric index 1 selects the alternative; out-of-range -> NULL; any string
#    EXPR selects the alternative (the lone unnamed arm acts as the default).
# ---------------------------------------------------------------------------
assert_eq(f_single(1),     "ONLY", "single: numeric index 1 -> alt")
assert_eq(f_single(2),     NULL,   "single: numeric out-of-range -> NULL")
assert_eq(f_single("any"), "ONLY", "single: string EXPR -> default alt")
assert_eq(f_single("ONLY"),"ONLY", "single: string EXPR (any) -> default alt")
cat("Test 8 (variant 010, single unnamed alt): OK\n")

cat("All switch opcode tests passed.\n")
