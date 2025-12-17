fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg plot:cls, reg cars:*, reg cars1:V, reg p1:p(V +), reg r6:V, reg lines:cls, reg lowess:cls, reg cars2:*, reg cars3:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg lines1:cls, reg lowess1:cls, reg cars4:*, reg cars5:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg legend:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg paste:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg c:cls, reg r19:V, reg p6:p(V +), reg r21:V, reg c1:cls, reg r22:V, reg p7:p(V +), reg p8:p(V +), reg r25:V |
    mkenv;
    r = clos inner1282345132;
    st lowess = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    plot = ldf plot;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      cars = ld cars;
      cars1 = force? cars;
      checkMissing(cars1);
      return cars1;
    };
    r6 = dyn plot[, main](p1, "lowess(cars)");
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r6];
  L4():
    goto L0();
  L6():
    lines = ldf lines;
    check L7() else D4();
  D4():
    deopt 15 [];
  L7():
    p3 = prom<V +>{
      lowess = ldf lowess;
      p2 = prom<V +>{
        cars2 = ld cars;
        cars3 = force? cars2;
        checkMissing(cars3);
        return cars3;
      };
      r8 = dyn lowess(p2);
      return r8;
    };
    r10 = dyn lines[, col](p3, 2.0);
    check L8() else D5();
  D5():
    deopt 19 [r10];
  L8():
    lines1 = ldf lines;
    check L9() else D6();
  D6():
    deopt 21 [];
  L9():
    p5 = prom<V +>{
      lowess1 = ldf lowess;
      p4 = prom<V +>{
        cars4 = ld cars;
        cars5 = force? cars4;
        checkMissing(cars5);
        return cars5;
      };
      r12 = dyn lowess1[, f](p4, 0.2);
      return r12;
    };
    r14 = dyn lines1[, col](p5, 3.0);
    check L10() else D7();
  D7():
    deopt 25 [r14];
  L10():
    legend = ldf legend;
    check L11() else D8();
  D8():
    deopt 27 [];
  L11():
    p7 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      paste = ldf paste;
      p6 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r18):
        return r18;
      L1():
        c = ldf c in base;
        r19 = dyn c("2/3", ".2");
        goto L0(r19);
      L2():
        r17 = dyn base2("2/3", ".2");
        goto L0(r17);
      };
      r21 = dyn paste("f = ", p6);
      c1 = ldf c in base;
      r22 = dyn c1(r21);
      goto L0(r22);
    L2():
      r15 = dyn base1(<lang paste("f = ", c("2/3", ".2"))>);
      goto L0(r15);
    };
    p8 = prom<V +>{
      return <int 2, 3>;
    };
    r25 = dyn legend[, , , lty, col](5.0, 120.0, p7, 1.0, p8);
    check L12() else D9();
  D9():
    deopt 35 [r25];
  L12():
    popenv;
    return r25;
  }
}
fun inner1282345132(x, y, f, iter, delta) {
  (reg x:*, reg y:*, reg f:*, reg iter:*, reg delta:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var f:*, reg f_isMissing:L, reg f_orDefault:*, reg p:p(V +), var iter:*, reg iter_isMissing:L, reg iter_orDefault:*, var delta:*, reg delta_isMissing:L, reg delta_orDefault:*, reg diff:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg range:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg r6:V, reg p2:p(V +), reg xy_coords:cls, reg x3:*, reg x4:V, reg p3:p(V +), reg y1:*, reg y2:V, reg p4:p(V +), reg r10:V, reg order:cls, reg xy:*, reg xy1:V, reg c:L, reg xy3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r11:V, reg p5:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg xy4:*, reg xy5:V, reg c1:L, reg xy7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r16:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg o:*, reg o1:V, reg __:cls, reg r17:V, reg as_double:cls, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg x5:*, reg x6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg C_lowess:*, reg C_lowess1:V, reg x7:*, reg x8:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg C_lowess4:V, reg x11:V, reg r24:V, reg xy8:*, reg xy9:V, reg c3:L, reg C_lowess6:V, reg x13:V, reg xy11:V, reg dr6:V, reg dc3:L, reg dx8:V, reg C_lowess8:V, reg x15:V, reg dx9:V, reg r25:V, reg c4:L, reg C_lowess10:V, reg x17:V, reg dx11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg C_lowess12:V, reg x19:V, reg dx13:V, reg o2:*, reg o3:V, reg __1:cls, reg r26:V, reg as_double1:cls, reg r27:V, reg f1:*, reg f2:V, reg iter1:*, reg iter2:V, reg delta1:*, reg delta2:V, reg vargs:dots, reg r28:V, reg list:cls, reg r29:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    f_isMissing = missing.0(f);
    if f_isMissing then L1() else L2(f);
  L1():
    p = prom<V +>{
      return 0.6666666666666666;
    };
    goto L2(p);
  L2(f_orDefault):
    st f = f_orDefault;
    iter_isMissing = missing.0(iter);
    if iter_isMissing then L3(3) else L3(iter);
  L3(iter_orDefault):
    st iter = iter_orDefault;
    delta_isMissing = missing.0(delta);
    if delta_isMissing then L4() else L5(delta);
  L4():
    p2 = prom<V +>{
      diff = ldf diff;
      p1 = prom<V +>{
        sym = ldf range;
        base = ldf range in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r2):
        return r2;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        range = ldf range in base;
        r3 = dyn range(x2);
        goto L0(r3);
      L2():
        r1 = dyn base(<sym x>);
        goto L0(r1);
      };
      r5 = dyn diff(p1);
      r6 = `*`(0.01, r5);
      return r6;
    };
    goto L5(p2);
  L5(delta_orDefault):
    st delta = delta_orDefault;
    xy_coords = ldf `xy.coords`;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p4 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r10 = dyn xy_coords[, , setLab](p3, p4, FALSE);
    check L13() else D1();
  D1():
    deopt 6 [r10];
  L13():
    st xy = r10;
    order = ldf order;
    check L14() else D2();
  D2():
    deopt 9 [];
  L14():
    p5 = prom<V +>{
      xy = ld xy;
      xy1 = force? xy;
      checkMissing(xy1);
      c = `is.object`(xy1);
      if c then L1() else L2(xy1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", xy1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(xy3):
      r11 = `$`(xy3, <sym x>);
      goto L0(r11);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r13 = dyn order(p5);
    check L15() else D3();
  D3():
    deopt 11 [r13];
  L15():
    st o = r13;
    sym1 = ldf `as.double`;
    base1 = ldf `as.double` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L6(r15):
    st x = r15;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L16():
    xy4 = ld xy;
    check L18() else D4();
  L17():
    r14 = dyn base1(<lang `[`(`$`(xy, x), o)>);
    goto L6(r14);
  D4():
    deopt 15 [xy4];
  L8(r20):
    popenv;
    return r20;
  L18():
    xy5 = force? xy4;
    checkMissing(xy5);
    c1 = `is.object`(xy5);
    if c1 then L20() else L21(xy5);
  L28():
    x5 = ld x;
    check L30() else D7();
  L29():
    r19 = dyn base2[x, y](<sym x>, <lang .Call(C_lowess, x, as.double(`[`(`$`(xy, y), o)), f, iter, delta)>);
    goto L8(r19);
  D7():
    deopt 26 [x5];
  L19(dx3):
    c2 = `is.object`(dx3);
    if c2 then L23() else L24(dx3);
  L20():
    dr2 = tryDispatchBuiltin.1("$", xy5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(dr2);
  L21(xy7):
    r16 = `$`(xy7, <sym x>);
    goto L19(r16);
  L30():
    x6 = force? x5;
    checkMissing(x6);
    sym3 = ldf `.Call`;
    base3 = ldf `.Call` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L7(dx7):
    as_double = ldf `as.double` in base;
    r18 = dyn as_double(dx7);
    check L27() else D6();
  L9(r22):
    list = ldf list in base;
    r29 = dyn list(x6, r22);
    check L50() else D16();
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(dx2);
  L23():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L25() else L24(dr4);
  L24(dx5):
    o = ld o;
    check L26() else D5();
  L31():
    C_lowess = ld C_lowess;
    check L33() else D8();
  L32():
    r21 = dyn base3(<sym C_lowess>, <sym x>, <lang as.double(`[`(`$`(xy, y), o))>, <sym f>, <sym iter>, <sym delta>);
    goto L9(r21);
  D5():
    deopt 18 [dx5, o];
  D6():
    deopt 22 [r18];
  D8():
    deopt 30 [C_lowess];
  D16():
    deopt 48 [r29];
  L25():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx6);
  L26():
    o1 = force? o;
    __ = ldf `[` in base;
    r17 = dyn __(dx5, o1);
    goto L7(r17);
  L27():
    goto L6(r18);
  L33():
    C_lowess1 = force? C_lowess;
    checkMissing(C_lowess1);
    x7 = ld x;
    check L34() else D9();
  L50():
    goto L8(r29);
  D9():
    deopt 31 [C_lowess1, x7];
  L34():
    x8 = force? x7;
    checkMissing(x8);
    sym4 = ldf `as.double`;
    base4 = ldf `as.double` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L35() else L36();
  L10(C_lowess4, x11, r24):
    f1 = ld f;
    check L47() else D13();
  L35():
    xy8 = ld xy;
    check L37() else D10();
  L36():
    r23 = dyn base4(<lang `[`(`$`(xy, y), o)>);
    goto L10(C_lowess1, x8, r23);
  D10():
    deopt 34 [C_lowess1, x8, xy8];
  D13():
    deopt 41 [C_lowess4, x11, r24, f1];
  L37():
    xy9 = force? xy8;
    checkMissing(xy9);
    c3 = `is.object`(xy9);
    if c3 then L39() else L40(C_lowess1, x8, xy9);
  L47():
    f2 = force? f1;
    checkMissing(f2);
    iter1 = ld iter;
    check L48() else D14();
  D14():
    deopt 42 [C_lowess4, x11, r24, f2, iter1];
  L38(C_lowess8, x15, dx9):
    c4 = `is.object`(dx9);
    if c4 then L42() else L43(C_lowess8, x15, dx9);
  L39():
    dr6 = tryDispatchBuiltin.1("$", xy9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L41() else L40(C_lowess1, x8, dr6);
  L40(C_lowess6, x13, xy11):
    r25 = `$`(xy11, <sym y>);
    goto L38(C_lowess6, x13, r25);
  L48():
    iter2 = force? iter1;
    checkMissing(iter2);
    delta1 = ld delta;
    check L49() else D15();
  D15():
    deopt 43 [C_lowess4, x11, r24, f2, iter2, delta1];
  L11(C_lowess12, x19, dx13):
    as_double1 = ldf `as.double` in base;
    r27 = dyn as_double1(dx13);
    check L46() else D12();
  L41():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L38(C_lowess1, x8, dx8);
  L42():
    dr8 = tryDispatchBuiltin.1("[", dx9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L44() else L43(C_lowess8, x15, dr8);
  L43(C_lowess10, x17, dx11):
    o2 = ld o;
    check L45() else D11();
  L49():
    delta2 = force? delta1;
    checkMissing(delta2);
    vargs = dots[x11, r24, f2, iter2, delta2];
    r28 = `.Call`(C_lowess4, vargs, <missing>);
    goto L9(r28);
  D11():
    deopt 37 [C_lowess10, x17, dx11, o2];
  D12():
    deopt 41 [C_lowess12, x19, r27];
  L44():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L11(C_lowess8, x15, dx12);
  L45():
    o3 = force? o2;
    __1 = ldf `[` in base;
    r26 = dyn __1(dx11, o3);
    goto L11(C_lowess10, x17, r26);
  L46():
    goto L10(C_lowess12, x19, r27);
  }
}