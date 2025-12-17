fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner561500617;
    st `.mergeClassDefSlots` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner561500617(ClassDef, `...`) {
  (reg ClassDef:*, reg ddd:dots) -+> V { var ClassDef:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg slots:*, reg slots1:V, reg names:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg slots2:*, reg slots3:V, reg r8:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg slots4:*, reg slots5:V, reg c1:L, reg i6:I, reg slots7:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r9:V, reg l1:*, reg slot__:cls, reg slotNames:*, reg slotNames1:V, reg c2:L, reg slotNames3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i11:*, reg i12:V, reg __1:cls, reg r10:V, reg p:p(V +), reg r12:V, reg ClassDef1:*, reg ClassDef2:V |
    mkenv;
    st ClassDef = ClassDef;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st slots = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L6():
    list = ldf list;
    check L8() else D0();
  L7():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  L1(r4):
    st slotNames = r4;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L8():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L9() else D1();
  L10():
    slots = ld slots;
    check L12() else D2();
  L11():
    r3 = dyn base1(<sym slots>);
    goto L1(r3);
  D1():
    deopt 4 [r2];
  D2():
    deopt 8 [slots];
  L2(r7):
    s = toForSeq(r7);
    l = length(s);
    i = 0;
    goto L3(i);
  L9():
    goto L0(r2);
  L12():
    slots1 = force? slots;
    checkMissing(slots1);
    names = ldf names in base;
    r5 = dyn names(slots1);
    check L13() else D3();
  L14():
    slots2 = ld slots;
    check L16() else D4();
  L15():
    r6 = dyn base2(<sym slots>);
    goto L2(r6);
  D3():
    deopt 11 [r5];
  D4():
    deopt 14 [slots2];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L17() else L5();
  L13():
    goto L1(r5);
  L16():
    slots3 = force? slots2;
    checkMissing(slots3);
    r8 = seq_along(slots3);
    goto L2(r8);
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    slots4 = ld slots;
    check L18() else D5();
  L17():
    ClassDef1 = ld ClassDef;
    check L25() else D9();
  D5():
    deopt 17 [i2, slots4];
  D9():
    deopt 31 [ClassDef1];
  L18():
    slots5 = force? slots4;
    checkMissing(slots5);
    c1 = `is.object`(slots5);
    if c1 then L19() else L20(i2, slots5);
  L25():
    ClassDef2 = force? ClassDef1;
    checkMissing(ClassDef2);
    popenv;
    return ClassDef2;
  L4(i8, dx1):
    l1 = ld ClassDef;
    slot__ = ldf `slot<-`;
    check L23() else D7();
  L19():
    dr = tryDispatchBuiltin.1("[[", slots5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(i2, dr);
  L20(i6, slots7):
    i9 = ld i;
    check L22() else D6();
  D6():
    deopt 19 [i6, slots7, i9];
  D7():
    deopt 23 [i8, dx1, l1, dx1];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(i2, dx);
  L22():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r9 = dyn __(slots7, i10);
    goto L4(i6, r9);
  L23():
    p = prom<V +>{
      slotNames = ld slotNames;
      slotNames1 = force? slotNames;
      checkMissing(slotNames1);
      c2 = `is.object`(slotNames1);
      if c2 then L1() else L2(slotNames1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", slotNames1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(slotNames3):
      i11 = ld i;
      i12 = force? i11;
      __1 = ldf `[[` in base;
      r10 = dyn __1(slotNames3, i12);
      goto L0(r10);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r12 = dyn slot__(l1, NULL, p, dx1);
    check L24() else D8();
  D8():
    deopt 26 [i8, dx1, r12];
  L24():
    st ClassDef = r12;
    goto L3(i8);
  }
}