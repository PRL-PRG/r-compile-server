fun main() {
  () -+> V {
    check L1() else L2();
  L1():
    # No assumptions here, so checkpoint is unused
    return <int 0>;
  L2():
    mkenv;
    deopt 5 [];
  }
}
