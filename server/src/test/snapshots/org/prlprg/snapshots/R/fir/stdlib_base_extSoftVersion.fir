fun main() {
  () -+> V { reg r:cls, reg extSoftVersion:cls, reg r1:V, reg sub:cls, reg extSoftVersion1:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p:p(V +), reg r7:V |
    mkenv;
    r = clos inner2708337952;
    st extSoftVersion = r;
    extSoftVersion = ldf extSoftVersion;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn extSoftVersion();
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    sub = ldf sub;
    check L2() else D2();
  D2():
    deopt 7 [];
  L2():
    p = prom<V +>{
      extSoftVersion1 = ldf extSoftVersion;
      r2 = dyn extSoftVersion1();
      c = `is.object`(r2);
      if c then L1() else L2(r2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r4):
      __ = ldf `[` in base;
      r5 = dyn __(r4, "PCRE");
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn sub(" .*", "", p);
    check L3() else D3();
  D3():
    deopt 11 [r7];
  L3():
    popenv;
    return r7;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg eSoftVersion:cls, reg r2:V |
    mkenv;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    eSoftVersion = ldf eSoftVersion in base;
    r2 = dyn eSoftVersion();
    check L3() else D0();
  L2():
    r = dyn base(<lang eSoftVersion()>);
    goto L0(r);
  D0():
    deopt 3 [r2];
  L3():
    goto L0(r2);
  }
}