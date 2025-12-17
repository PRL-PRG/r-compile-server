fun main() {
  () -+> V { reg r:cls, reg tabulate:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg tabulate1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg tabulate2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c2:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg tabulate3:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg c3:cls, reg r18:V, reg p3:p(V +), reg r20:V, reg tabulate4:cls, reg factor:cls, reg letters:*, reg letters1:V, reg c4:L, reg letters3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r21:V, reg p4:p(V +), reg r23:V, reg p5:p(V +), reg r25:V |
    mkenv;
    r = clos inner3784411068;
    st tabulate = r;
    tabulate = ldf tabulate;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(2.0, 3.0, 5.0);
      goto L0(r3);
    L2():
      r1 = dyn base(2.0, 3.0, 5.0);
      goto L0(r1);
    };
    r5 = dyn tabulate(p);
    check L1() else D1();
  D1():
    deopt 6 [r5];
  L1():
    tabulate1 = ldf tabulate;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c1 = ldf c in base;
      r8 = dyn c1(2.0, 3.0, 3.0, 5.0);
      goto L0(r8);
    L2():
      r6 = dyn base1(2.0, 3.0, 3.0, 5.0);
      goto L0(r6);
    };
    r10 = dyn tabulate1[, nbins](p1, 10.0);
    check L3() else D3();
  D3():
    deopt 12 [r10];
  L3():
    tabulate2 = ldf tabulate;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c2 = ldf c in base;
      r13 = dyn c2(-2.0, 0.0, 2.0, 3.0, 3.0, 5.0);
      goto L0(r13);
    L2():
      r11 = dyn base2(<lang `-`(2.0)>, 0.0, 2.0, 3.0, 3.0, 5.0);
      goto L0(r11);
    };
    r15 = dyn tabulate2(p2);
    check L5() else D5();
  D5():
    deopt 16 [r15];
  L5():
    tabulate3 = ldf tabulate;
    check L6() else D6();
  D6():
    deopt 18 [];
  L6():
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c3 = ldf c in base;
      r18 = dyn c3(-2.0, 0.0, 2.0, 3.0, 3.0, 5.0);
      goto L0(r18);
    L2():
      r16 = dyn base3(<lang `-`(2.0)>, 0.0, 2.0, 3.0, 3.0, 5.0);
      goto L0(r16);
    };
    r20 = dyn tabulate3[, nbins](p3, 3.0);
    check L7() else D7();
  D7():
    deopt 22 [r20];
  L7():
    tabulate4 = ldf tabulate;
    check L8() else D8();
  D8():
    deopt 24 [];
  L8():
    p5 = prom<V +>{
      factor = ldf factor;
      p4 = prom<V +>{
        letters = ld letters;
        letters1 = force? letters;
        checkMissing(letters1);
        c4 = `is.object`(letters1);
        if c4 then L1() else L2(letters1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", letters1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(letters3):
        __ = ldf `[` in base;
        r21 = dyn __(letters3, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
        goto L0(r21);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r23 = dyn factor(p4);
      return r23;
    };
    r25 = dyn tabulate4(p5);
    check L9() else D9();
  D9():
    deopt 26 [r25];
  L9():
    popenv;
    return r25;
  }
}
fun inner3784411068(bin, nbins) {
  (reg bin:*, reg nbins:*) -+> V { var bin:*, var nbins:*, reg nbins_isMissing:L, reg nbins_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg bin1:*, reg bin2:V, reg max:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg bin3:*, reg bin4:V, reg is_numeric:cls, reg r6:V, reg r7:V, reg c:L, reg c2:V, reg is_factor:cls, reg bin5:*, reg bin6:V, reg p1:p(V +), reg r9:V, reg r10:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg bin7:*, reg bin8:V, reg typeof:cls, reg r15:V, reg r16:V, reg c7:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg bin9:*, reg bin10:V, reg as_integer:cls, reg r19:V, reg nbins1:*, reg nbins2:V, reg _Machine:*, reg _Machine1:V, reg c8:L, reg nbins4:V, reg _Machine3:V, reg dr:V, reg dc:L, reg dx:V, reg nbins6:V, reg dx1:V, reg r21:V, reg r22:V, reg c9:L, reg stop1:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg nbins7:*, reg nbins8:V, reg as_integer1:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg r29:V, reg nbins9:*, reg nbins10:V, reg is_na:cls, reg r30:V, reg c10:L, reg stop2:cls, reg gettextf:cls, reg r31:V, reg p2:p(V +), reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg bin11:*, reg bin12:V, reg nbins11:*, reg nbins12:V, reg tabulate:cls, reg r37:V |
    mkenv;
    st bin = bin;
    nbins_isMissing = missing.0(nbins);
    if nbins_isMissing then L0() else L1(nbins);
  L0():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      bin1 = ld bin;
      bin2 = force? bin1;
      checkMissing(bin2);
      max = ldf max in base;
      r2 = dyn max(1, bin2, TRUE);
      goto L0(r2);
    L2():
      r = dyn base[, , `na.rm`](1, <sym bin>, TRUE);
      goto L0(r);
    };
    goto L1(p);
  L1(nbins_orDefault):
    st nbins = nbins_orDefault;
    sym1 = ldf `is.numeric`;
    base1 = ldf `is.numeric` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L2(r5):
    r7 = `!`(r5);
    c = `as.logical`(r7);
    if c then L21() else L3(c);
  L17():
    bin3 = ld bin;
    check L19() else D0();
  L18():
    r4 = dyn base1(<sym bin>);
    goto L2(r4);
  D0():
    deopt 2 [bin3];
  L3(c2):
    c6 = `as.logical`(c2);
    if c6 then L25() else L4();
  L19():
    bin4 = force? bin3;
    checkMissing(bin4);
    is_numeric = ldf `is.numeric` in base;
    r6 = dyn is_numeric(bin4);
    check L20() else D1();
  L21():
    is_factor = ldf `is.factor`;
    check L22() else D2();
  D1():
    deopt 5 [r6];
  D2():
    deopt 8 [c];
  L4():
    goto L5();
  L5():
    sym2 = ldf typeof;
    base2 = ldf typeof in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L20():
    goto L2(r6);
  L22():
    p1 = prom<V +>{
      bin5 = ld bin;
      bin6 = force? bin5;
      checkMissing(bin6);
      return bin6;
    };
    r9 = dyn is_factor(p1);
    check L23() else D3();
  L25():
    stop = ldf stop;
    check L26() else D4();
  D3():
    deopt 10 [c, r9];
  D4():
    deopt 14 [];
  L6(r14):
    r16 = `!=`(r14, "integer");
    c7 = `as.logical`(r16);
    if c7 then L33() else L7();
  L23():
    r10 = `!`(r9);
    c3 = `as.logical`(r10);
    c4 = `&&`(c, c3);
    goto L3(c4);
  L26():
    r11 = dyn stop("'bin' must be numeric or a factor");
    check L27() else D5();
  L29():
    bin7 = ld bin;
    check L31() else D6();
  L30():
    r13 = dyn base2(<sym bin>);
    goto L6(r13);
  D5():
    deopt 16 [r11];
  D6():
    deopt 21 [bin7];
  L7():
    goto L9();
  L9():
    nbins1 = ld nbins;
    check L39() else D10();
  L27():
    goto L5();
  L31():
    bin8 = force? bin7;
    checkMissing(bin8);
    typeof = ldf typeof in base;
    r15 = dyn typeof(bin8);
    check L32() else D7();
  L33():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  D7():
    deopt 24 [r15];
  D10():
    deopt 36 [nbins1];
  L8(r18):
    st bin = r18;
    goto L9();
  L32():
    goto L6(r15);
  L34():
    bin9 = ld bin;
    check L36() else D8();
  L35():
    r17 = dyn base3(<sym bin>);
    goto L8(r17);
  L39():
    nbins2 = force? nbins1;
    checkMissing(nbins2);
    _Machine = ld `.Machine`;
    check L40() else D11();
  D8():
    deopt 29 [bin9];
  D11():
    deopt 37 [nbins2, _Machine];
  L36():
    bin10 = force? bin9;
    checkMissing(bin10);
    as_integer = ldf `as.integer` in base;
    r19 = dyn as_integer(bin10);
    check L37() else D9();
  L40():
    _Machine1 = force? _Machine;
    checkMissing(_Machine1);
    c8 = `is.object`(_Machine1);
    if c8 then L42() else L43(nbins2, _Machine1);
  D9():
    deopt 32 [r19];
  L37():
    goto L8(r19);
  L41(nbins6, dx1):
    r22 = `>`(nbins6, dx1);
    c9 = `as.logical`(r22);
    if c9 then L45() else L10();
  L42():
    dr = tryDispatchBuiltin.1("$", _Machine1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L44() else L43(nbins2, dr);
  L43(nbins4, _Machine3):
    r21 = `$`(_Machine3, <sym integer.max>);
    goto L41(nbins4, r21);
  L10():
    goto L11();
  L11():
    sym4 = ldf `as.integer`;
    base4 = ldf `as.integer` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L49() else L50();
  L44():
    dx = getTryDispatchBuiltinValue(dr);
    goto L41(nbins2, dx);
  L45():
    stop1 = ldf stop;
    check L46() else D12();
  D12():
    deopt 42 [];
  L12(r26):
    st nbins = r26;
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L53() else L54();
  L46():
    r23 = dyn stop1("attempt to make a table with >= 2^31 elements");
    check L47() else D13();
  L49():
    nbins7 = ld nbins;
    check L51() else D14();
  L50():
    r25 = dyn base4(<sym nbins>);
    goto L12(r25);
  D13():
    deopt 44 [r23];
  D14():
    deopt 49 [nbins7];
  L13(r29):
    c10 = `as.logical`(r29);
    if c10 then L57() else L14();
  L47():
    goto L11();
  L51():
    nbins8 = force? nbins7;
    checkMissing(nbins8);
    as_integer1 = ldf `as.integer` in base;
    r27 = dyn as_integer1(nbins8);
    check L52() else D15();
  L53():
    nbins9 = ld nbins;
    check L55() else D16();
  L54():
    r28 = dyn base5(<sym nbins>);
    goto L13(r28);
  D15():
    deopt 52 [r27];
  D16():
    deopt 56 [nbins9];
  L14():
    goto L15();
  L15():
    sym6 = ldf `.Internal`;
    base6 = ldf `.Internal` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L61() else L62();
  L52():
    goto L12(r27);
  L55():
    nbins10 = force? nbins9;
    checkMissing(nbins10);
    is_na = ldf `is.na` in base;
    r30 = dyn is_na(nbins10);
    check L56() else D17();
  L57():
    stop2 = ldf stop;
    check L58() else D18();
  D17():
    deopt 59 [r30];
  D18():
    deopt 61 [];
  L16(r36):
    popenv;
    return r36;
  L56():
    goto L13(r30);
  L58():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      r31 = dyn gettextf("invalid value of %s", "'nbins'");
      return r31;
    };
    r33 = dyn stop2[, domain](p2, NA_LGL);
    check L59() else D19();
  L61():
    bin11 = ld bin;
    check L63() else D20();
  L62():
    r35 = dyn base6(<lang tabulate(bin, nbins)>);
    goto L16(r35);
  D19():
    deopt 65 [r33];
  D20():
    deopt 70 [bin11];
  L59():
    goto L15();
  L63():
    bin12 = force? bin11;
    checkMissing(bin12);
    nbins11 = ld nbins;
    check L64() else D21();
  D21():
    deopt 72 [nbins11];
  L64():
    nbins12 = force? nbins11;
    checkMissing(nbins12);
    tabulate = ldf tabulate in base;
    r37 = dyn tabulate(bin12, nbins12);
    check L65() else D22();
  D22():
    deopt 75 [r37];
  L65():
    goto L16(r37);
  }
}