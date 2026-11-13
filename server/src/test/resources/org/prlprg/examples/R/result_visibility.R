# The visibility of a closure's result (`withVisible(...)$visible`) is GNU-R's, also after
# optimization and inlining.
f_for <- function(n) for (i in 1:n) i
f_while <- function(n) while (n > 0L) n <- n - 1L
f_repeat <- function(n) repeat break
f_invisible <- function(x) invisible(x)
f_assign <- function(x) y <- x
f_if <- function(c, x) if (c) invisible(x) else x
f_call_invisible <- function(x) f_invisible(x)
f_call_for <- function(n) f_for(n)
f_call_assign <- function(n) f_assign(n)
f_var_after_call_assign <- function(n) {
  f_assign(n)
  n
}
f_null_after_loop <- function(n) {
  for (i in 1:n) i
  NULL
}
f_var_after_assign <- function(x) {
  assign("v", x)
  x
}
f_var_after_call_for <- function(n) {
  f_for(n)
  n
}
f_const_after_call_for <- function(n) {
  f_for(n)
  1L
}
f_builtin_assign <- function(x) assign("v", x)
f_cat <- function(x) cat("")
f_identity <- function(x) x
f_identity_loop <- function(x) x
f_promise <- function(x) f_identity(f_invisible(x))
f_promise_loop <- function(n) f_identity_loop(f_for(n))

visibility <- function() {
  c(
    withVisible(f_for(3L))$visible,
    withVisible(f_while(3L))$visible,
    withVisible(f_repeat(3L))$visible,
    withVisible(f_invisible(3L))$visible,
    withVisible(f_assign(3L))$visible,
    withVisible(f_if(TRUE, 3L))$visible,
    withVisible(f_if(FALSE, 3L))$visible,
    withVisible(f_call_invisible(3L))$visible,
    withVisible(f_call_for(3L))$visible,
    withVisible(f_call_assign(3L))$visible,
    withVisible(f_var_after_call_assign(3L))$visible,
    withVisible(f_null_after_loop(3L))$visible,
    withVisible(f_var_after_assign(3L))$visible,
    withVisible(f_var_after_call_for(3L))$visible,
    withVisible(f_const_after_call_for(3L))$visible,
    withVisible(f_builtin_assign(3L))$visible,
    withVisible(f_cat(3L))$visible,
    withVisible(f_promise(3L))$visible,
    withVisible(f_promise_loop(3L))$visible
  )
}

#? benchmark: visibility()

# The FIŘ interpreter, which records the feedback, has no `invisible`, `assign` or `cat`, so the
# first loop has only the closures it runs.
for (i in 1:12) {
  f_for(3L)
  f_while(3L)
  f_repeat(3L)
  f_assign(3L)
  f_call_for(3L)
  f_call_assign(3L)
  f_var_after_call_assign(3L)
  f_null_after_loop(3L)
  f_var_after_call_for(3L)
  f_const_after_call_for(3L)
  f_promise_loop(3L)
}
for (i in 1:12) {
  f_invisible(3L)
  f_if(i %% 2L == 0L, 3L)
  f_call_invisible(3L)
  f_var_after_assign(3L)
  f_builtin_assign(3L)
  f_cat(3L)
  f_promise(3L)
}
visibility()
