fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg biplot:cls, reg princomp:cls, reg USArrests:*, reg USArrests1:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V |
    mkenv;
    r = clos inner4222064650;
    st `biplot.princomp` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    biplot = ldf biplot;
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
    p2 = prom<V +>{
      princomp = ldf princomp;
      p1 = prom<V +>{
        USArrests = ld USArrests;
        USArrests1 = force? USArrests;
        checkMissing(USArrests1);
        return USArrests1;
      };
      r6 = dyn princomp(p1);
      return r6;
    };
    r8 = dyn biplot(p2);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r8];
  L4():
    goto L0();
  L6():
    popenv;
    return r8;
  }
}
fun inner4222064650(x, choices, scale, `pc.biplot`, `...`) {
  (reg x:*, reg choices:*, reg scale:*, reg pc_biplot:*, reg ddd:dots) -+> V { var x:*, var choices:*, reg choices_isMissing:L, reg choices_orDefault:*, reg p:p(V +), var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var `pc.biplot`:*, reg pc_biplot_isMissing:L, reg pc_biplot_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg choices1:*, reg choices2:V, reg length:cls, reg r3:V, reg r4:V, reg c:L, reg stop:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x1:*, reg x2:V, reg c1:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg length1:cls, reg r10:V, reg r11:V, reg c2:L, reg stop1:cls, reg gettextf:cls, reg deparse1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg substitute:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg p2:p(V +), reg r18:V, reg p3:p(V +), reg r20:V, reg x5:*, reg x6:V, reg c3:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r22:V, reg c4:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg choices3:*, reg choices4:V, reg __:cls, reg r23:V, reg ____:cls, reg x9:*, reg x10:V, reg c5:L, reg x12:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r24:V, reg p4:p(V +), reg r26:V, reg lam:*, reg lam1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg lam4:V, reg r28:V, reg n:*, reg n1:V, reg r29:V, reg r30:V, reg scale1:*, reg scale2:V, reg r31:V, reg c6:L, reg c7:V, reg scale3:*, reg scale4:V, reg r32:V, reg c9:L, reg c10:V, reg c12:L, reg warning:cls, reg r33:V, reg scale5:*, reg scale6:V, reg r35:V, reg c13:L, reg lam5:*, reg lam6:V, reg scale7:*, reg scale8:V, reg r36:V, reg pc_biplot1:*, reg pc_biplot2:V, reg c14:L, reg lam7:*, reg lam8:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg lam11:V, reg r39:V, reg n2:*, reg n3:V, reg r40:V, reg r41:V, reg biplot_default:cls, reg t:cls, reg t1:cls, reg scores:*, reg scores1:V, reg c15:L, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg choices5:*, reg choices6:V, reg __1:cls, reg r43:V, reg p5:p(V +), reg r45:V, reg lam12:*, reg lam13:V, reg r46:V, reg p6:p(V +), reg r48:V, reg p7:p(V +), reg t2:cls, reg t3:cls, reg x13:*, reg x14:V, reg c16:L, reg x16:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r50:V, reg c17:L, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg choices7:*, reg choices8:V, reg __2:cls, reg r51:V, reg p8:p(V +), reg r53:V, reg lam14:*, reg lam15:V, reg r54:V, reg p9:p(V +), reg r56:V, reg p10:p(V +), reg ddd1:dots?, reg r58:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r59:V, reg r60:V, reg invisible:cls, reg r61:V |
    mkenv;
    st x = x;
    choices_isMissing = missing.0(choices);
    if choices_isMissing then L0() else L1(choices);
  L0():
    p = prom<V +>{
      return <int 1, 2>;
    };
    goto L1(p);
  L1(choices_orDefault):
    st choices = choices_orDefault;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L2(1.0) else L2(scale);
  L2(scale_orDefault):
    st scale = scale_orDefault;
    pc_biplot_isMissing = missing.0(pc_biplot);
    if pc_biplot_isMissing then L3(FALSE) else L3(pc_biplot);
  L3(pc_biplot_orDefault):
    st `pc.biplot` = pc_biplot_orDefault;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L4(r2):
    r4 = `!=`(r2, 2);
    c = `as.logical`(r4);
    if c then L25() else L5();
  L21():
    choices1 = ld choices;
    check L23() else D0();
  L22():
    r1 = dyn base(<sym choices>);
    goto L4(r1);
  D0():
    deopt 2 [choices1];
  L5():
    goto L6();
  L6():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L23():
    choices2 = force? choices1;
    checkMissing(choices2);
    length = ldf length in base;
    r3 = dyn length(choices2);
    check L24() else D1();
  L25():
    stop = ldf stop;
    check L26() else D2();
  D1():
    deopt 5 [r3];
  D2():
    deopt 9 [];
  L7(r8):
    r11 = `!`(r8);
    c2 = `as.logical`(r11);
    if c2 then L37() else L8();
  L24():
    goto L4(r3);
  L26():
    r5 = dyn stop("length of choices must be 2");
    check L27() else D3();
  L29():
    x1 = ld x;
    check L31() else D4();
  L30():
    r7 = dyn base1(<lang `<-`(scores, `$`(x, scores))>);
    goto L7(r7);
  D3():
    deopt 11 [r5];
  D4():
    deopt 16 [x1];
  L8():
    goto L9();
  L9():
    x5 = ld x;
    check L41() else D8();
  L27():
    goto L6();
  L31():
    x2 = force? x1;
    checkMissing(x2);
    c1 = `is.object`(x2);
    if c1 then L33() else L34(x2);
  L37():
    stop1 = ldf stop;
    check L38() else D6();
  D6():
    deopt 24 [];
  D8():
    deopt 31 [x5];
  L32(dx1):
    st scores = dx1;
    length1 = ldf length in base;
    r10 = dyn length1(dx1);
    check L36() else D5();
  L33():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(x4):
    r9 = `$`(x4, <sym scores>);
    goto L32(r9);
  L38():
    p3 = prom<V +>{
      gettextf = ldf gettextf;
      p2 = prom<V +>{
        deparse1 = ldf deparse1;
        p1 = prom<V +>{
          sym2 = ldf substitute;
          base2 = ldf substitute in base;
          guard2 = `==`.4(sym2, base2);
          if guard2 then L1() else L2();
        L0(r13):
          return r13;
        L1():
          substitute = ldf substitute in base;
          r14 = dyn substitute(<sym x>);
          goto L0(r14);
        L2():
          r12 = dyn base2(<sym x>);
          goto L0(r12);
        };
        r16 = dyn deparse1(p1);
        return r16;
      };
      r18 = dyn gettextf("object '%s' has no scores", p2);
      return r18;
    };
    r20 = dyn stop1[, domain](p3, NA_LGL);
    check L39() else D7();
  L41():
    x6 = force? x5;
    checkMissing(x6);
    c3 = `is.object`(x6);
    if c3 then L43() else L44(x6);
  D5():
    deopt 21 [r10];
  D7():
    deopt 28 [r20];
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L32(dx);
  L36():
    goto L7(r10);
  L39():
    goto L9();
  L42(dx3):
    c4 = `is.object`(dx3);
    if c4 then L46() else L47(dx3);
  L43():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L45() else L44(dr2);
  L44(x8):
    r22 = `$`(x8, <sym sdev>);
    goto L42(r22);
  L10(dx7):
    st lam = dx7;
    ____ = ldf `%||%`;
    check L50() else D10();
  L45():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L42(dx2);
  L46():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L48() else L47(dr4);
  L47(dx5):
    choices3 = ld choices;
    check L49() else D9();
  D9():
    deopt 34 [dx5, choices3];
  D10():
    deopt 39 [];
  L48():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx6);
  L49():
    choices4 = force? choices3;
    __ = ldf `[` in base;
    r23 = dyn __(dx5, choices4);
    goto L10(r23);
  L50():
    p4 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c5 = `is.object`(x10);
      if c5 then L1() else L2(x10);
    L0(dx9):
      return dx9;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x12):
      r24 = `$`(x12, <sym n.obs>);
      goto L0(r24);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    r26 = dyn ____(p4, 1.0);
    check L51() else D11();
  D11():
    deopt 42 [r26];
  L51():
    st n = r26;
    lam = ld lam;
    check L52() else D12();
  D12():
    deopt 44 [lam];
  L52():
    lam1 = force? lam;
    checkMissing(lam1);
    sym3 = ldf sqrt;
    base3 = ldf sqrt in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L11(lam4, r28):
    r30 = `*`(lam4, r28);
    st lam = r30;
    scale1 = ld scale;
    check L56() else D14();
  L53():
    n = ld n;
    check L55() else D13();
  L54():
    r27 = dyn base3(<sym n>);
    goto L11(lam1, r27);
  D13():
    deopt 46 [lam1, n];
  D14():
    deopt 51 [scale1];
  L55():
    n1 = force? n;
    checkMissing(n1);
    r29 = sqrt(n1);
    goto L11(lam1, r29);
  L56():
    scale2 = force? scale1;
    checkMissing(scale2);
    r31 = `<`(scale2, 0.0);
    c6 = `as.logical`(r31);
    if c6 then L12(c6) else L57();
  L12(c7):
    c12 = `as.logical`(c7);
    if c12 then L60() else L13();
  L57():
    scale3 = ld scale;
    check L58() else D15();
  D15():
    deopt 55 [c6, scale3];
  L13():
    goto L14();
  L14():
    scale5 = ld scale;
    check L64() else D18();
  L58():
    scale4 = force? scale3;
    checkMissing(scale4);
    r32 = `>`(scale4, 1.0);
    c9 = `as.logical`(r32);
    c10 = `||`(c6, c9);
    goto L12(c10);
  L60():
    warning = ldf warning;
    check L61() else D16();
  D16():
    deopt 61 [];
  D18():
    deopt 66 [scale5];
  L61():
    r33 = dyn warning("'scale' is outside [0, 1]");
    check L62() else D17();
  L64():
    scale6 = force? scale5;
    checkMissing(scale6);
    r35 = `!=`(scale6, 0.0);
    c13 = `as.logical`(r35);
    if c13 then L65() else L15();
  D17():
    deopt 63 [r33];
  L15():
    st lam = 1.0;
    goto L16();
  L16():
    pc_biplot1 = ld `pc.biplot`;
    check L69() else D21();
  L62():
    goto L14();
  L65():
    lam5 = ld lam;
    check L66() else D19();
  D19():
    deopt 70 [lam5];
  D21():
    deopt 78 [pc_biplot1];
  L66():
    lam6 = force? lam5;
    checkMissing(lam6);
    scale7 = ld scale;
    check L67() else D20();
  L69():
    pc_biplot2 = force? pc_biplot1;
    checkMissing(pc_biplot2);
    c14 = `as.logical`(pc_biplot2);
    if c14 then L70() else L17();
  D20():
    deopt 71 [lam6, scale7];
  L17():
    goto L19();
  L19():
    biplot_default = ldf `biplot.default`;
    check L76() else D24();
  L67():
    scale8 = force? scale7;
    checkMissing(scale8);
    r36 = `^`(lam6, scale8);
    st lam = r36;
    goto L16();
  L70():
    lam7 = ld lam;
    check L71() else D22();
  D22():
    deopt 80 [lam7];
  D24():
    deopt 90 [];
  L71():
    lam8 = force? lam7;
    checkMissing(lam8);
    sym4 = ldf sqrt;
    base4 = ldf sqrt in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L72() else L73();
  L76():
    p7 = prom<V +>{
      t = ldf t;
      p6 = prom<V +>{
        t1 = ldf t;
        p5 = prom<V +>{
          scores = ld scores;
          scores1 = force? scores;
          checkMissing(scores1);
          c15 = `is.object`(scores1);
          if c15 then L1() else L2();
        L0(dx11):
          return dx11;
        L1():
          dr8 = tryDispatchBuiltin.1("[", scores1);
          dc4 = getTryDispatchBuiltinDispatched(dr8);
          if dc4 then L3() else L2();
        L2():
          choices5 = ld choices;
          choices6 = force? choices5;
          __1 = ldf `[` in base;
          r43 = dyn __1(scores1, <missing>, choices6);
          goto L0(r43);
        L3():
          dx10 = getTryDispatchBuiltinValue(dr8);
          goto L0(dx10);
        };
        r45 = dyn t1(p5);
        lam12 = ld lam;
        lam13 = force? lam12;
        checkMissing(lam13);
        r46 = `/`(r45, lam13);
        return r46;
      };
      r48 = dyn t(p6);
      return r48;
    };
    p10 = prom<V +>{
      t2 = ldf t;
      p9 = prom<V +>{
        t3 = ldf t;
        p8 = prom<V +>{
          x13 = ld x;
          x14 = force? x13;
          checkMissing(x14);
          c16 = `is.object`(x14);
          if c16 then L2() else L3(x14);
        L1(dx13):
          c17 = `is.object`(dx13);
          if c17 then L5() else L6();
        L2():
          dr10 = tryDispatchBuiltin.1("$", x14);
          dc5 = getTryDispatchBuiltinDispatched(dr10);
          if dc5 then L4() else L3(dr10);
        L3(x16):
          r50 = `$`(x16, <sym loadings>);
          goto L1(r50);
        L0(dx17):
          return dx17;
        L4():
          dx12 = getTryDispatchBuiltinValue(dr10);
          goto L1(dx12);
        L5():
          dr12 = tryDispatchBuiltin.1("[", dx13);
          dc6 = getTryDispatchBuiltinDispatched(dr12);
          if dc6 then L7() else L6();
        L6():
          choices7 = ld choices;
          choices8 = force? choices7;
          __2 = ldf `[` in base;
          r51 = dyn __2(dx13, <missing>, choices8);
          goto L0(r51);
        L7():
          dx16 = getTryDispatchBuiltinValue(dr12);
          goto L0(dx16);
        };
        r53 = dyn t3(p8);
        lam14 = ld lam;
        lam15 = force? lam14;
        checkMissing(lam15);
        r54 = `*`(r53, lam15);
        return r54;
      };
      r56 = dyn t2(p9);
      return r56;
    };
    ddd1 = ld `...`;
    r58 = dyn biplot_default[, , `...`](p7, p10, ddd1);
    check L77() else D25();
  D25():
    deopt 94 [r58];
  L18(lam11, r39):
    r41 = `/`(lam11, r39);
    st lam = r41;
    goto L19();
  L72():
    n2 = ld n;
    check L74() else D23();
  L73():
    r38 = dyn base4(<sym n>);
    goto L18(lam8, r38);
  L77():
    sym5 = ldf invisible;
    base5 = ldf invisible in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L78() else L79();
  D23():
    deopt 82 [lam8, n2];
  L20(r60):
    popenv;
    return r60;
  L74():
    n3 = force? n2;
    checkMissing(n3);
    r40 = sqrt(n3);
    goto L18(lam8, r40);
  L78():
    invisible = ldf invisible in base;
    r61 = dyn invisible();
    check L80() else D26();
  L79():
    r59 = dyn base5();
    goto L20(r59);
  D26():
    deopt 98 [r61];
  L80():
    goto L20(r61);
  }
}