fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg with:cls, reg faithful:*, reg faithful1:V, reg p1:p(V +), reg plot:cls, reg density:cls, reg eruptions:*, reg eruptions1:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg rug:cls, reg eruptions2:*, reg eruptions3:V, reg p4:p(V +), reg rug1:cls, reg jitter:cls, reg eruptions4:*, reg eruptions5:V, reg p5:p(V +), reg r15:V, reg p6:p(V +), reg r17:V, reg p7:p(V +), reg r19:V |
    mkenv;
    r = clos inner489004360;
    st rug = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    sym1 = ldf with;
    base1 = ldf with in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L2():
    require = ldf require;
    check L4() else D0();
  L3():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  L1(r6):
    popenv;
    return r6;
  L4():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L5() else D1();
  L6():
    with = ldf with;
    check L8() else D2();
  L7():
    r5 = dyn base1(<sym faithful>, <lang {
      plot(density(eruptions, bw=0.15));
      rug(eruptions);
      rug(jitter(eruptions, amount=0.01), side=3.0, col="light blue")
    }>);
    goto L1(r5);
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [];
  L5():
    goto L0();
  L8():
    p1 = prom<V +>{
      faithful = ld faithful;
      faithful1 = force? faithful;
      checkMissing(faithful1);
      return faithful1;
    };
    p7 = prom<V +>{
      plot = ldf plot;
      p3 = prom<V +>{
        density = ldf density;
        p2 = prom<V +>{
          eruptions = ld eruptions;
          eruptions1 = force? eruptions;
          checkMissing(eruptions1);
          return eruptions1;
        };
        r9 = dyn density[, bw](p2, 0.15);
        return r9;
      };
      dyn plot(p3);
      rug = ldf rug;
      p4 = prom<V +>{
        eruptions2 = ld eruptions;
        eruptions3 = force? eruptions2;
        checkMissing(eruptions3);
        return eruptions3;
      };
      dyn rug(p4);
      rug1 = ldf rug;
      p6 = prom<V +>{
        jitter = ldf jitter;
        p5 = prom<V +>{
          eruptions4 = ld eruptions;
          eruptions5 = force? eruptions4;
          checkMissing(eruptions5);
          return eruptions5;
        };
        r15 = dyn jitter[, amount](p5, 0.01);
        return r15;
      };
      r17 = dyn rug1[, side, col](p6, 3.0, "light blue");
      return r17;
    };
    r19 = dyn with(p1, p7);
    check L9() else D3();
  D3():
    deopt 13 [r19];
  L9():
    goto L1(r19);
  }
}
fun inner489004360(x, ticksize, side, lwd, col, quiet, `...`) {
  (reg x:*, reg ticksize:*, reg side:*, reg lwd:*, reg col:*, reg quiet:*, reg ddd:dots) -+> V { var x:*, var ticksize:*, reg ticksize_isMissing:L, reg ticksize_orDefault:*, var side:*, reg side_isMissing:L, reg side_orDefault:*, var lwd:*, reg lwd_isMissing:L, reg lwd_orDefault:*, var col:*, reg col_isMissing:L, reg col_orDefault:*, reg par:cls, reg r:V, reg p:p(V +), var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, reg getOption:cls, reg r2:V, reg r3:V, reg p1:p(V +), var `...`:dots?, reg as_vector:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg is_finite:cls, reg r9:V, reg x5:*, reg x6:V, reg c:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ok:*, reg ok1:V, reg __:cls, reg r10:V, reg quiet1:*, reg quiet2:V, reg r11:V, reg c1:L, reg par1:cls, reg r12:V, reg side1:*, reg side2:V, reg __1:cls, reg r13:V, reg r14:V, reg c2:L, reg par2:cls, reg r15:V, reg c3:L, reg u:*, reg u1:V, reg c4:L, reg r17:R, reg u3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r19:R, reg dx3:V, reg __2:cls, reg r20:V, reg r21:V, reg r22:V, reg u4:*, reg u5:V, reg c5:L, reg u7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg __3:cls, reg r23:V, reg r24:V, reg par3:cls, reg r25:V, reg c6:L, reg u8:*, reg u9:V, reg c7:L, reg r27:R, reg u11:V, reg dr6:V, reg dc3:L, reg dx5:V, reg r29:R, reg dx6:V, reg __4:cls, reg r30:V, reg r31:V, reg u12:*, reg u13:V, reg c8:L, reg u15:V, reg dr8:V, reg dc4:L, reg dx7:V, reg __5:cls, reg r32:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r33:V, reg r34:V, reg x9:*, reg x10:V, reg u16:*, reg u17:V, reg c9:L, reg x12:V, reg u19:V, reg dr10:V, reg dc5:L, reg dx8:V, reg x14:V, reg dx9:V, reg __6:cls, reg r35:V, reg r36:V, reg x15:*, reg x16:V, reg u20:*, reg u21:V, reg c10:L, reg r38:V, reg x18:V, reg u23:V, reg dr12:V, reg dc6:L, reg dx10:V, reg r40:V, reg x20:V, reg dx11:V, reg __7:cls, reg r41:V, reg r42:V, reg r43:V, reg any:cls, reg r44:V, reg c11:L, reg warning:cls, reg r45:V, reg r46:V, reg Axis:cls, reg side3:*, reg side4:V, reg p3:p(V +), reg x21:*, reg x22:V, reg p4:p(V +), reg lwd1:*, reg lwd2:V, reg p5:p(V +), reg col1:*, reg col2:V, reg p6:p(V +), reg ticksize1:*, reg ticksize2:V, reg p7:p(V +), reg ddd1:dots?, reg r53:V |
    mkenv;
    st x = x;
    ticksize_isMissing = missing.0(ticksize);
    if ticksize_isMissing then L0(0.03) else L0(ticksize);
  L0(ticksize_orDefault):
    st ticksize = ticksize_orDefault;
    side_isMissing = missing.0(side);
    if side_isMissing then L1(1.0) else L1(side);
  L1(side_orDefault):
    st side = side_orDefault;
    lwd_isMissing = missing.0(lwd);
    if lwd_isMissing then L2(0.5) else L2(lwd);
  L2(lwd_orDefault):
    st lwd = lwd_orDefault;
    col_isMissing = missing.0(col);
    if col_isMissing then L3() else L4(col);
  L3():
    p = prom<V +>{
      par = ldf par;
      r = dyn par("fg");
      return r;
    };
    goto L4(p);
  L4(col_orDefault):
    st col = col_orDefault;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L5() else L6(quiet);
  L5():
    p1 = prom<V +>{
      getOption = ldf getOption;
      r2 = dyn getOption("warn");
      r3 = `<`(r2, 0.0);
      return r3;
    };
    goto L6(p1);
  L6(quiet_orDefault):
    st quiet = quiet_orDefault;
    st `...` = ddd;
    as_vector = ldf `as.vector`;
    check L23() else D0();
  D0():
    deopt 1 [];
  L23():
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r6 = dyn as_vector(p2);
    check L24() else D1();
  D1():
    deopt 3 [r6];
  L24():
    st x = r6;
    sym = ldf `is.finite`;
    base = ldf `is.finite` in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L7(r8):
    st ok = r8;
    x5 = ld x;
    check L29() else D4();
  L25():
    x3 = ld x;
    check L27() else D2();
  L26():
    r7 = dyn base(<sym x>);
    goto L7(r7);
  D2():
    deopt 7 [x3];
  D4():
    deopt 12 [x5];
  L27():
    x4 = force? x3;
    checkMissing(x4);
    is_finite = ldf `is.finite` in base;
    r9 = dyn is_finite(x4);
    check L28() else D3();
  L29():
    x6 = force? x5;
    checkMissing(x6);
    c = `is.object`(x6);
    if c then L30() else L31(x6);
  D3():
    deopt 10 [r9];
  L8(dx1):
    st x = dx1;
    quiet1 = ld quiet;
    check L34() else D6();
  L28():
    goto L7(r9);
  L30():
    dr = tryDispatchBuiltin.1("[", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(x8):
    ok = ld ok;
    check L33() else D5();
  D5():
    deopt 14 [x8, ok];
  D6():
    deopt 18 [quiet1];
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L33():
    ok1 = force? ok;
    __ = ldf `[` in base;
    r10 = dyn __(x8, ok1);
    goto L8(r10);
  L34():
    quiet2 = force? quiet1;
    checkMissing(quiet2);
    r11 = `!`(quiet2);
    c1 = `as.logical`(r11);
    if c1 then L35() else L9();
  L9():
    goto L22();
  L22():
    Axis = ldf Axis;
    check L84() else D26();
  L35():
    par1 = ldf par;
    check L36() else D7();
  D7():
    deopt 22 [];
  D26():
    deopt 94 [];
  L36():
    r12 = dyn par1("usr");
    check L37() else D8();
  L84():
    p3 = prom<V +>{
      side3 = ld side;
      side4 = force? side3;
      checkMissing(side4);
      return side4;
    };
    p4 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    p5 = prom<V +>{
      lwd1 = ld lwd;
      lwd2 = force? lwd1;
      checkMissing(lwd2);
      return lwd2;
    };
    p6 = prom<V +>{
      col1 = ld col;
      col2 = force? col1;
      checkMissing(col2);
      return col2;
    };
    p7 = prom<V +>{
      ticksize1 = ld ticksize;
      ticksize2 = force? ticksize1;
      checkMissing(ticksize2);
      return ticksize2;
    };
    ddd1 = ld `...`;
    r53 = dyn Axis[side, at, labels, lwd, `lwd.ticks`, `col.ticks`, tck, `...`](p3, p4, FALSE, 0.0, p5, p6, p7, ddd1);
    check L85() else D27();
  D8():
    deopt 24 [r12];
  D27():
    deopt 110 [r53];
  L37():
    st u = r12;
    side1 = ld side;
    check L38() else D9();
  L85():
    popenv;
    return r53;
  D9():
    deopt 27 [side1];
  L38():
    side2 = force? side1;
    checkMissing(side2);
    __1 = ldf `%%` in base;
    r13 = dyn __1(side2, 2.0);
    check L39() else D10();
  D10():
    deopt 31 [r13];
  L39():
    r14 = `==`(r13, 1.0);
    c2 = `as.logical`(r14);
    if c2 then L40() else L10();
  L10():
    par3 = ldf par;
    check L54() else D15();
  L14(r24):
    st u = r24;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L66() else L67();
  L40():
    par2 = ldf par;
    check L41() else D11();
  D11():
    deopt 35 [];
  D15():
    deopt 51 [];
  L17(r34):
    c11 = `as.logical`(r34);
    if c11 then L79() else L20();
  L41():
    r15 = dyn par2("xlog");
    check L42() else D12();
  L54():
    r25 = dyn par3("ylog");
    check L55() else D16();
  L66():
    x9 = ld x;
    check L68() else D19();
  L67():
    r33 = dyn base1(<lang `|`(`<`(x, `[`(u, 1)), `>`(x, `[`(u, 2)))>);
    goto L17(r33);
  D12():
    deopt 37 [r15];
  D16():
    deopt 53 [r25];
  D19():
    deopt 69 [x9];
  L20():
    goto L21(NULL);
  L21(r46):
    goto L22();
  L42():
    c3 = `as.logical`(r15);
    if c3 then L43() else L11();
  L55():
    c6 = `as.logical`(r25);
    if c6 then L56() else L15();
  L68():
    x10 = force? x9;
    checkMissing(x10);
    u16 = ld u;
    check L69() else D20();
  L79():
    warning = ldf warning;
    check L80() else D24();
  D20():
    deopt 70 [x10, u16];
  D24():
    deopt 86 [];
  L11():
    u4 = ld u;
    check L49() else D14();
  L13(r22):
    goto L14(r22);
  L15():
    u12 = ld u;
    check L62() else D18();
  L43():
    u = ld u;
    check L44() else D13();
  L56():
    u8 = ld u;
    check L57() else D17();
  L69():
    u17 = force? u16;
    checkMissing(u17);
    c9 = `is.object`(u17);
    if c9 then L70() else L71(x10, u17);
  L80():
    r45 = dyn warning("some values will be clipped");
    check L81() else D25();
  D13():
    deopt 39 [10.0, u];
  D14():
    deopt 45 [u4];
  D17():
    deopt 55 [10.0, u8];
  D18():
    deopt 61 [u12];
  D25():
    deopt 88 [r45];
  L18(x14, dx9):
    r36 = `<`(x14, dx9);
    x15 = ld x;
    check L73() else D21();
  L44():
    u1 = force? u;
    checkMissing(u1);
    c4 = `is.object`(u1);
    if c4 then L45() else L46(10.0, u1);
  L49():
    u5 = force? u4;
    checkMissing(u5);
    c5 = `is.object`(u5);
    if c5 then L50() else L51(u5);
  L57():
    u9 = force? u8;
    checkMissing(u9);
    c7 = `is.object`(u9);
    if c7 then L58() else L59(10.0, u9);
  L62():
    u13 = force? u12;
    checkMissing(u13);
    c8 = `is.object`(u13);
    if c8 then L63() else L64(u13);
  L70():
    dr10 = tryDispatchBuiltin.1("[", u17);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L72() else L71(x10, dr10);
  L71(x12, u19):
    __6 = ldf `[` in base;
    r35 = dyn __6(u19, 1);
    goto L18(x12, r35);
  L81():
    goto L21(r45);
  D21():
    deopt 75 [r36, x15];
  L12(r19, dx3):
    r21 = `^`(r19, dx3);
    goto L13(r21);
  L16(r29, dx6):
    r31 = `^`(r29, dx6);
    goto L14(r31);
  L45():
    dr2 = tryDispatchBuiltin.1("[", u1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L47() else L46(10.0, dr2);
  L46(r17, u3):
    __2 = ldf `[` in base;
    r20 = dyn __2(u3, <int 1, 2>);
    goto L12(r17, r20);
  L50():
    dr4 = tryDispatchBuiltin.1("[", u5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L52() else L51(dr4);
  L51(u7):
    __3 = ldf `[` in base;
    r23 = dyn __3(u7, <int 1, 2>);
    goto L13(r23);
  L58():
    dr6 = tryDispatchBuiltin.1("[", u9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L60() else L59(10.0, dr6);
  L59(r27, u11):
    __4 = ldf `[` in base;
    r30 = dyn __4(u11, <int 3, 4>);
    goto L16(r27, r30);
  L63():
    dr8 = tryDispatchBuiltin.1("[", u13);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L65() else L64(dr8);
  L64(u15):
    __5 = ldf `[` in base;
    r32 = dyn __5(u15, <int 3, 4>);
    goto L14(r32);
  L72():
    dx8 = getTryDispatchBuiltinValue(dr10);
    goto L18(x10, dx8);
  L73():
    x16 = force? x15;
    checkMissing(x16);
    u20 = ld u;
    check L74() else D22();
  D22():
    deopt 76 [r36, x16, u20];
  L47():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(10.0, dx2);
  L52():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx4);
  L60():
    dx5 = getTryDispatchBuiltinValue(dr6);
    goto L16(10.0, dx5);
  L65():
    dx7 = getTryDispatchBuiltinValue(dr8);
    goto L14(dx7);
  L74():
    u21 = force? u20;
    checkMissing(u21);
    c10 = `is.object`(u21);
    if c10 then L75() else L76(r36, x16, u21);
  L19(r40, x20, dx11):
    r42 = `>`(x20, dx11);
    r43 = `||`(r40, r42);
    any = ldf any in base;
    r44 = dyn any(r43);
    check L78() else D23();
  L75():
    dr12 = tryDispatchBuiltin.1("[", u21);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L77() else L76(r36, x16, dr12);
  L76(r38, x18, u23):
    __7 = ldf `[` in base;
    r41 = dyn __7(u23, 2);
    goto L19(r38, x18, r41);
  D23():
    deopt 84 [r44];
  L77():
    dx10 = getTryDispatchBuiltinValue(dr12);
    goto L19(r36, x16, dx10);
  L78():
    goto L17(r44);
  }
}