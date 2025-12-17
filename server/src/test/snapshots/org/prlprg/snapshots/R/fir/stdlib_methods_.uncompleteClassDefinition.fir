fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3601921418;
    st `.uncompleteClassDefinition` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3601921418(ClassDef, slotName) {
  (reg ClassDef:*, reg slotName:*) -+> V { var ClassDef:*, var slotName:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg Recall:cls, reg ClassDef1:*, reg ClassDef2:V, reg p:p(V +), reg r4:V, reg Recall1:cls, reg ClassDef3:*, reg ClassDef4:V, reg p1:p(V +), reg r6:V, reg slot:cls, reg ClassDef5:*, reg ClassDef6:V, reg p2:p(V +), reg slotName1:*, reg slotName2:V, reg p3:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg prev:*, reg prev1:V, reg length:cls, reg r12:V, reg c1:L, reg vapply:cls, reg prev2:*, reg prev3:V, reg p4:p(V +), reg _isIndirectExtension:*, reg _isIndirectExtension1:V, reg p5:p(V +), reg r15:V, reg slot1:cls, reg ClassDef7:*, reg ClassDef8:V, reg p6:p(V +), reg slotName3:*, reg slotName4:V, reg p7:p(V +), reg r18:V, reg c2:L, reg r20:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg indir:*, reg indir1:V, reg r21:V, reg __:cls, reg r22:V, reg l:*, reg slot__:cls, reg slotName5:*, reg slotName6:V, reg p8:p(V +), reg r24:V, reg ClassDef9:*, reg ClassDef10:V |
    mkenv;
    st ClassDef = ClassDef;
    st slotName = slotName;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c = `as.logical`(r1);
    if c then L8() else L1();
  L6():
    missing = ldf missing in base;
    r2 = dyn missing(<sym slotName>);
    goto L0(r2);
  L7():
    r = dyn base(<sym slotName>);
    goto L0(r);
  L1():
    slot = ldf slot;
    check L14() else D4();
  L8():
    Recall = ldf Recall;
    check L9() else D0();
  D0():
    deopt 4 [];
  D4():
    deopt 15 [];
  L9():
    p = prom<V +>{
      ClassDef1 = ld ClassDef;
      ClassDef2 = force? ClassDef1;
      checkMissing(ClassDef2);
      return ClassDef2;
    };
    r4 = dyn Recall(p, "contains");
    check L10() else D1();
  L14():
    p2 = prom<V +>{
      ClassDef5 = ld ClassDef;
      ClassDef6 = force? ClassDef5;
      checkMissing(ClassDef6);
      return ClassDef6;
    };
    p3 = prom<V +>{
      slotName1 = ld slotName;
      slotName2 = force? slotName1;
      checkMissing(slotName2);
      return slotName2;
    };
    r9 = dyn slot(p2, p3);
    check L15() else D5();
  D1():
    deopt 7 [r4];
  D5():
    deopt 18 [r9];
  L10():
    st ClassDef = r4;
    Recall1 = ldf Recall;
    check L11() else D2();
  L15():
    st prev = r9;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D2():
    deopt 10 [];
  L2(r11):
    c1 = `as.logical`(r11);
    if c1 then L20() else L3();
  L11():
    p1 = prom<V +>{
      ClassDef3 = ld ClassDef;
      ClassDef4 = force? ClassDef3;
      checkMissing(ClassDef4);
      return ClassDef4;
    };
    r6 = dyn Recall1(p1, "subclasses");
    check L12() else D3();
  L16():
    prev = ld prev;
    check L18() else D6();
  L17():
    r10 = dyn base1(<sym prev>);
    goto L2(r10);
  D3():
    deopt 13 [r6];
  D6():
    deopt 22 [prev];
  L3():
    goto L5();
  L5():
    ClassDef9 = ld ClassDef;
    check L32() else D15();
  L12():
    popenv;
    return r6;
  L18():
    prev1 = force? prev;
    checkMissing(prev1);
    length = ldf length in base;
    r12 = dyn length(prev1);
    check L19() else D7();
  L20():
    vapply = ldf vapply;
    check L21() else D8();
  D7():
    deopt 25 [r12];
  D8():
    deopt 27 [];
  D15():
    deopt 50 [ClassDef9];
  L19():
    goto L2(r12);
  L21():
    p4 = prom<V +>{
      prev2 = ld prev;
      prev3 = force? prev2;
      checkMissing(prev3);
      return prev3;
    };
    p5 = prom<V +>{
      _isIndirectExtension = ld `.isIndirectExtension`;
      _isIndirectExtension1 = force? _isIndirectExtension;
      checkMissing(_isIndirectExtension1);
      return _isIndirectExtension1;
    };
    r15 = dyn vapply(p4, p5, NA_LGL);
    check L22() else D9();
  L32():
    ClassDef10 = force? ClassDef9;
    checkMissing(ClassDef10);
    popenv;
    return ClassDef10;
  D9():
    deopt 31 [r15];
  L22():
    st indir = r15;
    slot1 = ldf slot;
    check L23() else D10();
  D10():
    deopt 34 [];
  L23():
    p6 = prom<V +>{
      ClassDef7 = ld ClassDef;
      ClassDef8 = force? ClassDef7;
      checkMissing(ClassDef8);
      return ClassDef8;
    };
    p7 = prom<V +>{
      slotName3 = ld slotName;
      slotName4 = force? slotName3;
      checkMissing(slotName4);
      return slotName4;
    };
    r18 = dyn slot1(p6, p7);
    check L24() else D11();
  D11():
    deopt 37 [r18];
  L24():
    c2 = `is.object`(r18);
    if c2 then L25() else L26(r18);
  L4(dx1):
    l = ld ClassDef;
    slot__ = ldf `slot<-`;
    check L29() else D13();
  L25():
    dr = tryDispatchBuiltin.1("[", r18);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(r20):
    indir = ld indir;
    check L28() else D12();
  D12():
    deopt 38 [r20, indir];
  D13():
    deopt 43 [dx1, l, dx1];
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L28():
    indir1 = force? indir;
    checkMissing(indir1);
    r21 = `!`(indir1);
    __ = ldf `[` in base;
    r22 = dyn __(r20, r21);
    goto L4(r22);
  L29():
    p8 = prom<V +>{
      slotName5 = ld slotName;
      slotName6 = force? slotName5;
      checkMissing(slotName6);
      return slotName6;
    };
    r24 = dyn slot__(l, NULL, p8, dx1);
    check L30() else D14();
  D14():
    deopt 46 [dx1, r24];
  L30():
    st ClassDef = r24;
    goto L5();
  }
}