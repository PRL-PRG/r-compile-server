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
fun tryDispatchBuiltin(r) {
  (reg r:V) --> V { ... }
}
fun getTryDispatchBuiltinDispatched(dispatchResult) {
  (reg dispatchResult:V) --> L { ... }
}
fun getTryDispatchBuiltinValue(dispatchResult) {
  (reg dispatchResult:V) --> V { ... }
}
