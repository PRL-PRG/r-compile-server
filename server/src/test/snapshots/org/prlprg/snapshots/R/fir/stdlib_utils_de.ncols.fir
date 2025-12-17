fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2317352355;
    st `de.ncols` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2317352355(inlist) {
  (reg inlist:*) -+> V { var inlist:*, reg matrix:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg inlist1:*, reg inlist2:V, reg length:cls, reg r2:V, reg p:p(V +), reg r4:V, reg inlist3:*, reg inlist4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg i7:I, reg r6:V, reg telt:*, reg telt1:V, reg is_matrix:cls, reg r7:V, reg c1:L, reg ncol:cls, reg telt2:*, reg telt3:V, reg p1:p(V +), reg r9:V, reg l1:*, reg c2:L, reg i11:I, reg r11:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg i13:I, reg dx1:V, reg i14:*, reg i15:V, reg ___:cls, reg r14:V, reg l4:*, reg c3:L, reg i17:I, reg r16:I, reg l6:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i19:I, reg r18:I, reg dx3:V, reg i20:*, reg i21:V, reg ___1:cls, reg r19:V, reg i22:I, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg i25:I, reg r22:V, reg telt4:*, reg telt5:V, reg is_list:cls, reg r23:V, reg c4:L, reg telt6:*, reg telt7:V, reg s1:V, reg l7:I, reg i28:I, reg i29:I, reg i30:I, reg i31:I, reg c5:L, reg x1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg i40:I, reg i41:I, reg r25:V, reg telt8:*, reg telt9:V, reg is_vector:cls, reg r26:V, reg r27:V, reg c6:L, reg stop:cls, reg r28:V, reg i46:I, reg i47:I, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg i50:I, reg r31:V, reg telt10:*, reg telt11:V, reg length1:cls, reg r32:V, reg l8:*, reg c7:L, reg i52:I, reg r34:V, reg l10:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i54:I, reg dx5:V, reg i55:*, reg i56:V, reg ___2:cls, reg r37:V, reg l11:*, reg c8:L, reg i58:I, reg r39:I, reg l13:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i60:I, reg r41:I, reg dx7:V, reg i61:*, reg i62:V, reg ___3:cls, reg r42:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg i65:I, reg r44:V, reg telt12:*, reg telt13:V, reg is_vector1:cls, reg r45:V, reg c9:L, reg l14:*, reg c10:L, reg i69:I, reg r47:I, reg l16:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i71:I, reg dx9:V, reg i72:*, reg i73:V, reg ___4:cls, reg r50:V, reg l17:*, reg c11:L, reg i75:I, reg r52:I, reg l19:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i77:I, reg r54:I, reg dx11:V, reg i78:*, reg i79:V, reg ___5:cls, reg r55:V, reg stop1:cls, reg r56:V, reg i80:*, reg i81:V, reg r57:V, reg ncols:*, reg ncols1:V |
    mkenv;
    st inlist = inlist;
    matrix = ldf matrix;
    check L21() else D0();
  D0():
    deopt 1 [];
  L21():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      inlist1 = ld inlist;
      inlist2 = force? inlist1;
      checkMissing(inlist2);
      length = ldf length in base;
      r2 = dyn length(inlist2);
      goto L0(r2);
    L2():
      r = dyn base(<sym inlist>);
      goto L0(r);
    };
    r4 = dyn matrix[, nrow, ncol](0.0, p, 2);
    check L22() else D1();
  D1():
    deopt 7 [r4];
  L22():
    st ncols = r4;
    st i = 1;
    inlist3 = ld inlist;
    check L23() else D2();
  D2():
    deopt 12 [inlist3];
  L23():
    inlist4 = force? inlist3;
    checkMissing(inlist4);
    s = toForSeq(inlist4);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L24() else L20();
  L20():
    x = `[[`(s, i2, NULL, TRUE);
    st telt = x;
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L24():
    ncols = ld ncols;
    check L86() else D27();
  D27():
    deopt 118 [ncols];
  L1(i7, r6):
    c1 = `as.logical`(r6);
    if c1 then L29() else L2();
  L25():
    telt = ld telt;
    check L27() else D3();
  L26():
    r5 = dyn base1(<sym telt>);
    goto L1(i2, r5);
  L86():
    ncols1 = force? ncols;
    checkMissing(ncols1);
    popenv;
    return ncols1;
  D3():
    deopt 16 [i2, telt];
  L2():
    sym2 = ldf `is.list`;
    base2 = ldf `is.list` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L5(i22):
    i80 = ld i;
    check L85() else D26();
  L27():
    telt1 = force? telt;
    checkMissing(telt1);
    is_matrix = ldf `is.matrix` in base;
    r7 = dyn is_matrix(telt1);
    check L28() else D4();
  L29():
    ncol = ldf ncol;
    check L30() else D5();
  D4():
    deopt 19 [i2, r7];
  D5():
    deopt 21 [i7];
  D26():
    deopt 110 [i22, i80];
  L6(i25, r22):
    c4 = `as.logical`(r22);
    if c4 then L45() else L7();
  L28():
    goto L1(i2, r7);
  L30():
    p1 = prom<V +>{
      telt2 = ld telt;
      telt3 = force? telt2;
      checkMissing(telt3);
      return telt3;
    };
    r9 = dyn ncol(p1);
    check L31() else D6();
  L41():
    telt4 = ld telt;
    check L43() else D9();
  L42():
    r21 = dyn base2(<sym telt>);
    goto L6(i7, r21);
  L85():
    i81 = force? i80;
    checkMissing(i81);
    r57 = `+`(i81, 1);
    st i = r57;
    goto L0(i22);
  D6():
    deopt 23 [i7, r9];
  D9():
    deopt 40 [i7, telt4];
  L7():
    sym5 = ldf `is.vector`;
    base5 = ldf `is.vector` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L69() else L70();
  L31():
    l1 = ld ncols;
    c2 = `is.object`(l1);
    if c2 then L32() else L33(i7, r9, l1);
  L43():
    telt5 = force? telt4;
    checkMissing(telt5);
    is_list = ldf `is.list` in base;
    r23 = dyn is_list(telt5);
    check L44() else D10();
  L45():
    telt6 = ld telt;
    check L46() else D11();
  D10():
    deopt 43 [i7, r23];
  D11():
    deopt 44 [i25, telt6];
  L3(i13, dx1):
    st ncols = dx1;
    l4 = ld ncols;
    c3 = `is.object`(l4);
    if c3 then L36() else L37(i13, 2, l4);
  L16(i65, r44):
    c9 = `as.logical`(r44);
    if c9 then L73() else L17();
  L32():
    dr = tryDispatchBuiltin.0("[<-", l1, r9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(i7, r9, dr);
  L33(i11, r11, l3):
    i14 = ld i;
    check L35() else D7();
  L44():
    goto L6(i7, r23);
  L46():
    telt7 = force? telt6;
    checkMissing(telt7);
    s1 = toForSeq(telt7);
    l7 = length(s1);
    i28 = 0;
    goto L8(i25, i28);
  L69():
    telt12 = ld telt;
    check L71() else D20();
  L70():
    r43 = dyn base5(<sym telt>);
    goto L16(i25, r43);
  D7():
    deopt 25 [i11, r11, l3, r9, i14];
  D20():
    deopt 85 [i25, telt12];
  L4(i19, r18, dx3):
    st ncols = dx3;
    goto L5(i19);
  L8(i29, i30):
    i31 = `+`.1(i30, 1);
    c5 = `<`.1(l7, i31);
    if c5 then L47() else L12();
  L17():
    stop1 = ldf stop;
    check L83() else D24();
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i7, dx);
  L35():
    i15 = force? i14;
    ___ = ldf `[<-` in base;
    r14 = dyn ___(l3, r9, i15, 1);
    goto L3(i11, r14);
  L36():
    dr2 = tryDispatchBuiltin.0("[<-", l4, 2);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L38() else L37(i13, 2, dr2);
  L37(i17, r16, l6):
    i20 = ld i;
    check L39() else D8();
  L71():
    telt13 = force? telt12;
    checkMissing(telt13);
    is_vector1 = ldf `is.vector` in base;
    r45 = dyn is_vector1(telt13, "any");
    check L72() else D21();
  L73():
    l14 = ld ncols;
    c10 = `is.object`(l14);
    if c10 then L74() else L75(i65, 1, l14);
  D8():
    deopt 33 [i17, r16, l6, 2, i20];
  D21():
    deopt 89 [i25, r45];
  D24():
    deopt 107 [i65];
  L12():
    x1 = `[[`(s1, i31, NULL, TRUE);
    st telt2 = x1;
    sym3 = ldf `is.vector`;
    base3 = ldf `is.vector` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L18(i71, dx9):
    st ncols = dx9;
    l17 = ld ncols;
    c11 = `is.object`(l17);
    if c11 then L78() else L79(i71, 1, l17);
  L38():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(i13, 2, dx2);
  L39():
    i21 = force? i20;
    ___1 = ldf `[<-` in base;
    r19 = dyn ___1(l6, 2, i21, 2);
    goto L4(i17, r16, r19);
  L47():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L72():
    goto L16(i25, r45);
  L74():
    dr8 = tryDispatchBuiltin.0("[<-", l14, 1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L76() else L75(i65, 1, dr8);
  L75(i69, r47, l16):
    i72 = ld i;
    check L77() else D22();
  L83():
    r56 = dyn stop1("wrong argument to 'dataentry'");
    check L84() else D25();
  D22():
    deopt 93 [i69, r47, l16, 1, i72];
  D25():
    deopt 109 [i65, r56];
  L9(i40, i41, r25):
    r27 = `!`(r25);
    c6 = `as.logical`(r27);
    if c6 then L52() else L10();
  L13(i50, r31):
    l8 = ld ncols;
    c7 = `is.object`(l8);
    if c7 then L60() else L61(i50, r31, l8);
  L19(i77, r54, dx11):
    st ncols = dx11;
    goto L5(i77);
  L48():
    telt8 = ld telt2;
    check L50() else D12();
  L49():
    r24 = dyn base3(<sym telt2>);
    goto L9(i29, i31, r24);
  L56():
    telt10 = ld telt;
    check L58() else D16();
  L57():
    r30 = dyn base4(<sym telt>);
    goto L13(i29, r30);
  L76():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L18(i65, dx8);
  L77():
    i73 = force? i72;
    ___4 = ldf `[<-` in base;
    r50 = dyn ___4(l16, 1, i73, 1);
    goto L18(i69, r50);
  L78():
    dr10 = tryDispatchBuiltin.0("[<-", l17, 1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L80() else L79(i71, 1, dr10);
  L79(i75, r52, l19):
    i78 = ld i;
    check L81() else D23();
  L84():
    goto L5(i65);
  D12():
    deopt 48 [i29, i31, telt8];
  D16():
    deopt 65 [i29, telt10];
  D23():
    deopt 101 [i75, r52, l19, 1, i78];
  L10():
    goto L11(i40, i41);
  L11(i46, i47):
    goto L8(i46, i47);
  L14(i54, dx5):
    st ncols = dx5;
    l11 = ld ncols;
    c8 = `is.object`(l11);
    if c8 then L64() else L65(i54, 3, l11);
  L50():
    telt9 = force? telt8;
    checkMissing(telt9);
    is_vector = ldf `is.vector` in base;
    r26 = dyn is_vector(telt9, "any");
    check L51() else D13();
  L52():
    stop = ldf stop;
    check L53() else D14();
  L58():
    telt11 = force? telt10;
    checkMissing(telt11);
    length1 = ldf length in base;
    r32 = dyn length1(telt11);
    check L59() else D17();
  L60():
    dr4 = tryDispatchBuiltin.0("[<-", l8, r31);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L62() else L61(i50, r31, dr4);
  L61(i52, r34, l10):
    i55 = ld i;
    check L63() else D18();
  L80():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L19(i71, 1, dx10);
  L81():
    i79 = force? i78;
    ___5 = ldf `[<-` in base;
    r55 = dyn ___5(l19, 1, i79, 2);
    goto L19(i75, r52, r55);
  D13():
    deopt 52 [i29, i31, r26];
  D14():
    deopt 55 [i40, i41];
  D17():
    deopt 68 [i29, r32];
  D18():
    deopt 70 [i52, r34, l10, r31, i55];
  L15(i60, r41, dx7):
    st ncols = dx7;
    goto L5(i60);
  L51():
    goto L9(i29, i31, r26);
  L53():
    r28 = dyn stop("wrong argument to 'dataentry'");
    check L54() else D15();
  L59():
    goto L13(i29, r32);
  L62():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(i50, dx4);
  L63():
    i56 = force? i55;
    ___2 = ldf `[<-` in base;
    r37 = dyn ___2(l10, r31, i56, 1);
    goto L14(i52, r37);
  L64():
    dr6 = tryDispatchBuiltin.0("[<-", l11, 3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L66() else L65(i54, 3, dr6);
  L65(i58, r39, l13):
    i61 = ld i;
    check L67() else D19();
  D15():
    deopt 57 [i40, i41, r28];
  D19():
    deopt 78 [i58, r39, l13, 3, i61];
  L54():
    goto L11(i40, i41);
  L66():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(i54, 3, dx6);
  L67():
    i62 = force? i61;
    ___3 = ldf `[<-` in base;
    r42 = dyn ___3(l13, 3, i62, 2);
    goto L15(i58, r39, r42);
  }
}