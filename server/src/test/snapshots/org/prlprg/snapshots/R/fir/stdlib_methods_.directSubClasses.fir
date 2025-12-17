fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3581667309;
    st `.directSubClasses` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3581667309(ClassDef) {
  (reg ClassDef:*) -+> V { var ClassDef:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg __:cls, reg r2:V, reg length:cls, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sc:*, reg sc1:V, reg names:cls, reg r6:V, reg c1:L, reg r8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vapply:cls, reg sc2:*, reg sc3:V, reg p:p(V +), reg r10:cls, reg p1:p(V +), reg r12:V, reg __1:cls, reg r13:V |
    mkenv;
    st ClassDef = ClassDef;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L4():
    __ = ldf `@` in base;
    r2 = dyn __(<sym ClassDef>, <sym subclasses>);
    st sc = r2;
    length = ldf length in base;
    r3 = dyn length(r2);
    check L6() else D0();
  L5():
    r = dyn base(<lang `<-`(sc, `@`(ClassDef, subclasses))>);
    goto L0(r);
  D0():
    deopt 6 [r3];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L6():
    goto L0(r3);
  L7():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L2(r5):
    c1 = `is.object`(r5);
    if c1 then L12() else L13(r5);
  L8():
    sc = ld sc;
    check L10() else D1();
  L9():
    r4 = dyn base1(<sym sc>);
    goto L2(r4);
  D1():
    deopt 9 [sc];
  L3(dx1):
    popenv;
    return dx1;
  L10():
    sc1 = force? sc;
    checkMissing(sc1);
    names = ldf names in base;
    r6 = dyn names(sc1);
    check L11() else D2();
  L12():
    dr = tryDispatchBuiltin.1("[", r5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(r8):
    vapply = ldf vapply;
    check L15() else D3();
  D2():
    deopt 12 [r6];
  D3():
    deopt 14 [r8];
  L11():
    goto L2(r6);
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L15():
    p = prom<V +>{
      sc2 = ld sc;
      sc3 = force? sc2;
      checkMissing(sc3);
      return sc3;
    };
    p1 = prom<V +>{
      r10 = clos inner3059533056;
      return r10;
    };
    r12 = dyn vapply(p, p1, NA_LGL);
    check L16() else D4();
  D4():
    deopt 18 [r8, r12];
  L16():
    __1 = ldf `[` in base;
    r13 = dyn __1(r8, r12);
    goto L3(r13);
  }
}
fun inner3059533056(cc) {
  (reg cc:*) -+> V { var cc:*, reg __:cls, reg r:V, reg r1:V |
    mkenv;
    st cc = cc;
    __ = ldf `@` in base;
    r = dyn __(<sym cc>, <sym distance>);
    r1 = `==`(r, 1);
    popenv;
    return r1;
  }
}