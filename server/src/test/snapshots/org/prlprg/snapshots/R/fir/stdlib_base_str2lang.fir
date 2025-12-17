fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1236783023;
    st str2lang = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg s1:*, reg s2:V, reg str2lang:cls, reg r2:V |
    mkenv;
    st s = s;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    s1 = ld s;
    check L3() else D0();
  L2():
    r = dyn base(<lang str2lang(s)>);
    goto L0(r);
  D0():
    deopt 2 [s1];
  L3():
    s2 = force? s1;
    checkMissing(s2);
    str2lang = ldf str2lang in base;
    r2 = dyn str2lang(s2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}