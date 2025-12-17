fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2997913041;
    st `.mergeAssigns` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2997913041(previous, new) {
  (reg previous:*, reg new:*) -+> V { var previous:*, var new:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg new1:*, reg new2:V, reg names:cls, reg r2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg i7:I, reg r4:V, reg previous1:*, reg previous2:V, reg c1:L, reg i9:I, reg previous4:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg what:*, reg what1:V, reg __:cls, reg r5:V, reg c2:V, reg c3:L, reg new3:*, reg new4:V, reg c4:L, reg i15:I, reg new6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i17:I, reg dx3:V, reg what2:*, reg what3:V, reg __1:cls, reg r6:V, reg i18:I, reg dx4:V, reg paste:cls, reg previous5:*, reg previous6:V, reg c5:L, reg previous8:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg what4:*, reg what5:V, reg __2:cls, reg r7:V, reg p:p(V +), reg new7:*, reg new8:V, reg c6:L, reg new10:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg what6:*, reg what7:V, reg __3:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg l1:*, reg c7:L, reg i20:I, reg dx10:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx12:V, reg i22:I, reg dx14:V, reg what8:*, reg what9:V, reg ____:cls, reg r12:V, reg previous9:*, reg previous10:V |
    mkenv;
    st previous = previous;
    st new = new;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L1(i);
  L9():
    new1 = ld new;
    check L11() else D0();
  L10():
    r = dyn base(<sym new>);
    goto L0(r);
  D0():
    deopt 2 [new1];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L13() else L8();
  L11():
    new2 = force? new1;
    checkMissing(new2);
    names = ldf names in base;
    r2 = dyn names(new2);
    check L12() else D1();
  D1():
    deopt 5 [r2];
  L8():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L12():
    goto L0(r2);
  L13():
    previous9 = ld previous;
    check L34() else D9();
  D9():
    deopt 33 [previous9];
  L2(i7, r4):
    c3 = `as.logical`(r4);
    if c3 then L21() else L4();
  L14():
    previous1 = ld previous;
    check L16() else D2();
  L15():
    r3 = dyn base1(<lang `[[`(previous, what)>);
    goto L2(i2, r3);
  L34():
    previous10 = force? previous9;
    checkMissing(previous10);
    popenv;
    return previous10;
  D2():
    deopt 7 [i2, previous1];
  L4():
    paste = ldf paste;
    check L28() else D6();
  L6(i18, dx4):
    l1 = ld previous;
    c7 = `is.object`(l1);
    if c7 then L30() else L31(i18, dx4, l1);
  L16():
    previous2 = force? previous1;
    checkMissing(previous2);
    c1 = `is.object`(previous2);
    if c1 then L17() else L18(i2, previous2);
  L21():
    new3 = ld new;
    check L22() else D4();
  D4():
    deopt 13 [i7, new3];
  D6():
    deopt 19 [i7];
  L3(i11, dx1):
    c2 = `==`(dx1, NULL);
    goto L2(i11, c2);
  L7(i22, dx14):
    st previous = dx14;
    goto L1(i22);
  L17():
    dr = tryDispatchBuiltin.1("[[", previous2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(i2, dr);
  L18(i9, previous4):
    what = ld what;
    check L20() else D3();
  L22():
    new4 = force? new3;
    checkMissing(new4);
    c4 = `is.object`(new4);
    if c4 then L23() else L24(i7, new4);
  L28():
    p = prom<V +>{
      previous5 = ld previous;
      previous6 = force? previous5;
      checkMissing(previous6);
      c5 = `is.object`(previous6);
      if c5 then L1() else L2(previous6);
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", previous6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(previous8):
      what4 = ld what;
      what5 = force? what4;
      __2 = ldf `[[` in base;
      r7 = dyn __2(previous8, what5);
      goto L0(r7);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    p1 = prom<V +>{
      new7 = ld new;
      new8 = force? new7;
      checkMissing(new8);
      c6 = `is.object`(new8);
      if c6 then L1() else L2(new8);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", new8);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(new10):
      what6 = ld what;
      what7 = force? what6;
      __3 = ldf `[[` in base;
      r9 = dyn __3(new10, what7);
      goto L0(r9);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    r11 = dyn paste[, , sep](p, p1, "; ");
    check L29() else D7();
  L30():
    dr8 = tryDispatchBuiltin.0("[[<-", l1, dx4);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L32() else L31(i18, dx4, dr8);
  L31(i20, dx10, l3):
    what8 = ld what;
    check L33() else D8();
  D3():
    deopt 9 [i9, previous4, what];
  D7():
    deopt 24 [i7, r11];
  D8():
    deopt 26 [i20, dx10, l3, dx4, what8];
  L5(i17, dx3):
    goto L6(i17, dx3);
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L20():
    what1 = force? what;
    __ = ldf `[[` in base;
    r5 = dyn __(previous4, what1);
    goto L3(i9, r5);
  L23():
    dr2 = tryDispatchBuiltin.1("[[", new4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(i7, dr2);
  L24(i15, new6):
    what2 = ld what;
    check L26() else D5();
  L29():
    goto L6(i7, r11);
  L32():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L7(i18, dx12);
  L33():
    what9 = force? what8;
    ____ = ldf `[[<-` in base;
    r12 = dyn ____(l3, dx4, what9);
    goto L7(i20, r12);
  D5():
    deopt 15 [i15, new6, what2];
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(i7, dx2);
  L26():
    what3 = force? what2;
    __1 = ldf `[[` in base;
    r6 = dyn __1(new6, what3);
    goto L5(i15, r6);
  }
}