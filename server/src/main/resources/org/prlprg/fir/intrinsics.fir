fun checkFun(r) {
  (reg r:V) --> V { ... }
}
fun checkMissing(r) {
  (reg r:V) --> V { ... }
}
fun toForSeq(r) {
  (reg r:V) -+> V { ... }
}
fun setInvisible() {
  () --> V { ... }
}
fun setVisible() {
  () --> V { ... }
}
fun naToFalse(r) {
  (reg r:v(L)) --> B { ... }
  (reg r:L) --> B { ... }
}
fun box(r) {
  (reg r:L) --> v(L) { ... }
  (reg r:I) --> v(I) { ... }
  (reg r:R) --> v(R) { ... }
  (reg r:S) --> v(S) { ... }
}
fun unbox(r) {
  (reg r:v(L)) --> L { ... }
  (reg r:v(I)) --> I { ... }
  (reg r:v(R)) --> R { ... }
  (reg r:v(S)) --> S { ... }
}