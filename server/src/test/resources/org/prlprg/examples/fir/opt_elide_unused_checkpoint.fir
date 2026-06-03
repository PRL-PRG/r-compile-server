fun main() {
  () -+> V { reg r:v1(I) |
    r = <int 0>;
    check L1() else L2();
  L1():
    # No assumptions here, so checkpoint is unused
    return r;
  L2():
    mkenv;
    deopt 5 [];
  }
}
