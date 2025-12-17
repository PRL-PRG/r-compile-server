fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner662780226;
    st `[[.data.frame` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner662780226(x, `...`, exact) {
  (reg x:*, reg ddd:dots, reg exact:*) -+> V { var x:*, var `...`:dots?, var exact:*, reg exact_isMissing:L, reg exact_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg nargs:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg r7:V, reg missing:cls, reg r8:V, reg r9:V, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg _in_:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg sys_call:cls, reg r15:V, reg names:cls, reg r16:V, reg p:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg c:cls, reg r20:V, reg p1:p(V +), reg r22:V, reg all:cls, reg r23:V, reg r24:V, reg c1:L, reg warning:cls, reg r25:V, reg na:*, reg na1:V, reg r27:V, reg c2:L, reg r28:cls, reg r29:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg ddd1:dots?, reg exact1:*, reg exact2:V, reg p3:p(V +), reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg x3:*, reg x4:V, reg __2:*, reg __3:V, reg exact3:*, reg exact4:V, reg _subset2:cls, reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg __4:*, reg __5:V, reg c3:L, reg c4:L, reg pmatch:cls, reg __6:*, reg __7:V, reg p4:p(V +), reg row_names:cls, reg x5:*, reg x6:V, reg p5:p(V +), reg r40:V, reg p6:p(V +), reg r42:V, reg r43:V, reg __8:*, reg __9:V, reg col:*, reg col1:V, reg c5:L, reg col3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i:*, reg i1:V, reg exact5:*, reg exact6:V, reg __10:cls, reg r44:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    exact_isMissing = missing.0(exact);
    if exact_isMissing then L0(TRUE) else L0(exact);
  L0(exact_orDefault):
    st exact = exact_orDefault;
    sym = ldf nargs;
    base = ldf nargs in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L1(r1):
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L12():
    nargs = ldf nargs in base;
    r2 = dyn nargs();
    check L14() else D0();
  L13():
    r = dyn base();
    goto L1(r);
  D0():
    deopt 3 [r2];
  L2(r6, r7):
    r9 = `!`(r7);
    r10 = `-`(r6, r9);
    st na = r10;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L14():
    goto L1(r2);
  L15():
    missing = ldf missing in base;
    r8 = dyn missing(<sym exact>);
    goto L2(r1, r8);
  L16():
    r5 = dyn base1(<sym exact>);
    goto L2(r1, r5);
  L3(r12):
    r24 = `!`(r12);
    c1 = `as.logical`(r24);
    if c1 then L22() else L4();
  L17():
    _in_ = ldf `%in%`;
    check L19() else D1();
  L18():
    r11 = dyn base2(<lang `%in%`(names(sys.call()), c("", "exact"))>);
    goto L3(r11);
  D1():
    deopt 12 [];
  L4():
    goto L5();
  L5():
    na = ld na;
    check L26() else D6();
  L19():
    p = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      sys_call = ldf `sys.call`;
      r15 = dyn sys_call();
      names = ldf names in base;
      r16 = dyn names(r15);
      goto L0(r16);
    L2():
      r13 = dyn base3(<lang sys.call()>);
      goto L0(r13);
    };
    p1 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      c = ldf c in base;
      r20 = dyn c("", "exact");
      goto L0(r20);
    L2():
      r18 = dyn base4("", "exact");
      goto L0(r18);
    };
    r22 = dyn _in_(p, p1);
    check L20() else D2();
  L22():
    warning = ldf warning;
    check L23() else D4();
  D2():
    deopt 15 [r22];
  D4():
    deopt 20 [];
  D6():
    deopt 25 [na];
  L20():
    all = ldf all in base;
    r23 = dyn all(r22);
    check L21() else D3();
  L23():
    r25 = dyn warning("named arguments other than 'exact' are discouraged");
    check L24() else D5();
  L26():
    na1 = force? na;
    checkMissing(na1);
    r27 = `<`(na1, 3);
    c2 = `as.logical`(r27);
    if c2 then L27() else L6();
  D3():
    deopt 17 [r23];
  D5():
    deopt 22 [r25];
  L6():
    sym5 = ldf `.subset2`;
    base5 = ldf `.subset2` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L30() else L31();
  L21():
    goto L3(r23);
  L24():
    goto L5();
  L27():
    r28 = clos inner1124153322;
    checkFun.0(r28);
    r29 = r28 as cls;
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    ddd1 = ld `...`;
    p3 = prom<V +>{
      exact1 = ld exact;
      exact2 = force? exact1;
      checkMissing(exact2);
      return exact2;
    };
    r32 = dyn r29[, `...`, exact](p2, ddd1, p3);
    check L28() else D7();
  D7():
    deopt 36 [r32];
  L7(r34):
    st col = r34;
    sym6 = ldf `is.character`;
    base6 = ldf `is.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L36() else L37();
  L28():
    popenv;
    return r32;
  L30():
    x3 = ld x;
    check L32() else D8();
  L31():
    r33 = dyn base5[, , exact](<sym x>, <sym ..2>, <sym exact>);
    goto L7(r33);
  D8():
    deopt 39 [x3];
  L8(r37):
    c4 = `as.logical`(r37);
    if c4 then L39() else L9();
  L32():
    x4 = force? x3;
    checkMissing(x4);
    __2 = ld `..2`;
    check L33() else D9();
  L36():
    __4 = ld `..1`;
    check L38() else D12();
  L37():
    r36 = dyn base6(<sym ..1>);
    goto L8(r36);
  D9():
    deopt 41 [__2];
  D12():
    deopt 50 [__4];
  L9():
    __8 = ld `..1`;
    check L43() else D15();
  L10(r43):
    st i = r43;
    col = ld col;
    check L44() else D16();
  L33():
    __3 = force? __2;
    checkMissing(__3);
    exact3 = ld exact;
    check L34() else D10();
  L38():
    __5 = force? __4;
    checkMissing(__5);
    c3 = `is.character`(__5);
    goto L8(c3);
  L39():
    pmatch = ldf pmatch;
    check L40() else D13();
  D10():
    deopt 43 [exact3];
  D13():
    deopt 54 [];
  D15():
    deopt 60 [__8];
  D16():
    deopt 63 [col];
  L34():
    exact4 = force? exact3;
    checkMissing(exact4);
    _subset2 = ldf `.subset2` in base;
    r35 = dyn _subset2(x4, __3, exact4);
    check L35() else D11();
  L40():
    p4 = prom<V +>{
      __6 = ld `..1`;
      __7 = force? __6;
      checkMissing(__7);
      return __7;
    };
    p6 = prom<V +>{
      row_names = ldf `row.names`;
      p5 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r40 = dyn row_names(p5);
      return r40;
    };
    r42 = dyn pmatch[, , `duplicates.ok`](p4, p6, TRUE);
    check L41() else D14();
  L43():
    __9 = force? __8;
    checkMissing(__9);
    goto L10(__9);
  L44():
    col1 = force? col;
    checkMissing(col1);
    c5 = `is.object`(col1);
    if c5 then L45() else L46(col1);
  D11():
    deopt 47 [r35];
  D14():
    deopt 59 [r42];
  L11(dx1):
    popenv;
    return dx1;
  L35():
    goto L7(r35);
  L41():
    goto L10(r42);
  L45():
    dr = tryDispatchBuiltin.1("[[", col1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L47() else L46(dr);
  L46(col3):
    i = ld i;
    check L48() else D17();
  D17():
    deopt 65 [col3, i];
  L47():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L48():
    i1 = force? i;
    exact5 = ld exact;
    check L49() else D18();
  D18():
    deopt 67 [col3, exact5];
  L49():
    exact6 = force? exact5;
    __10 = ldf `[[` in base;
    r44 = dyn __10(col1, i1, exact6);
    goto L11(r44);
  }
}
fun inner1124153322(x, i, exact) {
  (reg x:*, reg i:*, reg exact:*) -+> V { var x:*, var i:*, var exact:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg i1:*, reg i2:V, reg is_matrix:cls, reg r2:V, reg c:L, reg as_matrix:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r4:V, reg c1:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i3:*, reg i4:V, reg __:cls, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg i5:*, reg i6:V, reg exact1:*, reg exact2:V, reg _subset2:cls, reg r10:V |
    mkenv;
    st x = x;
    st i = i;
    st exact = exact;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L8() else L1();
  L4():
    i1 = ld i;
    check L6() else D0();
  L5():
    r = dyn base(<sym i>);
    goto L0(r);
  D0():
    deopt 2 [i1];
  L1():
    sym1 = ldf `.subset2`;
    base1 = ldf `.subset2` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L6():
    i2 = force? i1;
    checkMissing(i2);
    is_matrix = ldf `is.matrix` in base;
    r2 = dyn is_matrix(i2);
    check L7() else D1();
  L8():
    as_matrix = ldf `as.matrix`;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L3(r9):
    popenv;
    return r9;
  L7():
    goto L0(r2);
  L9():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r4 = dyn as_matrix(p);
    check L10() else D3();
  L16():
    x3 = ld x;
    check L18() else D5();
  L17():
    r8 = dyn base1[, , exact](<sym x>, <sym i>, <sym exact>);
    goto L3(r8);
  D3():
    deopt 9 [r4];
  D5():
    deopt 15 [x3];
  L10():
    c1 = `is.object`(r4);
    if c1 then L11() else L12(r4);
  L18():
    x4 = force? x3;
    checkMissing(x4);
    i5 = ld i;
    check L19() else D6();
  D6():
    deopt 17 [i5];
  L2(dx1):
    popenv;
    return dx1;
  L11():
    dr = tryDispatchBuiltin.1("[[", r4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(r6):
    i3 = ld i;
    check L14() else D4();
  L19():
    i6 = force? i5;
    checkMissing(i6);
    exact1 = ld exact;
    check L20() else D7();
  D4():
    deopt 10 [r6, i3];
  D7():
    deopt 19 [exact1];
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L14():
    i4 = force? i3;
    __ = ldf `[[` in base;
    r7 = dyn __(r6, i4);
    goto L2(r7);
  L20():
    exact2 = force? exact1;
    checkMissing(exact2);
    _subset2 = ldf `.subset2` in base;
    r10 = dyn _subset2(x4, i6, exact2);
    check L21() else D8();
  D8():
    deopt 23 [r10];
  L21():
    goto L3(r10);
  }
}