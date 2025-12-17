fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3480176492;
    st getRefSuperClasses = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3480176492(classes, classDefs) {
  (reg classes:*, reg classDefs:*) -+> V { var classes:*, var classDefs:*, reg character:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg classes1:*, reg classes2:V, reg r3:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg classDefs1:*, reg classDefs2:V, reg c1:L, reg i6:I, reg classDefs4:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg i13:I, reg r6:V, reg supers:*, reg supers1:V, reg __1:cls, reg r7:V, reg c2:cls, reg r8:V, reg unique:cls, reg supers2:*, reg supers3:V, reg p:p(V +), reg r10:V |
    mkenv;
    st classes = classes;
    st classDefs = classDefs;
    character = ldf character;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r = dyn character();
    check L6() else D1();
  D1():
    deopt 2 [r];
  L6():
    st supers = r;
    sym = ldf seq_along;
    base = ldf seq_along in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r2):
    s = toForSeq(r2);
    l = length(s);
    i = 0;
    goto L1(i);
  L7():
    classes1 = ld classes;
    check L9() else D2();
  L8():
    r1 = dyn base(<sym classes>);
    goto L0(r1);
  D2():
    deopt 5 [classes1];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L10() else L4();
  L9():
    classes2 = force? classes1;
    checkMissing(classes2);
    r3 = seq_along(classes2);
    goto L0(r3);
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    classDefs1 = ld classDefs;
    check L11() else D3();
  L10():
    unique = ldf unique;
    check L20() else D7();
  D3():
    deopt 8 [i2, classDefs1];
  D7():
    deopt 27 [];
  L11():
    classDefs2 = force? classDefs1;
    checkMissing(classDefs2);
    c1 = `is.object`(classDefs2);
    if c1 then L12() else L13(i2, classDefs2);
  L20():
    p = prom<V +>{
      supers2 = ld supers;
      supers3 = force? supers2;
      checkMissing(supers3);
      return supers3;
    };
    r10 = dyn unique(p);
    check L21() else D8();
  D8():
    deopt 29 [r10];
  L2(i8, dx1):
    st clDef = dx1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L12():
    dr = tryDispatchBuiltin.1("[[", classDefs2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(i2, dr);
  L13(i6, classDefs4):
    i9 = ld i;
    check L15() else D4();
  L21():
    popenv;
    return r10;
  D4():
    deopt 10 [i6, classDefs4, i9];
  L3(i13, r6):
    st supers = r6;
    goto L1(i13);
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(i2, dx);
  L15():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r4 = dyn __(classDefs4, i10);
    goto L2(i6, r4);
  L16():
    supers = ld supers;
    check L18() else D5();
  L17():
    r5 = dyn base1(<sym supers>, <lang `@`(clDef, refSuperClasses)>);
    goto L3(i8, r5);
  D5():
    deopt 16 [i8, supers];
  L18():
    supers1 = force? supers;
    checkMissing(supers1);
    __1 = ldf `@` in base;
    r7 = dyn __1(<sym clDef>, <sym refSuperClasses>);
    c2 = ldf c in base;
    r8 = dyn c2(supers1, r7);
    check L19() else D6();
  D6():
    deopt 21 [i8, r8];
  L19():
    goto L3(i8, r8);
  }
}