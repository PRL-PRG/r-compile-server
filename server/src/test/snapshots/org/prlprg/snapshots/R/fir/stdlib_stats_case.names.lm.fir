fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner421220494;
    st `case.names.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner421220494(object, full, `...`) {
  (reg object:*, reg full:*, reg ddd:dots) -+> V { var object:*, var full:*, reg full_isMissing:L, reg full_orDefault:*, var `...`:dots?, reg weights:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg residuals:cls, reg object3:*, reg object4:V, reg p1:p(V +), reg r5:V, reg names:cls, reg r6:V, reg full1:*, reg full2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg c5:L, reg r8:V, reg w:*, reg w1:V, reg c6:V, reg c7:L, reg c8:V, reg c10:L, reg dn:*, reg dn1:V, reg dn2:*, reg dn3:V, reg c11:L, reg dn5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg w2:*, reg w3:V, reg r9:V, reg __:cls, reg r10:V |
    mkenv;
    st object = object;
    full_isMissing = missing.0(full);
    if full_isMissing then L0(FALSE) else L0(full);
  L0(full_orDefault):
    st full = full_orDefault;
    st `...` = ddd;
    weights = ldf weights;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn weights(p);
    check L7() else D1();
  D1():
    deopt 3 [r1];
  L7():
    st w = r1;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L1(r3):
    st dn = r3;
    full1 = ld full;
    check L13() else D5();
  L8():
    residuals = ldf residuals;
    check L10() else D2();
  L9():
    r2 = dyn base(<lang residuals(object)>);
    goto L1(r2);
  D2():
    deopt 8 [];
  D5():
    deopt 14 [full1];
  L10():
    p1 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r5 = dyn residuals(p1);
    check L11() else D3();
  L13():
    full2 = force? full1;
    checkMissing(full2);
    c = `as.logical`(full2);
    if c then L2(c) else L14();
  D3():
    deopt 10 [r5];
  L2(c1):
    c10 = `as.logical`(c1);
    if c10 then L19() else L4();
  L11():
    names = ldf names in base;
    r6 = dyn names(r5);
    check L12() else D4();
  L14():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  D4():
    deopt 12 [r6];
  L3(c5, r8):
    c7 = `as.logical`(r8);
    c8 = `||`(c5, c7);
    goto L2(c8);
  L4():
    dn2 = ld dn;
    check L22() else D8();
  L12():
    goto L1(r6);
  L15():
    w = ld w;
    check L17() else D6();
  L16():
    r7 = dyn base1(<sym w>);
    goto L3(c, r7);
  L19():
    dn = ld dn;
    check L20() else D7();
  D6():
    deopt 17 [c, w];
  D7():
    deopt 21 [dn];
  D8():
    deopt 23 [dn2];
  L17():
    w1 = force? w;
    checkMissing(w1);
    c6 = `==`(w1, NULL);
    goto L3(c, c6);
  L20():
    dn1 = force? dn;
    checkMissing(dn1);
    popenv;
    return dn1;
  L22():
    dn3 = force? dn2;
    checkMissing(dn3);
    c11 = `is.object`(dn3);
    if c11 then L23() else L24(dn3);
  L5(dx1):
    popenv;
    return dx1;
  L23():
    dr = tryDispatchBuiltin.1("[", dn3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(dn5):
    w2 = ld w;
    check L26() else D9();
  D9():
    deopt 25 [dn5, w2];
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L26():
    w3 = force? w2;
    checkMissing(w3);
    r9 = `!=`(w3, 0.0);
    __ = ldf `[` in base;
    r10 = dyn __(dn5, r9);
    goto L5(r10);
  }
}