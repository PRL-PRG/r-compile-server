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
fun tryDispatchBuiltin(name, target, rhs) {
  (reg name:S, reg target:*, reg rhs:*) -+> V { ... }
  (reg name:S, reg target:*) -+> V { ... }
}
fun getTryDispatchBuiltinDispatched(dispatchResult) {
  (reg dispatchResult:V) --> L { ... }
}
fun getTryDispatchBuiltinValue(dispatchResult) {
  (reg dispatchResult:V) --> V { ... }
}
