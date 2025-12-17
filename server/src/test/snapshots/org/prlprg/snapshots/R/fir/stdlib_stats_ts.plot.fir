fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg ts_plot:cls, reg ldeaths:*, reg ldeaths1:V, reg p1:p(V +), reg mdeaths:*, reg mdeaths1:V, reg p2:p(V +), reg fdeaths:*, reg fdeaths1:V, reg p3:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg c:cls, reg r12:V, reg list:cls, reg r13:V, reg p4:p(V +), reg r15:V |
    mkenv;
    r = clos inner1536256705;
    st `ts.plot` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    ts_plot = ldf `ts.plot`;
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
      ldeaths = ld ldeaths;
      ldeaths1 = force? ldeaths;
      checkMissing(ldeaths1);
      return ldeaths1;
    };
    p2 = prom<V +>{
      mdeaths = ld mdeaths;
      mdeaths1 = force? mdeaths;
      checkMissing(mdeaths1);
      return mdeaths1;
    };
    p3 = prom<V +>{
      fdeaths = ld fdeaths;
      fdeaths1 = force? fdeaths;
      checkMissing(fdeaths1);
      return fdeaths1;
    };
    p4 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r9):
      return r9;
    L2():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r8 = dyn base1[xlab, ylab, lty]("year", "deaths", <lang c(`:`(1.0, 3.0))>);
      goto L0(r8);
    L1(r11):
      list = ldf list in base;
      r13 = dyn list("year", "deaths", r11);
      goto L0(r13);
    L4():
      c = ldf c in base;
      r12 = dyn c(<int 1, 2, 3>);
      goto L1(r12);
    L5():
      r10 = dyn base2(<lang `:`(1.0, 3.0)>);
      goto L1(r10);
    };
    r15 = dyn ts_plot[, , , gpars](p1, p2, p3, p4);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 15 [r15];
  L4():
    goto L0();
  L6():
    popenv;
    return r15;
  }
}
fun inner1536256705(`...`, gpars) {
  (reg ddd:dots, reg gpars:*) -+> V { var `...`:dots?, var gpars:*, reg gpars_isMissing:L, reg gpars_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg list1:cls, reg ddd1:dots?, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c:cls, reg r9:V, reg _in_:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg dots:*, reg dots1:V, reg names:cls, reg r12:V, reg p1:p(V +), reg pars:*, reg pars1:V, reg p2:p(V +), reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg m:*, reg m1:V, reg length:cls, reg r18:V, reg c1:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg gpars1:*, reg gpars2:V, reg dots2:*, reg dots3:V, reg c2:L, reg dots5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg m2:*, reg m3:V, reg __:cls, reg r21:V, reg c3:cls, reg r22:V, reg dots6:*, reg dots7:V, reg c4:L, reg dots9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg m4:*, reg m5:V, reg r23:V, reg __1:cls, reg r24:V, reg do_call:cls, reg dots10:*, reg dots11:V, reg p3:p(V +), reg r26:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg gpars3:*, reg gpars4:V, reg c5:L, reg gpars6:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r29:V, reg c6:V, reg c7:L, reg NCOL:cls, reg sers:*, reg sers1:V, reg p4:p(V +), reg r31:V, reg r32:V, reg c8:L, reg r33:V, reg deparse1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg substitute:cls, reg r36:V, reg p5:p(V +), reg r38:V, reg l:*, reg c9:L, reg r40:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx7:V, reg r42:V, reg dx8:V, reg r43:V, reg do_call1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg r46:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r47:V, reg r48:V, reg sers2:*, reg sers3:V, reg list2:cls, reg r49:V, reg gpars7:*, reg gpars8:V, reg c10:cls, reg r50:V, reg p6:p(V +), reg r52:V |
    mkenv;
    st `...` = ddd;
    gpars_isMissing = missing.0(gpars);
    if gpars_isMissing then L0() else L1(gpars);
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(gpars_orDefault):
    st gpars = gpars_orDefault;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L2(r5):
    st dots = r5;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L15():
    list1 = ldf list;
    check L17() else D0();
  L16():
    r4 = dyn base1(<sym ...>);
    goto L2(r4);
  D0():
    deopt 2 [];
  L3(r8):
    st pars = r8;
    _in_ = ldf `%in%`;
    check L22() else D3();
  L17():
    ddd1 = ld `...`;
    r6 = dyn list1[`...`](ddd1);
    check L18() else D1();
  L19():
    c = ldf c in base;
    r9 = dyn c("xlab", "ylab", "xlim", "ylim", "col", "lty", "lwd", "type", "main", "sub", "log");
    check L21() else D2();
  L20():
    r7 = dyn base2("xlab", "ylab", "xlim", "ylim", "col", "lty", "lwd", "type", "main", "sub", "log");
    goto L3(r7);
  D1():
    deopt 4 [r6];
  D2():
    deopt 20 [r9];
  D3():
    deopt 23 [];
  L18():
    goto L2(r6);
  L21():
    goto L3(r9);
  L22():
    p1 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      dots = ld dots;
      dots1 = force? dots;
      checkMissing(dots1);
      names = ldf names in base;
      r12 = dyn names(dots1);
      goto L0(r12);
    L2():
      r10 = dyn base3(<sym dots>);
      goto L0(r10);
    };
    p2 = prom<V +>{
      pars = ld pars;
      pars1 = force? pars;
      checkMissing(pars1);
      return pars1;
    };
    r15 = dyn _in_(p1, p2);
    check L23() else D4();
  D4():
    deopt 26 [r15];
  L23():
    st m = r15;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L24() else L25();
  L4(r17):
    c1 = `as.logical`(r17);
    if c1 then L28() else L5();
  L24():
    m = ld m;
    check L26() else D5();
  L25():
    r16 = dyn base4(<sym m>);
    goto L4(r16);
  D5():
    deopt 30 [m];
  L5():
    goto L9();
  L9():
    do_call = ldf `do.call`;
    check L44() else D13();
  L26():
    m1 = force? m;
    checkMissing(m1);
    length = ldf length in base;
    r18 = dyn length(m1);
    check L27() else D6();
  L28():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L29() else L30();
  D6():
    deopt 33 [r18];
  D13():
    deopt 56 [];
  L6(r20):
    st gpars = r20;
    dots6 = ld dots;
    check L38() else D11();
  L27():
    goto L4(r18);
  L29():
    gpars1 = ld gpars;
    check L31() else D7();
  L30():
    r19 = dyn base5(<sym gpars>, <lang `[`(dots, m)>);
    goto L6(r19);
  L44():
    p3 = prom<V +>{
      dots10 = ld dots;
      dots11 = force? dots10;
      checkMissing(dots11);
      return dots11;
    };
    r26 = dyn do_call("ts.union", p3);
    check L45() else D14();
  D7():
    deopt 36 [gpars1];
  D11():
    deopt 46 [dots6];
  D14():
    deopt 59 [r26];
  L31():
    gpars2 = force? gpars1;
    checkMissing(gpars2);
    dots2 = ld dots;
    check L32() else D8();
  L38():
    dots7 = force? dots6;
    checkMissing(dots7);
    c4 = `is.object`(dots7);
    if c4 then L39() else L40(dots7);
  L45():
    st sers = r26;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L46() else L47();
  D8():
    deopt 38 [dots2];
  L8(dx3):
    st dots = dx3;
    goto L9();
  L10(r28):
    c7 = `as.logical`(r28);
    if c7 then L53() else L11();
  L32():
    dots3 = force? dots2;
    checkMissing(dots3);
    c2 = `is.object`(dots3);
    if c2 then L33() else L34(dots3);
  L39():
    dr2 = tryDispatchBuiltin.1("[", dots7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(dr2);
  L40(dots9):
    m4 = ld m;
    check L42() else D12();
  L46():
    gpars3 = ld gpars;
    check L48() else D15();
  L47():
    r27 = dyn base6(<lang `$`(gpars, ylab)>);
    goto L10(r27);
  D12():
    deopt 48 [dots9, m4];
  D15():
    deopt 62 [gpars3];
  L7(dx1):
    c3 = ldf c in base;
    r22 = dyn c3(gpars2, dx1);
    check L37() else D10();
  L11():
    goto L14();
  L14():
    do_call1 = ldf `do.call`;
    check L65() else D20();
  L33():
    dr = tryDispatchBuiltin.1("[", dots3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(dots5):
    m2 = ld m;
    check L36() else D9();
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L42():
    m5 = force? m4;
    checkMissing(m5);
    r23 = `!`(m5);
    __1 = ldf `[` in base;
    r24 = dyn __1(dots9, r23);
    goto L8(r24);
  L48():
    gpars4 = force? gpars3;
    checkMissing(gpars4);
    c5 = `is.object`(gpars4);
    if c5 then L50() else L51(gpars4);
  L53():
    NCOL = ldf NCOL;
    check L54() else D16();
  D9():
    deopt 40 [dots5, m2];
  D10():
    deopt 44 [r22];
  D16():
    deopt 67 [];
  D20():
    deopt 84 [];
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L36():
    m3 = force? m2;
    __ = ldf `[` in base;
    r21 = dyn __(dots5, m3);
    goto L7(r21);
  L37():
    goto L6(r22);
  L49(dx6):
    c6 = `==`(dx6, NULL);
    goto L10(c6);
  L50():
    dr4 = tryDispatchBuiltin.1("$", gpars4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L52() else L51(dr4);
  L51(gpars6):
    r29 = `$`(gpars6, <sym ylab>);
    goto L49(r29);
  L54():
    p4 = prom<V +>{
      sers = ld sers;
      sers1 = force? sers;
      checkMissing(sers1);
      return sers1;
    };
    r31 = dyn NCOL(p4);
    check L55() else D17();
  L65():
    p6 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L2() else L3();
    L0(r46):
      return r46;
    L2():
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L4() else L5();
    L3():
      r45 = dyn base8(<lang list(sers, plot.type="single")>, <sym gpars>);
      goto L0(r45);
    L1(r48):
      gpars7 = ld gpars;
      gpars8 = force? gpars7;
      checkMissing(gpars8);
      c10 = ldf c in base;
      r50 = dyn c10(r48, gpars8);
      goto L0(r50);
    L4():
      sers2 = ld sers;
      sers3 = force? sers2;
      checkMissing(sers3);
      list2 = ldf list in base;
      r49 = dyn list2(sers3, "single");
      goto L1(r49);
    L5():
      r47 = dyn base9[, `plot.type`](<sym sers>, "single");
      goto L1(r47);
    };
    r52 = dyn do_call1("plot.ts", p6);
    check L66() else D21();
  D17():
    deopt 69 [r31];
  D21():
    deopt 87 [r52];
  L52():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L49(dx5);
  L55():
    r32 = `>`(r31, 1.0);
    c8 = `as.logical`(r32);
    if c8 then L56() else L12();
  L66():
    popenv;
    return r52;
  L12():
    deparse1 = ldf deparse1;
    check L58() else D18();
  L13(r33):
    l = ld gpars;
    c9 = `is.object`(l);
    if c9 then L61() else L62(r33, l);
  L56():
    goto L13("");
  D18():
    deopt 75 [];
  L58():
    p5 = prom<V +>{
      sym7 = ldf substitute;
      base7 = ldf substitute in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      substitute = ldf substitute in base;
      r36 = dyn substitute(<sym ...>);
      goto L0(r36);
    L2():
      r34 = dyn base7(<sym ...>);
      goto L0(r34);
    };
    r38 = dyn deparse1(p5);
    check L59() else D19();
  L60(r42, dx8):
    st gpars = dx8;
    goto L14();
  L61():
    dr6 = tryDispatchBuiltin.0("$<-", l, r33);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L63() else L62(r33, dr6);
  L62(r40, l2):
    r43 = `$<-`(l2, <sym ylab>, r33);
    goto L60(r40, r43);
  D19():
    deopt 77 [r38];
  L59():
    goto L13(r38);
  L63():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L60(r33, dx7);
  }
}