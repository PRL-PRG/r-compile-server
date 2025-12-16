fun main() {
  () -+> V { reg r:cls, reg raw:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg as_raw:cls, reg r4:V, reg l:*, reg c:L, reg r6:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r9:V, reg charToRaw:cls, reg r10:V, reg l3:*, reg c1:L, reg r12:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___1:cls, reg r15:V, reg xx:*, reg xx1:V, reg dput:cls, reg xx2:*, reg xx3:V, reg p:p(V +), reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg xx4:*, reg xx5:V, reg as_integer:cls, reg r20:V, reg charToRaw1:cls, reg x:*, reg x1:V, reg p1:p(V +), reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg y:*, reg y1:V, reg is_vector:cls, reg r25:V, reg rawToChar:cls, reg y2:*, reg y3:V, reg p2:p(V +), reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg x2:*, reg x3:V, reg is_raw:cls, reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg y4:*, reg y5:V, reg is_raw1:cls, reg r33:V, reg stopifnot:cls, reg charToRaw2:cls, reg r34:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg r39:V, reg as_raw1:cls, reg r40:V, reg r41:V, reg p3:p(V +), reg r43:V, reg r44:cls, reg isASCII:cls, reg x4:*, reg x5:V, reg p4:p(V +), reg r46:V, reg isASCII1:cls, reg r47:V |
    mkenv;
    r = clos `inner-497502118`;
    st raw = r;
    raw = ldf raw;
    check L7() else D0();
  D0():
    deopt 4 [];
  L7():
    r1 = dyn raw(2.0);
    check L8() else D1();
  D1():
    deopt 6 [r1];
  L8():
    st xx = r1;
    sym = ldf `as.raw`;
    base = ldf `as.raw` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r3):
    l = ld xx;
    c = `is.object`(l);
    if c then L12() else L13(r3, l);
  L9():
    as_raw = ldf `as.raw` in base;
    r4 = dyn as_raw(40.0);
    check L11() else D2();
  L10():
    r2 = dyn base(40.0);
    goto L0(r2);
  D2():
    deopt 12 [r4];
  L1(dx1):
    st xx = dx1;
    charToRaw = ldf charToRaw;
    check L15() else D3();
  L11():
    goto L0(r4);
  L12():
    dr = tryDispatchBuiltin.0("[<-", l, r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(r3, dr);
  L13(r6, l2):
    ___ = ldf `[<-` in base;
    r9 = dyn ___(l2, r3, 1.0);
    goto L1(r9);
  D3():
    deopt 19 [];
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L15():
    r10 = dyn charToRaw("A");
    check L16() else D4();
  D4():
    deopt 21 [r10];
  L16():
    l3 = ld xx;
    c1 = `is.object`(l3);
    if c1 then L17() else L18(r10, l3);
  L2(dx3):
    st xx = dx3;
    xx = ld xx;
    check L20() else D5();
  L17():
    dr2 = tryDispatchBuiltin.0("[<-", l3, r10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L19() else L18(r10, dr2);
  L18(r12, l5):
    ___1 = ldf `[<-` in base;
    r15 = dyn ___1(l5, r10, 2.0);
    goto L2(r15);
  D5():
    deopt 27 [xx];
  L19():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L20():
    xx1 = force? xx;
    checkMissing(xx1);
    dput = ldf dput;
    check L21() else D6();
  D6():
    deopt 30 [];
  L21():
    p = prom<V +>{
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      return xx3;
    };
    r17 = dyn dput(p);
    check L22() else D7();
  D7():
    deopt 32 [r17];
  L22():
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L3():
    st x = "A test string";
    charToRaw1 = ldf charToRaw;
    check L27() else D10();
  L23():
    xx4 = ld xx;
    check L25() else D8();
  L24():
    r18 = dyn base1(<sym xx>);
    goto L3();
  D8():
    deopt 35 [xx4];
  D10():
    deopt 43 [];
  L25():
    xx5 = force? xx4;
    checkMissing(xx5);
    as_integer = ldf `as.integer` in base;
    r20 = dyn as_integer(xx5);
    check L26() else D9();
  L27():
    p1 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r22 = dyn charToRaw1(p1);
    check L28() else D11();
  D9():
    deopt 38 [r20];
  D11():
    deopt 45 [r22];
  L26():
    goto L3();
  L28():
    st y = r22;
    sym2 = ldf `is.vector`;
    base2 = ldf `is.vector` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L4():
    rawToChar = ldf rawToChar;
    check L33() else D14();
  L29():
    y = ld y;
    check L31() else D12();
  L30():
    r23 = dyn base2(<sym y>);
    goto L4();
  D12():
    deopt 49 [y];
  D14():
    deopt 55 [];
  L31():
    y1 = force? y;
    checkMissing(y1);
    is_vector = ldf `is.vector` in base;
    r25 = dyn is_vector(y1, "any");
    check L32() else D13();
  L33():
    p2 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r27 = dyn rawToChar(p2);
    check L34() else D15();
  D13():
    deopt 53 [r25];
  D15():
    deopt 57 [r27];
  L32():
    goto L4();
  L34():
    sym3 = ldf `is.raw`;
    base3 = ldf `is.raw` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L5():
    sym4 = ldf `is.raw`;
    base4 = ldf `is.raw` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L35():
    x2 = ld x;
    check L37() else D16();
  L36():
    r28 = dyn base3(<sym x>);
    goto L5();
  D16():
    deopt 60 [x2];
  L6():
    stopifnot = ldf stopifnot;
    check L43() else D20();
  L37():
    x3 = force? x2;
    checkMissing(x3);
    is_raw = ldf `is.raw` in base;
    r30 = dyn is_raw(x3);
    check L38() else D17();
  L39():
    y4 = ld y;
    check L41() else D18();
  L40():
    r31 = dyn base4(<sym y>);
    goto L6();
  D17():
    deopt 63 [r30];
  D18():
    deopt 66 [y4];
  D20():
    deopt 71 [];
  L38():
    goto L5();
  L41():
    y5 = force? y4;
    checkMissing(y5);
    is_raw1 = ldf `is.raw` in base;
    r33 = dyn is_raw1(y5);
    check L42() else D19();
  L43():
    p3 = prom<V +>{
      charToRaw2 = ldf charToRaw;
      r34 = dyn charToRaw2("\ufffd");
      sym5 = ldf `as.raw`;
      base5 = ldf `as.raw` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r38, r39):
      r41 = `==`(r38, r39);
      return r41;
    L1():
      as_raw1 = ldf `as.raw` in base;
      r40 = dyn as_raw1(163.0);
      goto L0(r34, r40);
    L2():
      r37 = dyn base5(163.0);
      goto L0(r34, r37);
    };
    r43 = dyn stopifnot(p3);
    check L44() else D21();
  D19():
    deopt 69 [r33];
  D21():
    deopt 73 [r43];
  L42():
    goto L6();
  L44():
    r44 = clos inner2111808365;
    st isASCII = r44;
    isASCII = ldf isASCII;
    check L45() else D22();
  D22():
    deopt 78 [];
  L45():
    p4 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r46 = dyn isASCII(p4);
    check L46() else D23();
  D23():
    deopt 80 [r46];
  L46():
    isASCII1 = ldf isASCII;
    check L47() else D24();
  D24():
    deopt 82 [];
  L47():
    r47 = dyn isASCII1("\ufffd25.63");
    check L48() else D25();
  D25():
    deopt 84 [r47];
  L48():
    popenv;
    return r47;
  }
}
fun `inner-497502118`(length) {
  (reg length:*) -+> V { var length:*, reg length_isMissing:L, reg length_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg length1:*, reg length2:V, reg vector:cls, reg r2:V |
    mkenv;
    length_isMissing = missing.0(length);
    if length_isMissing then L0(0) else L0(length);
  L0(length_orDefault):
    st length = length_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    length1 = ld length;
    check L4() else D0();
  L3():
    r = dyn base(<lang vector("raw", length)>);
    goto L1(r);
  D0():
    deopt 3 [length1];
  L4():
    length2 = force? length1;
    checkMissing(length2);
    vector = ldf vector in base;
    r2 = dyn vector("raw", length2);
    check L5() else D1();
  D1():
    deopt 6 [r2];
  L5():
    goto L1(r2);
  }
}
fun inner2111808365(txt) {
  (reg txt:*) -+> V { var txt:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg charToRaw:cls, reg txt1:*, reg txt2:V, reg p:p(V +), reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg r8:V, reg as_raw:cls, reg r9:V, reg r10:V, reg all:cls, reg r11:V |
    mkenv;
    st txt = txt;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    charToRaw = ldf charToRaw;
    check L4() else D0();
  L3():
    r = dyn base(<lang `<=`(charToRaw(txt), as.raw(127.0))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L4():
    p = prom<V +>{
      txt1 = ld txt;
      txt2 = force? txt1;
      checkMissing(txt2);
      return txt2;
    };
    r3 = dyn charToRaw(p);
    check L5() else D1();
  D1():
    deopt 5 [r3];
  L5():
    sym1 = ldf `as.raw`;
    base1 = ldf `as.raw` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L1(r7, r8):
    r10 = `<=`(r7, r8);
    all = ldf all in base;
    r11 = dyn all(r10);
    check L9() else D3();
  L6():
    as_raw = ldf `as.raw` in base;
    r9 = dyn as_raw(127.0);
    check L8() else D2();
  L7():
    r6 = dyn base1(127.0);
    goto L1(r3, r6);
  D2():
    deopt 9 [r3, r9];
  D3():
    deopt 12 [r11];
  L8():
    goto L1(r3, r9);
  L9():
    goto L0(r11);
  }
}