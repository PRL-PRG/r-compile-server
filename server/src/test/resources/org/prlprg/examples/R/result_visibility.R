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
f_arith_after_call_assign <- function(n) {
  f_assign(n)
  n + 1L
}
f_length_after_call_assign <- function(n) {
  f_assign(n)
  length(n)
}
f_builtin_assign <- function(x) assign("v", x)
f_print <- function(x) print(x)
f_cat <- function(x) cat("")
f_identity <- function(x) x
f_identity_loop <- function(x) x
f_promise <- function(x) f_identity(f_invisible(x))
f_promise_loop <- function(n) f_identity_loop(f_for(n))
f_identity_assign <- function(x) x
f_promise_assign <- function(n) f_identity_assign(f_assign(n))
# A promise body that sets the flag off before its result.
c1 <- function(n) f_identity_assign({
  f_assign(n)
  n
})
# Local closures, which the optimizer sees statically.
d1 <- function(n) {
  id <- function(x) x
  asg <- function(x) y <- x
  id({
    asg(n)
    n
  })
}
d2 <- function(n) {
  id <- function(x) x
  asg <- function(x) y <- x
  id(asg(n) + 1L)
}
# A dynamic call that becomes an inline builtin.
d4 <- function(n) {
  asg <- function(x) y <- x
  len <- length
  asg(n)
  len(n)
}
d5 <- function(n) {
  id <- function(x) x
  inner <- function(x) id(x + 1L)
  asg <- function(x) y <- x
  inner(asg(n))
}
# A pure promise that ends invisibly, forced after the callee's write.
d6 <- function() {
  id <- function(x) x
  id(repeat break)
}
# `withVisible` calls the versions that R can call; these call the specialized ones.
w_d1 <- function() d1(3L)
w_d2 <- function() d2(3L)
w_d4 <- function() d4(3L)
w_d5 <- function() d5(3L)
w_call_assign <- function() f_call_assign(3L)
w_var_after_call_assign <- function() f_var_after_call_assign(3L)
w_promise_loop <- function() f_promise_loop(3L)
w_promise <- function() f_promise(3L)
w_promise_assign <- function() f_promise_assign(3L)

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
    withVisible(f_arith_after_call_assign(3L))$visible,
    withVisible(f_length_after_call_assign(3L))$visible,
    withVisible(f_builtin_assign(3L))$visible,
    withVisible(f_print(3L))$visible,
    withVisible(f_cat(3L))$visible,
    withVisible(f_promise(3L))$visible,
    withVisible(f_promise_loop(3L))$visible,
    withVisible(w_call_assign())$visible,
    withVisible(w_var_after_call_assign())$visible,
    withVisible(w_promise_loop())$visible,
    withVisible(w_promise())$visible,
    withVisible(f_promise_assign(3L))$visible,
    withVisible(w_promise_assign())$visible,
    withVisible(c1(3L))$visible,
    withVisible(d1(3L))$visible,
    withVisible(d2(3L))$visible,
    withVisible(d4(3L))$visible,
    withVisible(d5(3L))$visible,
    withVisible(d6())$visible,
    withVisible(w_d1())$visible,
    withVisible(w_d2())$visible,
    withVisible(w_d4())$visible,
    withVisible(w_d5())$visible
  )
}

#? benchmark: visibility()

# The FIŘ interpreter, which records the feedback, has no `invisible`, `assign`, `cat` or `print`,
# so the first loop has only the closures it runs.
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
  f_arith_after_call_assign(3L)
  f_length_after_call_assign(3L)
  w_call_assign()
  w_var_after_call_assign()
  w_promise_loop()
  f_promise_assign(3L)
  w_promise_assign()
  c1(3L)
  d1(3L)
  d2(3L)
  d4(3L)
  d5(3L)
  d6()
  w_d1()
  w_d2()
  w_d4()
  w_d5()
}
for (i in 1:12) {
  f_invisible(3L)
  f_if(i %% 2L == 0L, 3L)
  f_call_invisible(3L)
  f_var_after_assign(3L)
  f_builtin_assign(3L)
  f_cat(3L)
  f_promise(3L)
  f_print(3L)
  w_promise()
}
visibility()
