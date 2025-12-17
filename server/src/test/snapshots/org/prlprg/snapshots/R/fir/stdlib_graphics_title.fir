fun main() {
  () -+> V { reg r:cls, reg plot:cls, reg cars:*, reg cars1:V, reg p:p(V +), reg r2:V, reg title:cls, reg r3:V, reg plot1:cls, reg cars2:*, reg cars3:V, reg p1:p(V +), reg r5:V, reg title1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg list:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg plot2:cls, reg r11:V, reg title2:cls, reg r12:V, reg seq:cls, reg p3:p(V +), reg r14:V, reg cbind:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg x:*, reg x1:V, reg r17:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg x2:*, reg x3:V, reg r21:V, reg p5:p(V +), reg r23:V, reg matplot:cls, reg x4:*, reg x5:V, reg p6:p(V +), reg y:*, reg y1:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg expression:cls, reg r28:V, reg p8:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg expression1:cls, reg r32:V, reg p9:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg expression2:cls, reg r36:V, reg p10:p(V +), reg r38:V, reg axis:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg c:cls, reg r41:V, reg p11:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg expression3:cls, reg r45:V, reg p12:p(V +), reg r47:V, reg abline:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r50:V, reg r51:R, reg r52:V, reg c1:cls, reg r53:V, reg r54:V, reg p13:p(V +), reg r56:V |
    mkenv;
    r = clos inner1026646083;
    st title = r;
    plot = ldf plot;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      cars = ld cars;
      cars1 = force? cars;
      checkMissing(cars1);
      return cars1;
    };
    r2 = dyn plot[, main](p, "");
    check L1() else D1();
  D1():
    deopt 8 [r2];
  L1():
    title = ldf title;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    r3 = dyn title[main]("Stopping Distance versus Speed");
    check L3() else D3();
  D3():
    deopt 13 [r3];
  L3():
    plot1 = ldf plot;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p1 = prom<V +>{
      cars2 = ld cars;
      cars3 = force? cars2;
      checkMissing(cars3);
      return cars3;
    };
    r5 = dyn plot1[, main](p1, "");
    check L5() else D5();
  D5():
    deopt 19 [r5];
  L5():
    title1 = ldf title;
    check L6() else D6();
  D6():
    deopt 21 [];
  L6():
    p2 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r7):
      return r7;
    L1():
      list = ldf list in base;
      r8 = dyn list("Stopping Distance versus Speed", 1.5, "red", 3.0);
      goto L0(r8);
    L2():
      r6 = dyn base[, cex, col, font]("Stopping Distance versus Speed", 1.5, "red", 3.0);
      goto L0(r6);
    };
    r10 = dyn title1[main](p2);
    check L7() else D7();
  D7():
    deopt 24 [r10];
  L7():
    plot2 = ldf plot;
    check L8() else D8();
  D8():
    deopt 26 [];
  L8():
    r11 = dyn plot2[, `col.axis`, `col.lab`](1.0, "sky blue", "thistle");
    check L9() else D9();
  D9():
    deopt 32 [r11];
  L9():
    title2 = ldf title;
    check L10() else D10();
  D10():
    deopt 34 [];
  L10():
    r12 = dyn title2[, sub, `cex.main`, `font.main`, `col.main`, `cex.sub`, `font.sub`, `col.sub`]("Main Title", "subtitle", 2.0, 4.0, "blue", 0.75, 3.0, "red");
    check L11() else D11();
  D11():
    deopt 50 [r12];
  L11():
    seq = ldf seq;
    check L12() else D12();
  D12():
    deopt 52 [];
  L12():
    p3 = prom<V +>{
      return -4.0;
    };
    r14 = dyn seq[, , `length.out`](p3, 4.0, 101.0);
    check L13() else D13();
  D13():
    deopt 57 [r14];
  L13():
    st x = r14;
    cbind = ldf cbind;
    check L14() else D14();
  D14():
    deopt 60 [];
  L14():
    p4 = prom<V +>{
      sym1 = ldf sin;
      base1 = ldf sin in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      r17 = sin(x1);
      goto L0(r17);
    L2():
      r15 = dyn base1(<sym x>);
      goto L0(r15);
    };
    p5 = prom<V +>{
      sym2 = ldf cos;
      base2 = ldf cos in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r20):
      return r20;
    L1():
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      r21 = cos(x3);
      goto L0(r21);
    L2():
      r19 = dyn base2(<sym x>);
      goto L0(r19);
    };
    r23 = dyn cbind(p4, p5);
    check L15() else D15();
  D15():
    deopt 63 [r23];
  L15():
    st y = r23;
    matplot = ldf matplot;
    check L16() else D16();
  D16():
    deopt 66 [];
  L16():
    p6 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p7 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p8 = prom<V +>{
      sym3 = ldf expression;
      base3 = ldf expression in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      expression = ldf expression in base;
      r28 = dyn expression(<lang paste(`*`(plain(sin), phi), "  and  ", `*`(plain(cos), phi))>);
      goto L0(r28);
    L2():
      r26 = dyn base3(<lang paste(`*`(plain(sin), phi), "  and  ", `*`(plain(cos), phi))>);
      goto L0(r26);
    };
    p9 = prom<V +>{
      sym4 = ldf expression;
      base4 = ldf expression in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      expression1 = ldf expression in base;
      r32 = dyn expression1(<lang `*`("sin", phi)>, <lang `*`("cos", phi)>);
      goto L0(r32);
    L2():
      r30 = dyn base4(<lang `*`("sin", phi)>, <lang `*`("cos", phi)>);
      goto L0(r30);
    };
    p10 = prom<V +>{
      sym5 = ldf expression;
      base5 = ldf expression in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      expression2 = ldf expression in base;
      r36 = dyn expression2(<lang paste("Phase Angle ", phi)>);
      goto L0(r36);
    L2():
      r34 = dyn base5(<lang paste("Phase Angle ", phi)>);
      goto L0(r34);
    };
    r38 = dyn matplot[, , type, xaxt, main, ylab, xlab, `col.main`](p6, p7, "l", "n", p8, p9, p10, "blue");
    check L17() else D17();
  D17():
    deopt 81 [r38];
  L17():
    axis = ldf axis;
    check L18() else D18();
  D18():
    deopt 83 [];
  L18():
    p11 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      c = ldf c in base;
      r41 = dyn c(-3.141592653589793, -1.5707963267948966, 0.0, 1.5707963267948966, 3.141592653589793);
      goto L0(r41);
    L2():
      r39 = dyn base6(<lang `-`(pi)>, <lang `/`(`-`(pi), 2.0)>, 0.0, <lang `/`(pi, 2.0)>, <sym pi>);
      goto L0(r39);
    };
    p12 = prom<V +>{
      sym7 = ldf expression;
      base7 = ldf expression in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      expression3 = ldf expression in base;
      r45 = dyn expression3(<lang `-`(pi)>, <lang `/`(`-`(pi), 2.0)>, 0.0, <lang `/`(pi, 2.0)>, <sym pi>);
      goto L0(r45);
    L2():
      r43 = dyn base7(<lang `-`(pi)>, <lang `/`(`-`(pi), 2.0)>, 0.0, <lang `/`(pi, 2.0)>, <sym pi>);
      goto L0(r43);
    };
    r47 = dyn axis[, at, labels](1.0, p11, p12);
    check L19() else D19();
  D19():
    deopt 89 [r47];
  L19():
    abline = ldf abline;
    check L20() else D20();
  D20():
    deopt 91 [];
  L20():
    p13 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r51, r52):
      r54 = `*`(r51, r52);
      return r54;
    L1():
      c1 = ldf c in base;
      r53 = dyn c1(-1.0, 1.0);
      goto L0(1.5707963267948966, r53);
    L2():
      r50 = dyn base8(<lang `-`(1.0)>, 1.0);
      goto L0(1.5707963267948966, r50);
    };
    r56 = dyn abline[h, v, lty, lwd, col](0.0, p13, 2.0, 0.1, "gray70");
    check L21() else D21();
  D21():
    deopt 102 [r56];
  L21():
    popenv;
    return r56;
  }
}
fun inner1026646083(main, sub, xlab, ylab, line, outer, `...`) {
  (reg main:*, reg sub:*, reg xlab:*, reg ylab:*, reg line:*, reg outer:*, reg ddd:dots) -+> V { var main:*, reg main_isMissing:L, reg main_orDefault:*, var sub:*, reg sub_isMissing:L, reg sub_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var line:*, reg line_isMissing:L, reg line_orDefault:*, var outer:*, reg outer_isMissing:L, reg outer_orDefault:*, var `...`:dots?, reg as_graphicsAnnot:cls, reg main1:*, reg main2:V, reg p:p(V +), reg r1:V, reg as_graphicsAnnot1:cls, reg sub1:*, reg sub2:V, reg p1:p(V +), reg r3:V, reg as_graphicsAnnot2:cls, reg xlab1:*, reg xlab2:V, reg p2:p(V +), reg r5:V, reg as_graphicsAnnot3:cls, reg ylab1:*, reg ylab2:V, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg _External_graphics:cls, reg C_title:*, reg C_title1:V, reg p4:p(V +), reg main3:*, reg main4:V, reg p5:p(V +), reg sub3:*, reg sub4:V, reg p6:p(V +), reg xlab3:*, reg xlab4:V, reg p7:p(V +), reg ylab3:*, reg ylab4:V, reg p8:p(V +), reg line1:*, reg line2:V, reg p9:p(V +), reg outer1:*, reg outer2:V, reg p10:p(V +), reg ddd1:dots?, reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg invisible:cls, reg r20:V |
    mkenv;
    main_isMissing = missing.0(main);
    if main_isMissing then L0(NULL) else L0(main);
  L0(main_orDefault):
    st main = main_orDefault;
    sub_isMissing = missing.0(sub);
    if sub_isMissing then L1(NULL) else L1(sub);
  L1(sub_orDefault):
    st sub = sub_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L2(NULL) else L2(xlab);
  L2(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L3(NULL) else L3(ylab);
  L3(ylab_orDefault):
    st ylab = ylab_orDefault;
    line_isMissing = missing.0(line);
    if line_isMissing then L4(NA_LGL) else L4(line);
  L4(line_orDefault):
    st line = line_orDefault;
    outer_isMissing = missing.0(outer);
    if outer_isMissing then L5(FALSE) else L5(outer);
  L5(outer_orDefault):
    st outer = outer_orDefault;
    st `...` = ddd;
    as_graphicsAnnot = ldf `as.graphicsAnnot`;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      return main2;
    };
    r1 = dyn as_graphicsAnnot(p);
    check L9() else D1();
  D1():
    deopt 3 [r1];
  L9():
    st main = r1;
    as_graphicsAnnot1 = ldf `as.graphicsAnnot`;
    check L10() else D2();
  D2():
    deopt 6 [];
  L10():
    p1 = prom<V +>{
      sub1 = ld sub;
      sub2 = force? sub1;
      checkMissing(sub2);
      return sub2;
    };
    r3 = dyn as_graphicsAnnot1(p1);
    check L11() else D3();
  D3():
    deopt 8 [r3];
  L11():
    st sub = r3;
    as_graphicsAnnot2 = ldf `as.graphicsAnnot`;
    check L12() else D4();
  D4():
    deopt 11 [];
  L12():
    p2 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    r5 = dyn as_graphicsAnnot2(p2);
    check L13() else D5();
  D5():
    deopt 13 [r5];
  L13():
    st xlab = r5;
    as_graphicsAnnot3 = ldf `as.graphicsAnnot`;
    check L14() else D6();
  D6():
    deopt 16 [];
  L14():
    p3 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    r7 = dyn as_graphicsAnnot3(p3);
    check L15() else D7();
  D7():
    deopt 18 [r7];
  L15():
    st ylab = r7;
    sym = ldf `.External.graphics`;
    base = ldf `.External.graphics` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L6():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L16():
    _External_graphics = ldf `.External.graphics`;
    check L18() else D8();
  L17():
    r8 = dyn base(<sym C_title>, <sym main>, <sym sub>, <sym xlab>, <sym ylab>, <sym line>, <sym outer>, <sym ...>);
    goto L6();
  D8():
    deopt 22 [];
  L7(r19):
    popenv;
    return r19;
  L18():
    p4 = prom<V +>{
      C_title = ld C_title;
      C_title1 = force? C_title;
      checkMissing(C_title1);
      return C_title1;
    };
    p5 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    p6 = prom<V +>{
      sub3 = ld sub;
      sub4 = force? sub3;
      checkMissing(sub4);
      return sub4;
    };
    p7 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p8 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    p9 = prom<V +>{
      line1 = ld line;
      line2 = force? line1;
      checkMissing(line2);
      return line2;
    };
    p10 = prom<V +>{
      outer1 = ld outer;
      outer2 = force? outer1;
      checkMissing(outer2);
      return outer2;
    };
    ddd1 = ld `...`;
    r17 = dyn _External_graphics[, , , , , , , `...`](p4, p5, p6, p7, p8, p9, p10, ddd1);
    check L19() else D9();
  L20():
    invisible = ldf invisible in base;
    r20 = dyn invisible();
    check L22() else D10();
  L21():
    r18 = dyn base1();
    goto L7(r18);
  D9():
    deopt 31 [r17];
  D10():
    deopt 35 [r20];
  L19():
    goto L6();
  L22():
    goto L7(r20);
  }
}