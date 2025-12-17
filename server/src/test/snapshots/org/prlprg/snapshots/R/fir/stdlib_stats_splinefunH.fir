fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1655260488;
    st splinefunH = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1655260488(x, y, m) {
  (reg x:*, reg y:*, reg m:*) -+> V { var x:*, var y:*, var m:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r5:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg y1:*, reg y2:V, reg is_numeric1:cls, reg r9:V, reg p1:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg m1:*, reg m2:V, reg is_numeric2:cls, reg r13:V, reg p2:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg y3:*, reg y4:V, reg length1:cls, reg r17:V, reg n:*, reg n1:V, reg r18:V, reg p3:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg m3:*, reg m4:V, reg length2:cls, reg r22:V, reg n2:*, reg n3:V, reg r23:V, reg p4:p(V +), reg r25:V, reg is_unsorted:cls, reg x5:*, reg x6:V, reg p5:p(V +), reg r27:V, reg c:L, reg sort_list:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg r29:V, reg x9:*, reg x10:V, reg c1:L, reg x12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i:*, reg i1:V, reg __:cls, reg r30:V, reg y5:*, reg y6:V, reg c2:L, reg y8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i2:*, reg i3:V, reg __1:cls, reg r31:V, reg m5:*, reg m6:V, reg c3:L, reg m8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i4:*, reg i5:V, reg __2:cls, reg r32:V, reg x13:*, reg x14:V, reg c4:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __3:cls, reg r33:V, reg x17:*, reg x18:V, reg c5:L, reg dx10:V, reg x20:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg dx14:V, reg n4:*, reg n5:V, reg r34:V, reg __4:cls, reg r35:V, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg dx15:*, reg dx16:V, reg anyNA:cls, reg r39:V, reg c6:L, reg c7:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r40:V, reg c11:L, reg r41:V, reg dx17:*, reg dx18:V, reg r42:V, reg any:cls, reg r43:V, reg c12:L, reg c13:V, reg c15:L, reg stop:cls, reg r44:V, reg splinefunH0:cls, reg x21:*, reg x22:V, reg p7:p(V +), reg y9:*, reg y10:V, reg p8:p(V +), reg m9:*, reg m10:V, reg p9:p(V +), reg dx19:*, reg dx20:V, reg p10:p(V +), reg r50:V |
    mkenv;
    st x = x;
    st y = y;
    st m = m;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    st n = r1;
    stopifnot = ldf stopifnot;
    check L17() else D2();
  L13():
    x1 = ld x;
    check L15() else D0();
  L14():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 8 [];
  L15():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L16() else D1();
  L17():
    p = prom<V +>{
      sym1 = ldf `is.numeric`;
      base1 = ldf `is.numeric` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      return r4;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      is_numeric = ldf `is.numeric` in base;
      r5 = dyn is_numeric(x4);
      goto L0(r5);
    L2():
      r3 = dyn base1(<sym x>);
      goto L0(r3);
    };
    p1 = prom<V +>{
      sym2 = ldf `is.numeric`;
      base2 = ldf `is.numeric` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      is_numeric1 = ldf `is.numeric` in base;
      r9 = dyn is_numeric1(y2);
      goto L0(r9);
    L2():
      r7 = dyn base2(<sym y>);
      goto L0(r7);
    };
    p2 = prom<V +>{
      sym3 = ldf `is.numeric`;
      base3 = ldf `is.numeric` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      m1 = ld m;
      m2 = force? m1;
      checkMissing(m2);
      is_numeric2 = ldf `is.numeric` in base;
      r13 = dyn is_numeric2(m2);
      goto L0(r13);
    L2():
      r11 = dyn base3(<sym m>);
      goto L0(r11);
    };
    p3 = prom<V +>{
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r16):
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      r18 = `==`(r16, n1);
      return r18;
    L1():
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      length1 = ldf length in base;
      r17 = dyn length1(y4);
      goto L0(r17);
    L2():
      r15 = dyn base4(<sym y>);
      goto L0(r15);
    };
    p4 = prom<V +>{
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r21):
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      r23 = `==`(r21, n3);
      return r23;
    L1():
      m3 = ld m;
      m4 = force? m3;
      checkMissing(m4);
      length2 = ldf length in base;
      r22 = dyn length2(m4);
      goto L0(r22);
    L2():
      r20 = dyn base5(<sym m>);
      goto L0(r20);
    };
    r25 = dyn stopifnot(p, p1, p2, p3, p4);
    check L18() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 14 [r25];
  L16():
    goto L0(r2);
  L18():
    is_unsorted = ldf `is.unsorted`;
    check L19() else D4();
  D4():
    deopt 16 [];
  L19():
    p5 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r27 = dyn is_unsorted(p5);
    check L20() else D5();
  D5():
    deopt 18 [r27];
  L20():
    c = `as.logical`(r27);
    if c then L21() else L1();
  L1():
    goto L5();
  L5():
    x13 = ld x;
    check L40() else D14();
  L21():
    sort_list = ldf `sort.list`;
    check L22() else D6();
  D6():
    deopt 20 [];
  D14():
    deopt 44 [x13];
  L22():
    p6 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r29 = dyn sort_list(p6);
    check L23() else D7();
  L40():
    x14 = force? x13;
    checkMissing(x14);
    c4 = `is.object`(x14);
    if c4 then L41() else L42(x14);
  D7():
    deopt 22 [r29];
  L6(dx8):
    x17 = ld x;
    check L44() else D15();
  L23():
    st i = r29;
    x9 = ld x;
    check L24() else D8();
  L41():
    dr6 = tryDispatchBuiltin.1("[", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L43() else L42(dr6);
  L42(x16):
    __3 = ldf `[` in base;
    r33 = dyn __3(x16, -1);
    goto L6(r33);
  D8():
    deopt 24 [x9];
  D15():
    deopt 48 [dx8, x17];
  L24():
    x10 = force? x9;
    checkMissing(x10);
    c1 = `is.object`(x10);
    if c1 then L25() else L26(x10);
  L43():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L6(dx7);
  L44():
    x18 = force? x17;
    checkMissing(x18);
    c5 = `is.object`(x18);
    if c5 then L45() else L46(dx8, x18);
  L2(dx1):
    st x = dx1;
    y5 = ld y;
    check L29() else D10();
  L7(dx13, dx14):
    r36 = `-`(dx13, dx14);
    st dx = r36;
    sym6 = ldf anyNA;
    base6 = ldf anyNA in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L49() else L50();
  L25():
    dr = tryDispatchBuiltin.1("[", x10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(x12):
    i = ld i;
    check L28() else D9();
  L45():
    dr8 = tryDispatchBuiltin.1("[", x18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L47() else L46(dx8, dr8);
  L46(dx10, x20):
    n4 = ld n;
    check L48() else D16();
  D9():
    deopt 26 [x12, i];
  D10():
    deopt 30 [y5];
  D16():
    deopt 50 [dx10, x20, n4];
  L8(r38):
    c6 = `as.logical`(r38);
    if c6 then L9(c6) else L53();
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L28():
    i1 = force? i;
    __ = ldf `[` in base;
    r30 = dyn __(x12, i1);
    goto L2(r30);
  L29():
    y6 = force? y5;
    checkMissing(y6);
    c2 = `is.object`(y6);
    if c2 then L30() else L31(y6);
  L47():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L7(dx8, dx12);
  L48():
    n5 = force? n4;
    checkMissing(n5);
    r34 = `-`(<missing>, n5);
    __4 = ldf `[` in base;
    r35 = dyn __4(x20, r34);
    goto L7(dx10, r35);
  L49():
    dx15 = ld dx;
    check L51() else D17();
  L50():
    r37 = dyn base6(<sym dx>);
    goto L8(r37);
  D17():
    deopt 58 [dx15];
  L3(dx3):
    st y = dx3;
    m5 = ld m;
    check L34() else D12();
  L9(c7):
    c15 = `as.logical`(c7);
    if c15 then L59() else L11();
  L30():
    dr2 = tryDispatchBuiltin.1("[", y6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L32() else L31(dr2);
  L31(y8):
    i2 = ld i;
    check L33() else D11();
  L51():
    dx16 = force? dx15;
    checkMissing(dx16);
    anyNA = ldf anyNA in base;
    r39 = dyn anyNA(dx16);
    check L52() else D18();
  L53():
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L54() else L55();
  D11():
    deopt 32 [y8, i2];
  D12():
    deopt 36 [m5];
  D18():
    deopt 61 [r39];
  L10(c11, r41):
    c12 = `as.logical`(r41);
    c13 = `||`(c11, c12);
    goto L9(c13);
  L11():
    goto L12();
  L12():
    splinefunH0 = ldf splinefunH0;
    check L63() else D23();
  L32():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L33():
    i3 = force? i2;
    __1 = ldf `[` in base;
    r31 = dyn __1(y8, i3);
    goto L3(r31);
  L34():
    m6 = force? m5;
    checkMissing(m6);
    c3 = `is.object`(m6);
    if c3 then L35() else L36(m6);
  L52():
    goto L8(r39);
  L54():
    dx17 = ld dx;
    check L56() else D19();
  L55():
    r40 = dyn base7(<lang `==`(dx, 0.0)>);
    goto L10(c6, r40);
  L59():
    stop = ldf stop;
    check L60() else D21();
  D19():
    deopt 64 [c6, dx17];
  D21():
    deopt 72 [];
  D23():
    deopt 78 [];
  L4(dx5):
    st m = dx5;
    goto L5();
  L35():
    dr4 = tryDispatchBuiltin.1("[", m6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L37() else L36(dr4);
  L36(m8):
    i4 = ld i;
    check L38() else D13();
  L56():
    dx18 = force? dx17;
    checkMissing(dx18);
    r42 = `==`(dx18, 0.0);
    any = ldf any in base;
    r43 = dyn any(r42);
    check L57() else D20();
  L60():
    r44 = dyn stop("'x' must be *strictly* increasing (non - NA)");
    check L61() else D22();
  L63():
    p7 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    p8 = prom<V +>{
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      return y10;
    };
    p9 = prom<V +>{
      m9 = ld m;
      m10 = force? m9;
      checkMissing(m10);
      return m10;
    };
    p10 = prom<V +>{
      dx19 = ld dx;
      dx20 = force? dx19;
      checkMissing(dx20);
      return dx20;
    };
    r50 = dyn splinefunH0[, , , dx](p7, p8, p9, p10);
    check L64() else D24();
  D13():
    deopt 38 [m8, i4];
  D20():
    deopt 69 [c6, r43];
  D22():
    deopt 74 [r44];
  D24():
    deopt 84 [r50];
  L37():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx4);
  L38():
    i5 = force? i4;
    __2 = ldf `[` in base;
    r32 = dyn __2(m8, i5);
    goto L4(r32);
  L57():
    goto L10(c6, r43);
  L61():
    goto L12();
  L64():
    popenv;
    return r50;
  }
}