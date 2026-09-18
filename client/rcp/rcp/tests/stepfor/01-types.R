source("helpers.R")

# Direct (non-ALTREP) STEPFOR variant for every sequence element type.
#
# One specialized variant fetches each element type with its own accessor
# (INTEGER0/REAL0/LOGICAL0/COMPLEX0/RAW0 and the standard-vector data pointer
# for STRSXP/VECSXP/EXPRSXP). A wrong accessor yields wrong values, which the
# differential oracle catches. We check ordinary values, the sentinel/edge
# values of each type (NA, NaN, Inf, empty CHARSXP, extreme ints), the
# loop-variable value left behind after the loop, and empty sequences.

# --- INTSXP ------------------------------------------------------------------

.check_all("int.values",
  quote(function() { acc <- integer(0); for (e in c(10L, -3L, 0L, 7L)) acc <- c(acc, e); acc }),
  c(10L, -3L, 0L, 7L))

.check_all("int.edge",
  quote(function() { acc <- integer(0); for (e in c(NA_integer_, .Machine$integer.max, -.Machine$integer.max)) acc <- c(acc, e); acc }),
  c(NA_integer_, .Machine$integer.max, -.Machine$integer.max))

.check_all("int.after.loop",
  quote(function() { for (e in c(4L, 5L, 6L)) NULL; e }),
  6L)

# --- REALSXP -----------------------------------------------------------------

.check_all("real.values",
  quote(function() { acc <- numeric(0); for (e in c(1.5, -2.25, 0, 100)) acc <- c(acc, e); acc }),
  c(1.5, -2.25, 0, 100))

.check_all("real.edge",
  quote(function() { acc <- numeric(0); for (e in c(NA_real_, NaN, Inf, -Inf, 0)) acc <- c(acc, e); acc }),
  c(NA_real_, NaN, Inf, -Inf, 0))

.check_all("real.after.loop",
  quote(function() { for (e in c(1.1, 2.2, 3.3)) NULL; e }),
  3.3)

# --- LGLSXP ------------------------------------------------------------------

.check_all("lgl.values",
  quote(function() { acc <- logical(0); for (e in c(TRUE, FALSE, NA, TRUE)) acc <- c(acc, e); acc }),
  c(TRUE, FALSE, NA, TRUE))

.check_all("lgl.after.loop",
  quote(function() { for (e in c(FALSE, NA, TRUE)) NULL; e }),
  TRUE)

# --- CPLXSXP -----------------------------------------------------------------

.check_all("cplx.values",
  quote(function() { acc <- complex(0); for (e in c(1+2i, -3i, 0+0i, complex(real = NA))) acc <- c(acc, e); acc }),
  c(1+2i, -3i, 0+0i, complex(real = NA)))

.check_all("cplx.after.loop",
  quote(function() { for (e in c(1+1i, 2-2i)) NULL; e }),
  2-2i)

# --- STRSXP ------------------------------------------------------------------

.check_all("str.values",
  quote(function() { acc <- character(0); for (e in c("a", "", "ünïcode", NA_character_)) acc <- c(acc, e); acc }),
  c("a", "", "ünïcode", NA_character_))

.check_all("str.after.loop",
  quote(function() { for (e in c("x", "y", "z")) NULL; e }),
  "z")

# CHARSXP identity: the element handed to the body must be the very CHARSXP in
# the sequence, not a fresh copy (STEPFOR writes it straight into the value).
.check_all("str.charsxp.identity",
  quote(function() {
    s <- c("alpha", "beta")
    ok <- TRUE
    i <- 0L
    for (e in s) { i <- i + 1L; ok <- ok && identical(e, s[i]) }
    ok
  }),
  TRUE)

# --- RAWSXP ------------------------------------------------------------------

.check_all("raw.values",
  quote(function() { acc <- raw(0); for (e in as.raw(c(0, 1, 127, 255))) acc <- c(acc, e); acc }),
  as.raw(c(0, 1, 127, 255)))

.check_all("raw.after.loop",
  quote(function() { for (e in as.raw(c(10, 20))) NULL; e }),
  as.raw(20))

# --- VECSXP (list) -----------------------------------------------------------

.check_all("vec.values",
  quote(function() {
    acc <- list()
    for (e in list(1, "a", TRUE, NULL, list(2, 3))) acc[[length(acc) + 1L]] <- list(e)
    acc
  }),
  list(list(1), list("a"), list(TRUE), list(NULL), list(list(2, 3))))

.check_all("vec.after.loop",
  quote(function() { for (e in list(1, "last")) NULL; e }),
  "last")

# --- EXPRSXP -----------------------------------------------------------------

.check_all("expr.values",
  quote(function() {
    acc <- list()
    for (e in expression(a, b + c, f(x))) acc[[length(acc) + 1L]] <- e
    acc
  }),
  list(quote(a), quote(b + c), quote(f(x))))

.check_all("expr.after.loop",
  quote(function() { for (e in expression(p, q)) NULL; e }),
  quote(q))

# --- LISTSXP (pairlist) ------------------------------------------------------

.check_all("pairlist.values",
  quote(function() {
    acc <- list()
    for (e in as.pairlist(list(1L, "two", 3))) acc[[length(acc) + 1L]] <- e
    acc
  }),
  list(1L, "two", 3))

.check_all("pairlist.after.loop",
  quote(function() { for (e in as.pairlist(list("m", "n"))) NULL; e }),
  "n")

# --- factor: StartFor coerces to character, so this exercises STRSXP ----------

.check_all("factor.coerced.to.character",
  quote(function() {
    acc <- character(0)
    for (e in factor(c("b", "a", "b", "c"))) acc <- c(acc, e)
    acc
  }),
  c("b", "a", "b", "c"))

# --- names must not affect the iterated values -------------------------------

.check_all("named.vector.values",
  quote(function() {
    acc <- numeric(0)
    for (e in c(x = 1, y = 2, z = 3)) acc <- c(acc, e)
    acc
  }),
  c(1, 2, 3))

# --- empty sequences: body never runs, loop var is defined as NULL -----------

.check_all("empty.int",   quote(function() { e <- "before"; for (e in integer(0)) NULL; e }),   NULL)
.check_all("empty.real",  quote(function() { e <- "before"; for (e in numeric(0)) NULL; e }),   NULL)
.check_all("empty.lgl",   quote(function() { e <- "before"; for (e in logical(0)) NULL; e }),   NULL)
.check_all("empty.cplx",  quote(function() { e <- "before"; for (e in complex(0)) NULL; e }),   NULL)
.check_all("empty.str",   quote(function() { e <- "before"; for (e in character(0)) NULL; e }), NULL)
.check_all("empty.raw",   quote(function() { e <- "before"; for (e in raw(0)) NULL; e }),        NULL)
.check_all("empty.vec",   quote(function() { e <- "before"; for (e in list()) NULL; e }),        NULL)
.check_all("empty.expr",  quote(function() { e <- "before"; for (e in expression()) NULL; e }),  NULL)
.check_all("empty.null",  quote(function() { e <- "before"; for (e in NULL) NULL; e }),          NULL)

# --- single element ----------------------------------------------------------

.check_all("single.int",  quote(function() { for (e in 42L) NULL; e }),   42L)
.check_all("single.real", quote(function() { for (e in 3.14) NULL; e }),  3.14)
.check_all("single.str",  quote(function() { for (e in "only") NULL; e }), "only")

.summary("01-types.R")
