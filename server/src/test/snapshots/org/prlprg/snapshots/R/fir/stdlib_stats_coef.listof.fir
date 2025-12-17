fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `coef.listof` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg setNames:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg object1:*, reg object2:V, reg length:cls, reg r4:V, reg vector:cls, reg r5:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg object3:*, reg object4:V, reg names:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg object5:*, reg object6:V, reg r14:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg coef:cls, reg object7:*, reg object8:V, reg c1:L, reg object10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r15:V, reg p2:p(V +), reg r17:V, reg l1:*, reg c2:L, reg i8:I, reg r19:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i10:I, reg dx3:V, reg i11:*, reg i12:V, reg ____:cls, reg r22:V, reg l4:*, reg class__:cls, reg r23:V, reg val:*, reg val1:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    setNames = ldf setNames;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      sym = ldf vector;
      base = ldf vector in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      return r1;
    L2():
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r = dyn base("list", <lang length(object)>);
      goto L0(r);
    L1(r3):
      vector = ldf vector in base;
      r5 = dyn vector("list", r3);
      goto L0(r5);
    L4():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      length = ldf length in base;
      r4 = dyn length(object2);
      goto L1(r4);
    L5():
      r2 = dyn base1(<sym object>);
      goto L1(r2);
    };
    p1 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      names = ldf names in base;
      r9 = dyn names(object4);
      goto L0(r9);
    L2():
      r7 = dyn base2(<sym object>);
      goto L0(r7);
    };
    r11 = dyn setNames(p, p1);
    check L5() else D1();
  D1():
    deopt 4 [r11];
  L5():
    st val = r11;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L6() else L7();
  L0(r13):
    s = toForSeq(r13);
    l = length(s);
    i = 0;
    goto L1(i);
  L6():
    object5 = ld object;
    check L8() else D2();
  L7():
    r12 = dyn base3(<sym object>);
    goto L0(r12);
  D2():
    deopt 7 [object5];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L9() else L3();
  L8():
    object6 = force? object5;
    checkMissing(object6);
    r14 = seq_along(object6);
    goto L0(r14);
  L3():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    coef = ldf coef;
    check L10() else D3();
  L9():
    l4 = ld val;
    class__ = ldf `class<-`;
    check L16() else D6();
  D3():
    deopt 11 [i2];
  D6():
    deopt 25 ["listof", l4, "listof"];
  L10():
    p2 = prom<V +>{
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      c1 = `is.object`(object8);
      if c1 then L1() else L2(object8);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", object8);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(object10):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[[` in base;
      r15 = dyn __(object10, i6);
      goto L0(r15);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r17 = dyn coef(p2);
    check L11() else D4();
  L16():
    r23 = dyn class__(l4, NULL, "listof");
    check L17() else D7();
  D4():
    deopt 13 [i2, r17];
  D7():
    deopt 27 ["listof", r23];
  L11():
    l1 = ld val;
    c2 = `is.object`(l1);
    if c2 then L12() else L13(i2, r17, l1);
  L17():
    st val = r23;
    val = ld val;
    check L18() else D8();
  D8():
    deopt 29 [val];
  L2(i10, dx3):
    st val = dx3;
    goto L1(i10);
  L12():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, r17);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(i2, r17, dr2);
  L13(i8, r19, l3):
    i11 = ld i;
    check L15() else D5();
  L18():
    val1 = force? val;
    checkMissing(val1);
    popenv;
    return val1;
  D5():
    deopt 15 [i8, r19, l3, r17, i11];
  L14():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(i2, dx2);
  L15():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r22 = dyn ____(l3, r17, i12);
    goto L2(i8, r22);
  }
}