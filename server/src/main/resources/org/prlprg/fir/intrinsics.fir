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
fun unbox(r) {
  (reg r:v(S)) --> S { ... }
}