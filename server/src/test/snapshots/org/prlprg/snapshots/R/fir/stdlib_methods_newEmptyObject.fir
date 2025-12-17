fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st newEmptyObject = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg value:*, reg value1:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st value = r1;
    value = ld value;
    check L4() else D1();
  L1():
    list = ldf list in base;
    r2 = dyn list();
    check L3() else D0();
  L2():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 5 [value];
  L3():
    goto L0(r2);
  L4():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  }
}