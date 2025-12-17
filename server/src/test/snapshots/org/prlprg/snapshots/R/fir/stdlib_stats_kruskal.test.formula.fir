fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner751963283;
    st `kruskal.test.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner751963283(formula, data, subset, `na.action`, `...`) {
  (reg formula:*, reg data:*, reg subset:*, reg na_action:*, reg ddd:dots) -+> V { var formula:*, var data:*, var subset:*, var `na.action`:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg formula1:*, reg formula2:V, reg length:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r7:V, reg match_call:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg eval:cls, reg m:*, reg m1:V, reg c10:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r12:V, reg p:p(V +), reg parent_frame:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg is_matrix:cls, reg r17:V, reg c11:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p2:p(V +), reg r19:V, reg l:*, reg c12:L, reg r21:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r23:V, reg dx3:V, reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg quote:cls, reg r28:V, reg l3:*, reg c13:L, reg r30:V, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ____:cls, reg r33:V, reg eval1:cls, reg m4:*, reg m5:V, reg p3:p(V +), reg parent_frame1:cls, reg r35:V, reg p4:p(V +), reg r37:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg mf:*, reg mf1:V, reg length1:cls, reg r40:V, reg r41:V, reg c14:L, reg stop1:cls, reg r42:V, reg paste:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg mf2:*, reg mf3:V, reg names:cls, reg r46:V, reg p5:p(V +), reg r48:V, reg kruskal_test:cls, reg mf4:*, reg mf5:V, reg c15:L, reg mf7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __:cls, reg r49:V, reg p6:p(V +), reg mf8:*, reg mf9:V, reg c16:L, reg mf11:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __1:cls, reg r51:V, reg p7:p(V +), reg r53:V, reg DNAME:*, reg DNAME1:V, reg l6:*, reg c17:L, reg DNAME3:V, reg l8:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r54:V, reg y:*, reg y1:V |
    mkenv;
    st formula = formula;
    st data = data;
    st subset = subset;
    st `na.action` = na_action;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L15();
  L13():
    missing = ldf missing in base;
    r2 = dyn missing(<sym formula>);
    goto L0(r2);
  L14():
    r = dyn base(<sym formula>);
    goto L0(r);
  L1(c1):
    c9 = `as.logical`(c1);
    if c9 then L21() else L3();
  L15():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L2(c5, r4):
    r6 = `!=`(r4, 3);
    c6 = `as.logical`(r6);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L3():
    goto L4();
  L4():
    match_call = ldf `match.call`;
    check L25() else D4();
  L16():
    formula1 = ld formula;
    check L18() else D0();
  L17():
    r3 = dyn base1(<sym formula>);
    goto L2(c, r3);
  L21():
    stop = ldf stop;
    check L22() else D2();
  D0():
    deopt 5 [c, formula1];
  D2():
    deopt 13 [];
  D4():
    deopt 19 [];
  L18():
    formula2 = force? formula1;
    checkMissing(formula2);
    length = ldf length in base;
    r5 = dyn length(formula2);
    check L19() else D1();
  L22():
    r7 = dyn stop("'formula' missing or incorrect");
    check L23() else D3();
  L25():
    r9 = dyn match_call[`expand.dots`](FALSE);
    check L26() else D5();
  D1():
    deopt 8 [c, r5];
  D3():
    deopt 15 [r7];
  D5():
    deopt 22 [r9];
  L19():
    goto L2(c, r5);
  L23():
    goto L4();
  L26():
    st m = r9;
    sym2 = ldf `is.matrix`;
    base2 = ldf `is.matrix` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L5(r11):
    c11 = `as.logical`(r11);
    if c11 then L32() else L6();
  L27():
    eval = ldf eval;
    check L29() else D6();
  L28():
    r10 = dyn base2(<lang eval(`$`(m, data), parent.frame())>);
    goto L5(r10);
  D6():
    deopt 27 [];
  L6():
    goto L7();
  L7():
    sym3 = ldf quote;
    base3 = ldf quote in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L29():
    p = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c10 = `is.object`(m1);
      if c10 then L1() else L2(m1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", m1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(m3):
      r12 = `$`(m3, <sym data>);
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r14 = dyn parent_frame();
      return r14;
    };
    r16 = dyn eval(p, p1);
    check L30() else D7();
  L32():
    as_data_frame = ldf `as.data.frame`;
    check L33() else D9();
  D7():
    deopt 30 [r16];
  D9():
    deopt 34 [];
  L8(r27):
    l3 = ld m;
    c13 = `is.object`(l3);
    if c13 then L42() else L43(r27, l3);
  L30():
    is_matrix = ldf `is.matrix` in base;
    r17 = dyn is_matrix(r16);
    check L31() else D8();
  L33():
    p2 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r19 = dyn as_data_frame(p2);
    check L34() else D10();
  L40():
    quote = ldf quote in base;
    r28 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L8(r28);
  L41():
    r26 = dyn base3(<lang `::`(stats, model.frame)>);
    goto L8(r26);
  D8():
    deopt 32 [r17];
  D10():
    deopt 36 [r19];
  L9(dx5):
    st m = dx5;
    eval1 = ldf eval;
    check L45() else D11();
  L31():
    goto L5(r17);
  L34():
    l = ld m;
    c12 = `is.object`(l);
    if c12 then L36() else L37(r19, l);
  L42():
    dr4 = tryDispatchBuiltin.0("[[<-", l3, r27);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L44() else L43(r27, dr4);
  L43(r30, l5):
    ____ = ldf `[[<-` in base;
    r33 = dyn ____(l5, r27, 1);
    goto L9(r33);
  D11():
    deopt 51 [];
  L35(r23, dx3):
    st m = dx3;
    goto L7();
  L36():
    dr2 = tryDispatchBuiltin.0("$<-", l, r19);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L38() else L37(r19, dr2);
  L37(r21, l2):
    r24 = `$<-`(l2, <sym data>, r19);
    goto L35(r21, r24);
  L44():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(dx4);
  L45():
    p3 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p4 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r35 = dyn parent_frame1();
      return r35;
    };
    r37 = dyn eval1(p3, p4);
    check L46() else D12();
  D12():
    deopt 54 [r37];
  L38():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L35(r19, dx2);
  L46():
    st mf = r37;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L10(r39):
    r41 = `>`(r39, 2);
    c14 = `as.logical`(r41);
    if c14 then L51() else L11();
  L47():
    mf = ld mf;
    check L49() else D13();
  L48():
    r38 = dyn base4(<sym mf>);
    goto L10(r38);
  D13():
    deopt 58 [mf];
  L11():
    goto L12();
  L12():
    paste = ldf paste;
    check L55() else D17();
  L49():
    mf1 = force? mf;
    checkMissing(mf1);
    length1 = ldf length in base;
    r40 = dyn length1(mf1);
    check L50() else D14();
  L51():
    stop1 = ldf stop;
    check L52() else D15();
  D14():
    deopt 61 [r40];
  D15():
    deopt 65 [];
  D17():
    deopt 71 [];
  L50():
    goto L10(r40);
  L52():
    r42 = dyn stop1("'formula' should be of the form response ~ group");
    check L53() else D16();
  L55():
    p5 = prom<V +>{
      sym5 = ldf names;
      base5 = ldf names in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      mf2 = ld mf;
      mf3 = force? mf2;
      checkMissing(mf3);
      names = ldf names in base;
      r46 = dyn names(mf3);
      goto L0(r46);
    L2():
      r44 = dyn base5(<sym mf>);
      goto L0(r44);
    };
    r48 = dyn paste[, collapse](p5, " by ");
    check L56() else D18();
  D16():
    deopt 67 [r42];
  D18():
    deopt 75 [r48];
  L53():
    goto L12();
  L56():
    st DNAME = r48;
    kruskal_test = ldf `kruskal.test`;
    check L57() else D19();
  D19():
    deopt 78 [];
  L57():
    p6 = prom<V +>{
      mf4 = ld mf;
      mf5 = force? mf4;
      checkMissing(mf5);
      c15 = `is.object`(mf5);
      if c15 then L1() else L2(mf5);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", mf5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(mf7):
      __ = ldf `[[` in base;
      r49 = dyn __(mf7, 1);
      goto L0(r49);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p7 = prom<V +>{
      mf8 = ld mf;
      mf9 = force? mf8;
      checkMissing(mf9);
      c16 = `is.object`(mf9);
      if c16 then L1() else L2(mf9);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", mf9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(mf11):
      __1 = ldf `[[` in base;
      r51 = dyn __1(mf11, 2);
      goto L0(r51);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r53 = dyn kruskal_test[x, g](p6, p7);
    check L58() else D20();
  D20():
    deopt 83 [r53];
  L58():
    st y = r53;
    DNAME = ld DNAME;
    check L59() else D21();
  D21():
    deopt 85 [DNAME];
  L59():
    DNAME1 = force? DNAME;
    checkMissing(DNAME1);
    l6 = ld y;
    c17 = `is.object`(l6);
    if c17 then L61() else L62(DNAME1, l6);
  L60(dx11):
    st y = dx11;
    y = ld y;
    check L64() else D22();
  L61():
    dr10 = tryDispatchBuiltin.0("$<-", l6, DNAME1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L63() else L62(DNAME1, dr10);
  L62(DNAME3, l8):
    r54 = `$<-`(l8, <sym data.name>, DNAME1);
    goto L60(r54);
  D22():
    deopt 90 [y];
  L63():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L60(dx10);
  L64():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}