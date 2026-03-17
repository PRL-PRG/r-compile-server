fun main() {
  () --> I { reg r:B |
    r = blackBox< B --> B >(TRUE);
    if r then L0() else L1();
  L0():
    mkenv;
    goto L1();
  # env-error: Predecessors have different environments:
  L1():
    return 0;
  }
}

# Returns the argument as is, but marks the call as an optimization barrier
fun blackBox(x) {
  (reg x:B) --> B { ... }
}
