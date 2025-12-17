fun main() {
  () -+> V { reg r:cls, reg alarm:cls, reg r1:V |
    mkenv;
    r = clos inner2708337952;
    st alarm = r;
    alarm = ldf alarm;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn alarm();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner2708337952() {
  () -+> V { reg cat:cls, reg r:V, reg flush_console:cls, reg r1:V |
    mkenv;
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn cat("\u0007");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    flush_console = ldf `flush.console`;
    check L2() else D2();
  D2():
    deopt 5 [];
  L2():
    r1 = dyn flush_console();
    check L3() else D3();
  D3():
    deopt 6 [r1];
  L3():
    popenv;
    return r1;
  }
}