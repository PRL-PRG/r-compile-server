fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4222064650;
    st `biplot.prcomp` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4222064650(x, choices, scale, `pc.biplot`, `...`) {
  (reg x:*, reg choices:*, reg scale:*, reg pc_biplot:*, reg ddd:dots) -+> V { var x:*, var choices:*, reg choices_isMissing:L, reg choices_orDefault:*, reg p:p(V +), var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var `pc.biplot`:*, reg pc_biplot_isMissing:L, reg pc_biplot_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg choices1:*, reg choices2:V, reg length:cls, reg r3:V, reg r4:V, reg c:L, reg stop:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x1:*, reg x2:V, reg c1:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg length1:cls, reg r10:V, reg r11:V, reg c2:L, reg stop1:cls, reg gettextf:cls, reg deparse1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg substitute:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg p2:p(V +), reg r18:V, reg p3:p(V +), reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg scores:*, reg scores1:V, reg c3:L, reg c4:L, reg stop2:cls, reg r24:V, reg x5:*, reg x6:V, reg c5:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r26:V, reg c6:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg choices3:*, reg choices4:V, reg __:cls, reg r27:V, reg NROW:cls, reg scores2:*, reg scores3:V, reg p4:p(V +), reg r29:V, reg lam:*, reg lam1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg lam4:V, reg r31:V, reg n:*, reg n1:V, reg r32:V, reg r33:V, reg scale1:*, reg scale2:V, reg r34:V, reg c7:L, reg c8:V, reg scale3:*, reg scale4:V, reg r35:V, reg c10:L, reg c11:V, reg c13:L, reg warning:cls, reg r36:V, reg scale5:*, reg scale6:V, reg r38:V, reg c14:L, reg lam5:*, reg lam6:V, reg scale7:*, reg scale8:V, reg r39:V, reg pc_biplot1:*, reg pc_biplot2:V, reg c15:L, reg lam7:*, reg lam8:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg lam11:V, reg r42:V, reg n2:*, reg n3:V, reg r43:V, reg r44:V, reg biplot_default:cls, reg t:cls, reg t1:cls, reg scores4:*, reg scores5:V, reg c16:L, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg choices5:*, reg choices6:V, reg __1:cls, reg r46:V, reg p5:p(V +), reg r48:V, reg lam12:*, reg lam13:V, reg r49:V, reg p6:p(V +), reg r51:V, reg p7:p(V +), reg t2:cls, reg t3:cls, reg x9:*, reg x10:V, reg c17:L, reg x12:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r53:V, reg c18:L, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg choices7:*, reg choices8:V, reg __2:cls, reg r54:V, reg p8:p(V +), reg r56:V, reg lam14:*, reg lam15:V, reg r57:V, reg p9:p(V +), reg r59:V, reg p10:p(V +), reg ddd1:dots?, reg r61:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r62:V, reg r63:V, reg invisible:cls, reg r64:V |
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
    if guard then L24() else L25();
  L4(r2):
    r4 = `!=`(r2, 2);
    c = `as.logical`(r4);
    if c then L28() else L5();
  L24():
    choices1 = ld choices;
    check L26() else D0();
  L25():
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
    if guard1 then L32() else L33();
  L26():
    choices2 = force? choices1;
    checkMissing(choices2);
    length = ldf length in base;
    r3 = dyn length(choices2);
    check L27() else D1();
  L28():
    stop = ldf stop;
    check L29() else D2();
  D1():
    deopt 5 [r3];
  D2():
    deopt 9 [];
  L7(r8):
    r11 = `!`(r8);
    c2 = `as.logical`(r11);
    if c2 then L40() else L8();
  L27():
    goto L4(r3);
  L29():
    r5 = dyn stop("length of choices must be 2");
    check L30() else D3();
  L32():
    x1 = ld x;
    check L34() else D4();
  L33():
    r7 = dyn base1(<lang `<-`(scores, `$`(x, x))>);
    goto L7(r7);
  D3():
    deopt 11 [r5];
  D4():
    deopt 16 [x1];
  L8():
    goto L9();
  L9():
    sym3 = ldf `is.complex`;
    base3 = ldf `is.complex` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L30():
    goto L6();
  L34():
    x2 = force? x1;
    checkMissing(x2);
    c1 = `is.object`(x2);
    if c1 then L36() else L37(x2);
  L40():
    stop1 = ldf stop;
    check L41() else D6();
  D6():
    deopt 24 [];
  L10(r23):
    c4 = `as.logical`(r23);
    if c4 then L47() else L11();
  L35(dx1):
    st scores = dx1;
    length1 = ldf length in base;
    r10 = dyn length1(dx1);
    check L39() else D5();
  L36():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L38() else L37(dr);
  L37(x4):
    r9 = `$`(x4, <sym x>);
    goto L35(r9);
  L41():
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
    check L42() else D7();
  L44():
    scores = ld scores;
    check L46() else D8();
  L45():
    r22 = dyn base3(<sym scores>);
    goto L10(r22);
  D5():
    deopt 21 [r10];
  D7():
    deopt 28 [r20];
  D8():
    deopt 32 [scores];
  L11():
    goto L12();
  L12():
    x5 = ld x;
    check L51() else D11();
  L38():
    dx = getTryDispatchBuiltinValue(dr);
    goto L35(dx);
  L39():
    goto L7(r10);
  L42():
    goto L9();
  L46():
    scores1 = force? scores;
    checkMissing(scores1);
    c3 = `is.complex`(scores1);
    goto L10(c3);
  L47():
    stop2 = ldf stop;
    check L48() else D9();
  D9():
    deopt 36 [];
  D11():
    deopt 41 [x5];
  L48():
    r24 = dyn stop2("biplots are not defined for complex PCA");
    check L49() else D10();
  L51():
    x6 = force? x5;
    checkMissing(x6);
    c5 = `is.object`(x6);
    if c5 then L53() else L54(x6);
  D10():
    deopt 38 [r24];
  L49():
    goto L12();
  L52(dx3):
    c6 = `is.object`(dx3);
    if c6 then L56() else L57(dx3);
  L53():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L55() else L54(dr2);
  L54(x8):
    r26 = `$`(x8, <sym sdev>);
    goto L52(r26);
  L13(dx7):
    st lam = dx7;
    NROW = ldf NROW;
    check L60() else D13();
  L55():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L52(dx2);
  L56():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L58() else L57(dr4);
  L57(dx5):
    choices3 = ld choices;
    check L59() else D12();
  D12():
    deopt 44 [dx5, choices3];
  D13():
    deopt 49 [];
  L58():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx6);
  L59():
    choices4 = force? choices3;
    __ = ldf `[` in base;
    r27 = dyn __(dx5, choices4);
    goto L13(r27);
  L60():
    p4 = prom<V +>{
      scores2 = ld scores;
      scores3 = force? scores2;
      checkMissing(scores3);
      return scores3;
    };
    r29 = dyn NROW(p4);
    check L61() else D14();
  D14():
    deopt 51 [r29];
  L61():
    st n = r29;
    lam = ld lam;
    check L62() else D15();
  D15():
    deopt 53 [lam];
  L62():
    lam1 = force? lam;
    checkMissing(lam1);
    sym4 = ldf sqrt;
    base4 = ldf sqrt in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L63() else L64();
  L14(lam4, r31):
    r33 = `*`(lam4, r31);
    st lam = r33;
    scale1 = ld scale;
    check L66() else D17();
  L63():
    n = ld n;
    check L65() else D16();
  L64():
    r30 = dyn base4(<sym n>);
    goto L14(lam1, r30);
  D16():
    deopt 55 [lam1, n];
  D17():
    deopt 60 [scale1];
  L65():
    n1 = force? n;
    checkMissing(n1);
    r32 = sqrt(n1);
    goto L14(lam1, r32);
  L66():
    scale2 = force? scale1;
    checkMissing(scale2);
    r34 = `<`(scale2, 0.0);
    c7 = `as.logical`(r34);
    if c7 then L15(c7) else L67();
  L15(c8):
    c13 = `as.logical`(c8);
    if c13 then L70() else L16();
  L67():
    scale3 = ld scale;
    check L68() else D18();
  D18():
    deopt 64 [c7, scale3];
  L16():
    goto L17();
  L17():
    scale5 = ld scale;
    check L74() else D21();
  L68():
    scale4 = force? scale3;
    checkMissing(scale4);
    r35 = `>`(scale4, 1.0);
    c10 = `as.logical`(r35);
    c11 = `||`(c7, c10);
    goto L15(c11);
  L70():
    warning = ldf warning;
    check L71() else D19();
  D19():
    deopt 70 [];
  D21():
    deopt 75 [scale5];
  L71():
    r36 = dyn warning("'scale' is outside [0, 1]");
    check L72() else D20();
  L74():
    scale6 = force? scale5;
    checkMissing(scale6);
    r38 = `!=`(scale6, 0.0);
    c14 = `as.logical`(r38);
    if c14 then L75() else L18();
  D20():
    deopt 72 [r36];
  L18():
    st lam = 1.0;
    goto L19();
  L19():
    pc_biplot1 = ld `pc.biplot`;
    check L79() else D24();
  L72():
    goto L17();
  L75():
    lam5 = ld lam;
    check L76() else D22();
  D22():
    deopt 79 [lam5];
  D24():
    deopt 87 [pc_biplot1];
  L76():
    lam6 = force? lam5;
    checkMissing(lam6);
    scale7 = ld scale;
    check L77() else D23();
  L79():
    pc_biplot2 = force? pc_biplot1;
    checkMissing(pc_biplot2);
    c15 = `as.logical`(pc_biplot2);
    if c15 then L80() else L20();
  D23():
    deopt 80 [lam6, scale7];
  L20():
    goto L22();
  L22():
    biplot_default = ldf `biplot.default`;
    check L86() else D27();
  L77():
    scale8 = force? scale7;
    checkMissing(scale8);
    r39 = `^`(lam6, scale8);
    st lam = r39;
    goto L19();
  L80():
    lam7 = ld lam;
    check L81() else D25();
  D25():
    deopt 89 [lam7];
  D27():
    deopt 99 [];
  L81():
    lam8 = force? lam7;
    checkMissing(lam8);
    sym5 = ldf sqrt;
    base5 = ldf sqrt in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L82() else L83();
  L86():
    p7 = prom<V +>{
      t = ldf t;
      p6 = prom<V +>{
        t1 = ldf t;
        p5 = prom<V +>{
          scores4 = ld scores;
          scores5 = force? scores4;
          checkMissing(scores5);
          c16 = `is.object`(scores5);
          if c16 then L1() else L2();
        L0(dx9):
          return dx9;
        L1():
          dr6 = tryDispatchBuiltin.1("[", scores5);
          dc3 = getTryDispatchBuiltinDispatched(dr6);
          if dc3 then L3() else L2();
        L2():
          choices5 = ld choices;
          choices6 = force? choices5;
          __1 = ldf `[` in base;
          r46 = dyn __1(scores5, <missing>, choices6);
          goto L0(r46);
        L3():
          dx8 = getTryDispatchBuiltinValue(dr6);
          goto L0(dx8);
        };
        r48 = dyn t1(p5);
        lam12 = ld lam;
        lam13 = force? lam12;
        checkMissing(lam13);
        r49 = `/`(r48, lam13);
        return r49;
      };
      r51 = dyn t(p6);
      return r51;
    };
    p10 = prom<V +>{
      t2 = ldf t;
      p9 = prom<V +>{
        t3 = ldf t;
        p8 = prom<V +>{
          x9 = ld x;
          x10 = force? x9;
          checkMissing(x10);
          c17 = `is.object`(x10);
          if c17 then L2() else L3(x10);
        L1(dx11):
          c18 = `is.object`(dx11);
          if c18 then L5() else L6();
        L2():
          dr8 = tryDispatchBuiltin.1("$", x10);
          dc4 = getTryDispatchBuiltinDispatched(dr8);
          if dc4 then L4() else L3(dr8);
        L3(x12):
          r53 = `$`(x12, <sym rotation>);
          goto L1(r53);
        L0(dx15):
          return dx15;
        L4():
          dx10 = getTryDispatchBuiltinValue(dr8);
          goto L1(dx10);
        L5():
          dr10 = tryDispatchBuiltin.1("[", dx11);
          dc5 = getTryDispatchBuiltinDispatched(dr10);
          if dc5 then L7() else L6();
        L6():
          choices7 = ld choices;
          choices8 = force? choices7;
          __2 = ldf `[` in base;
          r54 = dyn __2(dx11, <missing>, choices8);
          goto L0(r54);
        L7():
          dx14 = getTryDispatchBuiltinValue(dr10);
          goto L0(dx14);
        };
        r56 = dyn t3(p8);
        lam14 = ld lam;
        lam15 = force? lam14;
        checkMissing(lam15);
        r57 = `*`(r56, lam15);
        return r57;
      };
      r59 = dyn t2(p9);
      return r59;
    };
    ddd1 = ld `...`;
    r61 = dyn biplot_default[, , `...`](p7, p10, ddd1);
    check L87() else D28();
  D28():
    deopt 103 [r61];
  L21(lam11, r42):
    r44 = `/`(lam11, r42);
    st lam = r44;
    goto L22();
  L82():
    n2 = ld n;
    check L84() else D26();
  L83():
    r41 = dyn base5(<sym n>);
    goto L21(lam8, r41);
  L87():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L88() else L89();
  D26():
    deopt 91 [lam8, n2];
  L23(r63):
    popenv;
    return r63;
  L84():
    n3 = force? n2;
    checkMissing(n3);
    r43 = sqrt(n3);
    goto L21(lam8, r43);
  L88():
    invisible = ldf invisible in base;
    r64 = dyn invisible();
    check L90() else D29();
  L89():
    r62 = dyn base6();
    goto L23(r62);
  D29():
    deopt 107 [r64];
  L90():
    goto L23(r64);
  }
}