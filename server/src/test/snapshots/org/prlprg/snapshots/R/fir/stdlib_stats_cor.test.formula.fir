fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner751963283;
    st `cor.test.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner751963283(formula, data, subset, `na.action`, `...`) {
  (reg formula:*, reg data:*, reg subset:*, reg na_action:*, reg ddd:dots) -+> V { var formula:*, var data:*, var subset:*, var `na.action`:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg formula1:*, reg formula2:V, reg inherits:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg c10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c14:L, reg r8:V, reg formula3:*, reg formula4:V, reg length:cls, reg r9:V, reg r10:V, reg c15:L, reg c16:V, reg c18:L, reg stop:cls, reg r11:V, reg match_call:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg eval:cls, reg m:*, reg m1:V, reg c19:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r16:V, reg p:p(V +), reg parent_frame:cls, reg r18:V, reg p1:p(V +), reg r20:V, reg is_matrix:cls, reg r21:V, reg c20:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p2:p(V +), reg r23:V, reg l:*, reg c21:L, reg r25:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r27:V, reg dx3:V, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg quote:cls, reg r32:V, reg l3:*, reg c22:L, reg r34:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ____:cls, reg r37:V, reg l6:*, reg ___:cls, reg ddd1:dots?, reg r38:V, reg eval1:cls, reg m4:*, reg m5:V, reg p3:p(V +), reg parent_frame1:cls, reg r40:V, reg p4:p(V +), reg r42:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg mf:*, reg mf1:V, reg length1:cls, reg r45:V, reg r46:V, reg c23:L, reg stop1:cls, reg r47:V, reg paste:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg mf2:*, reg mf3:V, reg names:cls, reg r51:V, reg p5:p(V +), reg r53:V, reg cor_test:cls, reg mf4:*, reg mf5:V, reg c24:L, reg mf7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __:cls, reg r54:V, reg p6:p(V +), reg mf8:*, reg mf9:V, reg c25:L, reg mf11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __1:cls, reg r56:V, reg p7:p(V +), reg ddd2:dots?, reg r58:V, reg DNAME:*, reg DNAME1:V, reg l7:*, reg c26:L, reg DNAME3:V, reg l9:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r59:V, reg y:*, reg y1:V |
    mkenv;
    st formula = formula;
    st data = data;
    st subset = subset;
    st `na.action` = na_action;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L17();
  L15():
    missing = ldf missing in base;
    r2 = dyn missing(<sym formula>);
    goto L0(r2);
  L16():
    r = dyn base(<sym formula>);
    goto L0(r);
  L1(c1):
    c9 = `as.logical`(c1);
    if c9 then L3(c9) else L23();
  L17():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L2(c5, r4):
    r6 = `!`(r4);
    c6 = `as.logical`(r6);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L3(c10):
    c18 = `as.logical`(c10);
    if c18 then L29() else L5();
  L18():
    formula1 = ld formula;
    check L20() else D0();
  L19():
    r3 = dyn base1(<sym formula>, "formula");
    goto L2(c, r3);
  L23():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  D0():
    deopt 5 [c, formula1];
  L4(c14, r8):
    r10 = `!=`(r8, 2);
    c15 = `as.logical`(r10);
    c16 = `||`(c14, c15);
    goto L3(c16);
  L5():
    goto L6();
  L6():
    match_call = ldf `match.call`;
    check L33() else D6();
  L20():
    formula2 = force? formula1;
    checkMissing(formula2);
    inherits = ldf inherits in base;
    r5 = dyn inherits(formula2, "formula", FALSE);
    check L21() else D1();
  L24():
    formula3 = ld formula;
    check L26() else D2();
  L25():
    r7 = dyn base2(<sym formula>);
    goto L4(c9, r7);
  L29():
    stop = ldf stop;
    check L30() else D4();
  D1():
    deopt 10 [c, r5];
  D2():
    deopt 15 [c9, formula3];
  D4():
    deopt 23 [];
  D6():
    deopt 29 [];
  L21():
    goto L2(c, r5);
  L26():
    formula4 = force? formula3;
    checkMissing(formula4);
    length = ldf length in base;
    r9 = dyn length(formula4);
    check L27() else D3();
  L30():
    r11 = dyn stop("'formula' missing or invalid");
    check L31() else D5();
  L33():
    r13 = dyn match_call[`expand.dots`](FALSE);
    check L34() else D7();
  D3():
    deopt 18 [c9, r9];
  D5():
    deopt 25 [r11];
  D7():
    deopt 32 [r13];
  L27():
    goto L4(c9, r9);
  L31():
    goto L6();
  L34():
    st m = r13;
    sym3 = ldf `is.matrix`;
    base3 = ldf `is.matrix` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L7(r15):
    c20 = `as.logical`(r15);
    if c20 then L40() else L8();
  L35():
    eval = ldf eval;
    check L37() else D8();
  L36():
    r14 = dyn base3(<lang eval(`$`(m, data), parent.frame())>);
    goto L7(r14);
  D8():
    deopt 37 [];
  L8():
    goto L9();
  L9():
    sym4 = ldf quote;
    base4 = ldf quote in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L48() else L49();
  L37():
    p = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c19 = `is.object`(m1);
      if c19 then L1() else L2(m1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", m1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(m3):
      r16 = `$`(m3, <sym data>);
      goto L0(r16);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r18 = dyn parent_frame();
      return r18;
    };
    r20 = dyn eval(p, p1);
    check L38() else D9();
  L40():
    as_data_frame = ldf `as.data.frame`;
    check L41() else D11();
  D9():
    deopt 40 [r20];
  D11():
    deopt 44 [];
  L10(r31):
    l3 = ld m;
    c22 = `is.object`(l3);
    if c22 then L50() else L51(r31, l3);
  L38():
    is_matrix = ldf `is.matrix` in base;
    r21 = dyn is_matrix(r20);
    check L39() else D10();
  L41():
    p2 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r23 = dyn as_data_frame(p2);
    check L42() else D12();
  L48():
    quote = ldf quote in base;
    r32 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L10(r32);
  L49():
    r30 = dyn base4(<lang `::`(stats, model.frame)>);
    goto L10(r30);
  D10():
    deopt 42 [r21];
  D12():
    deopt 46 [r23];
  L11(dx5):
    st m = dx5;
    l6 = ld m;
    ___ = ldf `$<-`;
    check L53() else D13();
  L39():
    goto L7(r21);
  L42():
    l = ld m;
    c21 = `is.object`(l);
    if c21 then L44() else L45(r23, l);
  L50():
    dr4 = tryDispatchBuiltin.0("[[<-", l3, r31);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L52() else L51(r31, dr4);
  L51(r34, l5):
    ____ = ldf `[[<-` in base;
    r37 = dyn ____(l5, r31, 1);
    goto L11(r37);
  D13():
    deopt 63 [NULL, l6, NULL];
  L43(r27, dx3):
    st m = dx3;
    goto L9();
  L44():
    dr2 = tryDispatchBuiltin.0("$<-", l, r23);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L46() else L45(r23, dr2);
  L45(r25, l2):
    r28 = `$<-`(l2, <sym data>, r23);
    goto L43(r25, r28);
  L52():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L11(dx4);
  L53():
    ddd1 = ld `...`;
    r38 = dyn ___[, , `...`, ](l6, NULL, ddd1, NULL);
    check L54() else D14();
  D14():
    deopt 66 [NULL, r38];
  L46():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L43(r23, dx2);
  L54():
    st m = r38;
    eval1 = ldf eval;
    check L55() else D15();
  D15():
    deopt 69 [];
  L55():
    p3 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p4 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r40 = dyn parent_frame1();
      return r40;
    };
    r42 = dyn eval1(p3, p4);
    check L56() else D16();
  D16():
    deopt 72 [r42];
  L56():
    st mf = r42;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L57() else L58();
  L12(r44):
    r46 = `!=`(r44, 2);
    c23 = `as.logical`(r46);
    if c23 then L61() else L13();
  L57():
    mf = ld mf;
    check L59() else D17();
  L58():
    r43 = dyn base5(<sym mf>);
    goto L12(r43);
  D17():
    deopt 76 [mf];
  L13():
    goto L14();
  L14():
    paste = ldf paste;
    check L65() else D21();
  L59():
    mf1 = force? mf;
    checkMissing(mf1);
    length1 = ldf length in base;
    r45 = dyn length1(mf1);
    check L60() else D18();
  L61():
    stop1 = ldf stop;
    check L62() else D19();
  D18():
    deopt 79 [r45];
  D19():
    deopt 83 [];
  D21():
    deopt 89 [];
  L60():
    goto L12(r45);
  L62():
    r47 = dyn stop1("invalid formula");
    check L63() else D20();
  L65():
    p5 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      mf2 = ld mf;
      mf3 = force? mf2;
      checkMissing(mf3);
      names = ldf names in base;
      r51 = dyn names(mf3);
      goto L0(r51);
    L2():
      r49 = dyn base6(<sym mf>);
      goto L0(r49);
    };
    r53 = dyn paste[, collapse](p5, " and ");
    check L66() else D22();
  D20():
    deopt 85 [r47];
  D22():
    deopt 93 [r53];
  L63():
    goto L14();
  L66():
    st DNAME = r53;
    cor_test = ldf `cor.test`;
    check L67() else D23();
  D23():
    deopt 96 [];
  L67():
    p6 = prom<V +>{
      mf4 = ld mf;
      mf5 = force? mf4;
      checkMissing(mf5);
      c24 = `is.object`(mf5);
      if c24 then L1() else L2(mf5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", mf5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(mf7):
      __ = ldf `[[` in base;
      r54 = dyn __(mf7, 1);
      goto L0(r54);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p7 = prom<V +>{
      mf8 = ld mf;
      mf9 = force? mf8;
      checkMissing(mf9);
      c25 = `is.object`(mf9);
      if c25 then L1() else L2(mf9);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", mf9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(mf11):
      __1 = ldf `[[` in base;
      r56 = dyn __1(mf11, 2);
      goto L0(r56);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    ddd2 = ld `...`;
    r58 = dyn cor_test[x, y, `...`](p6, p7, ddd2);
    check L68() else D24();
  D24():
    deopt 102 [r58];
  L68():
    st y = r58;
    DNAME = ld DNAME;
    check L69() else D25();
  D25():
    deopt 104 [DNAME];
  L69():
    DNAME1 = force? DNAME;
    checkMissing(DNAME1);
    l7 = ld y;
    c26 = `is.object`(l7);
    if c26 then L71() else L72(DNAME1, l7);
  L70(dx11):
    st y = dx11;
    y = ld y;
    check L74() else D26();
  L71():
    dr10 = tryDispatchBuiltin.0("$<-", l7, DNAME1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L73() else L72(DNAME1, dr10);
  L72(DNAME3, l9):
    r59 = `$<-`(l9, <sym data.name>, DNAME1);
    goto L70(r59);
  D26():
    deopt 109 [y];
  L73():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L70(dx10);
  L74():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}