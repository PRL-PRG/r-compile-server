fun checkFun(r) {
  (reg r:V) --> V { ... }
}
fun toForSeq(r) {
  (reg r:V) -+> V { ... }
}
fun invisible() {
  () --> V { ... }
}
fun visible() {
  () --> V { ... }
}
fun asSwitchIdx(r) {
  (reg r:V) --> I { ... }
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
