fun main() {
  () -+> V { reg r:cls, reg print:cls, reg p:p(V +), reg r2:V, reg LETTERS:*, reg LETTERS1:V, reg c:L, reg LETTERS3:V, reg dr:V, reg dc:L, reg dx:V, reg r3:V, reg __:cls, reg r4:V, reg print1:cls, reg LETTERS4:*, reg LETTERS5:V, reg p1:p(V +), reg r6:V, reg cbind:cls, reg matrix:cls, reg r7:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg LETTERS6:*, reg LETTERS7:V, reg c1:L, reg LETTERS9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r11:V, reg list:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg r16:V, reg __2:cls, reg r17:V, reg r18:cls, reg M:*, reg M1:V, reg p5:p(V +), reg r20:V, reg print2:cls, reg M2:*, reg M3:V, reg p6:p(V +), reg r22:V, reg seq:cls, reg p7:p(V +), reg p8:p(V +), reg r25:V, reg r26:V, reg r27:cls, reg prI:cls, reg x:*, reg x1:V, reg p9:p(V +), reg r29:V |
    mkenv;
    r = clos inner2422365137;
    st `print.default` = r;
    print = ldf print;
    check L1() else D0();
  D0():
    deopt 6 [];
  L1():
    p = prom<V +>{
      return 3.141592653589793;
    };
    r2 = dyn print[, digits](p, 16.0);
    check L2() else D1();
  D1():
    deopt 10 [r2];
  L2():
    LETTERS = ld LETTERS;
    check L3() else D2();
  D2():
    deopt 11 [LETTERS];
  L3():
    LETTERS1 = force? LETTERS;
    checkMissing(LETTERS1);
    c = `is.object`(LETTERS1);
    if c then L4() else L5(LETTERS1);
  L0():
    print1 = ldf print;
    check L7() else D3();
  L4():
    dr = tryDispatchBuiltin.1("[", LETTERS1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(LETTERS3):
    r3 = `:`(1.0, 16.0);
    __ = ldf `[` in base;
    r4 = dyn __(LETTERS3, r3);
    goto L0();
  D3():
    deopt 19 [];
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0();
  L7():
    p1 = prom<V +>{
      LETTERS4 = ld LETTERS;
      LETTERS5 = force? LETTERS4;
      checkMissing(LETTERS5);
      return LETTERS5;
    };
    r6 = dyn print1[, quote](p1, FALSE);
    check L8() else D4();
  D4():
    deopt 23 [r6];
  L8():
    cbind = ldf cbind;
    check L9() else D5();
  D5():
    deopt 25 [];
  L9():
    p4 = prom<V +>{
      matrix = ldf matrix;
      p2 = prom<V +>{
        r7 = `:`(1.0, 10000.0);
        return r7;
      };
      p3 = prom<V +>{
        sym = ldf list;
        base = ldf list in base;
        guard = `==`.4(sym, base);
        if guard then L2() else L3();
      L0(r10):
        return r10;
      L2():
        LETTERS6 = ld LETTERS;
        LETTERS7 = force? LETTERS6;
        checkMissing(LETTERS7);
        c1 = `is.object`(LETTERS7);
        if c1 then L4() else L5(LETTERS7);
      L3():
        r9 = dyn base(NULL, <lang `[`(LETTERS, `:`(1.0, 10.0))>);
        goto L0(r9);
      L1(dx3):
        list = ldf list in base;
        r12 = dyn list(NULL, dx3);
        goto L0(r12);
      L4():
        dr2 = tryDispatchBuiltin.1("[", LETTERS7);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L6() else L5(dr2);
      L5(LETTERS9):
        __1 = ldf `[` in base;
        r11 = dyn __1(LETTERS9, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
        goto L1(r11);
      L6():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L1(dx2);
      };
      r14 = dyn matrix[, ncol, dimnames](p2, 10.0, p3);
      return r14;
    };
    r16 = dyn cbind[I, ](1.0, p4);
    check L10() else D6();
  D6():
    deopt 29 [r16];
  L10():
    st M = r16;
    __2 = ldf `::`;
    check L11() else D7();
  D7():
    deopt 32 [];
  L11():
    r17 = dyn __2("utils", "head");
    check L12() else D8();
  D8():
    deopt 35 [r17];
  L12():
    checkFun.0(r17);
    r18 = r17 as cls;
    p5 = prom<V +>{
      M = ld M;
      M1 = force? M;
      checkMissing(M1);
      return M1;
    };
    r20 = dyn r18(p5);
    check L13() else D9();
  D9():
    deopt 38 [r20];
  L13():
    print2 = ldf print;
    check L14() else D10();
  D10():
    deopt 40 [];
  L14():
    p6 = prom<V +>{
      M2 = ld M;
      M3 = force? M2;
      checkMissing(M3);
      return M3;
    };
    r22 = dyn print2[, max](p6, 1000.0);
    check L15() else D11();
  D11():
    deopt 44 [r22];
  L15():
    seq = ldf seq;
    check L16() else D12();
  D12():
    deopt 47 [2.0];
  L16():
    p7 = prom<V +>{
      return -8.0;
    };
    p8 = prom<V +>{
      return 0.25;
    };
    r25 = dyn seq[, , by](p7, 30.0, p8);
    check L17() else D13();
  D13():
    deopt 52 [2.0, r25];
  L17():
    r26 = `^`(2.0, r25);
    st x = r26;
    r27 = clos inner2501545716;
    st prI = r27;
    prI = ldf prI;
    check L18() else D14();
  D14():
    deopt 59 [];
  L18():
    p9 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r29 = dyn prI(p9);
    check L19() else D15();
  D15():
    deopt 61 [r29];
  L19():
    popenv;
    return r29;
  }
}
fun inner2422365137(x, digits, quote, `na.print`, `print.gap`, right, max, width, useSource, `...`) {
  (reg x:*, reg digits:*, reg quote:*, reg na_print:*, reg print_gap:*, reg right:*, reg max:*, reg width:*, reg useSource:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var `na.print`:*, reg na_print_isMissing:L, reg na_print_orDefault:*, var `print.gap`:*, reg print_gap_isMissing:L, reg print_gap_orDefault:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, var max:*, reg max_isMissing:L, reg max_orDefault:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, var useSource:*, reg useSource_isMissing:L, reg useSource_orDefault:*, var `...`:dots?, reg pairlist:cls, reg digits1:*, reg digits2:V, reg p:p(V +), reg quote1:*, reg quote2:V, reg p1:p(V +), reg na_print1:*, reg na_print2:V, reg p2:p(V +), reg print_gap1:*, reg print_gap2:V, reg p3:p(V +), reg right1:*, reg right2:V, reg p4:p(V +), reg max1:*, reg max2:V, reg p5:p(V +), reg width1:*, reg width2:V, reg p6:p(V +), reg useSource1:*, reg useSource2:V, reg p7:p(V +), reg ddd1:dots?, reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg missing:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg missing1:cls, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg missing2:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg missing3:cls, reg r22:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg missing4:cls, reg r25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg missing5:cls, reg r28:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg r30:V, reg missing6:cls, reg r31:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r32:V, reg r33:V, reg missing7:cls, reg r34:V, reg c:cls, reg r35:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r36:V, reg r37:V, reg x1:*, reg x2:V, reg args:*, reg args1:V, reg missings:*, reg missings1:V, reg print_default:cls, reg r38:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0(NULL) else L0(digits);
  L0(digits_orDefault):
    st digits = digits_orDefault;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L1(TRUE) else L1(quote);
  L1(quote_orDefault):
    st quote = quote_orDefault;
    na_print_isMissing = missing.0(na_print);
    if na_print_isMissing then L2(NULL) else L2(na_print);
  L2(na_print_orDefault):
    st `na.print` = na_print_orDefault;
    print_gap_isMissing = missing.0(print_gap);
    if print_gap_isMissing then L3(NULL) else L3(print_gap);
  L3(print_gap_orDefault):
    st `print.gap` = print_gap_orDefault;
    right_isMissing = missing.0(right);
    if right_isMissing then L4(FALSE) else L4(right);
  L4(right_orDefault):
    st right = right_orDefault;
    max_isMissing = missing.0(max);
    if max_isMissing then L5(NULL) else L5(max);
  L5(max_orDefault):
    st max = max_orDefault;
    width_isMissing = missing.0(width);
    if width_isMissing then L6(NULL) else L6(width);
  L6(width_orDefault):
    st width = width_orDefault;
    useSource_isMissing = missing.0(useSource);
    if useSource_isMissing then L7(TRUE) else L7(useSource);
  L7(useSource_orDefault):
    st useSource = useSource_orDefault;
    st `...` = ddd;
    pairlist = ldf pairlist;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    p1 = prom<V +>{
      quote1 = ld quote;
      quote2 = force? quote1;
      checkMissing(quote2);
      return quote2;
    };
    p2 = prom<V +>{
      na_print1 = ld `na.print`;
      na_print2 = force? na_print1;
      checkMissing(na_print2);
      return na_print2;
    };
    p3 = prom<V +>{
      print_gap1 = ld `print.gap`;
      print_gap2 = force? print_gap1;
      checkMissing(print_gap2);
      return print_gap2;
    };
    p4 = prom<V +>{
      right1 = ld right;
      right2 = force? right1;
      checkMissing(right2);
      return right2;
    };
    p5 = prom<V +>{
      max1 = ld max;
      max2 = force? max1;
      checkMissing(max2);
      return max2;
    };
    p6 = prom<V +>{
      width1 = ld width;
      width2 = force? width1;
      checkMissing(width2);
      return width2;
    };
    p7 = prom<V +>{
      useSource1 = ld useSource;
      useSource2 = force? useSource1;
      checkMissing(useSource2);
      return useSource2;
    };
    ddd1 = ld `...`;
    r8 = dyn pairlist[digits, quote, `na.print`, `print.gap`, right, max, width, useSource, `...`](p, p1, p2, p3, p4, p5, p6, p7, ddd1);
    check L19() else D1();
  D1():
    deopt 19 [r8];
  L19():
    st args = r8;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L8(r10):
    st missings = r10;
    sym9 = ldf `.Internal`;
    base9 = ldf `.Internal` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L39() else L40();
  L20():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L21():
    r9 = dyn base(<lang missing(digits)>, <lang missing(quote)>, <lang missing(na.print)>, <lang missing(print.gap)>, <lang missing(right)>, <lang missing(max)>, <lang missing(width)>, <lang missing(useSource)>);
    goto L8(r9);
  L9(r12):
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L17(r37):
    popenv;
    return r37;
  L22():
    missing = ldf missing in base;
    r13 = dyn missing(<sym digits>);
    goto L9(r13);
  L23():
    r11 = dyn base1(<sym digits>);
    goto L9(r11);
  L39():
    x1 = ld x;
    check L41() else D3();
  L40():
    r36 = dyn base9(<lang print.default(x, args, missings)>);
    goto L17(r36);
  D3():
    deopt 52 [x1];
  L10(r15):
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L24():
    missing1 = ldf missing in base;
    r16 = dyn missing1(<sym quote>);
    goto L10(r16);
  L25():
    r14 = dyn base2(<sym quote>);
    goto L10(r14);
  L41():
    x2 = force? x1;
    checkMissing(x2);
    args = ld args;
    check L42() else D4();
  D4():
    deopt 54 [args];
  L11(r18):
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  L26():
    missing2 = ldf missing in base;
    r19 = dyn missing2(<sym na.print>);
    goto L11(r19);
  L27():
    r17 = dyn base3(<sym na.print>);
    goto L11(r17);
  L42():
    args1 = force? args;
    checkMissing(args1);
    missings = ld missings;
    check L43() else D5();
  D5():
    deopt 56 [missings];
  L12(r21):
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L30() else L31();
  L28():
    missing3 = ldf missing in base;
    r22 = dyn missing3(<sym print.gap>);
    goto L12(r22);
  L29():
    r20 = dyn base4(<sym print.gap>);
    goto L12(r20);
  L43():
    missings1 = force? missings;
    checkMissing(missings1);
    print_default = ldf `print.default` in base;
    r38 = dyn print_default(x2, args1, missings1);
    check L44() else D6();
  D6():
    deopt 59 [r38];
  L13(r24):
    sym6 = ldf missing;
    base6 = ldf missing in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L32() else L33();
  L30():
    missing4 = ldf missing in base;
    r25 = dyn missing4(<sym right>);
    goto L13(r25);
  L31():
    r23 = dyn base5(<sym right>);
    goto L13(r23);
  L44():
    goto L17(r38);
  L14(r27):
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L34() else L35();
  L32():
    missing5 = ldf missing in base;
    r28 = dyn missing5(<sym max>);
    goto L14(r28);
  L33():
    r26 = dyn base6(<sym max>);
    goto L14(r26);
  L15(r30):
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L36() else L37();
  L34():
    missing6 = ldf missing in base;
    r31 = dyn missing6(<sym width>);
    goto L15(r31);
  L35():
    r29 = dyn base7(<sym width>);
    goto L15(r29);
  L16(r33):
    c = ldf c in base;
    r35 = dyn c(r12, r15, r18, r21, r24, r27, r30, r33);
    check L38() else D2();
  L36():
    missing7 = ldf missing in base;
    r34 = dyn missing7(<sym useSource>);
    goto L16(r34);
  L37():
    r32 = dyn base8(<sym useSource>);
    goto L16(r32);
  D2():
    deopt 48 [r35];
  L38():
    goto L8(r35);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg noquote:cls, reg format:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    noquote = ldf noquote;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      format = ldf format;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn format[, scientific](p, FALSE);
      return r1;
    };
    r3 = dyn noquote(p1);
    check L1() else D1();
  D1():
    deopt 3 [r3];
  L1():
    popenv;
    return r3;
  }
}