fun main() {
  () --> I { reg r:I |
    r = 0;
    check L1() else L2();
  L1():
    # No assumptions here, so checkpoint is unused
    return r;
  L2():
    mkenv;
    deopt 5 [];
  }
}
