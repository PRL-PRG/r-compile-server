fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `as.numeric_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg is_numeric_version:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg x3:*, reg x4:V, reg is_package_version:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r3:V, reg c1:L, reg structure:cls, reg x7:*, reg x8:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x9:*, reg x10:V, reg class:cls, reg r9:V, reg c2:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg x11:*, reg x12:V, reg is_list:cls, reg r15:V, reg c3:L, reg c5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg c8:L, reg r17:V, reg vapply:cls, reg x13:*, reg x14:V, reg p4:p(V +), reg is_integer:*, reg is_integer1:V, reg p5:p(V +), reg r20:V, reg all:cls, reg r21:V, reg c9:L, reg c10:V, reg c12:L, reg vapply1:cls, reg x15:*, reg x16:V, reg p6:p(V +), reg r23:cls, reg p7:p(V +), reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg bad:*, reg bad1:V, reg any:cls, reg r28:V, reg c13:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg integer:cls, reg r33:V, reg list:cls, reg r34:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r35:V, reg r36:V, reg bad2:*, reg bad3:V, reg sum:cls, reg r37:V, reg rep_int:cls, reg r38:V, reg l:*, reg c14:L, reg r40:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r42:V, reg dx1:V, reg bad4:*, reg bad5:V, reg ___:cls, reg r43:V, reg l3:*, reg class__:cls, reg r45:V, reg x17:*, reg x18:V, reg numeric_version:cls, reg x19:*, reg x20:V, reg p8:p(V +), reg r47:V |
    mkenv;
    st x = x;
    is_numeric_version = ldf `is.numeric_version`;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_numeric_version(p);
    check L14() else D1();
  D1():
    deopt 3 [r1];
  L14():
    c = `as.logical`(r1);
    if c then L15() else L0();
  L0():
    is_package_version = ldf `is.package_version`;
    check L18() else D3();
  L15():
    x3 = ld x;
    check L16() else D2();
  D2():
    deopt 4 [x3];
  D3():
    deopt 7 [];
  L16():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L18():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r3 = dyn is_package_version(p1);
    check L19() else D4();
  D4():
    deopt 9 [r3];
  L19():
    c1 = `as.logical`(r3);
    if c1 then L20() else L1();
  L1():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L20():
    structure = ldf structure;
    check L21() else D5();
  D5():
    deopt 11 [];
  L2(r14):
    c3 = `as.logical`(r14);
    if c3 then L28() else L3(c3);
  L21():
    p2 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r6):
      return r6;
    L2():
      sym1 = ldf class;
      base1 = ldf class in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r5 = dyn base(<lang class(x)>, "numeric_version");
      goto L0(r5);
    L1(r8):
      c2 = ldf c in base;
      r10 = dyn c2(r8, "numeric_version");
      goto L0(r10);
    L4():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      class = ldf class in base;
      r9 = dyn class(x10);
      goto L1(r9);
    L5():
      r7 = dyn base1(<sym x>);
      goto L1(r7);
    };
    r12 = dyn structure[, class](p2, p3);
    check L22() else D6();
  L24():
    x11 = ld x;
    check L26() else D7();
  L25():
    r13 = dyn base2(<sym x>);
    goto L2(r13);
  D6():
    deopt 15 [r12];
  D7():
    deopt 18 [x11];
  L3(c5):
    c12 = `as.logical`(c5);
    if c12 then L35() else L5();
  L22():
    popenv;
    return r12;
  L26():
    x12 = force? x11;
    checkMissing(x12);
    is_list = ldf `is.list` in base;
    r15 = dyn is_list(x12);
    check L27() else D8();
  L28():
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L29() else L30();
  D8():
    deopt 21 [r15];
  L4(c8, r17):
    c9 = `as.logical`(r17);
    c10 = `&&`(c8, c9);
    goto L3(c10);
  L5():
    numeric_version = ldf numeric_version;
    check L64() else D26();
  L27():
    goto L2(r15);
  L29():
    vapply = ldf vapply;
    check L31() else D9();
  L30():
    r16 = dyn base3(<lang vapply(x, is.integer, NA_LGL)>);
    goto L4(c3, r16);
  L35():
    vapply1 = ldf vapply;
    check L36() else D12();
  D9():
    deopt 25 [c3];
  D12():
    deopt 34 [];
  D26():
    deopt 80 [];
  L31():
    p4 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p5 = prom<V +>{
      is_integer = ld `is.integer`;
      is_integer1 = force? is_integer;
      checkMissing(is_integer1);
      return is_integer1;
    };
    r20 = dyn vapply(p4, p5, NA_LGL);
    check L32() else D10();
  L36():
    p6 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    p7 = prom<V +>{
      r23 = clos inner1560918050;
      return r23;
    };
    r25 = dyn vapply1(p6, p7, NA_LGL);
    check L37() else D13();
  L64():
    p8 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r47 = dyn numeric_version(p8);
    check L65() else D27();
  D10():
    deopt 29 [c3, r20];
  D13():
    deopt 38 [r25];
  D27():
    deopt 82 [r47];
  L32():
    all = ldf all in base;
    r21 = dyn all(r20);
    check L33() else D11();
  L37():
    st bad = r25;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L65():
    popenv;
    return r47;
  D11():
    deopt 31 [c3, r21];
  L6(r27):
    c13 = `as.logical`(r27);
    if c13 then L42() else L7();
  L33():
    goto L4(c3, r21);
  L38():
    bad = ld bad;
    check L40() else D14();
  L39():
    r26 = dyn base4(<sym bad>);
    goto L6(r26);
  D14():
    deopt 42 [bad];
  L7():
    goto L12();
  L12():
    l3 = ld x;
    class__ = ldf `class<-`;
    check L60() else D23();
  L40():
    bad1 = force? bad;
    checkMissing(bad1);
    any = ldf any in base;
    r28 = dyn any(bad1);
    check L41() else D15();
  L42():
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  D15():
    deopt 45 [r28];
  D23():
    deopt 73 ["numeric_version", l3, "numeric_version"];
  L8(r30):
    l = ld x;
    c14 = `is.object`(l);
    if c14 then L55() else L56(r30, l);
  L41():
    goto L6(r28);
  L43():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L45() else L46();
  L44():
    r29 = dyn base5(<lang list(integer())>, <lang sum(bad)>);
    goto L8(r29);
  L60():
    r45 = dyn class__(l3, NULL, "numeric_version");
    check L61() else D24();
  D24():
    deopt 75 ["numeric_version", r45];
  L9(r32):
    sym7 = ldf sum;
    base7 = ldf sum in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L50() else L51();
  L11(r42, dx1):
    st x = dx1;
    goto L12();
  L45():
    integer = ldf integer;
    check L47() else D16();
  L46():
    r31 = dyn base6(<lang integer()>);
    goto L9(r31);
  L55():
    dr = tryDispatchBuiltin.0("[<-", l, r30);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L57() else L56(r30, dr);
  L56(r40, l2):
    bad4 = ld bad;
    check L58() else D22();
  L61():
    st x = r45;
    x17 = ld x;
    check L62() else D25();
  D16():
    deopt 51 [];
  D22():
    deopt 64 [r40, l2, r30, bad4];
  D25():
    deopt 77 [x17];
  L10(r36):
    rep_int = ldf `rep.int` in base;
    r38 = dyn rep_int(r32, r36);
    check L54() else D21();
  L47():
    r33 = dyn integer();
    check L48() else D17();
  L50():
    bad2 = ld bad;
    check L52() else D19();
  L51():
    r35 = dyn base7(<sym bad>);
    goto L10(r35);
  L57():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(r30, dx);
  L58():
    bad5 = force? bad4;
    ___ = ldf `[<-` in base;
    r43 = dyn ___(l2, r30, bad5);
    goto L11(r40, r43);
  L62():
    x18 = force? x17;
    checkMissing(x18);
    popenv;
    return x18;
  D17():
    deopt 52 [r33];
  D19():
    deopt 57 [bad2];
  D21():
    deopt 62 [r38];
  L48():
    list = ldf list in base;
    r34 = dyn list(r33);
    check L49() else D18();
  L52():
    bad3 = force? bad2;
    checkMissing(bad3);
    sum = ldf sum in base;
    r37 = dyn sum(bad3);
    check L53() else D20();
  L54():
    goto L8(r38);
  D18():
    deopt 54 [r34];
  D20():
    deopt 60 [r37];
  L49():
    goto L9(r34);
  L53():
    goto L10(r37);
  }
}
fun inner1560918050(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg anyNA:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg e3:*, reg e4:V, reg r5:V, reg any:cls, reg r6:V, reg c6:L, reg c7:V |
    mkenv;
    st e = e;
    sym = ldf anyNA;
    base = ldf anyNA in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L7();
  L3():
    e1 = ld e;
    check L5() else D0();
  L4():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c1):
    popenv;
    return c1;
  L5():
    e2 = force? e1;
    checkMissing(e2);
    anyNA = ldf anyNA in base;
    r2 = dyn anyNA(e2);
    check L6() else D1();
  L7():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c6 = `as.logical`(r4);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L6():
    goto L0(r2);
  L8():
    e3 = ld e;
    check L10() else D2();
  L9():
    r3 = dyn base1(<lang `<`(e, 0)>);
    goto L2(c, r3);
  D2():
    deopt 8 [c, e3];
  L10():
    e4 = force? e3;
    checkMissing(e4);
    r5 = `<`(e4, 0);
    any = ldf any in base;
    r6 = dyn any(r5);
    check L11() else D3();
  D3():
    deopt 13 [c, r6];
  L11():
    goto L2(c, r6);
  }
}