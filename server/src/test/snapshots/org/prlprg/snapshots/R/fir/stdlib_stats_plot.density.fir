fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4000515849;
    st `plot.density` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4000515849(x, main, xlab, ylab, type, `zero.line`, `...`) {
  (reg x:*, reg main:*, reg xlab:*, reg ylab:*, reg type:*, reg zero_line:*, reg ddd:dots) -+> V { var x:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var `zero.line`:*, reg zero_line_isMissing:L, reg zero_line_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg xlab1:*, reg xlab2:V, reg c:V, reg c1:L, reg paste:cls, reg x1:*, reg x2:V, reg c2:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p:p(V +), reg formatC:cls, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg main1:*, reg main2:V, reg c4:V, reg c5:L, reg sub:cls, reg deparse:cls, reg x9:*, reg x10:V, reg c6:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg r16:V, reg plot_default:cls, reg x13:*, reg x14:V, reg p5:p(V +), reg main3:*, reg main4:V, reg p6:p(V +), reg xlab3:*, reg xlab4:V, reg p7:p(V +), reg ylab1:*, reg ylab2:V, reg p8:p(V +), reg type1:*, reg type2:V, reg p9:p(V +), reg ddd1:dots?, reg r23:V, reg zero_line1:*, reg zero_line2:V, reg c7:L, reg abline:cls, reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg invisible:cls, reg r28:V |
    mkenv;
    st x = x;
    main_isMissing = missing.0(main);
    if main_isMissing then L0(NULL) else L0(main);
  L0(main_orDefault):
    st main = main_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L1(NULL) else L1(xlab);
  L1(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L2("Density") else L2(ylab);
  L2(ylab_orDefault):
    st ylab = ylab_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L3("l") else L3(type);
  L3(type_orDefault):
    st type = type_orDefault;
    zero_line_isMissing = missing.0(zero_line);
    if zero_line_isMissing then L4(TRUE) else L4(zero_line);
  L4(zero_line_orDefault):
    st `zero.line` = zero_line_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L5(r1):
    c1 = `as.logical`(r1);
    if c1 then L17() else L6();
  L14():
    xlab1 = ld xlab;
    check L16() else D0();
  L15():
    r = dyn base(<sym xlab>);
    goto L5(r);
  D0():
    deopt 1 [xlab1];
  L6():
    goto L7();
  L7():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L16():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c = `==`(xlab2, NULL);
    goto L5(c);
  L17():
    paste = ldf paste;
    check L18() else D1();
  D1():
    deopt 5 [];
  L8(r11):
    c5 = `as.logical`(r11);
    if c5 then L24() else L9();
  L18():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c2 = `is.object`(x2);
      if c2 then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r2 = `$`(x4, <sym n>);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      formatC = ldf formatC;
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        c3 = `is.object`(x6);
        if c3 then L1() else L2(x6);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", x6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x8):
        r4 = `$`(x8, <sym bw>);
        goto L0(r4);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r6 = dyn formatC(p1);
      return r6;
    };
    r8 = dyn paste("N =", p, "  Bandwidth =", p2);
    check L19() else D2();
  L21():
    main1 = ld main;
    check L23() else D3();
  L22():
    r10 = dyn base1(<sym main>);
    goto L8(r10);
  D2():
    deopt 10 [r8];
  D3():
    deopt 15 [main1];
  L9():
    goto L10();
  L10():
    plot_default = ldf `plot.default`;
    check L28() else D6();
  L19():
    st xlab = r8;
    goto L7();
  L23():
    main2 = force? main1;
    checkMissing(main2);
    c4 = `==`(main2, NULL);
    goto L8(c4);
  L24():
    sub = ldf sub;
    check L25() else D4();
  D4():
    deopt 19 [];
  D6():
    deopt 28 [];
  L25():
    p4 = prom<V +>{
      deparse = ldf deparse;
      p3 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        c6 = `is.object`(x10);
        if c6 then L1() else L2(x10);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", x10);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x12):
        r12 = `$`(x12, <sym call>);
        goto L0(r12);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r14 = dyn deparse(p3);
      return r14;
    };
    r16 = dyn sub("[.]default", "", p4);
    check L26() else D5();
  L28():
    p5 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p6 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    p7 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p8 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p9 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    ddd1 = ld `...`;
    r23 = dyn plot_default[, main, xlab, ylab, type, `...`](p5, p6, p7, p8, p9, ddd1);
    check L29() else D7();
  D5():
    deopt 23 [r16];
  D7():
    deopt 39 [r23];
  L26():
    st main = r16;
    goto L10();
  L29():
    zero_line1 = ld `zero.line`;
    check L30() else D8();
  D8():
    deopt 40 [zero_line1];
  L30():
    zero_line2 = force? zero_line1;
    checkMissing(zero_line2);
    c7 = `as.logical`(zero_line2);
    if c7 then L31() else L11();
  L11():
    goto L12();
  L12():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L31():
    abline = ldf abline;
    check L32() else D9();
  D9():
    deopt 43 [];
  L13(r27):
    popenv;
    return r27;
  L32():
    r24 = dyn abline[h, lwd, col](0.0, 0.25, "gray");
    check L33() else D10();
  L35():
    invisible = ldf invisible in base;
    r28 = dyn invisible(NULL);
    check L37() else D11();
  L36():
    r26 = dyn base2(NULL);
    goto L13(r26);
  D10():
    deopt 50 [r24];
  D11():
    deopt 57 [r28];
  L33():
    goto L12();
  L37():
    goto L13(r28);
  }
}