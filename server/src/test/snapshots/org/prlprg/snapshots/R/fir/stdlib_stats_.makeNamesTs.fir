fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st `.makeNamesTs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg as_list:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg c:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg l:*, reg l1:V, reg names:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg nm:*, reg nm1:V, reg c1:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg l2:*, reg l3:V, reg r15:I, reg r16:V, reg nm2:*, reg nm3:V, reg r17:V, reg sapply:cls, reg l4:*, reg l5:V, reg c3:L, reg l7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg fixup:*, reg fixup1:V, reg __1:cls, reg r18:V, reg p1:p(V +), reg r20:cls, reg p2:p(V +), reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg nm4:*, reg nm5:V, reg c4:V, reg c5:L, reg dep:*, reg dep1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg fixup2:*, reg fixup3:V, reg any:cls, reg r29:V, reg c6:L, reg dep2:*, reg dep3:V, reg l8:*, reg c7:L, reg dep5:V, reg l10:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dep7:V, reg dx5:V, reg fixup4:*, reg fixup5:V, reg ___:cls, reg r30:V, reg nm6:*, reg nm7:V |
    mkenv;
    st `...` = ddd;
    as_list = ldf `as.list`;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      substitute = ldf substitute in base;
      r2 = dyn substitute(<lang list(...)>);
      goto L0(r2);
    L2():
      r = dyn base(<lang list(...)>);
      goto L0(r);
    };
    r4 = dyn as_list(p);
    check L14() else D1();
  D1():
    deopt 3 [r4];
  L14():
    c = `is.object`(r4);
    if c then L15() else L16(r4);
  L0(dx1):
    st l = dx1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L15():
    dr = tryDispatchBuiltin.1("[", r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(r6):
    __ = ldf `[` in base;
    r7 = dyn __(r6, -1);
    goto L0(r7);
  L1(r9):
    st nm = r9;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L18():
    l = ld l;
    check L20() else D2();
  L19():
    r8 = dyn base1(<sym l>);
    goto L1(r8);
  D2():
    deopt 10 [l];
  L2(r12):
    c2 = `as.logical`(r12);
    if c2 then L25() else L3();
  L20():
    l1 = force? l;
    checkMissing(l1);
    names = ldf names in base;
    r10 = dyn names(l1);
    check L21() else D3();
  L22():
    nm = ld nm;
    check L24() else D4();
  L23():
    r11 = dyn base2(<sym nm>);
    goto L2(r11);
  D3():
    deopt 13 [r10];
  D4():
    deopt 16 [nm];
  L3():
    nm2 = ld nm;
    check L30() else D6();
  L5(r16):
    st fixup = r16;
    sapply = ldf sapply;
    check L31() else D7();
  L21():
    goto L1(r10);
  L24():
    nm1 = force? nm;
    checkMissing(nm1);
    c1 = `==`(nm1, NULL);
    goto L2(c1);
  L25():
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  D6():
    deopt 23 [nm2];
  D7():
    deopt 29 [];
  L4(r14):
    goto L5(r14);
  L26():
    l2 = ld l;
    check L28() else D5();
  L27():
    r13 = dyn base3(<sym l>);
    goto L4(r13);
  L30():
    nm3 = force? nm2;
    checkMissing(nm3);
    r17 = `==`(nm3, "");
    goto L5(r17);
  L31():
    p1 = prom<V +>{
      l4 = ld l;
      l5 = force? l4;
      checkMissing(l5);
      c3 = `is.object`(l5);
      if c3 then L1() else L2(l5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", l5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(l7):
      fixup = ld fixup;
      fixup1 = force? fixup;
      __1 = ldf `[` in base;
      r18 = dyn __1(l7, fixup1);
      goto L0(r18);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p2 = prom<V +>{
      r20 = clos inner2501545716;
      return r20;
    };
    r22 = dyn sapply(p1, p2);
    check L32() else D8();
  D5():
    deopt 20 [l2];
  D8():
    deopt 32 [r22];
  L28():
    l3 = force? l2;
    checkMissing(l3);
    r15 = seq_along(l3);
    goto L4(r15);
  L32():
    st dep = r22;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L33() else L34();
  L6(r24):
    c5 = `as.logical`(r24);
    if c5 then L36() else L7();
  L33():
    nm4 = ld nm;
    check L35() else D9();
  L34():
    r23 = dyn base4(<sym nm>);
    goto L6(r23);
  D9():
    deopt 35 [nm4];
  L7():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L40() else L41();
  L35():
    nm5 = force? nm4;
    checkMissing(nm5);
    c4 = `==`(nm5, NULL);
    goto L6(c4);
  L36():
    dep = ld dep;
    check L37() else D10();
  D10():
    deopt 38 [dep];
  L9(r28):
    c6 = `as.logical`(r28);
    if c6 then L44() else L10();
  L37():
    dep1 = force? dep;
    checkMissing(dep1);
    popenv;
    return dep1;
  L40():
    fixup2 = ld fixup;
    check L42() else D11();
  L41():
    r27 = dyn base5(<sym fixup>);
    goto L9(r27);
  D11():
    deopt 45 [fixup2];
  L10():
    goto L12();
  L12():
    nm6 = ld nm;
    check L51() else D15();
  L42():
    fixup3 = force? fixup2;
    checkMissing(fixup3);
    any = ldf any in base;
    r29 = dyn any(fixup3);
    check L43() else D12();
  L44():
    dep2 = ld dep;
    check L45() else D13();
  D12():
    deopt 48 [r29];
  D13():
    deopt 49 [dep2];
  D15():
    deopt 58 [nm6];
  L43():
    goto L9(r29);
  L45():
    dep3 = force? dep2;
    checkMissing(dep3);
    l8 = ld nm;
    c7 = `is.object`(l8);
    if c7 then L46() else L47(dep3, l8);
  L51():
    nm7 = force? nm6;
    checkMissing(nm7);
    popenv;
    return nm7;
  L11(dep7, dx5):
    st nm = dx5;
    goto L12();
  L46():
    dr4 = tryDispatchBuiltin.0("[<-", l8, dep3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L48() else L47(dep3, dr4);
  L47(dep5, l10):
    fixup4 = ld fixup;
    check L49() else D14();
  D14():
    deopt 52 [dep5, l10, dep3, fixup4];
  L48():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(dep3, dx4);
  L49():
    fixup5 = force? fixup4;
    ___ = ldf `[<-` in base;
    r30 = dyn ___(l10, dep3, fixup5);
    goto L11(dep5, r30);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg deparse:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V |
    mkenv;
    st x = x;
    deparse = ldf deparse;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn deparse(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    c = `is.object`(r1);
    if c then L3() else L4(r1);
  L0(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r3):
    __ = ldf `[` in base;
    r4 = dyn __(r3, 1);
    goto L0(r4);
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  }
}