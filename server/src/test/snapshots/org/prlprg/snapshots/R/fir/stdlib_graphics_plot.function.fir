fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2152688913;
    st `plot.function` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2152688913(x, y, to, from, xlim, ylab, `...`) {
  (reg x:*, reg y:*, reg to:*, reg from:*, reg xlim:*, reg ylab:*, reg ddd:dots) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var to:*, reg to_isMissing:L, reg to_orDefault:*, var from:*, reg from_isMissing:L, reg from_orDefault:*, reg y1:*, reg y2:V, reg p:p(V +), var xlim:*, reg xlim_isMissing:L, reg xlim_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg r4:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg missing1:cls, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg y3:*, reg y4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg xlim1:*, reg xlim2:V, reg c10:V, reg c11:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg from1:*, reg from2:V, reg c12:V, reg c13:L, reg r12:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg missing2:cls, reg r16:V, reg c14:L, reg xlim3:*, reg xlim4:V, reg c15:L, reg xlim6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg missing3:cls, reg r20:V, reg c16:L, reg xlim7:*, reg xlim8:V, reg c17:L, reg xlim10:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg __1:cls, reg r21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg ylab1:*, reg ylab2:V, reg c18:V, reg c19:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r24:V, reg r25:V, reg substitute:cls, reg r26:V, reg mode:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r28:V, reg r29:V, reg c20:L, reg deparse:cls, reg sx:*, reg sx1:V, reg p2:p(V +), reg r31:V, reg c21:L, reg r33:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r34:V, reg dx7:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg r36:V, reg list:cls, reg ddd1:dots?, reg r37:V, reg c22:L, reg r39:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r40:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r41:V, reg r42:V, reg xname:*, reg xname1:V, reg c23:V, reg c24:L, reg paste0:cls, reg sx2:*, reg sx3:V, reg p3:p(V +), reg xname2:*, reg xname3:V, reg p4:p(V +), reg r46:V, reg curve:cls, reg x3:*, reg x4:V, reg p5:p(V +), reg from3:*, reg from4:V, reg p6:p(V +), reg to1:*, reg to2:V, reg p7:p(V +), reg xlim11:*, reg xlim12:V, reg p8:p(V +), reg ylab3:*, reg ylab4:V, reg p9:p(V +), reg ddd2:dots?, reg r52:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(0.0) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    to_isMissing = missing.0(to);
    if to_isMissing then L1(1.0) else L1(to);
  L1(to_orDefault):
    st to = to_orDefault;
    from_isMissing = missing.0(from);
    if from_isMissing then L2() else L3(from);
  L2():
    p = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    goto L3(p);
  L3(from_orDefault):
    st from = from_orDefault;
    xlim_isMissing = missing.0(xlim);
    if xlim_isMissing then L4(NULL) else L4(xlim);
  L4(xlim_orDefault):
    st xlim = xlim_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L5(NULL) else L5(ylab);
  L5(ylab_orDefault):
    st ylab = ylab_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L36() else L37();
  L6(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L38() else L7(c);
  L36():
    missing = ldf missing in base;
    r3 = dyn missing(<sym y>);
    goto L6(r3);
  L37():
    r1 = dyn base(<sym y>);
    goto L6(r1);
  L7(c2):
    c9 = `as.logical`(c2);
    if c9 then L42() else L9();
  L38():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L8(c5, r6):
    c6 = `as.logical`(r6);
    c7 = `&&`(c5, c6);
    goto L7(c7);
  L9():
    goto L10();
  L10():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L39():
    missing1 = ldf missing in base;
    r7 = dyn missing1(<sym from>);
    goto L8(c, r7);
  L40():
    r5 = dyn base1(<sym from>);
    goto L8(c, r5);
  L42():
    y3 = ld y;
    check L43() else D0();
  D0():
    deopt 8 [y3];
  L11(r9):
    c11 = `as.logical`(r9);
    if c11 then L48() else L12();
  L43():
    y4 = force? y3;
    checkMissing(y4);
    st from = y4;
    goto L10();
  L45():
    xlim1 = ld xlim;
    check L47() else D1();
  L46():
    r8 = dyn base2(<sym xlim>);
    goto L11(r8);
  D1():
    deopt 14 [xlim1];
  L12():
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L16():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L71() else L72();
  L47():
    xlim2 = force? xlim1;
    checkMissing(xlim2);
    c10 = `==`(xlim2, NULL);
    goto L11(c10);
  L48():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L13(r11):
    c13 = `as.logical`(r11);
    if c13 then L52() else L14();
  L17(r15):
    c14 = `as.logical`(r15);
    if c14 then L57() else L18();
  L24(r23):
    c19 = `as.logical`(r23);
    if c19 then L74() else L25();
  L49():
    from1 = ld from;
    check L51() else D2();
  L50():
    r10 = dyn base3(<sym from>);
    goto L13(r10);
  L55():
    missing2 = ldf missing in base;
    r16 = dyn missing2(<sym from>);
    goto L17(r16);
  L56():
    r14 = dyn base4(<sym from>);
    goto L17(r14);
  L71():
    ylab1 = ld ylab;
    check L73() else D5();
  L72():
    r22 = dyn base6(<sym ylab>);
    goto L24(r22);
  D2():
    deopt 18 [from1];
  D5():
    deopt 49 [ylab1];
  L14():
    goto L15(NULL);
  L15(r12):
    goto L16();
  L18():
    goto L20();
  L20():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L25():
    goto L35();
  L35():
    curve = ldf curve;
    check L101() else D15();
  L51():
    from2 = force? from1;
    checkMissing(from2);
    c12 = `==`(from2, NULL);
    goto L13(c12);
  L52():
    st from = 0.0;
    goto L15(0.0);
  L57():
    xlim3 = ld xlim;
    check L58() else D3();
  L73():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c18 = `==`(ylab2, NULL);
    goto L24(c18);
  L74():
    sym7 = ldf substitute;
    base7 = ldf substitute in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L75() else L76();
  D3():
    deopt 29 [xlim3];
  D15():
    deopt 98 [];
  L21(r19):
    c16 = `as.logical`(r19);
    if c16 then L65() else L22();
  L26(r25):
    st sx = r25;
    mode = ldf mode;
    check L77() else D6();
  L58():
    xlim4 = force? xlim3;
    checkMissing(xlim4);
    c15 = `is.object`(xlim4);
    if c15 then L59() else L60(xlim4);
  L63():
    missing3 = ldf missing in base;
    r20 = dyn missing3(<sym to>);
    goto L21(r20);
  L64():
    r18 = dyn base5(<sym to>);
    goto L21(r18);
  L75():
    substitute = ldf substitute in base;
    r26 = dyn substitute(<sym x>);
    goto L26(r26);
  L76():
    r24 = dyn base7(<sym x>);
    goto L26(r24);
  L101():
    p5 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p6 = prom<V +>{
      from3 = ld from;
      from4 = force? from3;
      checkMissing(from4);
      return from4;
    };
    p7 = prom<V +>{
      to1 = ld to;
      to2 = force? to1;
      checkMissing(to2);
      return to2;
    };
    p8 = prom<V +>{
      xlim11 = ld xlim;
      xlim12 = force? xlim11;
      checkMissing(xlim12);
      return xlim12;
    };
    p9 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    ddd2 = ld `...`;
    r52 = dyn curve[expr, from, to, xlim, ylab, `...`](p5, p6, p7, p8, p9, ddd2);
    check L102() else D16();
  D6():
    deopt 57 [];
  D16():
    deopt 110 [r52];
  L19(dx1):
    st from = dx1;
    goto L20();
  L22():
    goto L16();
  L59():
    dr = tryDispatchBuiltin.1("[", xlim4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L61() else L60(dr);
  L60(xlim6):
    __ = ldf `[` in base;
    r17 = dyn __(xlim6, 1);
    goto L19(r17);
  L65():
    xlim7 = ld xlim;
    check L66() else D4();
  L77():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r28 = dyn mode(p1);
    check L78() else D7();
  L102():
    popenv;
    return r52;
  D4():
    deopt 40 [xlim7];
  D7():
    deopt 59 [r28];
  L61():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L66():
    xlim8 = force? xlim7;
    checkMissing(xlim8);
    c17 = `is.object`(xlim8);
    if c17 then L67() else L68(xlim8);
  L78():
    r29 = `!=`(r28, "name");
    c20 = `as.logical`(r29);
    if c20 then L79() else L27();
  L23(dx4):
    st to = dx4;
    goto L16();
  L27():
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L86() else L87();
  L29(dx7):
    st ylab = dx7;
    goto L35();
  L67():
    dr2 = tryDispatchBuiltin.1("[", xlim8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L69() else L68(dr2);
  L68(xlim10):
    __1 = ldf `[` in base;
    r21 = dyn __1(xlim10, 2);
    goto L23(r21);
  L79():
    deparse = ldf deparse;
    check L80() else D8();
  D8():
    deopt 63 [];
  L30(r36):
    c22 = `is.object`(r36);
    if c22 then L90() else L91(r36);
  L69():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L23(dx3);
  L80():
    p2 = prom<V +>{
      sx = ld sx;
      sx1 = force? sx;
      checkMissing(sx1);
      return sx1;
    };
    r31 = dyn deparse(p2);
    check L81() else D9();
  L86():
    list = ldf list;
    check L88() else D10();
  L87():
    r35 = dyn base8(<sym ...>);
    goto L30(r35);
  D9():
    deopt 65 [r31];
  D10():
    deopt 71 [];
  L31(dx9):
    st xname = dx9;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L93() else L94();
  L81():
    c21 = `is.object`(r31);
    if c21 then L82() else L83(r31);
  L88():
    ddd1 = ld `...`;
    r37 = dyn list[`...`](ddd1);
    check L89() else D11();
  L90():
    dr6 = tryDispatchBuiltin.1("[[", r36);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L92() else L91(dr6);
  L91(r39):
    __3 = ldf `[[` in base;
    r40 = dyn __3(r39, "xname");
    goto L31(r40);
  D11():
    deopt 73 [r37];
  L28(dx6):
    goto L29(dx6);
  L32(r42):
    c24 = `as.logical`(r42);
    if c24 then L96() else L33();
  L82():
    dr4 = tryDispatchBuiltin.1("[", r31);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L84() else L83(dr4);
  L83(r33):
    __2 = ldf `[` in base;
    r34 = dyn __2(r33, 1);
    goto L28(r34);
  L89():
    goto L30(r37);
  L92():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L31(dx8);
  L93():
    xname = ld xname;
    check L95() else D12();
  L94():
    r41 = dyn base9(<sym xname>);
    goto L32(r41);
  D12():
    deopt 79 [xname];
  L33():
    goto L34();
  L34():
    paste0 = ldf paste0;
    check L98() else D13();
  L84():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L28(dx5);
  L95():
    xname1 = force? xname;
    checkMissing(xname1);
    c23 = `==`(xname1, NULL);
    goto L32(c23);
  L96():
    st xname = "x";
    goto L34();
  D13():
    deopt 88 [];
  L98():
    p3 = prom<V +>{
      sx2 = ld sx;
      sx3 = force? sx2;
      checkMissing(sx3);
      return sx3;
    };
    p4 = prom<V +>{
      xname2 = ld xname;
      xname3 = force? xname2;
      checkMissing(xname3);
      return xname3;
    };
    r46 = dyn paste0(p3, "(", p4, ")");
    check L99() else D14();
  D14():
    deopt 93 [r46];
  L99():
    goto L29(r46);
  }
}