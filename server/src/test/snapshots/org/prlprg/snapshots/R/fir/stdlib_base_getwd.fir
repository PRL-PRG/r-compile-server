fun main() {
  () -+> V { reg r:cls, reg getwd:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg WD:*, reg WD1:V, reg c:V, reg r4:V, reg c1:L, reg setwd:cls, reg WD2:*, reg WD3:V, reg p:p(V +), reg r6:V |
    mkenv;
    r = clos inner2708337952;
    st getwd = r;
    getwd = ldf getwd;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    r1 = dyn getwd();
    check L3() else D1();
  D1():
    deopt 5 [r1];
  L3():
    st WD = r1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r3):
    r4 = `!`(r3);
    c1 = `as.logical`(r4);
    if c1 then L7() else L1();
  L4():
    WD = ld WD;
    check L6() else D2();
  L5():
    r2 = dyn base(<sym WD>);
    goto L0(r2);
  D2():
    deopt 8 [WD];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L6():
    WD1 = force? WD;
    checkMissing(WD1);
    c = `==`(WD1, NULL);
    goto L0(c);
  L7():
    setwd = ldf setwd;
    check L8() else D3();
  D3():
    deopt 13 [];
  L8():
    p = prom<V +>{
      WD2 = ld WD;
      WD3 = force? WD2;
      checkMissing(WD3);
      return WD3;
    };
    r6 = dyn setwd(p);
    check L9() else D4();
  D4():
    deopt 15 [r6];
  L9():
    popenv;
    return r6;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getwd:cls, reg r2:V |
    mkenv;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    getwd = ldf getwd in base;
    r2 = dyn getwd();
    check L3() else D0();
  L2():
    r = dyn base(<lang getwd()>);
    goto L0(r);
  D0():
    deopt 3 [r2];
  L3():
    goto L0(r2);
  }
}