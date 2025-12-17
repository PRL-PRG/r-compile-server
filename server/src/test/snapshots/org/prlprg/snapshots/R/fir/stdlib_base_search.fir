fun main() {
  () -+> V { reg r:cls, reg search:cls, reg r1:V, reg searchpaths:cls, reg r2:V |
    mkenv;
    r = clos inner2708337952;
    st search = r;
    search = ldf search;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn search();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    searchpaths = ldf searchpaths;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    r2 = dyn searchpaths();
    check L3() else D3();
  D3():
    deopt 8 [r2];
  L3():
    popenv;
    return r2;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg search:cls, reg r2:V |
    mkenv;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    search = ldf search in base;
    r2 = dyn search();
    check L3() else D0();
  L2():
    r = dyn base(<lang search()>);
    goto L0(r);
  D0():
    deopt 3 [r2];
  L3():
    goto L0(r2);
  }
}