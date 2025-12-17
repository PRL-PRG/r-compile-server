fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3111339050;
    st `print.findLineNumResult` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3111339050(x, steps, `...`) {
  (reg x:*, reg steps:*, reg ddd:dots) -+> V { var x:*, var steps:*, reg steps_isMissing:L, reg steps_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg cat:cls, reg r4:V, reg x3:*, reg x4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg i7:I, reg r7:V, reg filename:*, reg filename1:V, reg xi:*, reg xi1:V, reg c2:L, reg i9:I, reg xi3:V, reg dr:V, reg dc:L, reg dx:V, reg i11:I, reg dx1:V, reg r8:V, reg identical:cls, reg r9:V, reg r10:V, reg c3:L, reg i12:I, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg i16:I, reg c8:L, reg r12:V, reg line:*, reg line1:V, reg xi4:*, reg xi5:V, reg c9:L, reg i18:I, reg c11:L, reg xi7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i20:I, reg c13:L, reg dx3:V, reg r13:V, reg identical1:cls, reg r14:V, reg r15:V, reg c14:L, reg c15:V, reg c17:L, reg xi8:*, reg xi9:V, reg c18:L, reg i25:I, reg xi11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i27:I, reg dx5:V, reg r16:V, reg xi12:*, reg xi13:V, reg c19:L, reg i29:I, reg xi15:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i31:I, reg dx7:V, reg r17:V, reg cat1:cls, reg filename2:*, reg filename3:V, reg p:p(V +), reg line2:*, reg line3:V, reg p1:p(V +), reg r20:V, reg i32:I, reg cat2:cls, reg xi16:*, reg xi17:V, reg c20:L, reg xi19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r22:V, reg p2:p(V +), reg steps1:*, reg steps2:V, reg c21:L, reg paste:cls, reg paste1:cls, reg xi20:*, reg xi21:V, reg c22:L, reg xi23:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r24:V, reg p3:p(V +), reg r26:V, reg p4:p(V +), reg r28:V, reg p5:p(V +), reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg i35:I, reg r32:V, reg xi24:*, reg xi25:V, reg c23:L, reg i37:I, reg xi27:V, reg dr12:V, reg dc6:L, reg dx12:V, reg i39:I, reg dx13:V, reg r33:V, reg c24:V, reg r34:V, reg c25:L, reg cat3:cls, reg paste2:cls, reg xi28:*, reg xi29:V, reg c26:L, reg xi31:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r35:V, reg p6:p(V +), reg r37:V, reg p7:p(V +), reg r39:V, reg i42:I, reg cat4:cls, reg format:cls, reg xi32:*, reg xi33:V, reg c27:L, reg xi35:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r41:V, reg p8:p(V +), reg r43:V, reg p9:p(V +), reg r45:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r46:V, reg r47:V, reg x6:*, reg x7:V, reg invisible:cls, reg r48:V |
    mkenv;
    st x = x;
    steps_isMissing = missing.0(steps);
    if steps_isMissing then L0(TRUE) else L0(steps);
  L0(steps_orDefault):
    st steps = steps_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L19() else L2();
  L15():
    x1 = ld x;
    check L17() else D0();
  L16():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    goto L3();
  L3():
    st filename = NULL;
    st line = 0.0;
    x3 = ld x;
    check L23() else D4();
  L17():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L18() else D1();
  L19():
    cat = ldf cat;
    check L20() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  D4():
    deopt 19 [x3];
  L18():
    goto L1(r2);
  L20():
    r4 = dyn cat("No source refs found.\n");
    check L21() else D3();
  L23():
    x4 = force? x3;
    checkMissing(x4);
    s = toForSeq(x4);
    l = length(s);
    i = 0;
    goto L4(i);
  D3():
    deopt 10 [r4];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L24() else L13();
  L21():
    goto L3();
  L13():
    x5 = `[[`(s, i2, NULL, TRUE);
    st xi = x5;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L24():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L74() else L75();
  L5(i7, r7):
    r10 = `!`(r7);
    c3 = `as.logical`(r10);
    if c3 then L6(i7, c3) else L34();
  L14(r47):
    popenv;
    return r47;
  L25():
    filename = ld filename;
    check L27() else D5();
  L26():
    r6 = dyn base1(<sym filename>, <lang `$`(xi, filename)>);
    goto L5(i2, r6);
  L74():
    x6 = ld x;
    check L76() else D22();
  L75():
    r46 = dyn base4(<sym x>);
    goto L14(r46);
  D5():
    deopt 23 [i2, filename];
  D22():
    deopt 111 [x6];
  L6(i12, c4):
    c17 = `as.logical`(c4);
    if c17 then L45() else L8();
  L27():
    filename1 = force? filename;
    checkMissing(filename1);
    xi = ld xi;
    check L28() else D6();
  L34():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L76():
    x7 = force? x6;
    checkMissing(x7);
    invisible = ldf invisible in base;
    r48 = dyn invisible(x7);
    check L77() else D23();
  D6():
    deopt 25 [i2, xi];
  D23():
    deopt 114 [r48];
  L7(i16, c8, r12):
    r15 = `!`(r12);
    c14 = `as.logical`(r15);
    c15 = `||`(c8, c14);
    goto L6(i16, c15);
  L8():
    goto L9(i12);
  L9(i32):
    cat2 = ldf cat;
    check L59() else D15();
  L28():
    xi1 = force? xi;
    checkMissing(xi1);
    c2 = `is.object`(xi1);
    if c2 then L30() else L31(i2, xi1);
  L35():
    line = ld line;
    check L37() else D8();
  L36():
    r11 = dyn base2(<sym line>, <lang `$`(xi, line)>);
    goto L7(i7, c3, r11);
  L45():
    xi8 = ld xi;
    check L46() else D11();
  L77():
    goto L14(r48);
  D8():
    deopt 40 [i7, c3, line];
  D11():
    deopt 56 [i12, xi8];
  D15():
    deopt 76 [i32];
  L29(i11, dx1):
    identical = ldf identical in base;
    r9 = dyn identical(filename1, dx1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L33() else D7();
  L30():
    dr = tryDispatchBuiltin.1("$", xi1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(i2, dr);
  L31(i9, xi3):
    r8 = `$`(xi3, <sym filename>);
    goto L29(i9, r8);
  L37():
    line1 = force? line;
    checkMissing(line1);
    xi4 = ld xi;
    check L38() else D9();
  L46():
    xi9 = force? xi8;
    checkMissing(xi9);
    c18 = `is.object`(xi9);
    if c18 then L48() else L49(i12, xi9);
  L59():
    p2 = prom<V +>{
      xi16 = ld xi;
      xi17 = force? xi16;
      checkMissing(xi17);
      c20 = `is.object`(xi17);
      if c20 then L1() else L2(xi17);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", xi17);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(xi19):
      r22 = `$`(xi19, <sym name>);
      goto L0(r22);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p5 = prom<V +>{
      steps1 = ld steps;
      steps2 = force? steps1;
      checkMissing(steps2);
      c21 = `as.logical`(steps2);
      if c21 then L1() else L0();
    L0():
      return "";
    L1():
      paste = ldf paste;
      p4 = prom<V +>{
        paste1 = ldf paste;
        p3 = prom<V +>{
          xi20 = ld xi;
          xi21 = force? xi20;
          checkMissing(xi21);
          c22 = `is.object`(xi21);
          if c22 then L1() else L2(xi21);
        L0(dx11):
          return dx11;
        L1():
          dr10 = tryDispatchBuiltin.1("$", xi21);
          dc5 = getTryDispatchBuiltinDispatched(dr10);
          if dc5 then L3() else L2(dr10);
        L2(xi23):
          r24 = `$`(xi23, <sym at>);
          goto L0(r24);
        L3():
          dx10 = getTryDispatchBuiltinValue(dr10);
          goto L0(dx10);
        };
        r26 = dyn paste1[, collapse](p3, ",");
        return r26;
      };
      r28 = dyn paste(" step ", p4);
      return r28;
    };
    r30 = dyn cat2[, , , sep](" ", p2, p5, "");
    check L60() else D16();
  D7():
    deopt 36 [i11, r9];
  D9():
    deopt 42 [i7, c3, xi4];
  D16():
    deopt 82 [i32, r30];
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L29(i2, dx);
  L33():
    goto L5(i11, r9);
  L38():
    xi5 = force? xi4;
    checkMissing(xi5);
    c9 = `is.object`(xi5);
    if c9 then L40() else L41(i7, c3, xi5);
  L47(i27, dx5):
    st filename = dx5;
    xi12 = ld xi;
    check L51() else D12();
  L48():
    dr4 = tryDispatchBuiltin.1("$", xi9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L50() else L49(i12, dr4);
  L49(i25, xi11):
    r16 = `$`(xi11, <sym filename>);
    goto L47(i25, r16);
  L60():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L61() else L62();
  D12():
    deopt 60 [i27, xi12];
  L10(i35, r32):
    r34 = `!`(r32);
    c25 = `as.logical`(r34);
    if c25 then L68() else L11();
  L39(i20, c13, dx3):
    identical1 = ldf identical in base;
    r14 = dyn identical1(line1, dx3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L43() else D10();
  L40():
    dr2 = tryDispatchBuiltin.1("$", xi5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(i7, c3, dr2);
  L41(i18, c11, xi7):
    r13 = `$`(xi7, <sym line>);
    goto L39(i18, c11, r13);
  L50():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L47(i12, dx4);
  L51():
    xi13 = force? xi12;
    checkMissing(xi13);
    c19 = `is.object`(xi13);
    if c19 then L53() else L54(i27, xi13);
  L61():
    xi24 = ld xi;
    check L63() else D17();
  L62():
    r31 = dyn base3(<lang `$`(xi, signature)>);
    goto L10(i32, r31);
  D10():
    deopt 53 [i20, c13, r14];
  D17():
    deopt 84 [i32, xi24];
  L11():
    goto L12(i35);
  L12(i42):
    cat4 = ldf cat;
    check L72() else D20();
  L42():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L39(i7, c3, dx2);
  L43():
    goto L7(i20, c13, r14);
  L52(i31, dx7):
    st line = dx7;
    cat1 = ldf cat;
    check L56() else D13();
  L53():
    dr6 = tryDispatchBuiltin.1("$", xi13);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L55() else L54(i27, dr6);
  L54(i29, xi15):
    r17 = `$`(xi15, <sym line>);
    goto L52(i29, r17);
  L63():
    xi25 = force? xi24;
    checkMissing(xi25);
    c23 = `is.object`(xi25);
    if c23 then L65() else L66(i32, xi25);
  L68():
    cat3 = ldf cat;
    check L69() else D18();
  D13():
    deopt 65 [i31];
  D18():
    deopt 90 [i35];
  D20():
    deopt 99 [i42];
  L55():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L52(i27, dx6);
  L56():
    p = prom<V +>{
      filename2 = ld filename;
      filename3 = force? filename2;
      checkMissing(filename3);
      return filename3;
    };
    p1 = prom<V +>{
      line2 = ld line;
      line3 = force? line2;
      checkMissing(line3);
      return line3;
    };
    r20 = dyn cat1[, , , , sep](p, "#", p1, ":\n", "");
    check L57() else D14();
  L64(i39, dx13):
    c24 = `==`(dx13, NULL);
    goto L10(i39, c24);
  L65():
    dr12 = tryDispatchBuiltin.1("$", xi25);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L67() else L66(i32, dr12);
  L66(i37, xi27):
    r33 = `$`(xi27, <sym signature>);
    goto L64(i37, r33);
  L69():
    p7 = prom<V +>{
      paste2 = ldf paste;
      p6 = prom<V +>{
        xi28 = ld xi;
        xi29 = force? xi28;
        checkMissing(xi29);
        c26 = `is.object`(xi29);
        if c26 then L1() else L2(xi29);
      L0(dx15):
        return dx15;
      L1():
        dr14 = tryDispatchBuiltin.1("$", xi29);
        dc7 = getTryDispatchBuiltinDispatched(dr14);
        if dc7 then L3() else L2(dr14);
      L2(xi31):
        r35 = `$`(xi31, <sym signature>);
        goto L0(r35);
      L3():
        dx14 = getTryDispatchBuiltinValue(dr14);
        goto L0(dx14);
      };
      r37 = dyn paste2[, collapse](p6, ",");
      return r37;
    };
    r39 = dyn cat3[, , sep](" signature ", p7, "");
    check L70() else D19();
  L72():
    p9 = prom<V +>{
      format = ldf format;
      p8 = prom<V +>{
        xi32 = ld xi;
        xi33 = force? xi32;
        checkMissing(xi33);
        c27 = `is.object`(xi33);
        if c27 then L1() else L2(xi33);
      L0(dx17):
        return dx17;
      L1():
        dr16 = tryDispatchBuiltin.1("$", xi33);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(xi35):
        r41 = `$`(xi35, <sym env>);
        goto L0(r41);
      L3():
        dx16 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx16);
      };
      r43 = dyn format(p8);
      return r43;
    };
    r45 = dyn cat4[, , , sep](" in ", p9, "\n", "");
    check L73() else D21();
  D14():
    deopt 72 [i31, r20];
  D19():
    deopt 95 [i35, r39];
  D21():
    deopt 105 [i42, r45];
  L57():
    goto L9(i31);
  L67():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L64(i32, dx12);
  L70():
    goto L12(i35);
  L73():
    goto L4(i42);
  }
}