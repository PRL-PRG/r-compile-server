fun checkFun(r) {
  (reg r:V) --> V { ... }
}
fun checkMissing(r) {
  (reg r:V) --> V { ... }
}
fun toForSeq(r) {
  (reg r:V) --> V { ... }
  (reg r:v(L)) --> v(L) { ... }
  (reg r:v(I)) --> v(I) { ... }
  (reg r:v(R)) --> v(R) { ... }
  (reg r:v(S)) --> v(S) { ... }
}
fun setInvisible() {
  () --> V { ... }
}
fun setVisible() {
  () --> V { ... }
}
fun naToFalse(r) {
  (reg r:v1(L)) --> B { ... }
  (reg r:L) --> B { ... }
}
fun box(r) {
  (reg r:L) --> v1(L) { ... }
  (reg r:I) --> v1(I) { ... }
  (reg r:R) --> v1(R) { ... }
  (reg r:S) --> v1(S) { ... }
}
fun unbox(r) {
  (reg r:v1(L)b) --> L { ... }
  (reg r:v1(I)b) --> I { ... }
  (reg r:v1(R)b) --> R { ... }
  (reg r:v1(S)b) --> S { ... }
}