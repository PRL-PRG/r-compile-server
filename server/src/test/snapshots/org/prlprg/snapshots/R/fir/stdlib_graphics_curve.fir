fun main() {
  () -+> V { reg r:cls, reg plot:cls, reg qnorm:*, reg qnorm1:V, reg p:p(V +), reg r2:V, reg plot1:cls, reg qlogis:*, reg qlogis1:V, reg p1:p(V +), reg r4:V, reg abline:cls, reg p2:p(V +), reg r6:V, reg curve:cls, reg sin:*, reg sin1:V, reg p3:p(V +), reg p4:p(V +), reg p5:p(V +), reg r10:V, reg curve1:cls, reg tan:*, reg tan1:V, reg p6:p(V +), reg r12:V, reg par:cls, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg c:cls, reg r15:V, reg p7:p(V +), reg r17:V, reg curve2:cls, reg x:*, reg x1:V, reg r18:V, reg x2:*, reg x3:V, reg r19:V, reg r20:V, reg p8:p(V +), reg p9:p(V +), reg r23:V, reg curve3:cls, reg x4:*, reg x5:V, reg r24:V, reg r25:V, reg p10:p(V +), reg r27:V, reg plot2:cls, reg cos:*, reg cos1:V, reg p11:p(V +), reg p12:p(V +), reg p13:p(V +), reg r31:V, reg curve4:cls, reg cos2:*, reg cos3:V, reg p14:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r33:V, reg r34:V, reg c1:cls, reg r35:V, reg p15:p(V +), reg r37:V, reg r38:cls, reg curve5:cls, reg chippy:*, reg chippy1:V, reg p16:p(V +), reg p17:p(V +), reg r41:V, reg plot3:cls, reg chippy2:*, reg chippy3:V, reg p18:p(V +), reg p19:p(V +), reg p20:p(V +), reg r45:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r46:V, reg r47:V, reg c2:cls, reg r48:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c3:L, reg x6:V, reg curve6:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r49:V, reg r50:V, reg x7:*, reg x8:V, reg r51:V, reg r52:V, reg p21:p(V +), reg ll:*, reg ll1:V, reg p22:p(V +), reg paste0:cls, reg ll2:*, reg ll3:V, reg p23:p(V +), reg r56:V, reg p24:p(V +), reg r58:V, reg par1:cls, reg op:*, reg op1:V, reg p25:p(V +), reg r60:V |
    mkenv;
    r = clos inner2042564225;
    st curve = r;
    plot = ldf plot;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p = prom<V +>{
      qnorm = ld qnorm;
      qnorm1 = force? qnorm;
      checkMissing(qnorm1);
      return qnorm1;
    };
    r2 = dyn plot(p);
    check L4() else D1();
  D1():
    deopt 6 [r2];
  L4():
    plot1 = ldf plot;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    p1 = prom<V +>{
      qlogis = ld qlogis;
      qlogis1 = force? qlogis;
      checkMissing(qlogis1);
      return qlogis1;
    };
    r4 = dyn plot1[, main](p1, "The Inverse Logit : qlogis()");
    check L6() else D3();
  D3():
    deopt 12 [r4];
  L6():
    abline = ldf abline;
    check L7() else D4();
  D4():
    deopt 14 [];
  L7():
    p2 = prom<V +>{
      return <real 0.0, 0.5, 1.0>;
    };
    r6 = dyn abline[h, v, lty, col](0.0, p2, 3.0, "gray");
    check L8() else D5();
  D5():
    deopt 23 [r6];
  L8():
    curve = ldf curve;
    check L9() else D6();
  D6():
    deopt 25 [];
  L9():
    p3 = prom<V +>{
      sin = ld sin;
      sin1 = force? sin;
      checkMissing(sin1);
      return sin1;
    };
    p4 = prom<V +>{
      return -6.283185307179586;
    };
    p5 = prom<V +>{
      return 6.283185307179586;
    };
    r10 = dyn curve[, , , xname](p3, p4, p5, "t");
    check L10() else D7();
  D7():
    deopt 31 [r10];
  L10():
    curve1 = ldf curve;
    check L11() else D8();
  D8():
    deopt 33 [];
  L11():
    p6 = prom<V +>{
      tan = ld tan;
      tan1 = force? tan;
      checkMissing(tan1);
      return tan1;
    };
    r12 = dyn curve1[, xname, add, main](p6, "t", NA_LGL, "curve(tan)  --> same x-scale as previous plot");
    check L12() else D9();
  D9():
    deopt 41 [r12];
  L12():
    par = ldf par;
    check L13() else D10();
  D10():
    deopt 43 [];
  L13():
    p7 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r14):
      return r14;
    L1():
      c = ldf c in base;
      r15 = dyn c(2.0, 2.0);
      goto L0(r15);
    L2():
      r13 = dyn base(2.0, 2.0);
      goto L0(r13);
    };
    r17 = dyn par[mfrow](p7);
    check L14() else D11();
  D11():
    deopt 46 [r17];
  L14():
    st op = r17;
    curve2 = ldf curve;
    check L15() else D12();
  D12():
    deopt 49 [];
  L15():
    p8 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      r18 = `^`(x1, 3.0);
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      r19 = `*`(3.0, x3);
      r20 = `-`(r18, r19);
      return r20;
    };
    p9 = prom<V +>{
      return -2.0;
    };
    r23 = dyn curve2(p8, p9, 2.0);
    check L16() else D13();
  D13():
    deopt 53 [r23];
  L16():
    curve3 = ldf curve;
    check L17() else D14();
  D14():
    deopt 55 [];
  L17():
    p10 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      r24 = `^`(x5, 2.0);
      r25 = `-`(r24, 2.0);
      return r25;
    };
    r27 = dyn curve3[, add, col](p10, TRUE, "violet");
    check L18() else D15();
  D15():
    deopt 61 [r27];
  L18():
    plot2 = ldf plot;
    check L19() else D16();
  D16():
    deopt 63 [];
  L19():
    p11 = prom<V +>{
      cos = ld cos;
      cos1 = force? cos;
      checkMissing(cos1);
      return cos1;
    };
    p12 = prom<V +>{
      return -3.141592653589793;
    };
    p13 = prom<V +>{
      return 9.42477796076938;
    };
    r31 = dyn plot2(p11, p12, p13);
    check L20() else D17();
  D17():
    deopt 67 [r31];
  L20():
    curve4 = ldf curve;
    check L21() else D18();
  D18():
    deopt 69 [];
  L21():
    p14 = prom<V +>{
      cos2 = ld cos;
      cos3 = force? cos2;
      checkMissing(cos3);
      return cos3;
    };
    p15 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      c1 = ldf c in base;
      r35 = dyn c1(-3.141592653589793, 9.42477796076938);
      goto L0(r35);
    L2():
      r33 = dyn base1(<lang `-`(pi)>, <lang `*`(3.0, pi)>);
      goto L0(r33);
    };
    r37 = dyn curve4[, xlim, n, col, add](p14, p15, 1001.0, "blue", TRUE);
    check L22() else D19();
  D19():
    deopt 79 [r37];
  L22():
    r38 = clos inner354062069;
    st chippy = r38;
    curve5 = ldf curve;
    check L23() else D20();
  D20():
    deopt 84 [];
  L23():
    p16 = prom<V +>{
      chippy = ld chippy;
      chippy1 = force? chippy;
      checkMissing(chippy1);
      return chippy1;
    };
    p17 = prom<V +>{
      return -8.0;
    };
    r41 = dyn curve5[, , , n](p16, p17, 7.0, 2001.0);
    check L24() else D21();
  D21():
    deopt 90 [r41];
  L24():
    plot3 = ldf plot;
    check L25() else D22();
  D22():
    deopt 92 [];
  L25():
    p18 = prom<V +>{
      chippy2 = ld chippy;
      chippy3 = force? chippy2;
      checkMissing(chippy3);
      return chippy3;
    };
    p19 = prom<V +>{
      return -8.0;
    };
    p20 = prom<V +>{
      return -5.0;
    };
    r45 = dyn plot3(p18, p19, p20);
    check L26() else D23();
  D23():
    deopt 96 [r45];
  L26():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L0(r47):
    s = toForSeq(r47);
    l = length(s);
    i = 0;
    goto L1(i);
  L27():
    c2 = ldf c in base;
    r48 = dyn c2("", "x", "y", "xy");
    check L29() else D24();
  L28():
    r46 = dyn base2("", "x", "y", "xy");
    goto L0(r46);
  D24():
    deopt 104 [r48];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c3 = `<`.1(l, i2);
    if c3 then L30() else L2();
  L29():
    goto L0(r48);
  L2():
    x6 = `[[`(s, i2, NULL, TRUE);
    st ll = x6;
    curve6 = ldf curve;
    check L31() else D25();
  L30():
    par1 = ldf par;
    check L33() else D27();
  D25():
    deopt 106 [i2];
  D27():
    deopt 119 [];
  L31():
    p21 = prom<V +>{
      sym3 = ldf log;
      base3 = ldf log in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      r51 = `+`(1.0, x8);
      r52 = log(r51, 2.718281828459045);
      goto L0(r52);
    L2():
      r49 = dyn base3(<lang `+`(1.0, x)>);
      goto L0(r49);
    };
    p22 = prom<V +>{
      ll = ld ll;
      ll1 = force? ll;
      checkMissing(ll1);
      return ll1;
    };
    p24 = prom<V +>{
      paste0 = ldf paste0;
      p23 = prom<V +>{
        ll2 = ld ll;
        ll3 = force? ll2;
        checkMissing(ll3);
        return ll3;
      };
      r56 = dyn paste0("log = '", p23, "'");
      return r56;
    };
    r58 = dyn curve6[, , , log, sub](p21, 1.0, 100.0, p22, p24);
    check L32() else D26();
  L33():
    p25 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r60 = dyn par1(p25);
    check L34() else D28();
  D26():
    deopt 114 [i2, r58];
  D28():
    deopt 121 [r60];
  L32():
    goto L1(i2);
  L34():
    popenv;
    return r60;
  }
}
fun inner2042564225(expr, from, to, n, add, type, xname, xlab, ylab, log, xlim, `...`) {
  (reg expr:*, reg from:*, reg to:*, reg n:*, reg add:*, reg type:*, reg xname:*, reg xlab:*, reg ylab:*, reg log:*, reg xlim:*, reg ddd:dots) -+> V { var expr:*, var from:*, reg from_isMissing:L, reg from_orDefault:*, var to:*, reg to_isMissing:L, reg to_orDefault:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var xname:*, reg xname_isMissing:L, reg xname_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, reg xname1:*, reg xname2:V, reg p:p(V +), var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var log:*, reg log_isMissing:L, reg log_orDefault:*, var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg substitute:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sexpr:*, reg sexpr1:V, reg c:L, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg call:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg sexpr2:*, reg sexpr3:V, reg is_call:cls, reg r12:V, reg c2:L, reg c3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg c7:L, reg r14:V, reg sexpr4:*, reg sexpr5:V, reg is_expression:cls, reg r15:V, reg c8:L, reg c9:V, reg c11:L, reg c13:V, reg _in_:cls, reg xname3:*, reg xname4:V, reg p1:p(V +), reg all_vars:cls, reg sexpr6:*, reg sexpr7:V, reg p2:p(V +), reg r18:V, reg p3:p(V +), reg r20:V, reg c14:L, reg c15:V, reg r21:V, reg c17:L, reg stop:cls, reg gettextf:cls, reg xname5:*, reg xname6:V, reg p4:p(V +), reg r23:V, reg p5:p(V +), reg r25:V, reg sexpr8:*, reg sexpr9:V, reg dev_cur:cls, reg r27:V, reg r28:V, reg c18:L, reg c20:V, reg isFALSE:cls, reg add1:*, reg add2:V, reg p6:p(V +), reg r30:V, reg r31:V, reg c21:L, reg c22:V, reg c24:L, reg warning:cls, reg r32:V, reg isFALSE1:cls, reg add3:*, reg add4:V, reg p7:p(V +), reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg ylab1:*, reg ylab2:V, reg c25:V, reg c26:L, reg deparse:cls, reg expr1:*, reg expr2:V, reg p8:p(V +), reg r39:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg from1:*, reg from2:V, reg c27:V, reg c28:L, reg c29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg c33:L, reg r44:V, reg to1:*, reg to2:V, reg c34:V, reg c35:L, reg c36:V, reg c38:L, reg ____:cls, reg xlim1:*, reg xlim2:V, reg p9:p(V +), reg addF:*, reg addF1:V, reg r46:V, reg c39:L, reg par:cls, reg r47:V, reg c40:L, reg r49:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r50:V, reg par1:cls, reg r51:V, reg r52:V, reg c41:L, reg extendrange:cls, reg pu:*, reg pu1:V, reg p10:p(V +), reg p11:p(V +), reg r55:V, reg par2:cls, reg r57:V, reg c42:L, reg pu2:*, reg pu3:V, reg r58:V, reg pu4:*, reg pu5:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r59:V, reg r60:V, reg c43:cls, reg r61:V, reg p12:p(V +), reg r63:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r64:V, reg r65:V, reg from3:*, reg from4:V, reg c44:V, reg c45:L, reg xl:*, reg xl1:V, reg c46:L, reg xl3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r66:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg r68:V, reg to3:*, reg to4:V, reg c47:V, reg c48:L, reg xl4:*, reg xl5:V, reg c49:L, reg xl7:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r69:V, reg dx7:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r70:V, reg r71:V, reg log1:*, reg log2:V, reg length:cls, reg r72:V, reg c50:L, reg log3:*, reg log4:V, reg log5:V, reg addF2:*, reg addF3:V, reg r73:V, reg c51:L, reg c53:V, reg par3:cls, reg r74:V, reg c54:L, reg c55:V, reg c57:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r75:V, reg r76:V, reg lg:*, reg lg1:V, reg length1:cls, reg r77:V, reg r78:V, reg c58:L, reg grepl:cls, reg lg2:*, reg lg3:V, reg p13:p(V +), reg r81:V, reg c59:L, reg from5:*, reg from6:V, reg r82:V, reg c60:L, reg c61:V, reg to5:*, reg to6:V, reg r83:V, reg c63:L, reg c64:V, reg c66:L, reg stop1:cls, reg r84:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r86:V, reg r87:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r88:V, reg r89:V, reg log6:cls, reg from7:*, reg from8:V, reg p14:p(V +), reg r91:V, reg log7:cls, reg to7:*, reg to8:V, reg p15:p(V +), reg r93:V, reg n1:*, reg n2:V, reg seq_int:cls, reg r94:V, reg r95:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r97:V, reg r98:V, reg from9:*, reg from10:V, reg to9:*, reg to10:V, reg n3:*, reg n4:V, reg seq_int1:cls, reg r99:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r100:V, reg r101:V, reg x:*, reg x1:V, reg list:cls, reg r102:V, reg xname7:*, reg xname8:V, reg l:*, reg names__:cls, reg r103:V, reg eval:cls, reg expr3:*, reg expr4:V, reg p16:p(V +), reg ll:*, reg ll1:V, reg p17:p(V +), reg parent_frame:cls, reg r106:V, reg p18:p(V +), reg r108:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r109:V, reg r110:V, reg y:*, reg y1:V, reg length2:cls, reg r111:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r114:V, reg r115:V, reg r116:V, reg x2:*, reg x3:V, reg length3:cls, reg r117:V, reg r118:V, reg c67:L, reg stop2:cls, reg r119:V, reg isTRUE:cls, reg add5:*, reg add6:V, reg p19:p(V +), reg r122:V, reg c68:L, reg lines:cls, reg x4:*, reg x5:V, reg p20:p(V +), reg y2:*, reg y3:V, reg p21:p(V +), reg type1:*, reg type2:V, reg p22:p(V +), reg ddd1:dots?, reg r126:V, reg plot:cls, reg x6:*, reg x7:V, reg p23:p(V +), reg y4:*, reg y5:V, reg p24:p(V +), reg type3:*, reg type4:V, reg p25:p(V +), reg xlab1:*, reg xlab2:V, reg p26:p(V +), reg ylab3:*, reg ylab4:V, reg p27:p(V +), reg xlim3:*, reg xlim4:V, reg p28:p(V +), reg lg4:*, reg lg5:V, reg p29:p(V +), reg ddd2:dots?, reg r135:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r136:V, reg r137:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r138:V, reg r139:V, reg x8:*, reg x9:V, reg y6:*, reg y7:V, reg list1:cls, reg r140:V, reg invisible:cls, reg r141:V |
    mkenv;
    st expr = expr;
    from_isMissing = missing.0(from);
    if from_isMissing then L0(NULL) else L0(from);
  L0(from_orDefault):
    st from = from_orDefault;
    to_isMissing = missing.0(to);
    if to_isMissing then L1(NULL) else L1(to);
  L1(to_orDefault):
    st to = to_orDefault;
    n_isMissing = missing.0(n);
    if n_isMissing then L2(101.0) else L2(n);
  L2(n_orDefault):
    st n = n_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L3(FALSE) else L3(add);
  L3(add_orDefault):
    st add = add_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L4("l") else L4(type);
  L4(type_orDefault):
    st type = type_orDefault;
    xname_isMissing = missing.0(xname);
    if xname_isMissing then L5("x") else L5(xname);
  L5(xname_orDefault):
    st xname = xname_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L6() else L7(xlab);
  L6():
    p = prom<V +>{
      xname1 = ld xname;
      xname2 = force? xname1;
      checkMissing(xname2);
      return xname2;
    };
    goto L7(p);
  L7(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L8(NULL) else L8(ylab);
  L8(ylab_orDefault):
    st ylab = ylab_orDefault;
    log_isMissing = missing.0(log);
    if log_isMissing then L9(NULL) else L9(log);
  L9(log_orDefault):
    st log = log_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L10(NULL) else L10(xlim);
  L10(xlim_orDefault):
    st xlim = xlim_orDefault;
    st `...` = ddd;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L66() else L67();
  L11(r2):
    st sexpr = r2;
    sym1 = ldf `is.name`;
    base1 = ldf `is.name` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L68() else L69();
  L66():
    substitute = ldf substitute in base;
    r3 = dyn substitute(<sym expr>);
    goto L11(r3);
  L67():
    r1 = dyn base(<sym expr>);
    goto L11(r1);
  L12(r5):
    c1 = `as.logical`(r5);
    if c1 then L71() else L13();
  L68():
    sexpr = ld sexpr;
    check L70() else D0();
  L69():
    r4 = dyn base1(<sym sexpr>);
    goto L12(r4);
  D0():
    deopt 5 [sexpr];
  L13():
    sym3 = ldf `is.call`;
    base3 = ldf `is.call` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L75() else L76();
  L15():
    dev_cur = ldf `dev.cur`;
    check L94() else D10();
  L70():
    sexpr1 = force? sexpr;
    checkMissing(sexpr1);
    c = `is.symbol`(sexpr1);
    goto L12(c);
  L71():
    sym2 = ldf call;
    base2 = ldf call in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L72() else L73();
  D10():
    deopt 44 [];
  L14(r7):
    st expr = r7;
    goto L15();
  L16(r11):
    c2 = `as.logical`(r11);
    if c2 then L17(c2) else L79();
  L72():
    call = ldf call in base;
    r8 = dyn call(<lang as.character(sexpr)>, <lang as.name(xname)>);
    goto L14(r8);
  L73():
    r6 = dyn base2(<lang as.character(sexpr)>, <lang as.name(xname)>);
    goto L14(r6);
  L75():
    sexpr2 = ld sexpr;
    check L77() else D1();
  L76():
    r10 = dyn base3(<sym sexpr>);
    goto L16(r10);
  L94():
    r27 = dyn dev_cur();
    check L95() else D11();
  D1():
    deopt 14 [sexpr2];
  D11():
    deopt 45 [r27];
  L17(c3):
    c11 = `as.logical`(c3);
    if c11 then L85() else L19(c11);
  L77():
    sexpr3 = force? sexpr2;
    checkMissing(sexpr3);
    is_call = ldf `is.call` in base;
    r12 = dyn is_call(sexpr3);
    check L78() else D2();
  L79():
    sym4 = ldf `is.expression`;
    base4 = ldf `is.expression` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L80() else L81();
  L95():
    r28 = `==`(r27, 1);
    c18 = `as.logical`(r28);
    if c18 then L96() else L22(c18);
  D2():
    deopt 17 [r12];
  L18(c7, r14):
    c8 = `as.logical`(r14);
    c9 = `||`(c7, c8);
    goto L17(c9);
  L19(c13):
    r21 = `!`(c13);
    c17 = `as.logical`(r21);
    if c17 then L89() else L20();
  L22(c20):
    c24 = `as.logical`(c20);
    if c24 then L100() else L23();
  L78():
    goto L16(r12);
  L80():
    sexpr4 = ld sexpr;
    check L82() else D3();
  L81():
    r13 = dyn base4(<sym sexpr>);
    goto L18(c2, r13);
  L85():
    _in_ = ldf `%in%`;
    check L86() else D5();
  L96():
    isFALSE = ldf isFALSE;
    check L97() else D12();
  D3():
    deopt 20 [c2, sexpr4];
  D5():
    deopt 26 [c11];
  D12():
    deopt 49 [c18];
  L20():
    goto L21();
  L21():
    sexpr8 = ld sexpr;
    check L93() else D9();
  L23():
    goto L24();
  L24():
    isFALSE1 = ldf isFALSE;
    check L104() else D16();
  L82():
    sexpr5 = force? sexpr4;
    checkMissing(sexpr5);
    is_expression = ldf `is.expression` in base;
    r15 = dyn is_expression(sexpr5);
    check L83() else D4();
  L86():
    p1 = prom<V +>{
      xname3 = ld xname;
      xname4 = force? xname3;
      checkMissing(xname4);
      return xname4;
    };
    p3 = prom<V +>{
      all_vars = ldf `all.vars`;
      p2 = prom<V +>{
        sexpr6 = ld sexpr;
        sexpr7 = force? sexpr6;
        checkMissing(sexpr7);
        return sexpr7;
      };
      r18 = dyn all_vars(p2);
      return r18;
    };
    r20 = dyn _in_(p1, p3);
    check L87() else D6();
  L89():
    stop = ldf stop;
    check L90() else D7();
  L97():
    p6 = prom<V +>{
      add1 = ld add;
      add2 = force? add1;
      checkMissing(add2);
      return add2;
    };
    r30 = dyn isFALSE(p6);
    check L98() else D13();
  L100():
    warning = ldf warning;
    check L101() else D14();
  D4():
    deopt 23 [c2, r15];
  D6():
    deopt 29 [c11, r20];
  D7():
    deopt 33 [];
  D9():
    deopt 40 [sexpr8];
  D13():
    deopt 51 [c18, r30];
  D14():
    deopt 55 [];
  D16():
    deopt 64 [];
  L83():
    goto L18(c2, r15);
  L87():
    c14 = `as.logical`(r20);
    c15 = `&&`(c11, c14);
    goto L19(c15);
  L90():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        xname5 = ld xname;
        xname6 = force? xname5;
        checkMissing(xname6);
        return xname6;
      };
      r23 = dyn gettextf("'expr' must be a function, or a call or an expression containing '%s'", p4);
      return r23;
    };
    r25 = dyn stop[, domain](p5, NA_LGL);
    check L91() else D8();
  L93():
    sexpr9 = force? sexpr8;
    checkMissing(sexpr9);
    st expr = sexpr9;
    goto L15();
  L98():
    r31 = `!`(r30);
    c21 = `as.logical`(r31);
    c22 = `&&`(c18, c21);
    goto L22(c22);
  L101():
    r32 = dyn warning("'add' will be ignored as there is no existing plot");
    check L102() else D15();
  L104():
    p7 = prom<V +>{
      add3 = ld add;
      add4 = force? add3;
      checkMissing(add4);
      return add4;
    };
    r35 = dyn isFALSE1(p7);
    check L105() else D17();
  D8():
    deopt 37 [r25];
  D15():
    deopt 57 [r32];
  D17():
    deopt 66 [r35];
  L91():
    goto L21();
  L102():
    st add = FALSE;
    goto L24();
  L105():
    st addF = r35;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L106() else L107();
  L25(r37):
    c26 = `as.logical`(r37);
    if c26 then L109() else L26();
  L106():
    ylab1 = ld ylab;
    check L108() else D18();
  L107():
    r36 = dyn base5(<sym ylab>);
    goto L25(r36);
  D18():
    deopt 69 [ylab1];
  L26():
    goto L27();
  L27():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L113() else L114();
  L108():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c25 = `==`(ylab2, NULL);
    goto L25(c25);
  L109():
    deparse = ldf deparse;
    check L110() else D19();
  D19():
    deopt 73 [];
  L28(r42):
    c28 = `as.logical`(r42);
    if c28 then L29(c28) else L116();
  L110():
    p8 = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    r39 = dyn deparse(p8);
    check L111() else D20();
  L113():
    from1 = ld from;
    check L115() else D21();
  L114():
    r41 = dyn base6(<sym from>);
    goto L28(r41);
  D20():
    deopt 75 [r39];
  D21():
    deopt 80 [from1];
  L29(c29):
    c38 = `as.logical`(c29);
    if c38 then L121() else L31();
  L111():
    st ylab = r39;
    goto L27();
  L115():
    from2 = force? from1;
    checkMissing(from2);
    c27 = `==`(from2, NULL);
    goto L28(c27);
  L116():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L117() else L118();
  L30(c33, r44):
    c35 = `as.logical`(r44);
    c36 = `||`(c33, c35);
    goto L29(c36);
  L31():
    goto L40();
  L40():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L143() else L144();
  L117():
    to1 = ld to;
    check L119() else D22();
  L118():
    r43 = dyn base7(<sym to>);
    goto L30(c28, r43);
  L121():
    ____ = ldf `%||%`;
    check L122() else D23();
  D22():
    deopt 84 [c28, to1];
  D23():
    deopt 89 [];
  L41(r71):
    c50 = `as.logical`(r71);
    if c50 then L147() else L42();
  L119():
    to2 = force? to1;
    checkMissing(to2);
    c34 = `==`(to2, NULL);
    goto L30(c28, c34);
  L122():
    p9 = prom<V +>{
      xlim1 = ld xlim;
      xlim2 = force? xlim1;
      checkMissing(xlim2);
      return xlim2;
    };
    p12 = prom<V +>{
      addF = ld addF;
      addF1 = force? addF;
      checkMissing(addF1);
      r46 = `!`(addF1);
      c39 = `as.logical`(r46);
      if c39 then L6() else L0();
    L0():
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L15() else L16();
    L6():
      par = ldf par;
      r47 = dyn par("usr");
      c40 = `is.object`(r47);
      if c40 then L7() else L8(r47);
    L1(dx1):
      st pu = dx1;
      par1 = ldf par;
      r51 = dyn par1("xaxs");
      r52 = `==`(r51, "r");
      c41 = `as.logical`(r52);
      if c41 then L10() else L2();
    L5(r60):
      return r60;
    L7():
      dr = tryDispatchBuiltin.1("[", r47);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L9() else L8(dr);
    L8(r49):
      __ = ldf `[` in base;
      r50 = dyn __(r49, <int 1, 2>);
      goto L1(r50);
    L15():
      c43 = ldf c in base;
      r61 = dyn c43(0.0, 1.0);
      goto L5(r61);
    L16():
      r59 = dyn base8(0.0, 1.0);
      goto L5(r59);
    L2():
      goto L3();
    L3():
      par2 = ldf par;
      r57 = dyn par2("xlog");
      c42 = `as.logical`(r57);
      if c42 then L12() else L4();
    L9():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L10():
      extendrange = ldf extendrange;
      p10 = prom<V +>{
        pu = ld pu;
        pu1 = force? pu;
        checkMissing(pu1);
        return pu1;
      };
      p11 = prom<V +>{
        return -0.037037037037037035;
      };
      r55 = dyn extendrange[, f](p10, p11);
      st pu = r55;
      goto L3();
    L4():
      pu4 = ld pu;
      pu5 = force? pu4;
      checkMissing(pu5);
      return pu5;
    L12():
      pu2 = ld pu;
      pu3 = force? pu2;
      checkMissing(pu3);
      r58 = `^`(10.0, pu3);
      return r58;
    };
    r63 = dyn ____(p9, p12);
    check L123() else D24();
  L143():
    log1 = ld log;
    check L145() else D29();
  L144():
    r70 = dyn base11(<sym log>);
    goto L41(r70);
  D24():
    deopt 92 [r63];
  D29():
    deopt 122 [log1];
  L42():
    addF2 = ld addF;
    check L150() else D32();
  L43(log5):
    st lg = log5;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L157() else L158();
  L123():
    st xl = r63;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L124() else L125();
  L145():
    log2 = force? log1;
    checkMissing(log2);
    length = ldf length in base;
    r72 = dyn length(log2);
    check L146() else D30();
  L147():
    log3 = ld log;
    check L148() else D31();
  D30():
    deopt 125 [r72];
  D31():
    deopt 126 [log3];
  D32():
    deopt 128 [addF2];
  L32(r65):
    c45 = `as.logical`(r65);
    if c45 then L127() else L33();
  L46(r76):
    r78 = `==`(r76, 0.0);
    c58 = `as.logical`(r78);
    if c58 then L161() else L47();
  L124():
    from3 = ld from;
    check L126() else D25();
  L125():
    r64 = dyn base9(<sym from>);
    goto L32(r64);
  L146():
    goto L41(r72);
  L148():
    log4 = force? log3;
    checkMissing(log4);
    goto L43(log4);
  L150():
    addF3 = force? addF2;
    checkMissing(addF3);
    r73 = `!`(addF3);
    c51 = `as.logical`(r73);
    if c51 then L151() else L44(c51);
  L157():
    lg = ld lg;
    check L159() else D35();
  L158():
    r75 = dyn base12(<sym lg>);
    goto L46(r75);
  D25():
    deopt 95 [from3];
  D35():
    deopt 143 [lg];
  L33():
    goto L35();
  L35():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L133() else L134();
  L44(c53):
    c57 = `as.logical`(c53);
    if c57 then L155() else L45();
  L47():
    goto L48();
  L48():
    grepl = ldf grepl;
    check L163() else D37();
  L126():
    from4 = force? from3;
    checkMissing(from4);
    c44 = `==`(from4, NULL);
    goto L32(c44);
  L127():
    xl = ld xl;
    check L128() else D26();
  L151():
    par3 = ldf par;
    check L152() else D33();
  L159():
    lg1 = force? lg;
    checkMissing(lg1);
    length1 = ldf length in base;
    r77 = dyn length1(lg1);
    check L160() else D36();
  L161():
    st lg = "";
    goto L48();
  D26():
    deopt 98 [xl];
  D33():
    deopt 132 [c51];
  D36():
    deopt 146 [r77];
  D37():
    deopt 155 [];
  L36(r68):
    c48 = `as.logical`(r68);
    if c48 then L136() else L37();
  L45():
    goto L43("");
  L128():
    xl1 = force? xl;
    checkMissing(xl1);
    c46 = `is.object`(xl1);
    if c46 then L129() else L130(xl1);
  L133():
    to3 = ld to;
    check L135() else D27();
  L134():
    r67 = dyn base10(<sym to>);
    goto L36(r67);
  L152():
    r74 = dyn par3("xlog");
    check L153() else D34();
  L155():
    goto L43("x");
  L160():
    goto L46(r77);
  L163():
    p13 = prom<V +>{
      lg2 = ld lg;
      lg3 = force? lg2;
      checkMissing(lg3);
      return lg3;
    };
    r81 = dyn grepl[, , fixed]("x", p13, TRUE);
    check L164() else D38();
  D27():
    deopt 107 [to3];
  D34():
    deopt 134 [c51, r74];
  D38():
    deopt 160 [r81];
  L34(dx3):
    st from = dx3;
    goto L35();
  L37():
    goto L39(NULL);
  L39(dx7):
    goto L40();
  L129():
    dr2 = tryDispatchBuiltin.1("[", xl1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L131() else L130(dr2);
  L130(xl3):
    __1 = ldf `[` in base;
    r66 = dyn __1(xl3, 1);
    goto L34(r66);
  L135():
    to4 = force? to3;
    checkMissing(to4);
    c47 = `==`(to4, NULL);
    goto L36(c47);
  L136():
    xl4 = ld xl;
    check L137() else D28();
  L153():
    c54 = `as.logical`(r74);
    c55 = `&&`(c51, c54);
    goto L44(c55);
  L164():
    c59 = `as.logical`(r81);
    if c59 then L165() else L49();
  D28():
    deopt 110 [xl4];
  L49():
    sym15 = ldf `seq.int`;
    base15 = ldf `seq.int` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L185() else L186();
  L55():
    sym16 = ldf list;
    base16 = ldf list in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L191() else L192();
  L131():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L34(dx2);
  L137():
    xl5 = force? xl4;
    checkMissing(xl5);
    c49 = `is.object`(xl5);
    if c49 then L138() else L139(xl5);
  L165():
    from5 = ld from;
    check L166() else D39();
  D39():
    deopt 161 [from5];
  L38(dx6):
    st to = dx6;
    goto L39(dx6);
  L56(r98):
    st x = r98;
    goto L55();
  L57(r101):
    st ll = r101;
    xname7 = ld xname;
    check L195() else D55();
  L138():
    dr4 = tryDispatchBuiltin.1("[", xl5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L140() else L139(dr4);
  L139(xl7):
    __2 = ldf `[` in base;
    r69 = dyn __2(xl7, 2);
    goto L38(r69);
  L166():
    from6 = force? from5;
    checkMissing(from6);
    r82 = `<=`(from6, 0.0);
    c60 = `as.logical`(r82);
    if c60 then L50(c60) else L167();
  L185():
    from9 = ld from;
    check L187() else D49();
  L186():
    r97 = dyn base15[, , `length.out`](<sym from>, <sym to>, <sym n>);
    goto L56(r97);
  L191():
    x = ld x;
    check L193() else D53();
  L192():
    r100 = dyn base16[x](<sym x>);
    goto L57(r100);
  D49():
    deopt 196 [from9];
  D53():
    deopt 208 [x];
  D55():
    deopt 214 [xname7];
  L50(c61):
    c66 = `as.logical`(c61);
    if c66 then L170() else L51();
  L140():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L38(dx5);
  L167():
    to5 = ld to;
    check L168() else D40();
  L187():
    from10 = force? from9;
    checkMissing(from10);
    to9 = ld to;
    check L188() else D50();
  L193():
    x1 = force? x;
    checkMissing(x1);
    list = ldf list in base;
    r102 = dyn list(x1);
    check L194() else D54();
  L195():
    xname8 = force? xname7;
    checkMissing(xname8);
    l = ld ll;
    names__ = ldf `names<-`;
    check L196() else D56();
  D40():
    deopt 165 [c60, to5];
  D50():
    deopt 198 [to9];
  D54():
    deopt 212 [r102];
  D56():
    deopt 217 [xname8, l, xname8];
  L51():
    goto L52();
  L52():
    sym13 = ldf exp;
    base13 = ldf exp in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L174() else L175();
  L168():
    to6 = force? to5;
    checkMissing(to6);
    r83 = `<=`(to6, 0.0);
    c63 = `as.logical`(r83);
    c64 = `||`(c60, c63);
    goto L50(c64);
  L170():
    stop1 = ldf stop;
    check L171() else D41();
  L188():
    to10 = force? to9;
    checkMissing(to10);
    n3 = ld n;
    check L189() else D51();
  L194():
    goto L57(r102);
  L196():
    r103 = dyn names__(l, NULL, xname8);
    check L197() else D57();
  D41():
    deopt 171 [];
  D51():
    deopt 200 [n3];
  D57():
    deopt 219 [xname8, r103];
  L53(r87):
    st x = r87;
    goto L55();
  L171():
    r84 = dyn stop1("'from' and 'to' must be > 0 with log=\"x\"");
    check L172() else D42();
  L174():
    sym14 = ldf `seq.int`;
    base14 = ldf `seq.int` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L176() else L177();
  L175():
    r86 = dyn base13(<lang seq.int(log(from), log(to), length.out=n)>);
    goto L53(r86);
  L189():
    n4 = force? n3;
    checkMissing(n4);
    seq_int1 = ldf `seq.int` in base;
    r99 = dyn seq_int1(from10, to10, n4);
    check L190() else D52();
  L197():
    st ll = r103;
    eval = ldf eval;
    check L198() else D58();
  D42():
    deopt 173 [r84];
  D52():
    deopt 204 [r99];
  D58():
    deopt 222 [];
  L54(r89):
    r95 = exp(r89);
    goto L53(r95);
  L172():
    goto L52();
  L176():
    log6 = ldf log;
    check L178() else D43();
  L177():
    r88 = dyn base14[, , `length.out`](<lang log(from)>, <lang log(to)>, <sym n>);
    goto L54(r88);
  L190():
    goto L56(r99);
  L198():
    p16 = prom<V +>{
      expr3 = ld expr;
      expr4 = force? expr3;
      checkMissing(expr4);
      return expr4;
    };
    p17 = prom<V +>{
      ll = ld ll;
      ll1 = force? ll;
      checkMissing(ll1);
      return ll1;
    };
    p18 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r106 = dyn parent_frame();
      return r106;
    };
    r108 = dyn eval[, envir, enclos](p16, p17, p18);
    check L199() else D59();
  D43():
    deopt 180 [];
  D59():
    deopt 228 [r108];
  L178():
    p14 = prom<V +>{
      from7 = ld from;
      from8 = force? from7;
      checkMissing(from8);
      return from8;
    };
    r91 = dyn log6(p14);
    check L179() else D44();
  L199():
    st y = r108;
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L200() else L201();
  D44():
    deopt 182 [r91];
  L58(r110):
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L204() else L205();
  L179():
    log7 = ldf log;
    check L180() else D45();
  L200():
    y = ld y;
    check L202() else D60();
  L201():
    r109 = dyn base17(<sym y>);
    goto L58(r109);
  D45():
    deopt 184 [];
  D60():
    deopt 232 [y];
  L59(r115, r116):
    r118 = `!=`(r115, r116);
    c67 = `as.logical`(r118);
    if c67 then L208() else L60();
  L180():
    p15 = prom<V +>{
      to7 = ld to;
      to8 = force? to7;
      checkMissing(to8);
      return to8;
    };
    r93 = dyn log7(p15);
    check L181() else D46();
  L202():
    y1 = force? y;
    checkMissing(y1);
    length2 = ldf length in base;
    r111 = dyn length2(y1);
    check L203() else D61();
  L204():
    x2 = ld x;
    check L206() else D62();
  L205():
    r114 = dyn base18(<sym x>);
    goto L59(r110, r114);
  D46():
    deopt 186 [r93];
  D61():
    deopt 235 [r111];
  D62():
    deopt 237 [r110, x2];
  L60():
    goto L61();
  L61():
    isTRUE = ldf isTRUE;
    check L212() else D66();
  L181():
    n1 = ld n;
    check L182() else D47();
  L203():
    goto L58(r111);
  L206():
    x3 = force? x2;
    checkMissing(x3);
    length3 = ldf length in base;
    r117 = dyn length3(x3);
    check L207() else D63();
  L208():
    stop2 = ldf stop;
    check L209() else D64();
  D47():
    deopt 187 [n1];
  D63():
    deopt 240 [r110, r117];
  D64():
    deopt 243 [];
  D66():
    deopt 249 [];
  L182():
    n2 = force? n1;
    checkMissing(n2);
    seq_int = ldf `seq.int` in base;
    r94 = dyn seq_int(r91, r93, n2);
    check L183() else D48();
  L207():
    goto L59(r110, r117);
  L209():
    r119 = dyn stop2("'expr' did not evaluate to an object of length 'n'");
    check L210() else D65();
  L212():
    p19 = prom<V +>{
      add5 = ld add;
      add6 = force? add5;
      checkMissing(add6);
      return add6;
    };
    r122 = dyn isTRUE(p19);
    check L213() else D67();
  D48():
    deopt 191 [r94];
  D65():
    deopt 245 [r119];
  D67():
    deopt 251 [r122];
  L183():
    goto L54(r94);
  L210():
    goto L61();
  L213():
    c68 = `as.logical`(r122);
    if c68 then L214() else L62();
  L62():
    plot = ldf plot;
    check L218() else D70();
  L63():
    sym19 = ldf invisible;
    base19 = ldf invisible in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L220() else L221();
  L214():
    lines = ldf lines;
    check L215() else D68();
  D68():
    deopt 253 [];
  D70():
    deopt 263 [];
  L64(r137):
    popenv;
    return r137;
  L215():
    p20 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p21 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    p22 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    ddd1 = ld `...`;
    r126 = dyn lines[x, y, type, `...`](p20, p21, p22, ddd1);
    check L216() else D69();
  L218():
    p23 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    p24 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p25 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    p26 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p27 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    p28 = prom<V +>{
      xlim3 = ld xlim;
      xlim4 = force? xlim3;
      checkMissing(xlim4);
      return xlim4;
    };
    p29 = prom<V +>{
      lg4 = ld lg;
      lg5 = force? lg4;
      checkMissing(lg5);
      return lg5;
    };
    ddd2 = ld `...`;
    r135 = dyn plot[x, y, type, xlab, ylab, xlim, log, `...`](p23, p24, p25, p26, p27, p28, p29, ddd2);
    check L219() else D71();
  L220():
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L222() else L223();
  L221():
    r136 = dyn base19(<lang list(x=x, y=y)>);
    goto L64(r136);
  D69():
    deopt 261 [r126];
  D71():
    deopt 279 [r135];
  L65(r139):
    invisible = ldf invisible in base;
    r141 = dyn invisible(r139);
    check L227() else D75();
  L216():
    goto L63();
  L219():
    goto L63();
  L222():
    x8 = ld x;
    check L224() else D72();
  L223():
    r138 = dyn base20[x, y](<sym x>, <sym y>);
    goto L65(r138);
  D72():
    deopt 284 [x8];
  D75():
    deopt 293 [r141];
  L224():
    x9 = force? x8;
    checkMissing(x9);
    y6 = ld y;
    check L225() else D73();
  L227():
    goto L64(r141);
  D73():
    deopt 287 [y6];
  L225():
    y7 = force? y6;
    checkMissing(y7);
    list1 = ldf list in base;
    r140 = dyn list1(x9, y7);
    check L226() else D74();
  D74():
    deopt 291 [r140];
  L226():
    goto L65(r140);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg r10:V, reg r11:V, reg r12:V, reg r13:V, reg r14:V |
    mkenv;
    st x = x;
    sym = ldf sin;
    base = ldf sin in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    sym1 = ldf cos;
    base1 = ldf cos in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang `*`(cos(x), exp(`/`(`-`(x), 2.0)))>);
    goto L0(r);
  L1(r3):
    sym2 = ldf exp;
    base2 = ldf exp in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L8() else L9();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  D0():
    deopt 2 [x1];
  L2(r8, r9):
    r13 = `*`(r8, r9);
    r14 = sin(r13);
    goto L0(r14);
  L7():
    x2 = force? x1;
    checkMissing(x2);
    r4 = cos(x2);
    goto L1(r4);
  L8():
    x3 = ld x;
    check L10() else D1();
  L9():
    r7 = dyn base2(<lang `/`(`-`(x), 2.0)>);
    goto L2(r3, r7);
  D1():
    deopt 5 [r3, x3];
  L10():
    x4 = force? x3;
    checkMissing(x4);
    r10 = `-`(<missing>, x4);
    r11 = `/`(r10, 2.0);
    r12 = exp(r11);
    goto L2(r3, r12);
  }
}