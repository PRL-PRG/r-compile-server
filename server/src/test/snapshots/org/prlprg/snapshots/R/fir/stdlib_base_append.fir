fun main() {
  () -+> V { reg r:cls, reg append:cls, reg p:p(V +), reg p1:p(V +), reg r3:V |
    mkenv;
    r = clos inner1444651985;
    st append = r;
    append = ldf append;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    p1 = prom<V +>{
      return <int 0, 1>;
    };
    r3 = dyn append[, , after](p, p1, 3.0);
    check L1() else D1();
  D1():
    deopt 9 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner1444651985(x, values, after) {
  (reg x:*, reg values:*, reg after:*) -+> V { var x:*, var values:*, var after:*, reg after_isMissing:L, reg after_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x3:*, reg x4:V, reg length1:cls, reg r6:V, reg after1:*, reg after2:V, reg r7:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg values1:*, reg values2:V, reg x5:*, reg x6:V, reg c1:cls, reg r10:V, reg after3:*, reg after4:V, reg lengx:*, reg lengx1:V, reg r11:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg x7:*, reg x8:V, reg values3:*, reg values4:V, reg c3:cls, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg after5:*, reg after6:V, reg r17:V, reg __:cls, reg r18:V, reg values5:*, reg values6:V, reg x13:*, reg x14:V, reg c5:L, reg x16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg after7:*, reg after8:V, reg r19:V, reg lengx2:*, reg lengx3:V, reg r20:V, reg __1:cls, reg r21:V, reg c6:cls, reg r22:V |
    mkenv;
    st x = x;
    st values = values;
    after_isMissing = missing.0(after);
    if after_isMissing then L0() else L1(after);
  L0():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      length = ldf length in base;
      r2 = dyn length(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    goto L1(p);
  L1(after_orDefault):
    st after = after_orDefault;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L2(r5):
    st lengx = r5;
    after1 = ld after;
    check L14() else D2();
  L10():
    x3 = ld x;
    check L12() else D0();
  L11():
    r4 = dyn base1(<sym x>);
    goto L2(r4);
  D0():
    deopt 2 [x3];
  D2():
    deopt 7 [after1];
  L12():
    x4 = force? x3;
    checkMissing(x4);
    length1 = ldf length in base;
    r6 = dyn length1(x4);
    check L13() else D1();
  L14():
    after2 = force? after1;
    checkMissing(after2);
    r7 = `!`(after2);
    c = `as.logical`(r7);
    if c then L15() else L3();
  D1():
    deopt 5 [r6];
  L3():
    after3 = ld after;
    check L22() else D6();
  L13():
    goto L2(r6);
  L15():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  D6():
    deopt 18 [after3];
  L4(r9):
    popenv;
    return r9;
  L16():
    values1 = ld values;
    check L18() else D3();
  L17():
    r8 = dyn base2(<sym values>, <sym x>);
    goto L4(r8);
  L22():
    after4 = force? after3;
    checkMissing(after4);
    lengx = ld lengx;
    check L23() else D7();
  D3():
    deopt 12 [values1];
  D7():
    deopt 19 [after4, lengx];
  L18():
    values2 = force? values1;
    checkMissing(values2);
    x5 = ld x;
    check L19() else D4();
  L23():
    lengx1 = force? lengx;
    checkMissing(lengx1);
    r11 = `>=`(after4, lengx1);
    c2 = `as.logical`(r11);
    if c2 then L24() else L5();
  D4():
    deopt 14 [x5];
  L5():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L31() else L32();
  L19():
    x6 = force? x5;
    checkMissing(x6);
    c1 = ldf c in base;
    r10 = dyn c1(values2, x6);
    check L20() else D5();
  L24():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  D5():
    deopt 17 [r10];
  L6(r13):
    popenv;
    return r13;
  L7(r16):
    popenv;
    return r16;
  L20():
    goto L4(r10);
  L25():
    x7 = ld x;
    check L27() else D8();
  L26():
    r12 = dyn base3(<sym x>, <sym values>);
    goto L6(r12);
  L31():
    x9 = ld x;
    check L33() else D11();
  L32():
    r15 = dyn base4(<lang `[`(x, `:`(1, after))>, <sym values>, <lang `[`(x, `:`(`(`(`+`(after, 1)), lengx))>);
    goto L7(r15);
  D8():
    deopt 24 [x7];
  D11():
    deopt 32 [x9];
  L27():
    x8 = force? x7;
    checkMissing(x8);
    values3 = ld values;
    check L28() else D9();
  L33():
    x10 = force? x9;
    checkMissing(x10);
    c4 = `is.object`(x10);
    if c4 then L34() else L35(x10);
  D9():
    deopt 26 [values3];
  L8(dx1):
    values5 = ld values;
    check L38() else D13();
  L28():
    values4 = force? values3;
    checkMissing(values4);
    c3 = ldf c in base;
    r14 = dyn c3(x8, values4);
    check L29() else D10();
  L34():
    dr = tryDispatchBuiltin.1("[", x10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(dr);
  L35(x12):
    after5 = ld after;
    check L37() else D12();
  D10():
    deopt 29 [r14];
  D12():
    deopt 35 [x12, 1, after5];
  D13():
    deopt 39 [values5];
  L29():
    goto L6(r14);
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L37():
    after6 = force? after5;
    checkMissing(after6);
    r17 = `:`(1, after6);
    __ = ldf `[` in base;
    r18 = dyn __(x12, r17);
    goto L8(r18);
  L38():
    values6 = force? values5;
    checkMissing(values6);
    x13 = ld x;
    check L39() else D14();
  D14():
    deopt 41 [x13];
  L39():
    x14 = force? x13;
    checkMissing(x14);
    c5 = `is.object`(x14);
    if c5 then L40() else L41(x14);
  L9(dx3):
    c6 = ldf c in base;
    r22 = dyn c6(dx1, values6, dx3);
    check L45() else D17();
  L40():
    dr2 = tryDispatchBuiltin.1("[", x14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(dr2);
  L41(x16):
    after7 = ld after;
    check L43() else D15();
  D15():
    deopt 43 [x16, after7];
  D17():
    deopt 51 [r22];
  L42():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L43():
    after8 = force? after7;
    checkMissing(after8);
    r19 = `+`(after8, 1);
    lengx2 = ld lengx;
    check L44() else D16();
  L45():
    goto L7(r22);
  D16():
    deopt 46 [x16, r19, lengx2];
  L44():
    lengx3 = force? lengx2;
    checkMissing(lengx3);
    r20 = `:`(r19, lengx3);
    __1 = ldf `[` in base;
    r21 = dyn __1(x16, r20);
    goto L9(r21);
  }
}