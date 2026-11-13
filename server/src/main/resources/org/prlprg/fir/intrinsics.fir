fun checkFun(r) {
  (r:V) -~> V { ... }
}
fun checkMissing(r) {
  (r:*) -~> V { ... }
}
fun toForSeq(r) {
  # GNU-R's `STARTFOR` raises an error for a value that isn't a vector or a list.
  @signals (r:V) --> V { ... }
  (r:v(L)) --> v(L) { ... }
  (r:v(I)) --> v(I) { ... }
  (r:v(R)) --> v(R) { ... }
  (r:v(S)) --> v(S) { ... }
}
# Set GNU-R's `R_Visible`, which only a closure's `return` reads. `bc2fir` writes it where GNU-R's
# bytecode sets it last before a `return`, and `Cleanup` keeps each block's last write.
fun setInvisible() {
  () --> V { ... }
}
fun setVisible() {
  () --> V { ... }
}
fun naToFalse(r) {
  (r:v1(L)) --> B { ... }
  (r:L) --> B { ... }
}
# The next index of a `for` loop: `r + 1`, and `NA` after `INT_MAX` without the overflow warning
# of `+` (GNU-R's loop index is an `R_xlen_t`).
fun forIndex(r) {
  (r:v1(I)) --> v1(I) { ... }
  (r:I) --> I { ... }
}
# Element `k` (1-based) of an integer `from:to` whose `step` is 1 or -1: `from + (k - 1) * step`.
# Only for a `k` in bounds (`ElideRangeRead`), so it never overflows and has no warning.
fun rangeElement(from, k, step) {
  (from:I, k:I, step:I) --> I { ... }
}
# The operand of `&&` or `||` (GNU-R's `do_logic3`): one logical, `NA` for a vector of
# length 0, and an error for a value that isn't a number or is longer (`arg` and `op` name the
# operand and the operator in the message).
fun logicalOperand(r, arg, op) {
  @signals (r:V, arg:S, op:S) --> v1(L) { ... }
  @signals (r:V, arg:S, op:S) --> L { ... }
  (r:v1(L), arg:S, op:S) --> v1(L) { ... }
  (r:L, arg:S, op:S) --> L { ... }
}
fun naToTrue(r) {
  (r:v1(L)) --> B { ... }
  (r:L) --> B { ... }
}
# GNU-R's coercion of a real subscript to an integer (`SpecializeRealIndex`): as `as.integer`, but
# silent out of the integer range.
fun realToIndex(r) {
  (r:R) --> I { ... }
  (r:v1(R)) --> v1(I) { ... }
  (r:v(R)) --> v(I) { ... }
}
fun box(r) {
  (r:L) --> v1(L) { ... }
  (r:I) --> v1(I) { ... }
  (r:R) --> v1(R) { ... }
  (r:S) --> v1(S) { ... }
}
fun unbox(r) {
  (r:v1(L)b) --> L { ... }
  (r:v1(I)b) --> I { ... }
  (r:v1(R)b) --> R { ... }
  (r:v1(S)b) --> S { ... }
}