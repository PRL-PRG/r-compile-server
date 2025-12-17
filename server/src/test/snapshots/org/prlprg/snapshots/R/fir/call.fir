fun main() {
  () -+> V { reg str:cls, reg r:V |
    mkenv;
    str = ldf str;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn str(42.0);
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}