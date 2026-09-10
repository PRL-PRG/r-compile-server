fun checkFun(r) {
  (r:V) -~> V { ... }
}
fun checkMissing(r) {
  (r:V) -~> V { ... }
}
fun toForSeq(r) {
  (r:V) --> V { ... }
  (r:v(L)) --> v(L) { ... }
  (r:v(I)) --> v(I) { ... }
  (r:v(R)) --> v(R) { ... }
  (r:v(S)) --> v(S) { ... }
}
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
fun naToTrue(r) {
  (r:v1(L)) --> B { ... }
  (r:L) --> B { ... }
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