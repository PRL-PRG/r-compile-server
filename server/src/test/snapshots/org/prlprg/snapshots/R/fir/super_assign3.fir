fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg r3:cls, reg g:cls, reg r4:V, reg y:*, reg y1:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st y = r1;
    r3 = clos inner2708337952;
    st g = r3;
    g = ldf g;
    check L4() else D1();
  L1():
    c = ldf c in base;
    r2 = dyn c(1.0, 2.0);
    check L3() else D0();
  L2():
    r = dyn base(1.0, 2.0);
    goto L0(r);
  D0():
    deopt 5 [r2];
  D1():
    deopt 11 [];
  L3():
    goto L0(r2);
  L4():
    r4 = dyn g();
    check L5() else D2();
  D2():
    deopt 12 [r4];
  L5():
    y = ld y;
    check L6() else D3();
  D3():
    deopt 13 [y];
  L6():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}
fun inner2708337952() {
  () -+> V { reg l:*, reg c:L, reg r1:R, reg dr:V, reg dc:L, reg dx:V, reg r3:R, reg dx1:V, reg ____:cls, reg r4:V |
    mkenv;
    l = sld y;
    c = `is.object`(l);
    if c then L1() else L2(42.0);
  L0(r3, dx1):
    sst y = dx1;
    invisible.0();
    popenv;
    return r3;
  L1():
    dr = tryDispatchBuiltin.0("[[<-", l, 42.0);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L3() else L2(42.0);
  L2(r1):
    ____ = ldf `[[<-` in base;
    r4 = dyn ____(l, 1.0, 42.0);
    goto L0(r1, r4);
  L3():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(42.0, dx);
  }
}