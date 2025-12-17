fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2543029983;
    st `lines.isoreg` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2543029983(x, col, lwd, `do.points`, cex, pch, `...`) {
  (reg x:*, reg col:*, reg lwd:*, reg do_points:*, reg cex:*, reg pch:*, reg ddd:dots) -+> V { var x:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, var `do.points`:*, reg do_points_isMissing:L, reg do_points_orDefault:*, var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, var pch:*, reg pch_isMissing:L, reg pch_orDefault:*, var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg dx4:V, reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r2:V, reg c4:L, reg dx8:V, reg dr6:V, reg dc3:L, reg dx9:V, reg x13:*, reg x14:V, reg c5:L, reg dx11:V, reg x16:V, reg dr8:V, reg dc4:L, reg dx13:V, reg dx14:V, reg dx15:V, reg r3:V, reg __:cls, reg r4:V, reg lines:cls, reg xx:*, reg xx1:V, reg p:p(V +), reg x17:*, reg x18:V, reg c6:L, reg x20:V, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg r6:V, reg p1:p(V +), reg col1:*, reg col2:V, reg p2:p(V +), reg lwd1:*, reg lwd2:V, reg p3:p(V +), reg r10:V, reg do_points1:*, reg do_points2:V, reg c7:L, reg points:cls, reg xx2:*, reg xx3:V, reg c8:L, reg xx5:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg x21:*, reg x22:V, reg c9:L, reg xx7:V, reg x24:V, reg dr14:V, reg dc7:L, reg dx20:V, reg xx9:V, reg dx21:V, reg r11:V, reg __1:cls, reg r12:V, reg p4:p(V +), reg x25:*, reg x26:V, reg c10:L, reg x28:V, reg dr16:V, reg dc8:L, reg dx22:V, reg dx23:V, reg r14:V, reg c11:L, reg dx25:V, reg dr18:V, reg dc9:L, reg dx26:V, reg dx27:V, reg x29:*, reg x30:V, reg c12:L, reg dx29:V, reg x32:V, reg dr20:V, reg dc10:L, reg dx31:V, reg dx32:V, reg dx33:V, reg r15:V, reg __2:cls, reg r16:V, reg p5:p(V +), reg col3:*, reg col4:V, reg p6:p(V +), reg cex1:*, reg cex2:V, reg p7:p(V +), reg pch1:*, reg pch2:V, reg p8:p(V +), reg r21:V, reg sym:cls, reg base:cls, reg guard:L, reg r23:V, reg r24:V, reg invisible:cls, reg r25:V |
    mkenv;
    st x = x;
    col_isMissing = missing.0(col);
    if col_isMissing then L0("red") else L0(col);
  L0(col_orDefault):
    st col = col_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L1(1.5) else L1(lwd);
  L1(lwd_orDefault):
    st lwd = lwd_orDefault;
    do_points_isMissing = missing.0(do_points);
    if do_points_isMissing then L2(FALSE) else L2(do_points);
  L2(do_points_orDefault):
    st `do.points` = do_points_orDefault;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L3(1.5) else L3(cex);
  L3(cex_orDefault):
    st cex = cex_orDefault;
    pch_isMissing = missing.0(pch);
    if pch_isMissing then L4(13.0) else L4(pch);
  L4(pch_orDefault):
    st pch = pch_orDefault;
    st `...` = ddd;
    x1 = ld x;
    check L10() else D0();
  D0():
    deopt 0 [x1];
  L10():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L12() else L13(x2);
  L11(dx1):
    c1 = `as.logical`(dx1);
    if c1 then L15() else L5();
  L12():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(x4):
    r = `$`(x4, <sym isOrd>);
    goto L11(r);
  L5():
    x9 = ld x;
    check L22() else D2();
  L6(dx4):
    st xx = dx4;
    lines = ldf lines;
    check L35() else D4();
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L15():
    x5 = ld x;
    check L16() else D1();
  D1():
    deopt 3 [x5];
  D2():
    deopt 6 [x9];
  D4():
    deopt 15 [];
  L16():
    x6 = force? x5;
    checkMissing(x6);
    c2 = `is.object`(x6);
    if c2 then L18() else L19(x6);
  L22():
    x10 = force? x9;
    checkMissing(x10);
    c3 = `is.object`(x10);
    if c3 then L24() else L25(x10);
  L35():
    p = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p1 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c6 = `is.object`(x18);
      if c6 then L1() else L2(x18);
    L0(dx17):
      return dx17;
    L1():
      dr10 = tryDispatchBuiltin.1("$", x18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x20):
      r6 = `$`(x20, <sym yf>);
      goto L0(r6);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx16);
    };
    p2 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p3 = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    r10 = dyn lines[, , col, lwd, type](p, p1, p2, p3, "S");
    check L36() else D5();
  D5():
    deopt 24 [r10];
  L17(dx3):
    goto L6(dx3);
  L18():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(dr2);
  L19(x8):
    r1 = `$`(x8, <sym x>);
    goto L17(r1);
  L23(dx6):
    c4 = `is.object`(dx6);
    if c4 then L27() else L28(dx6);
  L24():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L26() else L25(dr4);
  L25(x12):
    r2 = `$`(x12, <sym x>);
    goto L23(r2);
  L36():
    do_points1 = ld `do.points`;
    check L37() else D6();
  D6():
    deopt 25 [do_points1];
  L20():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L26():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L23(dx5);
  L27():
    dr6 = tryDispatchBuiltin.1("[", dx6);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L29() else L28(dr6);
  L28(dx8):
    x13 = ld x;
    check L30() else D3();
  L37():
    do_points2 = force? do_points1;
    checkMissing(do_points2);
    c7 = `as.logical`(do_points2);
    if c7 then L38() else L7();
  D3():
    deopt 9 [dx8, x13];
  L7():
    goto L8();
  L8():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L42() else L43();
  L29():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L6(dx9);
  L30():
    x14 = force? x13;
    checkMissing(x14);
    c5 = `is.object`(x14);
    if c5 then L32() else L33(dx8, x14);
  L38():
    points = ldf points;
    check L39() else D7();
  D7():
    deopt 28 [];
  L9(r24):
    popenv;
    return r24;
  L31(dx14, dx15):
    __ = ldf `[` in base;
    r4 = dyn __(dx14, dx15);
    goto L6(r4);
  L32():
    dr8 = tryDispatchBuiltin.1("$", x14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L34() else L33(dx8, dr8);
  L33(dx11, x16):
    r3 = `$`(x16, <sym ord>);
    goto L31(dx11, r3);
  L39():
    p4 = prom<V +>{
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      c8 = `is.object`(xx3);
      if c8 then L1() else L2(xx3);
    L0(dx19):
      return dx19;
    L1():
      dr12 = tryDispatchBuiltin.1("[", xx3);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(xx5):
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c9 = `is.object`(x22);
      if c9 then L5() else L6(xx5, x22);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx18);
    L4(xx9, dx21):
      __1 = ldf `[` in base;
      r12 = dyn __1(xx9, dx21);
      goto L0(r12);
    L5():
      dr14 = tryDispatchBuiltin.1("$", x22);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L7() else L6(xx5, dr14);
    L6(xx7, x24):
      r11 = `$`(x24, <sym iKnots>);
      goto L4(xx7, r11);
    L7():
      dx20 = getTryDispatchBuiltinValue(dr14);
      goto L4(xx5, dx20);
    };
    p5 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c10 = `is.object`(x26);
      if c10 then L2() else L3(x26);
    L1(dx23):
      c11 = `is.object`(dx23);
      if c11 then L5() else L6(dx23);
    L2():
      dr16 = tryDispatchBuiltin.1("$", x26);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L4() else L3(dr16);
    L3(x28):
      r14 = `$`(x28, <sym yf>);
      goto L1(r14);
    L0(dx27):
      return dx27;
    L4():
      dx22 = getTryDispatchBuiltinValue(dr16);
      goto L1(dx22);
    L5():
      dr18 = tryDispatchBuiltin.1("[", dx23);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6(dr18);
    L6(dx25):
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      c12 = `is.object`(x30);
      if c12 then L9() else L10(dx25, x30);
    L7():
      dx26 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx26);
    L8(dx32, dx33):
      __2 = ldf `[` in base;
      r16 = dyn __2(dx32, dx33);
      goto L0(r16);
    L9():
      dr20 = tryDispatchBuiltin.1("$", x30);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L11() else L10(dx25, dr20);
    L10(dx29, x32):
      r15 = `$`(x32, <sym iKnots>);
      goto L8(dx29, r15);
    L11():
      dx31 = getTryDispatchBuiltinValue(dr20);
      goto L8(dx25, dx31);
    };
    p6 = prom<V +>{
      col3 = ld col;
      col4 = force? col3;
      checkMissing(col4);
      return col4;
    };
    p7 = prom<V +>{
      cex1 = ld cex;
      cex2 = force? cex1;
      checkMissing(cex2);
      return cex2;
    };
    p8 = prom<V +>{
      pch1 = ld pch;
      pch2 = force? pch1;
      checkMissing(pch2);
      return pch2;
    };
    r21 = dyn points[, , col, cex, pch](p4, p5, p6, p7, p8);
    check L40() else D8();
  L42():
    invisible = ldf invisible in base;
    r25 = dyn invisible();
    check L44() else D9();
  L43():
    r23 = dyn base();
    goto L9(r23);
  D8():
    deopt 37 [r21];
  D9():
    deopt 43 [r25];
  L34():
    dx13 = getTryDispatchBuiltinValue(dr8);
    goto L31(dx8, dx13);
  L40():
    goto L8();
  L44():
    goto L9(r25);
  }
}