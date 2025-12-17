fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `as.alist.call` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg as_list:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg y:*, reg y1:V, reg names:cls, reg r6:V, reg c:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg y2:*, reg y3:V, reg r9:I, reg r10:V, reg which:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg y4:*, reg y5:V, reg names1:cls, reg r13:V, reg r14:V, reg p1:p(V +), reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg ind:*, reg ind1:V, reg length:cls, reg r19:V, reg c2:L, reg vapply:cls, reg y6:*, reg y7:V, reg c3:L, reg y9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind2:*, reg ind3:V, reg __:cls, reg r20:V, reg p2:p(V +), reg paste:*, reg paste1:V, reg p3:p(V +), reg r23:V, reg l:*, reg names2:cls, reg r24:V, reg c4:L, reg r27:V, reg l2:*, reg r28:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r30:V, reg l4:*, reg dx3:V, reg ind4:*, reg ind5:V, reg ___:cls, reg r31:V, reg names__:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg alist:cls, reg r37:V, reg c5:L, reg r39:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r40:V, reg list:cls, reg r41:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg ind6:*, reg ind7:V, reg length1:cls, reg r44:V, reg rep_int:cls, reg r45:V, reg l5:*, reg c6:L, reg r47:V, reg l7:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r49:V, reg dx7:V, reg ind8:*, reg ind9:V, reg ___1:cls, reg r50:V, reg y10:*, reg y11:V |
    mkenv;
    st x = x;
    as_list = ldf `as.list`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_list(p);
    check L15() else D1();
  D1():
    deopt 3 [r1];
  L15():
    st y = r1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r3):
    c1 = `as.logical`(r3);
    if c1 then L22() else L2();
  L16():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L17():
    r2 = dyn base(<lang names(y)>);
    goto L0(r2);
  L1(r5):
    c = `==`(r5, NULL);
    goto L0(c);
  L2():
    which = ldf which;
    check L27() else D5();
  L4(r10):
    st ind = r10;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  L18():
    y = ld y;
    check L20() else D2();
  L19():
    r4 = dyn base1(<sym y>);
    goto L1(r4);
  L22():
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  D2():
    deopt 8 [y];
  D5():
    deopt 18 [];
  L3(r8):
    goto L4(r8);
  L5(r18):
    c2 = `as.logical`(r18);
    if c2 then L33() else L6();
  L20():
    y1 = force? y;
    checkMissing(y1);
    names = ldf names in base;
    r6 = dyn names(y1);
    check L21() else D3();
  L23():
    y2 = ld y;
    check L25() else D4();
  L24():
    r7 = dyn base2(<sym y>);
    goto L3(r7);
  L27():
    p1 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r12):
      r14 = `==`(r12, "");
      return r14;
    L1():
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      names1 = ldf names in base;
      r13 = dyn names1(y5);
      goto L0(r13);
    L2():
      r11 = dyn base3(<sym y>);
      goto L0(r11);
    };
    r16 = dyn which(p1);
    check L28() else D6();
  L29():
    ind = ld ind;
    check L31() else D7();
  L30():
    r17 = dyn base4(<sym ind>);
    goto L5(r17);
  D3():
    deopt 11 [r6];
  D4():
    deopt 14 [y2];
  D6():
    deopt 20 [r16];
  D7():
    deopt 24 [ind];
  L6():
    goto L13();
  L13():
    y10 = ld y;
    check L64() else D23();
  L21():
    goto L1(r6);
  L25():
    y3 = force? y2;
    checkMissing(y3);
    r9 = seq_along(y3);
    goto L3(r9);
  L28():
    goto L4(r16);
  L31():
    ind1 = force? ind;
    checkMissing(ind1);
    length = ldf length in base;
    r19 = dyn length(ind1);
    check L32() else D8();
  L33():
    vapply = ldf vapply;
    check L34() else D9();
  D8():
    deopt 27 [r19];
  D9():
    deopt 29 [];
  D23():
    deopt 77 [y10];
  L32():
    goto L5(r19);
  L34():
    p2 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      c3 = `is.object`(y7);
      if c3 then L1() else L2(y7);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", y7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(y9):
      ind2 = ld ind;
      ind3 = force? ind2;
      __ = ldf `[` in base;
      r20 = dyn __(y9, ind3);
      goto L0(r20);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    r23 = dyn vapply[, , , collapse](p2, p3, "", " ");
    check L35() else D10();
  L64():
    y11 = force? y10;
    checkMissing(y11);
    popenv;
    return y11;
  D10():
    deopt 35 [r23];
  L35():
    l = ld y;
    names2 = ldf names;
    check L36() else D11();
  D11():
    deopt 37 [r23, l, r23];
  L36():
    r24 = dyn names2(r23, NULL);
    check L37() else D12();
  D12():
    deopt 39 [r23, l, r23, r24];
  L37():
    c4 = `is.object`(r24);
    if c4 then L38() else L39(r23, l, r24);
  L7(r30, l4, dx3):
    names__ = ldf `names<-`;
    check L42() else D14();
  L38():
    dr2 = tryDispatchBuiltin.0("[<-", r24, r23);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(r23, l, dr2);
  L39(r27, l2, r28):
    ind4 = ld ind;
    check L41() else D13();
  D13():
    deopt 41 [r27, l2, r28, r23, ind4];
  D14():
    deopt 44 [r30, l4, dx3];
  L40():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(r23, l, dx2);
  L41():
    ind5 = force? ind4;
    ___ = ldf `[<-` in base;
    r31 = dyn ___(r28, r23, ind5);
    goto L7(r27, l2, r31);
  L42():
    r32 = dyn names__(l4, NULL, dx3);
    check L43() else D15();
  D15():
    deopt 46 [r30, r32];
  L43():
    st y = r32;
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L44() else L45();
  L8(r34):
    l5 = ld y;
    c6 = `is.object`(l5);
    if c6 then L59() else L60(r34, l5);
  L44():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L46() else L47();
  L45():
    r33 = dyn base5(<lang list(`[[`(alist(irrelevant=), 1))>, <lang length(ind)>);
    goto L8(r33);
  L9(r36):
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L54() else L55();
  L12(r49, dx7):
    st y = dx7;
    goto L13();
  L46():
    alist = ldf alist;
    check L48() else D16();
  L47():
    r35 = dyn base6(<lang `[[`(alist(irrelevant=), 1)>);
    goto L9(r35);
  L59():
    dr6 = tryDispatchBuiltin.0("[<-", l5, r34);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L61() else L60(r34, dr6);
  L60(r47, l7):
    ind8 = ld ind;
    check L62() else D22();
  D16():
    deopt 53 [];
  D22():
    deopt 71 [r47, l7, r34, ind8];
  L11(r43):
    rep_int = ldf `rep.int` in base;
    r45 = dyn rep_int(r36, r43);
    check L58() else D21();
  L48():
    r37 = dyn alist[irrelevant](<missing>);
    check L49() else D17();
  L54():
    ind6 = ld ind;
    check L56() else D19();
  L55():
    r42 = dyn base7(<sym ind>);
    goto L11(r42);
  L61():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(r34, dx6);
  L62():
    ind9 = force? ind8;
    ___1 = ldf `[<-` in base;
    r50 = dyn ___1(l7, r34, ind9);
    goto L12(r47, r50);
  D17():
    deopt 56 [r37];
  D19():
    deopt 64 [ind6];
  D21():
    deopt 69 [r45];
  L49():
    c5 = `is.object`(r37);
    if c5 then L50() else L51(r37);
  L56():
    ind7 = force? ind6;
    checkMissing(ind7);
    length1 = ldf length in base;
    r44 = dyn length1(ind7);
    check L57() else D20();
  L58():
    goto L8(r45);
  D20():
    deopt 67 [r44];
  L10(dx5):
    list = ldf list in base;
    r41 = dyn list(dx5);
    check L53() else D18();
  L50():
    dr4 = tryDispatchBuiltin.1("[[", r37);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L52() else L51(dr4);
  L51(r39):
    __1 = ldf `[[` in base;
    r40 = dyn __1(r39, 1);
    goto L10(r40);
  L57():
    goto L11(r44);
  D18():
    deopt 61 [r41];
  L52():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L53():
    goto L9(r41);
  }
}