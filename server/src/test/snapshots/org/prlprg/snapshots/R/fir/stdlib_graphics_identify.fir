fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg dev_interactive:cls, reg r2:V, reg c:L, reg rnorm:cls, reg r3:V, reg rnorm1:cls, reg r4:V, reg plot:cls, reg x:*, reg x1:V, reg p:p(V +), reg y:*, reg y1:V, reg p1:p(V +), reg r7:V, reg identifyPch:cls, reg x2:*, reg x3:V, reg p2:p(V +), reg y2:*, reg y3:V, reg p3:p(V +), reg r10:V |
    mkenv;
    r = clos `inner-103057629`;
    st identify = r;
    r1 = clos `inner-379834051`;
    st identifyPch = r1;
    dev_interactive = ldf `dev.interactive`;
    check L1() else D0();
  D0():
    deopt 7 [];
  L1():
    r2 = dyn dev_interactive();
    check L2() else D1();
  D1():
    deopt 8 [r2];
  L2():
    c = `as.logical`(r2);
    if c then L3() else L0();
  L0():
    invisible.0();
    popenv;
    return NULL;
  L3():
    rnorm = ldf rnorm;
    check L4() else D2();
  D2():
    deopt 10 [];
  L4():
    r3 = dyn rnorm(50.0);
    check L5() else D3();
  D3():
    deopt 12 [r3];
  L5():
    st x = r3;
    rnorm1 = ldf rnorm;
    check L6() else D4();
  D4():
    deopt 15 [];
  L6():
    r4 = dyn rnorm1(50.0);
    check L7() else D5();
  D5():
    deopt 17 [r4];
  L7():
    st y = r4;
    plot = ldf plot;
    check L8() else D6();
  D6():
    deopt 20 [];
  L8():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r7 = dyn plot(p, p1);
    check L9() else D7();
  D7():
    deopt 23 [r7];
  L9():
    identifyPch = ldf identifyPch;
    check L10() else D8();
  D8():
    deopt 25 [];
  L10():
    p2 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p3 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r10 = dyn identifyPch(p2, p3);
    check L11() else D9();
  D9():
    deopt 28 [r10];
  L11():
    popenv;
    return r10;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("identify");
    goto L0(r2);
  L2():
    r = dyn base("identify");
    goto L0(r);
  }
}
fun `inner-379834051`(x, y, n, plot, pch, `...`) {
  (reg x:*, reg y:*, reg n:*, reg plot:*, reg pch:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg p:p(V +), var plot:*, reg plot_isMissing:L, reg plot_orDefault:*, var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, var `...`:dots?, reg xy_coords:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg y1:*, reg y2:V, reg p2:p(V +), reg r6:V, reg xy:*, reg xy1:V, reg c:L, reg xy3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg xy4:*, reg xy5:V, reg c1:L, reg xy7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg rep:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg sel:*, reg sel1:V, reg sum:cls, reg r14:V, reg n1:*, reg n2:V, reg r15:V, reg c2:L, reg identify:cls, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sel2:*, reg sel3:V, reg r16:V, reg __:cls, reg r17:V, reg p3:p(V +), reg y3:*, reg y4:V, reg c4:L, reg y6:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sel4:*, reg sel5:V, reg r19:V, reg __1:cls, reg r20:V, reg p4:p(V +), reg which:cls, reg sel6:*, reg sel7:V, reg r22:V, reg p5:p(V +), reg r24:V, reg p6:p(V +), reg plot1:*, reg plot2:V, reg p7:p(V +), reg ddd1:dots?, reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg ans:*, reg ans1:V, reg length1:cls, reg r30:V, reg r31:V, reg c5:L, reg which1:cls, reg sel8:*, reg sel9:V, reg r33:V, reg p8:p(V +), reg r35:V, reg c6:L, reg r37:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ans2:*, reg ans3:V, reg __2:cls, reg r38:V, reg points:cls, reg x9:*, reg x10:V, reg c7:L, reg x12:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ans4:*, reg ans5:V, reg __3:cls, reg r39:V, reg p9:p(V +), reg y7:*, reg y8:V, reg c8:L, reg y10:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg ans6:*, reg ans7:V, reg __4:cls, reg r41:V, reg p10:p(V +), reg pch1:*, reg pch2:V, reg p11:p(V +), reg r44:V, reg l:*, reg c9:L, reg r46:L, reg l2:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg ans8:*, reg ans9:V, reg ___:cls, reg r49:V, reg which2:cls, reg sel10:*, reg sel11:V, reg p12:p(V +), reg r51:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    n_isMissing = missing.0(n);
    if n_isMissing then L1() else L2(n);
  L1():
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
    goto L2(p);
  L2(n_orDefault):
    st n = n_orDefault;
    plot_isMissing = missing.0(plot);
    if plot_isMissing then L3(FALSE) else L3(plot);
  L3(plot_orDefault):
    st plot = plot_orDefault;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L4(19.0) else L4(pch);
  L4(pch_orDefault):
    st pch = pch_orDefault;
    st `...` = ddd;
    xy_coords = ldf `xy.coords`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p2 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r6 = dyn xy_coords(p1, p2);
    check L15() else D1();
  D1():
    deopt 4 [r6];
  L15():
    st xy = r6;
    xy = ld xy;
    check L16() else D2();
  D2():
    deopt 6 [xy];
  L16():
    xy1 = force? xy;
    checkMissing(xy1);
    c = `is.object`(xy1);
    if c then L18() else L19(xy1);
  L17(dx1):
    st x = dx1;
    xy4 = ld xy;
    check L21() else D3();
  L18():
    dr = tryDispatchBuiltin.1("$", xy1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(xy3):
    r7 = `$`(xy3, <sym x>);
    goto L17(r7);
  D3():
    deopt 10 [xy4];
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L17(dx);
  L21():
    xy5 = force? xy4;
    checkMissing(xy5);
    c1 = `is.object`(xy5);
    if c1 then L23() else L24(xy5);
  L22(dx3):
    st y = dx3;
    sym1 = ldf rep;
    base1 = ldf rep in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L23():
    dr2 = tryDispatchBuiltin.1("$", xy5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(dr2);
  L24(xy7):
    r8 = `$`(xy7, <sym y>);
    goto L22(r8);
  L5(r10):
    st sel = r10;
    goto L13();
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L22(dx2);
  L26():
    rep = ldf rep in base;
    r11 = dyn rep(FALSE, <lang length(x)>);
    goto L5(r11);
  L27():
    r9 = dyn base1(FALSE, <lang length(x)>);
    goto L5(r9);
  L13():
    sym2 = ldf sum;
    base2 = ldf sum in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L6(r13):
    n1 = ld n;
    check L32() else D6();
  L28():
    sel = ld sel;
    check L30() else D4();
  L29():
    r12 = dyn base2(<sym sel>);
    goto L6(r12);
  D4():
    deopt 20 [sel];
  D6():
    deopt 23 [r13, n1];
  L30():
    sel1 = force? sel;
    checkMissing(sel1);
    sum = ldf sum in base;
    r14 = dyn sum(sel1);
    check L31() else D5();
  L32():
    n2 = force? n1;
    checkMissing(n2);
    r15 = `<`(r13, n2);
    c2 = `as.logical`(r15);
    if c2 then L33() else L7();
  D5():
    deopt 23 [r14];
  L7():
    which2 = ldf which;
    check L56() else D17();
  L31():
    goto L6(r14);
  L33():
    identify = ldf identify;
    check L34() else D7();
  D7():
    deopt 27 [];
  D17():
    deopt 76 [];
  L34():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c3 = `is.object`(x6);
      if c3 then L1() else L2(x6);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", x6);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x8):
      sel2 = ld sel;
      sel3 = force? sel2;
      checkMissing(sel3);
      r16 = `!`(sel3);
      __ = ldf `[` in base;
      r17 = dyn __(x8, r16);
      goto L0(r17);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p4 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      c4 = `is.object`(y4);
      if c4 then L1() else L2(y4);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", y4);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(y6):
      sel4 = ld sel;
      sel5 = force? sel4;
      checkMissing(sel5);
      r19 = `!`(sel5);
      __1 = ldf `[` in base;
      r20 = dyn __1(y6, r19);
      goto L0(r20);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p6 = prom<V +>{
      which = ldf which;
      p5 = prom<V +>{
        sel6 = ld sel;
        sel7 = force? sel6;
        checkMissing(sel7);
        r22 = `!`(sel7);
        return r22;
      };
      r24 = dyn which(p5);
      return r24;
    };
    p7 = prom<V +>{
      plot1 = ld plot;
      plot2 = force? plot1;
      checkMissing(plot2);
      return plot2;
    };
    ddd1 = ld `...`;
    r27 = dyn identify[, , labels, n, plot, `...`](p3, p4, p6, 1.0, p7, ddd1);
    check L35() else D8();
  L56():
    p12 = prom<V +>{
      sel10 = ld sel;
      sel11 = force? sel10;
      checkMissing(sel11);
      return sel11;
    };
    r51 = dyn which2(p12);
    check L57() else D18();
  D8():
    deopt 37 [r27];
  D18():
    deopt 78 [r51];
  L35():
    st ans = r27;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L57():
    popenv;
    return r51;
  L8(r29):
    r31 = `!`(r29);
    c5 = `as.logical`(r31);
    if c5 then L40() else L9();
  L36():
    ans = ld ans;
    check L38() else D9();
  L37():
    r28 = dyn base3(<sym ans>);
    goto L8(r28);
  D9():
    deopt 41 [ans];
  L9():
    which1 = ldf which;
    check L43() else D11();
  L38():
    ans1 = force? ans;
    checkMissing(ans1);
    length1 = ldf length in base;
    r30 = dyn length1(ans1);
    check L39() else D10();
  L40():
    goto L7();
  D10():
    deopt 44 [r30];
  D11():
    deopt 51 [];
  L39():
    goto L8(r30);
  L43():
    p8 = prom<V +>{
      sel8 = ld sel;
      sel9 = force? sel8;
      checkMissing(sel9);
      r33 = `!`(sel9);
      return r33;
    };
    r35 = dyn which1(p8);
    check L44() else D12();
  D12():
    deopt 53 [r35];
  L44():
    c6 = `is.object`(r35);
    if c6 then L45() else L46(r35);
  L11(dx9):
    st ans = dx9;
    points = ldf points;
    check L49() else D14();
  L45():
    dr8 = tryDispatchBuiltin.1("[", r35);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L47() else L46(dr8);
  L46(r37):
    ans2 = ld ans;
    check L48() else D13();
  D13():
    deopt 54 [r37, ans2];
  D14():
    deopt 59 [];
  L47():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L11(dx8);
  L48():
    ans3 = force? ans2;
    __2 = ldf `[` in base;
    r38 = dyn __2(r37, ans3);
    goto L11(r38);
  L49():
    p9 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c7 = `is.object`(x10);
      if c7 then L1() else L2(x10);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", x10);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x12):
      ans4 = ld ans;
      ans5 = force? ans4;
      __3 = ldf `[` in base;
      r39 = dyn __3(x12, ans5);
      goto L0(r39);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p10 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      c8 = `is.object`(y8);
      if c8 then L1() else L2(y8);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", y8);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(y10):
      ans6 = ld ans;
      ans7 = force? ans6;
      __4 = ldf `[` in base;
      r41 = dyn __4(y10, ans7);
      goto L0(r41);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p11 = prom<V +>{
      pch1 = ld pch;
      pch2 = force? pch1;
      checkMissing(pch2);
      return pch2;
    };
    r44 = dyn points[, , pch](p9, p10, p11);
    check L50() else D15();
  D15():
    deopt 64 [r44];
  L50():
    l = ld sel;
    c9 = `is.object`(l);
    if c9 then L51() else L52(TRUE, l);
  L12(dx15):
    st sel = dx15;
    goto L13();
  L51():
    dr14 = tryDispatchBuiltin.0("[<-", l, TRUE);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L53() else L52(TRUE, dr14);
  L52(r46, l2):
    ans8 = ld ans;
    check L54() else D16();
  D16():
    deopt 68 [r46, l2, TRUE, ans8];
  L53():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L12(dx14);
  L54():
    ans9 = force? ans8;
    ___ = ldf `[<-` in base;
    r49 = dyn ___(l2, TRUE, ans9);
    goto L12(r49);
  }
}