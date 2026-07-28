fun main() {
  () -~> v1(I) {
    r: B = blackBox< B --> B >(TRUE);
    if r then L0() else L1();
  # env-error: Predecessors have different environments:
  L1():
    return <int 0>;
  L0():
    mkenv;
    goto L1();
  }
}

# Returns the argument as is, but marks the call as an optimization barrier
fun blackBox(x) {
  (reg x:B) --> B { ... }
}
