fun main() {
  () --> I { reg r:L |
    r = blackBox(TRUE);
    check L1() else L2();
  L1():
    r ?= TRUE;
    return 0;
  L2():
    # env-error: Deopt must exit with at least 1 environment
    deopt 5 [];
  }
}

# Returns the argument as is, but marks the call as an optimization barrier
fun blackBox(x) {
  (reg x:L) --> L { ... }
}
