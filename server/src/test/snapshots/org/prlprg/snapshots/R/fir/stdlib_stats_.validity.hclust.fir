fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner836568721;
    st `.validity.hclust` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner836568721(x, merge, order) {
  (reg x:*, reg merge:*, reg order:*) -+> V { var x:*, var merge:*, reg merge_isMissing:L, reg merge_orDefault:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), var order:*, reg order_isMissing:L, reg order_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg merge1:*, reg merge2:V, reg is_matrix:cls, reg r4:V, reg r5:V, reg c1:L, reg c2:V, reg ncol:cls, reg merge3:*, reg merge4:V, reg p1:p(V +), reg r7:V, reg r8:V, reg c4:L, reg c5:V, reg c7:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg merge5:*, reg merge6:V, reg as_integer:cls, reg r15:V, reg merge7:*, reg merge8:V, reg r16:V, reg any:cls, reg r17:V, reg c8:L, reg nrow:cls, reg merge9:*, reg merge10:V, reg p2:p(V +), reg r21:V, reg n1:*, reg n2:V, reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg x5:*, reg x6:V, reg c9:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r25:V, reg length:cls, reg r26:V, reg n3:*, reg n4:V, reg r27:V, reg c10:L, reg order1:*, reg order2:V, reg c11:L, reg c13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg c16:L, reg r31:V, reg x9:*, reg x10:V, reg c17:L, reg c19:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c21:L, reg dx5:V, reg r32:V, reg length1:cls, reg r33:V, reg n5:*, reg n6:V, reg r34:V, reg c22:L, reg c23:V, reg c25:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r37:V, reg r38:V, reg sort:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg merge11:*, reg merge12:V, reg as_integer1:cls, reg r41:V, reg p3:p(V +), reg r43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg n7:*, reg n8:V, reg r46:V, reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg n9:*, reg n10:V, reg r50:V, reg r51:I, reg r52:V, reg c26:cls, reg r53:V, reg identical:cls, reg r54:V, reg c27:L |
    mkenv;
    st x = x;
    merge_isMissing = missing.0(merge);
    if merge_isMissing then L0() else L1(merge);
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r = `$`(x4, <sym merge>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L1(p);
  L1(merge_orDefault):
    st merge = merge_orDefault;
    order_isMissing = missing.0(order);
    if order_isMissing then L2(TRUE) else L2(order);
  L2(order_orDefault):
    st order = order_orDefault;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L3(r3):
    r5 = `!`(r3);
    c1 = `as.logical`(r5);
    if c1 then L4(c1) else L26();
  L22():
    merge1 = ld merge;
    check L24() else D0();
  L23():
    r2 = dyn base(<sym merge>);
    goto L3(r2);
  D0():
    deopt 2 [merge1];
  L4(c2):
    c7 = `as.logical`(c2);
    if c7 then L30() else L5();
  L24():
    merge2 = force? merge1;
    checkMissing(merge2);
    is_matrix = ldf `is.matrix` in base;
    r4 = dyn is_matrix(merge2);
    check L25() else D1();
  L26():
    ncol = ldf ncol;
    check L27() else D2();
  D1():
    deopt 5 [r4];
  D2():
    deopt 8 [c1];
  L5():
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L25():
    goto L3(r4);
  L27():
    p1 = prom<V +>{
      merge3 = ld merge;
      merge4 = force? merge3;
      checkMissing(merge4);
      return merge4;
    };
    r7 = dyn ncol(p1);
    check L28() else D3();
  L30():
    popenv;
    return "invalid dendrogram";
  D3():
    deopt 10 [c1, r7];
  L7(r12):
    c8 = `as.logical`(r12);
    if c8 then L41() else L9();
  L28():
    r8 = `!=`(r7, 2.0);
    c4 = `as.logical`(r8);
    c5 = `||`(c1, c4);
    goto L4(c5);
  L33():
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L34():
    r11 = dyn base1(<lang `!=`(as.integer(merge), merge)>);
    goto L7(r11);
  L8(r14):
    merge7 = ld merge;
    check L39() else D6();
  L9():
    nrow = ldf nrow;
    check L44() else D8();
  L35():
    merge5 = ld merge;
    check L37() else D4();
  L36():
    r13 = dyn base2(<sym merge>);
    goto L8(r13);
  L41():
    popenv;
    return "'merge' component in dendrogram must be integer";
  D4():
    deopt 23 [merge5];
  D6():
    deopt 26 [r14, merge7];
  D8():
    deopt 37 [];
  L37():
    merge6 = force? merge5;
    checkMissing(merge6);
    as_integer = ldf `as.integer` in base;
    r15 = dyn as_integer(merge6);
    check L38() else D5();
  L39():
    merge8 = force? merge7;
    checkMissing(merge8);
    r16 = `!=`(r14, merge8);
    any = ldf any in base;
    r17 = dyn any(r16);
    check L40() else D7();
  L44():
    p2 = prom<V +>{
      merge9 = ld merge;
      merge10 = force? merge9;
      checkMissing(merge10);
      return merge10;
    };
    r21 = dyn nrow(p2);
    check L45() else D9();
  D5():
    deopt 26 [r15];
  D7():
    deopt 30 [r17];
  D9():
    deopt 39 [r21];
  L38():
    goto L8(r15);
  L40():
    goto L7(r17);
  L45():
    st n1 = r21;
    n1 = ld n1;
    check L46() else D10();
  D10():
    deopt 41 [n1];
  L46():
    n2 = force? n1;
    checkMissing(n2);
    r22 = `+`(n2, 1);
    st n = r22;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L47() else L48();
  L11(r24):
    n3 = ld n1;
    check L55() else D13();
  L47():
    x5 = ld x;
    check L49() else D11();
  L48():
    r23 = dyn base3(<lang `$`(x, height)>);
    goto L11(r23);
  D11():
    deopt 48 [x5];
  D13():
    deopt 52 [r24, n3];
  L49():
    x6 = force? x5;
    checkMissing(x6);
    c9 = `is.object`(x6);
    if c9 then L51() else L52(x6);
  L55():
    n4 = force? n3;
    checkMissing(n4);
    r27 = `!=`(r24, n4);
    c10 = `as.logical`(r27);
    if c10 then L56() else L12();
  L12():
    order1 = ld order;
    check L59() else D14();
  L50(dx3):
    length = ldf length in base;
    r26 = dyn length(dx3);
    check L54() else D12();
  L51():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(dr2);
  L52(x8):
    r25 = `$`(x8, <sym height>);
    goto L50(r25);
  L56():
    popenv;
    return "'height' is of wrong length";
  D12():
    deopt 52 [r26];
  D14():
    deopt 60 [order1];
  L53():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L50(dx2);
  L54():
    goto L11(r26);
  L59():
    order2 = force? order1;
    checkMissing(order2);
    c11 = `as.logical`(order2);
    if c11 then L60() else L14(c11);
  L14(c13):
    c25 = `as.logical`(c13);
    if c25 then L71() else L16();
  L60():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L61() else L62();
  L15(c16, r31):
    n5 = ld n;
    check L69() else D17();
  L16():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L74() else L75();
  L61():
    x9 = ld x;
    check L63() else D15();
  L62():
    r30 = dyn base4(<lang `$`(x, order)>);
    goto L15(c11, r30);
  L71():
    popenv;
    return "'order' is of wrong length";
  D15():
    deopt 64 [c11, x9];
  D17():
    deopt 68 [c16, r31, n5];
  L18(r38):
    c27 = `as.logical`(r38);
    if c27 then L86() else L21();
  L63():
    x10 = force? x9;
    checkMissing(x10);
    c17 = `is.object`(x10);
    if c17 then L65() else L66(c11, x10);
  L69():
    n6 = force? n5;
    checkMissing(n6);
    r34 = `!=`(r31, n6);
    c22 = `as.logical`(r34);
    c23 = `&&`(c16, c22);
    goto L14(c23);
  L74():
    sort = ldf sort;
    check L76() else D18();
  L75():
    r37 = dyn base5(<lang sort(as.integer(merge))>, <lang c(`-`(`(`(`:`(n, 1))), `+`(seq_len(`-`(n, 2))))>);
    goto L18(r37);
  D18():
    deopt 80 [];
  L21():
    popenv;
    return "'merge' matrix has invalid contents";
  L64(c21, dx5):
    length1 = ldf length in base;
    r33 = dyn length1(dx5);
    check L68() else D16();
  L65():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L67() else L66(c11, dr4);
  L66(c19, x12):
    r32 = `$`(x12, <sym order>);
    goto L64(c19, r32);
  L76():
    p3 = prom<V +>{
      sym6 = ldf `as.integer`;
      base6 = ldf `as.integer` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r40):
      return r40;
    L1():
      merge11 = ld merge;
      merge12 = force? merge11;
      checkMissing(merge12);
      as_integer1 = ldf `as.integer` in base;
      r41 = dyn as_integer1(merge12);
      goto L0(r41);
    L2():
      r39 = dyn base6(<sym merge>);
      goto L0(r39);
    };
    r43 = dyn sort(p3);
    check L77() else D19();
  L86():
    popenv;
    return TRUE;
  D16():
    deopt 68 [c21, r33];
  D19():
    deopt 82 [r43];
  L67():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L64(c11, dx4);
  L68():
    goto L15(c21, r33);
  L77():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L78() else L79();
  L19(r45):
    identical = ldf identical in base;
    r54 = dyn identical(r43, r45, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L85() else D23();
  L78():
    n7 = ld n;
    check L80() else D20();
  L79():
    r44 = dyn base7(<lang `-`(`(`(`:`(n, 1)))>, <lang `+`(seq_len(`-`(n, 2)))>);
    goto L19(r44);
  D20():
    deopt 85 [n7];
  D23():
    deopt 107 [r54];
  L80():
    n8 = force? n7;
    checkMissing(n8);
    r46 = `:`(n8, 1);
    r47 = `-`(<missing>, r46);
    sym8 = ldf seq_len;
    base8 = ldf seq_len in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L81() else L82();
  L85():
    goto L18(r54);
  L20(r49):
    r52 = `+`(<missing>, r49);
    c26 = ldf c in base;
    r53 = dyn c26(r47, r52);
    check L84() else D22();
  L81():
    n9 = ld n;
    check L83() else D21();
  L82():
    r48 = dyn base8(<lang `-`(n, 2)>);
    goto L20(r48);
  D21():
    deopt 91 [n9];
  D22():
    deopt 98 [r53];
  L83():
    n10 = force? n9;
    checkMissing(n10);
    r50 = `-`(n10, 2);
    r51 = seq_len(r50);
    goto L20(r51);
  L84():
    goto L19(r53);
  }
}