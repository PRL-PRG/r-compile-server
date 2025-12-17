fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st Cstack_info = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg Cstack_info:cls, reg r2:V |
    mkenv;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    Cstack_info = ldf Cstack_info in base;
    r2 = dyn Cstack_info();
    check L3() else D0();
  L2():
    r = dyn base(<lang Cstack_info()>);
    goto L0(r);
  D0():
    deopt 3 [r2];
  L3():
    goto L0(r2);
  }
}