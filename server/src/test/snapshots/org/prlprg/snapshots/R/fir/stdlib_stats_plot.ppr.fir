fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg within:cls, reg rock:*, reg rock1:V, reg p1:p(V +), reg area:*, reg area1:V, reg r6:V, reg peri:*, reg peri1:V, reg r7:V, reg p2:p(V +), reg r9:V, reg par:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg c:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg ppr:cls, reg __:cls, reg r15:V, reg p4:p(V +), reg rock2:*, reg rock3:V, reg p5:p(V +), reg r18:V, reg plot:cls, reg rock_ppr:*, reg rock_ppr1:V, reg p6:p(V +), reg r20:V, reg plot1:cls, reg update:cls, reg rock_ppr2:*, reg rock_ppr3:V, reg p7:p(V +), reg r22:V, reg p8:p(V +), reg r24:V, reg plot2:cls, reg update1:cls, reg rock_ppr4:*, reg rock_ppr5:V, reg p9:p(V +), reg r26:V, reg p10:p(V +), reg r28:V |
    mkenv;
    r = clos inner719093340;
    st `plot.ppr` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    within = ldf within;
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
      rock = ld rock;
      rock1 = force? rock;
      checkMissing(rock1);
      return rock1;
    };
    p2 = prom<V +>{
      area = ld area;
      area1 = force? area;
      checkMissing(area1);
      r6 = `/`(area1, 10000.0);
      st area1 = r6;
      peri = ld peri;
      peri1 = force? peri;
      checkMissing(peri1);
      r7 = `/`(peri1, 10000.0);
      st peri1 = r7;
      invisible.0();
      return r7;
    };
    r9 = dyn within(p1, p2);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 12 [r9];
  L4():
    goto L0();
  L6():
    st rock1 = r9;
    par = ldf par;
    check L7() else D4();
  D4():
    deopt 15 [];
  L7():
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c = ldf c in base;
      r12 = dyn c(3.0, 2.0);
      goto L0(r12);
    L2():
      r10 = dyn base1(3.0, 2.0);
      goto L0(r10);
    };
    r14 = dyn par[mfrow](p3);
    check L8() else D5();
  D5():
    deopt 18 [r14];
  L8():
    ppr = ldf ppr;
    check L9() else D6();
  D6():
    deopt 20 [];
  L9():
    p4 = prom<V +>{
      __ = ldf `~` in base;
      r15 = dyn __(<lang log(perm)>, <lang `+`(`+`(area1, peri1), shape)>);
      return r15;
    };
    p5 = prom<V +>{
      rock2 = ld rock1;
      rock3 = force? rock2;
      checkMissing(rock3);
      return rock3;
    };
    r18 = dyn ppr[, data, nterms, `max.terms`](p4, p5, 2.0, 5.0);
    check L10() else D7();
  D7():
    deopt 28 [r18];
  L10():
    st `rock.ppr` = r18;
    plot = ldf plot;
    check L11() else D8();
  D8():
    deopt 31 [];
  L11():
    p6 = prom<V +>{
      rock_ppr = ld `rock.ppr`;
      rock_ppr1 = force? rock_ppr;
      checkMissing(rock_ppr1);
      return rock_ppr1;
    };
    r20 = dyn plot[, main](p6, "ppr(log(perm)~ ., nterms=2, max.terms=5)");
    check L12() else D9();
  D9():
    deopt 35 [r20];
  L12():
    plot1 = ldf plot;
    check L13() else D10();
  D10():
    deopt 37 [];
  L13():
    p8 = prom<V +>{
      update = ldf update;
      p7 = prom<V +>{
        rock_ppr2 = ld `rock.ppr`;
        rock_ppr3 = force? rock_ppr2;
        checkMissing(rock_ppr3);
        return rock_ppr3;
      };
      r22 = dyn update[, bass](p7, 5.0);
      return r22;
    };
    r24 = dyn plot1[, main](p8, "update(..., bass = 5)");
    check L14() else D11();
  D11():
    deopt 41 [r24];
  L14():
    plot2 = ldf plot;
    check L15() else D12();
  D12():
    deopt 43 [];
  L15():
    p10 = prom<V +>{
      update1 = ldf update;
      p9 = prom<V +>{
        rock_ppr4 = ld `rock.ppr`;
        rock_ppr5 = force? rock_ppr4;
        checkMissing(rock_ppr5);
        return rock_ppr5;
      };
      r26 = dyn update1[, `sm.method`, gcvpen](p9, "gcv", 2.0);
      return r26;
    };
    r28 = dyn plot2[, main](p10, "update(..., sm.method=\"gcv\", gcvpen=2)");
    check L16() else D13();
  D13():
    deopt 47 [r28];
  L16():
    popenv;
    return r28;
  }
}
fun inner719093340(x, ask, type, cex, main, xlab, ylab, `...`) {
  (reg x:*, reg ask:*, reg type:*, reg cex:*, reg main:*, reg xlab:*, reg ylab:*, reg ddd:dots) -+> V { var x:*, var ask:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, var cex:*, reg cex_isMissing:L, reg cex_orDefault:*, reg p:p(V +), var main:*, reg main_isMissing:L, reg main_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg quote:cls, reg r3:V, reg p1:p(V +), var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg quote1:cls, reg r7:V, reg p2:p(V +), var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var `...`:dots?, reg r9:cls, reg ppr_funs:cls, reg x1:*, reg x2:V, reg p3:p(V +), reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg missing:cls, reg r14:V, reg r15:V, reg c:L, reg devAskNewPage:cls, reg ask1:*, reg ask2:V, reg p4:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg on_exit:cls, reg r20:V, reg x3:*, reg x4:V, reg c1:L, reg r23:I, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg r25:I, reg dx1:V, reg r26:V, reg r27:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x7:V, reg order:cls, reg obj:*, reg obj1:V, reg c3:L, reg obj3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r28:V, reg c4:L, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg i5:*, reg i6:V, reg __:cls, reg r29:V, reg p5:p(V +), reg r31:V, reg format:cls, reg x8:*, reg x9:V, reg c5:L, reg x11:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r32:V, reg c6:L, reg dx11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg i7:*, reg i8:V, reg __1:cls, reg r33:V, reg p6:p(V +), reg r35:V, reg plot:cls, reg obj4:*, reg obj5:V, reg c7:L, reg obj7:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg r36:V, reg c8:L, reg dx17:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg ord:*, reg ord1:V, reg i9:*, reg i10:V, reg __2:cls, reg r37:V, reg p7:p(V +), reg obj8:*, reg obj9:V, reg c9:L, reg obj11:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg r39:V, reg c10:L, reg dx23:V, reg dr16:V, reg dc8:L, reg dx24:V, reg dx25:V, reg ord2:*, reg ord3:V, reg i11:*, reg i12:V, reg __3:cls, reg r40:V, reg p8:p(V +), reg type1:*, reg type2:V, reg p9:p(V +), reg cex1:*, reg cex2:V, reg p10:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg main1:*, reg main2:V, reg is_call:cls, reg r46:V, reg c11:L, reg eval:cls, reg main3:*, reg main4:V, reg p11:p(V +), reg r48:V, reg main5:*, reg main6:V, reg p12:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg xlab1:*, reg xlab2:V, reg is_call1:cls, reg r52:V, reg c12:L, reg eval1:cls, reg xlab3:*, reg xlab4:V, reg p13:p(V +), reg r54:V, reg xlab5:*, reg xlab6:V, reg p14:p(V +), reg ylab1:*, reg ylab2:V, reg p15:p(V +), reg ddd1:dots?, reg r57:V, reg force:cls, reg bet_i:*, reg bet_i1:V, reg p16:p(V +), reg r59:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r60:V, reg r61:V, reg invisible:cls, reg r62:V |
    mkenv;
    st x = x;
    st ask = ask;
    type_isMissing = missing.0(type);
    if type_isMissing then L0("o") else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    cex_isMissing = missing.0(cex);
    if cex_isMissing then L1() else L2(cex);
  L1():
    p = prom<V +>{
      return 0.5;
    };
    goto L2(p);
  L2(cex_orDefault):
    st cex = cex_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L3() else L4(main);
  L3():
    p1 = prom<V +>{
      sym = ldf quote;
      base = ldf quote in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      quote = ldf quote in base;
      r3 = dyn quote(<lang bquote(`~`(`*`(`[`("term", .(i)), ":"), `~`(`==`(hat(`[`(beta, .(i))), .(bet.i)))))>);
      goto L0(r3);
    L2():
      r1 = dyn base(<lang bquote(`~`(`*`(`[`("term", .(i)), ":"), `~`(`==`(hat(`[`(beta, .(i))), .(bet.i)))))>);
      goto L0(r1);
    };
    goto L4(p1);
  L4(main_orDefault):
    st main = main_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L5() else L6(xlab);
  L5():
    p2 = prom<V +>{
      sym1 = ldf quote;
      base1 = ldf quote in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      quote1 = ldf quote in base;
      r7 = dyn quote1(<lang bquote(`*`(`^`(`[`(bold(alpha), .(i)), T), bold(x)))>);
      goto L0(r7);
    L2():
      r5 = dyn base1(<lang bquote(`*`(`^`(`[`(bold(alpha), .(i)), T), bold(x)))>);
      goto L0(r5);
    };
    goto L6(p2);
  L6(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L7("") else L7(ylab);
  L7(ylab_orDefault):
    st ylab = ylab_orDefault;
    st `...` = ddd;
    r9 = clos inner1912617395;
    st `ppr.funs` = r9;
    ppr_funs = ldf `ppr.funs`;
    check L17() else D0();
  D0():
    deopt 4 [];
  L17():
    p3 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r11 = dyn ppr_funs(p3);
    check L18() else D1();
  D1():
    deopt 6 [r11];
  L18():
    st obj = r11;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L8(r13):
    r15 = `!`(r13);
    c = `as.logical`(r15);
    if c then L21() else L9();
  L19():
    missing = ldf missing in base;
    r14 = dyn missing(<sym ask>);
    goto L8(r14);
  L20():
    r12 = dyn base2(<sym ask>);
    goto L8(r12);
  L9():
    goto L11();
  L11():
    x3 = ld x;
    check L27() else D4();
  L21():
    devAskNewPage = ldf devAskNewPage;
    check L22() else D2();
  D2():
    deopt 13 [];
  D4():
    deopt 23 [1, x3];
  L22():
    p4 = prom<V +>{
      ask1 = ld ask;
      ask2 = force? ask1;
      checkMissing(ask2);
      return ask2;
    };
    r17 = dyn devAskNewPage(p4);
    check L23() else D3();
  L27():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L29() else L30(1, x4);
  D3():
    deopt 15 [r17];
  L23():
    st oask = r17;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L28(r25, dx1):
    r27 = `:`(r25, dx1);
    s = toForSeq(r27);
    l = length(s);
    i = 0;
    goto L14(i);
  L29():
    dr = tryDispatchBuiltin.1("$", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(1, dr);
  L30(r23, x6):
    r26 = `$`(x6, <sym mu>);
    goto L28(r23, r26);
  L10(r19):
    goto L11();
  L14(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L13() else L15();
  L24():
    on_exit = ldf `on.exit` in base;
    r20 = dyn on_exit(<lang devAskNewPage(oask)>);
    goto L10(r20);
  L25():
    r18 = dyn base3(<lang devAskNewPage(oask)>);
    goto L10(r18);
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L28(1, dx);
  L13():
    force = ldf force;
    check L38() else D11();
  L15():
    x7 = `[[`(s, i2, NULL, TRUE);
    st i = x7;
    order = ldf order;
    check L32() else D5();
  D5():
    deopt 30 [i2];
  D11():
    deopt 62 [];
  L32():
    p5 = prom<V +>{
      obj = ld obj;
      obj1 = force? obj;
      checkMissing(obj1);
      c3 = `is.object`(obj1);
      if c3 then L2() else L3(obj1);
    L1(dx3):
      c4 = `is.object`(dx3);
      if c4 then L5() else L6();
    L2():
      dr2 = tryDispatchBuiltin.1("$", obj1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(obj3):
      r28 = `$`(obj3, <sym x>);
      goto L1(r28);
    L0(dx7):
      return dx7;
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    L5():
      dr4 = tryDispatchBuiltin.1("[", dx3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6();
    L6():
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[` in base;
      r29 = dyn __(dx3, <missing>, i6);
      goto L0(r29);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx6);
    };
    r31 = dyn order(p5);
    check L33() else D6();
  L38():
    p16 = prom<V +>{
      bet_i = ld `bet.i`;
      bet_i1 = force? bet_i;
      checkMissing(bet_i1);
      return bet_i1;
    };
    r59 = dyn force(p16);
    check L39() else D12();
  D6():
    deopt 32 [i2, r31];
  D12():
    deopt 64 [r59];
  L33():
    st ord = r31;
    format = ldf format;
    check L34() else D7();
  L39():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L40() else L41();
  D7():
    deopt 35 [i2];
  L16(r61):
    popenv;
    return r61;
  L34():
    p6 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      c5 = `is.object`(x9);
      if c5 then L2() else L3(x9);
    L1(dx9):
      c6 = `is.object`(dx9);
      if c6 then L5() else L6(dx9);
    L2():
      dr6 = tryDispatchBuiltin.1("$", x9);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(x11):
      r32 = `$`(x11, <sym beta>);
      goto L1(r32);
    L0(dx13):
      return dx13;
    L4():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx8);
    L5():
      dr8 = tryDispatchBuiltin.1("[[", dx9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(dr8);
    L6(dx11):
      i7 = ld i;
      i8 = force? i7;
      __1 = ldf `[[` in base;
      r33 = dyn __1(dx11, i8);
      goto L0(r33);
    L7():
      dx12 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx12);
    };
    r35 = dyn format[, digits](p6, 3.0);
    check L35() else D8();
  L40():
    invisible = ldf invisible in base;
    r62 = dyn invisible();
    check L42() else D13();
  L41():
    r60 = dyn base6();
    goto L16(r60);
  D8():
    deopt 39 [i2, r35];
  D13():
    deopt 68 [r62];
  L35():
    st `bet.i` = r35;
    plot = ldf plot;
    check L36() else D9();
  L42():
    goto L16(r62);
  D9():
    deopt 42 [i2];
  L36():
    p7 = prom<V +>{
      obj4 = ld obj;
      obj5 = force? obj4;
      checkMissing(obj5);
      c7 = `is.object`(obj5);
      if c7 then L2() else L3(obj5);
    L1(dx15):
      c8 = `is.object`(dx15);
      if c8 then L5() else L6(dx15);
    L2():
      dr10 = tryDispatchBuiltin.1("$", obj5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(obj7):
      r36 = `$`(obj7, <sym x>);
      goto L1(r36);
    L0(dx19):
      return dx19;
    L4():
      dx14 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx14);
    L5():
      dr12 = tryDispatchBuiltin.1("[", dx15);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(dx17):
      ord = ld ord;
      ord1 = force? ord;
      i9 = ld i;
      i10 = force? i9;
      __2 = ldf `[` in base;
      r37 = dyn __2(dx17, ord1, i10);
      goto L0(r37);
    L7():
      dx18 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx18);
    };
    p8 = prom<V +>{
      obj8 = ld obj;
      obj9 = force? obj8;
      checkMissing(obj9);
      c9 = `is.object`(obj9);
      if c9 then L2() else L3(obj9);
    L1(dx21):
      c10 = `is.object`(dx21);
      if c10 then L5() else L6(dx21);
    L2():
      dr14 = tryDispatchBuiltin.1("$", obj9);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L4() else L3(dr14);
    L3(obj11):
      r39 = `$`(obj11, <sym y>);
      goto L1(r39);
    L0(dx25):
      return dx25;
    L4():
      dx20 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx20);
    L5():
      dr16 = tryDispatchBuiltin.1("[", dx21);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L7() else L6(dr16);
    L6(dx23):
      ord2 = ld ord;
      ord3 = force? ord2;
      i11 = ld i;
      i12 = force? i11;
      __3 = ldf `[` in base;
      r40 = dyn __3(dx23, ord3, i12);
      goto L0(r40);
    L7():
      dx24 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx24);
    };
    p9 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p10 = prom<V +>{
      cex1 = ld cex;
      cex2 = force? cex1;
      checkMissing(cex2);
      return cex2;
    };
    p12 = prom<V +>{
      sym4 = ldf `is.call`;
      base4 = ldf `is.call` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r45):
      c11 = `as.logical`(r45);
      if c11 then L4() else L1();
    L2():
      main1 = ld main;
      main2 = force? main1;
      checkMissing(main2);
      is_call = ldf `is.call` in base;
      r46 = dyn is_call(main2);
      goto L0(r46);
    L3():
      r44 = dyn base4(<sym main>);
      goto L0(r44);
    L1():
      main5 = ld main;
      main6 = force? main5;
      checkMissing(main6);
      return main6;
    L4():
      eval = ldf eval;
      p11 = prom<V +>{
        main3 = ld main;
        main4 = force? main3;
        checkMissing(main4);
        return main4;
      };
      r48 = dyn eval(p11);
      return r48;
    };
    p14 = prom<V +>{
      sym5 = ldf `is.call`;
      base5 = ldf `is.call` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r51):
      c12 = `as.logical`(r51);
      if c12 then L4() else L1();
    L2():
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      is_call1 = ldf `is.call` in base;
      r52 = dyn is_call1(xlab2);
      goto L0(r52);
    L3():
      r50 = dyn base5(<sym xlab>);
      goto L0(r50);
    L1():
      xlab5 = ld xlab;
      xlab6 = force? xlab5;
      checkMissing(xlab6);
      return xlab6;
    L4():
      eval1 = ldf eval;
      p13 = prom<V +>{
        xlab3 = ld xlab;
        xlab4 = force? xlab3;
        checkMissing(xlab4);
        return xlab4;
      };
      r54 = dyn eval1(p13);
      return r54;
    };
    p15 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    ddd1 = ld `...`;
    r57 = dyn plot[, , type, cex, main, xlab, ylab, `...`](p7, p8, p9, p10, p12, p14, p15, ddd1);
    check L37() else D10();
  D10():
    deopt 56 [i2, r57];
  L37():
    goto L14(i2);
  }
}
fun inner1912617395(obj) {
  (reg obj:*) -+> V { var obj:*, reg obj1:*, reg obj2:V, reg c:L, reg obj4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg obj5:*, reg obj6:V, reg c1:L, reg obj8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg obj9:*, reg obj10:V, reg c2:L, reg obj12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r2:V, reg sm:*, reg sm1:V, reg c3:L, reg sm3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __:cls, reg r3:V, reg sm4:*, reg sm5:V, reg c4:L, reg sm7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __1:cls, reg r4:V, reg sm8:*, reg sm9:V, reg c5:L, reg sm11:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __2:cls, reg r5:V, reg q:*, reg q1:V, reg r6:V, reg m:*, reg m1:V, reg p:*, reg p1:V, reg q2:*, reg q3:V, reg r7:V, reg r8:V, reg r9:V, reg jf:*, reg jf1:V, reg m2:*, reg m3:V, reg n:*, reg n1:V, reg r10:V, reg r11:V, reg matrix:cls, reg sm12:*, reg sm13:V, reg c6:L, reg sm15:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg jf2:*, reg jf3:V, reg mu:*, reg mu1:V, reg n2:*, reg n3:V, reg r12:V, reg r13:V, reg r14:V, reg __3:cls, reg r15:V, reg p2:p(V +), reg n4:*, reg n5:V, reg p3:p(V +), reg mu2:*, reg mu3:V, reg p4:p(V +), reg r19:V, reg matrix1:cls, reg sm16:*, reg sm17:V, reg c7:L, reg sm19:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg jt:*, reg jt1:V, reg mu4:*, reg mu5:V, reg n6:*, reg n7:V, reg r20:V, reg r21:V, reg r22:V, reg __4:cls, reg r23:V, reg p5:p(V +), reg n8:*, reg n9:V, reg p6:p(V +), reg mu6:*, reg mu7:V, reg p7:p(V +), reg r27:V, reg sym:cls, reg base:cls, reg guard:L, reg r28:V, reg r29:V, reg t:*, reg t1:V, reg f:*, reg f1:V, reg list:cls, reg r30:V |
    mkenv;
    st obj = obj;
    obj1 = ld obj;
    check L4() else D0();
  D0():
    deopt 0 [obj1];
  L4():
    obj2 = force? obj1;
    checkMissing(obj2);
    c = `is.object`(obj2);
    if c then L6() else L7(obj2);
  L5(dx1):
    st p = dx1;
    obj5 = ld obj;
    check L9() else D1();
  L6():
    dr = tryDispatchBuiltin.1("$", obj2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(obj4):
    r = `$`(obj4, <sym p>);
    goto L5(r);
  D1():
    deopt 4 [obj5];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L9():
    obj6 = force? obj5;
    checkMissing(obj6);
    c1 = `is.object`(obj6);
    if c1 then L11() else L12(obj6);
  L10(dx3):
    st q = dx3;
    obj9 = ld obj;
    check L14() else D2();
  L11():
    dr2 = tryDispatchBuiltin.1("$", obj6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L13() else L12(dr2);
  L12(obj8):
    r1 = `$`(obj8, <sym q>);
    goto L10(r1);
  D2():
    deopt 8 [obj9];
  L13():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L14():
    obj10 = force? obj9;
    checkMissing(obj10);
    c2 = `is.object`(obj10);
    if c2 then L16() else L17(obj10);
  L15(dx5):
    st sm = dx5;
    sm = ld sm;
    check L19() else D3();
  L16():
    dr4 = tryDispatchBuiltin.1("$", obj10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L18() else L17(dr4);
  L17(obj12):
    r2 = `$`(obj12, <sym smod>);
    goto L15(r2);
  D3():
    deopt 12 [sm];
  L18():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L15(dx4);
  L19():
    sm1 = force? sm;
    checkMissing(sm1);
    c3 = `is.object`(sm1);
    if c3 then L20() else L21(sm1);
  L0(dx7):
    st n = dx7;
    sm4 = ld sm;
    check L23() else D4();
  L20():
    dr6 = tryDispatchBuiltin.1("[", sm1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L22() else L21(dr6);
  L21(sm3):
    __ = ldf `[` in base;
    r3 = dyn __(sm3, 4);
    goto L0(r3);
  D4():
    deopt 18 [sm4];
  L22():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L0(dx6);
  L23():
    sm5 = force? sm4;
    checkMissing(sm5);
    c4 = `is.object`(sm5);
    if c4 then L24() else L25(sm5);
  L1(dx9):
    st mu = dx9;
    sm8 = ld sm;
    check L27() else D5();
  L24():
    dr8 = tryDispatchBuiltin.1("[", sm5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L26() else L25(dr8);
  L25(sm7):
    __1 = ldf `[` in base;
    r4 = dyn __1(sm7, 5);
    goto L1(r4);
  D5():
    deopt 24 [sm8];
  L26():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L1(dx8);
  L27():
    sm9 = force? sm8;
    checkMissing(sm9);
    c5 = `is.object`(sm9);
    if c5 then L28() else L29(sm9);
  L2(dx11):
    st m = dx11;
    q = ld q;
    check L31() else D6();
  L28():
    dr10 = tryDispatchBuiltin.1("[", sm9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L30() else L29(dr10);
  L29(sm11):
    __2 = ldf `[` in base;
    r5 = dyn __2(sm11, 1);
    goto L2(r5);
  D6():
    deopt 30 [q];
  L30():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L2(dx10);
  L31():
    q1 = force? q;
    checkMissing(q1);
    r6 = `+`(q1, 6.0);
    m = ld m;
    check L32() else D7();
  D7():
    deopt 33 [r6, m];
  L32():
    m1 = force? m;
    checkMissing(m1);
    p = ld p;
    check L33() else D8();
  D8():
    deopt 34 [r6, m1, p];
  L33():
    p1 = force? p;
    checkMissing(p1);
    q2 = ld q;
    check L34() else D9();
  D9():
    deopt 35 [r6, m1, p1, q2];
  L34():
    q3 = force? q2;
    checkMissing(q3);
    r7 = `+`(p1, q3);
    r8 = `*`(m1, r7);
    r9 = `+`(r6, r8);
    st jf = r9;
    jf = ld jf;
    check L35() else D10();
  D10():
    deopt 41 [jf];
  L35():
    jf1 = force? jf;
    checkMissing(jf1);
    m2 = ld m;
    check L36() else D11();
  D11():
    deopt 42 [jf1, m2];
  L36():
    m3 = force? m2;
    checkMissing(m3);
    n = ld n;
    check L37() else D12();
  D12():
    deopt 43 [jf1, m3, n];
  L37():
    n1 = force? n;
    checkMissing(n1);
    r10 = `*`(m3, n1);
    r11 = `+`(jf1, r10);
    st jt = r11;
    matrix = ldf matrix;
    check L38() else D13();
  D13():
    deopt 49 [];
  L38():
    p2 = prom<V +>{
      sm12 = ld sm;
      sm13 = force? sm12;
      checkMissing(sm13);
      c6 = `is.object`(sm13);
      if c6 then L1() else L2(sm13);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", sm13);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(sm15):
      jf2 = ld jf;
      jf3 = force? jf2;
      checkMissing(jf3);
      mu = ld mu;
      mu1 = force? mu;
      checkMissing(mu1);
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      r12 = `*`(mu1, n3);
      r13 = `:`(1, r12);
      r14 = `+`(jf3, r13);
      __3 = ldf `[` in base;
      r15 = dyn __3(sm15, r14);
      goto L0(r15);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p3 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      return n5;
    };
    p4 = prom<V +>{
      mu2 = ld mu;
      mu3 = force? mu2;
      checkMissing(mu3);
      return mu3;
    };
    r19 = dyn matrix(p2, p3, p4);
    check L39() else D14();
  D14():
    deopt 53 [r19];
  L39():
    st f = r19;
    matrix1 = ldf matrix;
    check L40() else D15();
  D15():
    deopt 56 [];
  L40():
    p5 = prom<V +>{
      sm16 = ld sm;
      sm17 = force? sm16;
      checkMissing(sm17);
      c7 = `is.object`(sm17);
      if c7 then L1() else L2(sm17);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", sm17);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(sm19):
      jt = ld jt;
      jt1 = force? jt;
      checkMissing(jt1);
      mu4 = ld mu;
      mu5 = force? mu4;
      checkMissing(mu5);
      n6 = ld n;
      n7 = force? n6;
      checkMissing(n7);
      r20 = `*`(mu5, n7);
      r21 = `:`(1, r20);
      r22 = `+`(jt1, r21);
      __4 = ldf `[` in base;
      r23 = dyn __4(sm19, r22);
      goto L0(r23);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p6 = prom<V +>{
      n8 = ld n;
      n9 = force? n8;
      checkMissing(n9);
      return n9;
    };
    p7 = prom<V +>{
      mu6 = ld mu;
      mu7 = force? mu6;
      checkMissing(mu7);
      return mu7;
    };
    r27 = dyn matrix1(p5, p6, p7);
    check L41() else D16();
  D16():
    deopt 60 [r27];
  L41():
    st t = r27;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L42() else L43();
  L3(r29):
    popenv;
    return r29;
  L42():
    t = ld t;
    check L44() else D17();
  L43():
    r28 = dyn base[x, y](<sym t>, <sym f>);
    goto L3(r28);
  D17():
    deopt 64 [t];
  L44():
    t1 = force? t;
    checkMissing(t1);
    f = ld f;
    check L45() else D18();
  D18():
    deopt 67 [f];
  L45():
    f1 = force? f;
    checkMissing(f1);
    list = ldf list in base;
    r30 = dyn list(t1, f1);
    check L46() else D19();
  D19():
    deopt 71 [r30];
  L46():
    goto L3(r30);
  }
}