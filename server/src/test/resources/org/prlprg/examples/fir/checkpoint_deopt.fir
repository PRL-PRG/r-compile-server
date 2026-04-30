#? noEval
fun main() {
  () -+> V { reg r:B |
    r = blackBox< B --> B >(TRUE);
    check L1() else L2();
  L1():
    r ?= TRUE;
    return <int 0>;
  L2():
    mkenv;
    deopt 5 [];
  }
}

# Returns the argument as is, but marks the call as an optimization barrier
fun blackBox(x) {
  (reg x:B) --> B { ... }
}
