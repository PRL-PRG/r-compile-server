fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1464016312;
    st `print.dist` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1464016312(x, diag, upper, digits, justify, right, `...`) {
  (reg x:*, reg diag:*, reg upper:*, reg digits:*, reg justify:*, reg right:*, reg ddd:dots) -+> V { var x:*, var diag:*, reg diag_isMissing:L, reg diag_orDefault:*, var upper:*, reg upper_isMissing:L, reg upper_orDefault:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var justify:*, reg justify_isMissing:L, reg justify_orDefault:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg length:cls, reg r4:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg diag1:*, reg diag2:V, reg c1:V, reg c2:L, reg ____:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg attr:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg upper1:*, reg upper2:V, reg c3:V, reg c4:L, reg ____1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg x5:*, reg x6:V, reg attr1:cls, reg r17:V, reg p2:p(V +), reg r19:V, reg as_matrix:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg r22:V, reg format:cls, reg m:*, reg m1:V, reg p4:p(V +), reg digits1:*, reg digits2:V, reg p5:p(V +), reg justify1:*, reg justify2:V, reg p6:p(V +), reg r26:V, reg upper3:*, reg upper4:V, reg r27:V, reg c5:L, reg l:*, reg c6:L, reg r29:S, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r31:S, reg dx1:V, reg row:cls, reg cf:*, reg cf1:V, reg p7:p(V +), reg r33:V, reg col:cls, reg cf2:*, reg cf3:V, reg p8:p(V +), reg r35:V, reg r36:V, reg ___:cls, reg r37:V, reg diag3:*, reg diag4:V, reg r39:V, reg c7:L, reg l3:*, reg c8:L, reg r41:S, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r43:S, reg dx3:V, reg row1:cls, reg cf4:*, reg cf5:V, reg p9:p(V +), reg r45:V, reg col1:cls, reg cf6:*, reg cf7:V, reg p10:p(V +), reg r47:V, reg r48:V, reg ___1:cls, reg r49:V, reg print:cls, reg diag5:*, reg diag6:V, reg c9:L, reg c10:V, reg upper5:*, reg upper6:V, reg c12:L, reg c13:V, reg c15:L, reg cf8:*, reg cf9:V, reg cf10:*, reg cf11:V, reg c16:L, reg cf13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r51:V, reg r52:V, reg x9:*, reg x10:V, reg attr2:cls, reg r53:V, reg r54:V, reg __:cls, reg r55:V, reg p11:p(V +), reg right1:*, reg right2:V, reg p12:p(V +), reg ddd1:dots?, reg r58:V, reg cat:cls, reg data_class:cls, reg x11:*, reg x12:V, reg p13:p(V +), reg r61:V, reg p14:p(V +), reg r63:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r64:V, reg r65:V, reg x13:*, reg x14:V, reg invisible:cls, reg r66:V |
    mkenv;
    st x = x;
    diag_isMissing = missing.0(diag);
    if diag_isMissing then L0(NULL) else L0(diag);
  L0(diag_orDefault):
    st diag = diag_orDefault;
    upper_isMissing = missing.0(upper);
    if upper_isMissing then L1(NULL) else L1(upper);
  L1(upper_orDefault):
    st upper = upper_orDefault;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L2() else L3(digits);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("digits");
      return r;
    };
    goto L3(p);
  L3(digits_orDefault):
    st digits = digits_orDefault;
    justify_isMissing = missing.0(justify);
    if justify_isMissing then L4("none") else L4(justify);
  L4(justify_orDefault):
    st justify = justify_orDefault;
    right_isMissing = missing.0(right);
    if right_isMissing then L5(TRUE) else L5(right);
  L5(right_orDefault):
    st right = right_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L6(r3):
    c = `as.logical`(r3);
    if c then L26() else L7();
  L22():
    x1 = ld x;
    check L24() else D0();
  L23():
    r2 = dyn base(<sym x>);
    goto L6(r2);
  D0():
    deopt 2 [x1];
  L7():
    cat = ldf cat;
    check L68() else D24();
  L20():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L70() else L71();
  L24():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r4 = dyn length(x2);
    check L25() else D1();
  L26():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  D1():
    deopt 5 [r4];
  D24():
    deopt 90 [];
  L8(r6):
    c2 = `as.logical`(r6);
    if c2 then L30() else L9();
  L21(r65):
    popenv;
    return r65;
  L25():
    goto L6(r4);
  L27():
    diag1 = ld diag;
    check L29() else D2();
  L28():
    r5 = dyn base1(<sym diag>);
    goto L8(r5);
  L68():
    p14 = prom<V +>{
      data_class = ldf `data.class`;
      p13 = prom<V +>{
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        return x12;
      };
      r61 = dyn data_class(p13);
      return r61;
    };
    r63 = dyn cat[, , sep](p14, "(0)\n", "");
    check L69() else D25();
  L70():
    x13 = ld x;
    check L72() else D26();
  L71():
    r64 = dyn base6(<sym x>);
    goto L21(r64);
  D2():
    deopt 7 [diag1];
  D25():
    deopt 95 [r63];
  D26():
    deopt 98 [x13];
  L9():
    goto L10();
  L10():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L29():
    diag2 = force? diag1;
    checkMissing(diag2);
    c1 = `==`(diag2, NULL);
    goto L8(c1);
  L30():
    ____ = ldf `%||%`;
    check L31() else D3();
  L69():
    goto L20();
  L72():
    x14 = force? x13;
    checkMissing(x14);
    invisible = ldf invisible in base;
    r66 = dyn invisible(x14);
    check L73() else D27();
  D3():
    deopt 11 [];
  D27():
    deopt 101 [r66];
  L11(r14):
    c4 = `as.logical`(r14);
    if c4 then L37() else L12();
  L31():
    p1 = prom<V +>{
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      attr = ldf attr in base;
      r9 = dyn attr(x4, "Diag");
      goto L0(r9);
    L2():
      r7 = dyn base2(<sym x>, "Diag");
      goto L0(r7);
    };
    r11 = dyn ____(p1, FALSE);
    check L32() else D4();
  L34():
    upper1 = ld upper;
    check L36() else D5();
  L35():
    r13 = dyn base3(<sym upper>);
    goto L11(r13);
  L73():
    goto L21(r66);
  D4():
    deopt 14 [r11];
  D5():
    deopt 19 [upper1];
  L12():
    goto L13();
  L13():
    as_matrix = ldf `as.matrix`;
    check L41() else D8();
  L32():
    st diag = r11;
    goto L10();
  L36():
    upper2 = force? upper1;
    checkMissing(upper2);
    c3 = `==`(upper2, NULL);
    goto L11(c3);
  L37():
    ____1 = ldf `%||%`;
    check L38() else D6();
  D6():
    deopt 23 [];
  D8():
    deopt 31 [];
  L38():
    p2 = prom<V +>{
      sym4 = ldf attr;
      base4 = ldf attr in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      attr1 = ldf attr in base;
      r17 = dyn attr1(x6, "Upper");
      goto L0(r17);
    L2():
      r15 = dyn base4(<sym x>, "Upper");
      goto L0(r15);
    };
    r19 = dyn ____1(p2, FALSE);
    check L39() else D7();
  L41():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r22 = dyn as_matrix(p3);
    check L42() else D9();
  D7():
    deopt 26 [r19];
  D9():
    deopt 33 [r22];
  L39():
    st upper = r19;
    goto L13();
  L42():
    st m = r22;
    format = ldf format;
    check L43() else D10();
  D10():
    deopt 36 [];
  L43():
    p4 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    p5 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    p6 = prom<V +>{
      justify1 = ld justify;
      justify2 = force? justify1;
      checkMissing(justify2);
      return justify2;
    };
    r26 = dyn format[, digits, justify](p4, p5, p6);
    check L44() else D11();
  D11():
    deopt 42 [r26];
  L44():
    st cf = r26;
    upper3 = ld upper;
    check L45() else D12();
  D12():
    deopt 44 [upper3];
  L45():
    upper4 = force? upper3;
    checkMissing(upper4);
    r27 = `!`(upper4);
    c5 = `as.logical`(r27);
    if c5 then L46() else L14();
  L14():
    goto L16();
  L16():
    diag3 = ld diag;
    check L55() else D17();
  L46():
    l = ld cf;
    c6 = `is.object`(l);
    if c6 then L47() else L48("", l);
  D17():
    deopt 62 [diag3];
  L15(r31, dx1):
    st cf = dx1;
    goto L16();
  L47():
    dr = tryDispatchBuiltin.0("[<-", l, "");
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L49() else L48("", dr);
  L48(r29, l2):
    row = ldf row;
    check L50() else D13();
  L55():
    diag4 = force? diag3;
    checkMissing(diag4);
    r39 = `!`(diag4);
    c7 = `as.logical`(r39);
    if c7 then L56() else L17();
  D13():
    deopt 51 [r29, l2, ""];
  L17():
    goto L19();
  L19():
    print = ldf print;
    check L65() else D22();
  L49():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15("", dx);
  L50():
    p7 = prom<V +>{
      cf = ld cf;
      cf1 = force? cf;
      checkMissing(cf1);
      return cf1;
    };
    r33 = dyn row(p7);
    check L51() else D14();
  L56():
    l3 = ld cf;
    c8 = `is.object`(l3);
    if c8 then L57() else L58("", l3);
  D14():
    deopt 53 [r29, l2, "", r33];
  D22():
    deopt 81 [];
  L18(r43, dx3):
    st cf = dx3;
    goto L19();
  L51():
    col = ldf col;
    check L52() else D15();
  L57():
    dr2 = tryDispatchBuiltin.0("[<-", l3, "");
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58("", dr2);
  L58(r41, l5):
    row1 = ldf row;
    check L60() else D18();
  L65():
    p11 = prom<V +>{
      diag5 = ld diag;
      diag6 = force? diag5;
      checkMissing(diag6);
      c9 = `as.logical`(diag6);
      if c9 then L0(c9) else L4();
    L0(c10):
      c15 = `as.logical`(c10);
      if c15 then L6() else L1();
    L4():
      upper5 = ld upper;
      upper6 = force? upper5;
      checkMissing(upper6);
      c12 = `as.logical`(upper6);
      c13 = `||`(c9, c12);
      goto L0(c13);
    L1():
      cf10 = ld cf;
      cf11 = force? cf10;
      checkMissing(cf11);
      c16 = `is.object`(cf11);
      if c16 then L8() else L9(cf11);
    L6():
      cf8 = ld cf;
      cf9 = force? cf8;
      checkMissing(cf9);
      return cf9;
    L2(dx5):
      return dx5;
    L8():
      dr4 = tryDispatchBuiltin.1("[", cf11);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L10() else L9(dr4);
    L9(cf13):
      sym5 = ldf attr;
      base5 = ldf attr in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L11() else L12();
    L3(r52):
      r54 = `-`(<missing>, r52);
      __ = ldf `[` in base;
      r55 = dyn __(cf11, -1.0, r54, FALSE);
      goto L2(r55);
    L10():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L2(dx4);
    L11():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      attr2 = ldf attr in base;
      r53 = dyn attr2(x10, "Size");
      goto L3(r53);
    L12():
      r51 = dyn base5(<sym x>, "Size");
      goto L3(r51);
    };
    p12 = prom<V +>{
      right1 = ld right;
      right2 = force? right1;
      checkMissing(right2);
      return right2;
    };
    ddd1 = ld `...`;
    r58 = dyn print[, quote, right, `...`](p11, FALSE, p12, ddd1);
    check L66() else D23();
  D15():
    deopt 54 [r29, l2, "", r33];
  D18():
    deopt 69 [r41, l5, ""];
  D23():
    deopt 88 [r58];
  L52():
    p8 = prom<V +>{
      cf2 = ld cf;
      cf3 = force? cf2;
      checkMissing(cf3);
      return cf3;
    };
    r35 = dyn col(p8);
    check L53() else D16();
  L59():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18("", dx2);
  L60():
    p9 = prom<V +>{
      cf4 = ld cf;
      cf5 = force? cf4;
      checkMissing(cf5);
      return cf5;
    };
    r45 = dyn row1(p9);
    check L61() else D19();
  L66():
    goto L20();
  D16():
    deopt 56 [r29, l2, "", r33, r35];
  D19():
    deopt 71 [r41, l5, "", r45];
  L53():
    r36 = `<`(r33, r35);
    ___ = ldf `[<-` in base;
    r37 = dyn ___(l2, "", r36);
    goto L15(r29, r37);
  L61():
    col1 = ldf col;
    check L62() else D20();
  D20():
    deopt 72 [r41, l5, "", r45];
  L62():
    p10 = prom<V +>{
      cf6 = ld cf;
      cf7 = force? cf6;
      checkMissing(cf7);
      return cf7;
    };
    r47 = dyn col1(p10);
    check L63() else D21();
  D21():
    deopt 74 [r41, l5, "", r45, r47];
  L63():
    r48 = `==`(r45, r47);
    ___1 = ldf `[<-` in base;
    r49 = dyn ___1(l5, "", r48);
    goto L18(r41, r49);
  }
}