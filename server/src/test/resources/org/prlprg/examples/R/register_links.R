# A register holds a vector that an environment also binds, then the statement runs R code that
# writes the binding in place (`acc[1L] <<- 99`). The register must keep the old vector, as GNU-R's
# stack does. `eval(parse(...))` makes a writer that FIŘ doesn't compile. The checks stop on a wrong
# value, because the oracle (the unoptimized module) has registers too.

# A dynamic call.
dyn_call <- function(len) {
  acc <- rep.int(1.5, len)
  bump <- eval(parse(text = "function() { acc[1L] <<- 99; 0 }"))
  c(acc, bump())
}

# A builtin call before the dynamic call, whose argument cell used to count the vector.
dyn_call_after_builtin <- function(len) {
  acc <- rep.int(1.5, len)
  bump <- eval(parse(text = "function() { acc[1L] <<- 99; 0 }"))
  m <- acc * 2
  c(acc, bump(), m[1L])
}

# A static call of a version that calls the writer.
helper <- function(b) {
  r <- b()
  r + 0
}
static_call <- function(len) {
  acc <- rep.int(1.5, len)
  bump <- eval(parse(text = "function() { acc[1L] <<- 99; 0 }"))
  c(acc, helper(bump))
}

# A force of a promise whose code is the writer (`bc2fir` forces `p` before the call of `c`).
bump_global <- eval(parse(text = "function() { acc[1L] <<- 99; 0 }"))
force_promise <- function(len, p) {
  acc <<- rep.int(1.5, len)
  c(acc, p)
}

# A builtin that the call finds at run time: it forces its promise argument after it has the vector.
dyn_builtin <- function(len) {
  acc <- rep.int(1.5, len)
  bump <- eval(parse(text = "function() { acc[1L] <<- 99; 0 }"))
  cc <- get("c")
  cc(acc, bump())
}

# An `.Internal` builtin that calls the writer back.
internal_callback <- function(len, ...) {
  acc <- rep.int(1.5, len)
  bump <- eval(parse(text = "function(i, ...) { acc[1L] <<- 99; 0 }"))
  c(acc, .Internal(vapply(1L, bump, 0, FALSE)))
}

# A promise whose code loads the vector and calls the writer.
id <- function(x) x
promise_body <- function(len) {
  acc <- rep.int(1.5, len)
  bump <- eval(parse(text = "function() { acc[1L] <<- 99; 0 }"))
  id(c(acc, bump()))
}

# A writer that FIŘ compiles: its `[<-` call counts the vector.
compiled_writer <- function(len) {
  acc <- rep.int(1.5, len)
  bump <- function() {
    acc[1L] <<- 99
    0
  }
  c(acc, bump())
}

# A builtin that isn't a special calls the writer back, which writes the builtin's own argument. As
# in GNU-R, its argument cells don't count it, so `rapply` sees the write.
rapply_own <- function(len, ...) {
  acc <- as.list(rep.int(1.5, len + 1L))
  bump <- eval(parse(text = "function(x, ...) { acc[[2L]] <<- 99; x }"))
  r <- .Internal(rapply(acc, bump, "ANY", NULL, "list"))
  c(r[[1L]], r[[2L]])
}

# The same builtin, whose callback writes a register that is read after the call.
rapply_other <- function(len, ...) {
  acc <- rep.int(1.5, len)
  bump <- eval(parse(text = "function(x, ...) { acc[1L] <<- 99; 0 }"))
  c(acc, .Internal(rapply(list(0), bump, "ANY", NULL, "list"))[[1L]])
}

# An operator whose argument is an object runs its S3 method, which calls the writer.
ops_object <- function(len) {
  acc <- rep.int(1.5, len)
  Ops.bumper <- eval(parse(text = "function(e1, e2) { acc[1L] <<- 99; 0 }"))
  o <- structure(1, class = "bumper")
  c(acc, o + 1)
}

# A setter call outside the assignment protocol (`x` holds a symbol), whose function is the writer.
setter_inactive <- function(len) {
  acc <- rep.int(1.5, len)
  `bump<-` <- eval(parse(text = "function(x, value) { acc[1L] <<- 99; value }"))
  x <- quote(a)
  c(acc, {
    bump(x) <- 0
    x
  })
}

run <- function(len) {
  list(
    dyn_call(len), dyn_call_after_builtin(len), static_call(len),
    force_promise(len, bump_global()), dyn_builtin(len),
    internal_callback(len), promise_body(len), compiled_writer(len),
    rapply_own(len), rapply_other(len), ops_object(len), setter_inactive(len)
  )
}

for (i in 1:12) {
  run(1L)
  run(3L)
}
wrong <- character()
results <- list()
for (len in c(1L, 3L)) {
  old <- rep.int(1.5, len)
  want <- list(
    c(old, 0), c(old, 0, 3), c(old, 0), c(old, 0), c(old, 0), c(old, 0), c(old, 0), c(old, 0),
    c(1.5, 99), c(old, 0), c(old, 0), c(old, 0)
  )
  got <- run(len)
  for (k in seq_along(want)) {
    if (!identical(got[[k]], want[[k]])) {
      wrong <- c(wrong, paste0("case ", k, " at length ", len, ": ", paste(got[[k]], collapse = " ")))
    }
  }
  results <- c(results, got)
}
if (length(wrong) > 0L) stop(paste(wrong, collapse = "; "))
results
