fun main() {
  () --> I { reg r:L |
    r = blackBox(TRUE);
    if r then L0() else L1();
  L0():
    mkenv;
    goto L1();
  L1():
    # env-error: Predecessors have different numbers of environments: {$ENTRY=[0, 0], L0=[1, 1]}
    return 0;
  }
}

# Returns the argument as is, but marks the call as an optimization barrier
fun blackBox(x) {
  (reg x:L) --> L { ... }
}
