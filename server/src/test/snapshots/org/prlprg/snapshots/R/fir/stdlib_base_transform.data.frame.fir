fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2733360753;
    st `transform.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2733360753(_data, `...`) {
  (reg _data:*, reg ddd:dots) -+> V { var _data:*, var `...`:dots?, reg eval:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg _data1:*, reg _data2:V, reg p1:p(V +), reg parent_frame:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg e:*, reg e1:V, reg names:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg tags:*, reg tags1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg _data3:*, reg _data4:V, reg names1:cls, reg r15:V, reg match:cls, reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg inx:*, reg inx1:V, reg is_na:cls, reg r19:V, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg matched:*, reg matched1:V, reg any:cls, reg r23:V, reg c:L, reg e2:*, reg e3:V, reg c1:L, reg e5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg matched2:*, reg matched3:V, reg __:cls, reg r24:V, reg l:*, reg c2:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx7:V, reg inx2:*, reg inx3:V, reg c3:L, reg dx10:V, reg l4:*, reg dx11:V, reg inx5:V, reg dr4:V, reg dc2:L, reg dx14:V, reg dx15:V, reg l6:*, reg dx16:V, reg dx17:V, reg matched4:*, reg matched5:V, reg __1:cls, reg r25:V, reg ___:cls, reg r26:V, reg data_frame:cls, reg _data5:*, reg _data6:V, reg p3:p(V +), reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r30:V, reg r31:V, reg matched6:*, reg matched7:V, reg all:cls, reg r32:V, reg r33:V, reg c4:L, reg e6:*, reg e7:V, reg c5:L, reg e9:V, reg dr6:V, reg dc3:L, reg dx18:V, reg dx19:V, reg matched8:*, reg matched9:V, reg r34:V, reg __2:cls, reg r35:V, reg l7:*, reg c6:L, reg r37:L, reg l9:*, reg dr8:V, reg dc4:L, reg dx20:V, reg dx21:V, reg ____:cls, reg r40:V, reg do_call:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r43:V, reg r44:V, reg _data7:*, reg _data8:V, reg list:cls, reg r45:V, reg args:*, reg args1:V, reg c7:cls, reg r46:V, reg p4:p(V +), reg r48:V, reg _data9:*, reg _data10:V |
    mkenv;
    st _data = _data;
    st `...` = ddd;
    eval = ldf eval;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      substitute = ldf substitute in base;
      r2 = dyn substitute(<lang list(...)>);
      goto L0(r2);
    L2():
      r = dyn base(<lang list(...)>);
      goto L0(r);
    };
    p1 = prom<V +>{
      _data1 = ld _data;
      _data2 = force? _data1;
      checkMissing(_data2);
      return _data2;
    };
    p2 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r5 = dyn parent_frame();
      return r5;
    };
    r7 = dyn eval(p, p1, p2);
    check L15() else D1();
  D1():
    deopt 5 [r7];
  L15():
    st e = r7;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L0(r9):
    st tags = r9;
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L16():
    e = ld e;
    check L18() else D2();
  L17():
    r8 = dyn base1(<sym e>);
    goto L0(r8);
  D2():
    deopt 9 [e];
  L1(r12):
    st inx = r12;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  L18():
    e1 = force? e;
    checkMissing(e1);
    names = ldf names in base;
    r10 = dyn names(e1);
    check L19() else D3();
  L20():
    tags = ld tags;
    check L22() else D4();
  L21():
    r11 = dyn base2(<sym tags>, <lang names(_data)>);
    goto L1(r11);
  D3():
    deopt 12 [r10];
  D4():
    deopt 16 [tags];
  L3(r18):
    r20 = `!`(r18);
    st matched = r20;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L32() else L33();
  L19():
    goto L0(r10);
  L22():
    tags1 = force? tags;
    checkMissing(tags1);
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  L28():
    inx = ld inx;
    check L30() else D8();
  L29():
    r17 = dyn base4(<sym inx>);
    goto L3(r17);
  D8():
    deopt 31 [inx];
  L2(r14):
    match = ldf match in base;
    r16 = dyn match(tags1, r14, NA_INT, NULL);
    check L27() else D7();
  L4(r22):
    c = `as.logical`(r22);
    if c then L36() else L5();
  L23():
    _data3 = ld _data;
    check L25() else D5();
  L24():
    r13 = dyn base3(<sym _data>);
    goto L2(r13);
  L30():
    inx1 = force? inx;
    checkMissing(inx1);
    is_na = ldf `is.na` in base;
    r19 = dyn is_na(inx1);
    check L31() else D9();
  L32():
    matched = ld matched;
    check L34() else D10();
  L33():
    r21 = dyn base5(<sym matched>);
    goto L4(r21);
  D5():
    deopt 20 [_data3];
  D7():
    deopt 27 [r16];
  D9():
    deopt 34 [r19];
  D10():
    deopt 39 [matched];
  L5():
    goto L9();
  L9():
    sym6 = ldf all;
    base6 = ldf all in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L53() else L54();
  L25():
    _data4 = force? _data3;
    checkMissing(_data4);
    names1 = ldf names in base;
    r15 = dyn names1(_data4);
    check L26() else D6();
  L27():
    goto L1(r16);
  L31():
    goto L3(r19);
  L34():
    matched1 = force? matched;
    checkMissing(matched1);
    any = ldf any in base;
    r23 = dyn any(matched1);
    check L35() else D11();
  L36():
    e2 = ld e;
    check L37() else D12();
  D6():
    deopt 23 [r15];
  D11():
    deopt 42 [r23];
  D12():
    deopt 43 [e2];
  L10(r31):
    r33 = `!`(r31);
    c4 = `as.logical`(r33);
    if c4 then L57() else L11();
  L26():
    goto L2(r15);
  L35():
    goto L4(r23);
  L37():
    e3 = force? e2;
    checkMissing(e3);
    c1 = `is.object`(e3);
    if c1 then L38() else L39(e3);
  L53():
    matched6 = ld matched;
    check L55() else D18();
  L54():
    r30 = dyn base6(<sym matched>);
    goto L10(r30);
  D18():
    deopt 67 [matched6];
  L6(dx1):
    l = ld _data;
    c2 = `is.object`(l);
    if c2 then L42() else L43(dx1, l);
  L11():
    _data9 = ld _data;
    check L69() else D24();
  L38():
    dr = tryDispatchBuiltin.1("[", e3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L40() else L39(dr);
  L39(e5):
    matched2 = ld matched;
    check L41() else D13();
  L55():
    matched7 = force? matched6;
    checkMissing(matched7);
    all = ldf all in base;
    r32 = dyn all(matched7);
    check L56() else D19();
  L57():
    e6 = ld e;
    check L58() else D20();
  D13():
    deopt 45 [e5, matched2];
  D19():
    deopt 70 [r32];
  D20():
    deopt 72 [e6];
  D24():
    deopt 91 [_data9];
  L7(dx7):
    st _data = dx7;
    data_frame = ldf `data.frame`;
    check L50() else D16();
  L40():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L41():
    matched3 = force? matched2;
    __ = ldf `[` in base;
    r24 = dyn __(e5, matched3);
    goto L6(r24);
  L42():
    dr2 = tryDispatchBuiltin.0("[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(dx1, dr2);
  L43(dx3, l2):
    inx2 = ld inx;
    check L45() else D14();
  L56():
    goto L10(r32);
  L58():
    e7 = force? e6;
    checkMissing(e7);
    c5 = `is.object`(e7);
    if c5 then L59() else L60(e7);
  L69():
    _data10 = force? _data9;
    checkMissing(_data10);
    popenv;
    return _data10;
  D14():
    deopt 49 [dx3, l2, dx1, inx2];
  D16():
    deopt 57 [];
  L12(dx19):
    st args = dx19;
    l7 = ld args;
    c6 = `is.object`(l7);
    if c6 then L63() else L64(FALSE, l7);
  L44():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx5);
  L45():
    inx3 = force? inx2;
    checkMissing(inx3);
    c3 = `is.object`(inx3);
    if c3 then L46() else L47(dx3, l2, dx1, inx3);
  L50():
    p3 = prom<V +>{
      _data5 = ld _data;
      _data6 = force? _data5;
      checkMissing(_data6);
      return _data6;
    };
    r28 = dyn data_frame[, `check.names`](p3, FALSE);
    check L51() else D17();
  L59():
    dr6 = tryDispatchBuiltin.1("[", e7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L61() else L60(dr6);
  L60(e9):
    matched8 = ld matched;
    check L62() else D21();
  D17():
    deopt 61 [r28];
  D21():
    deopt 74 [e9, matched8];
  L8(dx15, l6, dx16, dx17):
    ___ = ldf `[<-` in base;
    r26 = dyn ___(l6, dx16, dx17);
    goto L7(r26);
  L13(dx21):
    st args = dx21;
    do_call = ldf `do.call`;
    check L66() else D22();
  L46():
    dr4 = tryDispatchBuiltin.1("[", inx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L48() else L47(dx3, l2, dx1, dr4);
  L47(dx10, l4, dx11, inx5):
    matched4 = ld matched;
    check L49() else D15();
  L51():
    st _data = r28;
    goto L9();
  L61():
    dx18 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx18);
  L62():
    matched9 = force? matched8;
    checkMissing(matched9);
    r34 = `!`(matched9);
    __2 = ldf `[` in base;
    r35 = dyn __2(e9, r34);
    goto L12(r35);
  L63():
    dr8 = tryDispatchBuiltin.0("[[<-", l7, FALSE);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L65() else L64(FALSE, dr8);
  L64(r37, l9):
    ____ = ldf `[[<-` in base;
    r40 = dyn ____(l9, FALSE, "check.names");
    goto L13(r40);
  D15():
    deopt 51 [dx10, l4, dx11, inx5, matched4];
  D22():
    deopt 87 [];
  L48():
    dx14 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx3, l2, dx1, dx14);
  L49():
    matched5 = force? matched4;
    __1 = ldf `[` in base;
    r25 = dyn __1(inx5, matched5);
    goto L8(dx10, l4, dx11, r25);
  L65():
    dx20 = getTryDispatchBuiltinValue(dr8);
    goto L13(dx20);
  L66():
    p4 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r42):
      return r42;
    L2():
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r41 = dyn base7(<lang list(_data)>, <sym args>);
      goto L0(r41);
    L1(r44):
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      c7 = ldf c in base;
      r46 = dyn c7(r44, args1);
      goto L0(r46);
    L4():
      _data7 = ld _data;
      _data8 = force? _data7;
      checkMissing(_data8);
      list = ldf list in base;
      r45 = dyn list(_data8);
      goto L1(r45);
    L5():
      r43 = dyn base8(<sym _data>);
      goto L1(r43);
    };
    r48 = dyn do_call("data.frame", p4);
    check L67() else D23();
  D23():
    deopt 90 [r48];
  L67():
    popenv;
    return r48;
  }
}