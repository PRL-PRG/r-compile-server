fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1542313213`;
    st `print.table` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1542313213`(x, digits, quote, `na.print`, `zero.print`, right, justify, `...`) {
  (reg x:*, reg digits:*, reg quote:*, reg na_print:*, reg zero_print:*, reg right:*, reg justify:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var quote:*, reg quote_isMissing:L, reg quote_orDefault:*, var `na.print`:*, reg na_print_isMissing:L, reg na_print_orDefault:*, var `zero.print`:*, reg zero_print_isMissing:L, reg zero_print_orDefault:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg is_numeric:cls, reg r4:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg x3:*, reg x4:V, reg c6:L, reg c7:L, reg c8:V, reg p1:p(V +), var justify:*, reg justify_isMissing:L, reg justify_orDefault:*, var `...`:dots?, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x5:*, reg x6:V, reg dim:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg d:*, reg d1:V, reg r13:V, reg any:cls, reg r14:V, reg c10:L, reg cat:cls, reg paste:cls, reg d2:*, reg d3:V, reg p2:p(V +), reg r16:V, reg p3:p(V +), reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg x7:*, reg x8:V, reg invisible:cls, reg r21:V, reg format:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg x9:*, reg x10:V, reg unclass:cls, reg r26:V, reg p4:p(V +), reg digits1:*, reg digits2:V, reg p5:p(V +), reg justify1:*, reg justify2:V, reg p6:p(V +), reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg x11:*, reg x12:V, reg is_na:cls, reg r35:V, reg any1:cls, reg r36:V, reg c11:L, reg na_print1:*, reg na_print2:V, reg l:*, reg c12:L, reg na_print4:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg na_print6:V, reg dx1:V, reg ina:*, reg ina1:V, reg ___:cls, reg r37:V, reg zero_print1:*, reg zero_print2:V, reg r38:V, reg c13:L, reg c15:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r39:V, reg c18:L, reg r40:V, reg ina2:*, reg ina3:V, reg r41:V, reg x13:*, reg x14:V, reg r42:V, reg r43:V, reg any2:cls, reg r44:V, reg c19:L, reg c20:V, reg c22:L, reg zero_print3:*, reg zero_print4:V, reg l3:*, reg c23:L, reg zero_print6:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg zero_print8:V, reg dx3:V, reg i0:*, reg i1:V, reg ___1:cls, reg r45:V, reg print:cls, reg xx:*, reg xx1:V, reg p7:p(V +), reg quote1:*, reg quote2:V, reg p8:p(V +), reg right1:*, reg right2:V, reg p9:p(V +), reg ddd1:dots?, reg r49:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r50:V, reg r51:V, reg x15:*, reg x16:V, reg invisible1:cls, reg r52:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("digits");
      return r;
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    quote_isMissing = missing.0(quote);
    if quote_isMissing then L2(FALSE) else L2(quote);
  L2(quote_orDefault):
    st quote = quote_orDefault;
    na_print_isMissing = missing.0(na_print);
    if na_print_isMissing then L3("") else L3(na_print);
  L3(na_print_orDefault):
    st `na.print` = na_print_orDefault;
    zero_print_isMissing = missing.0(zero_print);
    if zero_print_isMissing then L4("0") else L4(zero_print);
  L4(zero_print_orDefault):
    st `zero.print` = zero_print_orDefault;
    right_isMissing = missing.0(right);
    if right_isMissing then L5() else L6(right);
  L5():
    p1 = prom<V +>{
      sym = ldf `is.numeric`;
      base = ldf `is.numeric` in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r3):
      c = `as.logical`(r3);
      if c then L1(c) else L5();
    L3():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      is_numeric = ldf `is.numeric` in base;
      r4 = dyn is_numeric(x2);
      goto L0(r4);
    L4():
      r2 = dyn base(<sym x>);
      goto L0(r2);
    L1(c1):
      return c1;
    L5():
      sym1 = ldf `is.complex`;
      base1 = ldf `is.complex` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L6() else L7();
    L2(c5, r6):
      c7 = `as.logical`(r6);
      c8 = `||`(c5, c7);
      goto L1(c8);
    L6():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c6 = `is.complex`(x4);
      goto L2(c, c6);
    L7():
      r5 = dyn base1(<sym x>);
      goto L2(c, r5);
    };
    goto L6(p1);
  L6(right_orDefault):
    st right = right_orDefault;
    justify_isMissing = missing.0(justify);
    if justify_isMissing then L7("none") else L7(justify);
  L7(justify_orDefault):
    st justify = justify_orDefault;
    st `...` = ddd;
    sym2 = ldf dim;
    base2 = ldf dim in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L8(r9):
    st d = r9;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L24():
    x5 = ld x;
    check L26() else D0();
  L25():
    r8 = dyn base2(<sym x>);
    goto L8(r8);
  D0():
    deopt 2 [x5];
  L9(r12):
    c10 = `as.logical`(r12);
    if c10 then L32() else L10();
  L26():
    x6 = force? x5;
    checkMissing(x6);
    dim = ldf dim in base;
    r10 = dyn dim(x6);
    check L27() else D1();
  L28():
    d = ld d;
    check L30() else D2();
  L29():
    r11 = dyn base3(<lang `==`(d, 0.0)>);
    goto L9(r11);
  D1():
    deopt 5 [r10];
  D2():
    deopt 9 [d];
  L10():
    format = ldf format;
    check L41() else D8();
  L27():
    goto L8(r10);
  L30():
    d1 = force? d;
    checkMissing(d1);
    r13 = `==`(d1, 0.0);
    any = ldf any in base;
    r14 = dyn any(r13);
    check L31() else D3();
  L32():
    cat = ldf cat;
    check L33() else D4();
  D3():
    deopt 14 [r14];
  D4():
    deopt 16 [];
  D8():
    deopt 31 [];
  L31():
    goto L9(r14);
  L33():
    p3 = prom<V +>{
      paste = ldf paste;
      p2 = prom<V +>{
        d2 = ld d;
        d3 = force? d2;
        checkMissing(d3);
        return d3;
      };
      r16 = dyn paste[, collapse](p2, " x ");
      return r16;
    };
    r18 = dyn cat("< table of extent", p3, ">\n");
    check L34() else D5();
  L41():
    p4 = prom<V +>{
      sym5 = ldf unclass;
      base5 = ldf unclass in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      unclass = ldf unclass in base;
      r26 = dyn unclass(x10);
      goto L0(r26);
    L2():
      r24 = dyn base5(<sym x>);
      goto L0(r24);
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
    r30 = dyn format[, digits, justify](p4, p5, p6);
    check L42() else D9();
  D5():
    deopt 20 [r18];
  D9():
    deopt 37 [r30];
  L34():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L35() else L36();
  L42():
    st xx = r30;
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L43() else L44();
  L11(r20):
    popenv;
    return r20;
  L13(r32):
    c11 = `as.logical`(r32);
    if c11 then L50() else L15();
  L35():
    x7 = ld x;
    check L37() else D6();
  L36():
    r19 = dyn base4(<sym x>);
    goto L11(r19);
  L43():
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L45() else L46();
  L44():
    r31 = dyn base6(<lang `<-`(ina, is.na(x))>);
    goto L13(r31);
  D6():
    deopt 23 [x7];
  L14(r34):
    st ina = r34;
    any1 = ldf any in base;
    r36 = dyn any1(r34);
    check L49() else D12();
  L15():
    goto L17();
  L17():
    zero_print1 = ld `zero.print`;
    check L57() else D15();
  L37():
    x8 = force? x7;
    checkMissing(x8);
    invisible = ldf invisible in base;
    r21 = dyn invisible(x8);
    check L38() else D7();
  L45():
    x11 = ld x;
    check L47() else D10();
  L46():
    r33 = dyn base7(<sym x>);
    goto L14(r33);
  L50():
    na_print1 = ld `na.print`;
    check L51() else D13();
  D7():
    deopt 26 [r21];
  D10():
    deopt 43 [x11];
  D12():
    deopt 49 [r36];
  D13():
    deopt 50 [na_print1];
  D15():
    deopt 59 [zero_print1];
  L38():
    goto L11(r21);
  L47():
    x12 = force? x11;
    checkMissing(x12);
    is_na = ldf `is.na` in base;
    r35 = dyn is_na(x12);
    check L48() else D11();
  L49():
    goto L13(r36);
  L51():
    na_print2 = force? na_print1;
    checkMissing(na_print2);
    l = ld xx;
    c12 = `is.object`(l);
    if c12 then L52() else L53(na_print2, l);
  L57():
    zero_print2 = force? zero_print1;
    checkMissing(zero_print2);
    r38 = `!=`(zero_print2, "0");
    c13 = `as.logical`(r38);
    if c13 then L58() else L18(c13);
  D11():
    deopt 46 [r35];
  L16(na_print6, dx1):
    st xx = dx1;
    goto L17();
  L18(c15):
    c22 = `as.logical`(c15);
    if c22 then L65() else L20();
  L48():
    goto L14(r35);
  L52():
    dr = tryDispatchBuiltin.0("[<-", l, na_print2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L54() else L53(na_print2, dr);
  L53(na_print4, l2):
    ina = ld ina;
    check L55() else D14();
  L58():
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L59() else L60();
  D14():
    deopt 53 [na_print4, l2, na_print2, ina];
  L19(c18, r40):
    c19 = `as.logical`(r40);
    c20 = `&&`(c18, c19);
    goto L18(c20);
  L20():
    goto L22();
  L22():
    print = ldf print;
    check L72() else D21();
  L54():
    dx = getTryDispatchBuiltinValue(dr);
    goto L16(na_print2, dx);
  L55():
    ina1 = force? ina;
    ___ = ldf `[<-` in base;
    r37 = dyn ___(l2, na_print2, ina1);
    goto L16(na_print4, r37);
  L59():
    ina2 = ld ina;
    check L61() else D16();
  L60():
    r39 = dyn base8(<lang `<-`(i0, `&`(`!`(ina), `==`(x, 0.0)))>);
    goto L19(c13, r39);
  L65():
    zero_print3 = ld `zero.print`;
    check L66() else D19();
  D16():
    deopt 65 [c13, ina2];
  D19():
    deopt 76 [zero_print3];
  D21():
    deopt 86 [];
  L61():
    ina3 = force? ina2;
    checkMissing(ina3);
    r41 = `!`(ina3);
    x13 = ld x;
    check L62() else D17();
  L66():
    zero_print4 = force? zero_print3;
    checkMissing(zero_print4);
    l3 = ld xx;
    c23 = `is.object`(l3);
    if c23 then L67() else L68(zero_print4, l3);
  L72():
    p7 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p8 = prom<V +>{
      quote1 = ld quote;
      quote2 = force? quote1;
      checkMissing(quote2);
      return quote2;
    };
    p9 = prom<V +>{
      right1 = ld right;
      right2 = force? right1;
      checkMissing(right2);
      return right2;
    };
    ddd1 = ld `...`;
    r49 = dyn print[, quote, right, `...`](p7, p8, p9, ddd1);
    check L73() else D22();
  D17():
    deopt 67 [c13, r41, x13];
  D22():
    deopt 93 [r49];
  L21(zero_print8, dx3):
    st xx = dx3;
    goto L22();
  L62():
    x14 = force? x13;
    checkMissing(x14);
    r42 = `==`(x14, 0.0);
    r43 = `&&`(r41, r42);
    st i0 = r43;
    any2 = ldf any in base;
    r44 = dyn any2(r43);
    check L63() else D18();
  L67():
    dr2 = tryDispatchBuiltin.0("[<-", l3, zero_print4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L69() else L68(zero_print4, dr2);
  L68(zero_print6, l5):
    i0 = ld i0;
    check L70() else D20();
  L73():
    sym9 = ldf invisible;
    base9 = ldf invisible in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L74() else L75();
  D18():
    deopt 74 [c13, r44];
  D20():
    deopt 79 [zero_print6, l5, zero_print4, i0];
  L23(r51):
    popenv;
    return r51;
  L63():
    goto L19(c13, r44);
  L69():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L21(zero_print4, dx2);
  L70():
    i1 = force? i0;
    ___1 = ldf `[<-` in base;
    r45 = dyn ___1(l5, zero_print4, i1);
    goto L21(zero_print6, r45);
  L74():
    x15 = ld x;
    check L76() else D23();
  L75():
    r50 = dyn base9(<sym x>);
    goto L23(r50);
  D23():
    deopt 96 [x15];
  L76():
    x16 = force? x15;
    checkMissing(x16);
    invisible1 = ldf invisible in base;
    r52 = dyn invisible1(x16);
    check L77() else D24();
  D24():
    deopt 99 [r52];
  L77():
    goto L23(r52);
  }
}