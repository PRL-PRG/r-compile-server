fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st `.tempClassDef` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg new:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg list:cls, reg ddd1:dots?, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg slots:*, reg slots1:V, reg names:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg slotNames:*, reg slotNames1:V, reg r9:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg slots2:*, reg slots3:V, reg c1:L, reg i6:I, reg slots5:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r10:V, reg l1:*, reg slot__:cls, reg slotNames2:*, reg slotNames3:V, reg c2:L, reg slotNames5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i11:*, reg i12:V, reg __1:cls, reg r11:V, reg p:p(V +), reg r13:V, reg value:*, reg value1:V |
    mkenv;
    st `...` = ddd;
    new = ldf new;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    r = dyn new("classRepresentation");
    check L7() else D1();
  D1():
    deopt 3 [r];
  L7():
    st value = r;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r2):
    st slots = r2;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L8():
    list = ldf list;
    check L10() else D2();
  L9():
    r1 = dyn base(<sym ...>);
    goto L0(r1);
  D2():
    deopt 7 [];
  L1(r5):
    st slotNames = r5;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L10():
    ddd1 = ld `...`;
    r3 = dyn list[`...`](ddd1);
    check L11() else D3();
  L12():
    slots = ld slots;
    check L14() else D4();
  L13():
    r4 = dyn base1(<sym slots>);
    goto L1(r4);
  D3():
    deopt 9 [r3];
  D4():
    deopt 13 [slots];
  L2(r8):
    s = toForSeq(r8);
    l = length(s);
    i = 0;
    goto L3(i);
  L11():
    goto L0(r3);
  L14():
    slots1 = force? slots;
    checkMissing(slots1);
    names = ldf names in base;
    r6 = dyn names(slots1);
    check L15() else D5();
  L16():
    slotNames = ld slotNames;
    check L18() else D6();
  L17():
    r7 = dyn base2(<sym slotNames>);
    goto L2(r7);
  D5():
    deopt 16 [r6];
  D6():
    deopt 19 [slotNames];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L19() else L5();
  L15():
    goto L1(r6);
  L18():
    slotNames1 = force? slotNames;
    checkMissing(slotNames1);
    r9 = seq_along(slotNames1);
    goto L2(r9);
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    slots2 = ld slots;
    check L20() else D7();
  L19():
    value = ld value;
    check L27() else D11();
  D7():
    deopt 22 [i2, slots2];
  D11():
    deopt 37 [value];
  L20():
    slots3 = force? slots2;
    checkMissing(slots3);
    c1 = `is.object`(slots3);
    if c1 then L21() else L22(i2, slots3);
  L27():
    value1 = force? value;
    checkMissing(value1);
    popenv;
    return value1;
  L4(i8, dx1):
    l1 = ld value;
    slot__ = ldf `slot<-`;
    check L25() else D9();
  L21():
    dr = tryDispatchBuiltin.1("[[", slots3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(i2, dr);
  L22(i6, slots5):
    i9 = ld i;
    check L24() else D8();
  D8():
    deopt 24 [i6, slots5, i9];
  D9():
    deopt 28 [i8, dx1, l1, dx1];
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(i2, dx);
  L24():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r10 = dyn __(slots5, i10);
    goto L4(i6, r10);
  L25():
    p = prom<V +>{
      slotNames2 = ld slotNames;
      slotNames3 = force? slotNames2;
      checkMissing(slotNames3);
      c2 = `is.object`(slotNames3);
      if c2 then L1() else L2(slotNames3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", slotNames3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(slotNames5):
      i11 = ld i;
      i12 = force? i11;
      __1 = ldf `[[` in base;
      r11 = dyn __1(slotNames5, i12);
      goto L0(r11);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r13 = dyn slot__(l1, NULL, p, FALSE, dx1);
    check L26() else D10();
  D10():
    deopt 32 [i8, dx1, r13];
  L26():
    st value = r13;
    goto L3(i8);
  }
}