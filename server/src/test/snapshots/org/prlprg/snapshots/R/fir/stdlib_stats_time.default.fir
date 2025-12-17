fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1159868337;
    st `time.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1159868337(x, offset, `ts.eps`, `...`) {
  (reg x:*, reg offset:*, reg ts_eps:*, reg ddd:dots) -+> V { var x:*, var offset:*, reg offset_isMissing:L, reg offset_orDefault:*, var `ts.eps`:*, reg ts_eps_isMissing:L, reg ts_eps_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg hasTsp:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r5:V, reg attr:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg xtsp:*, reg xtsp1:V, reg c:L, reg xtsp3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg xtsp4:*, reg xtsp5:V, reg c1:L, reg xtsp7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r10:V, reg NROW:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r12:V, reg seq_int:cls, reg r13:V, reg offset1:*, reg offset2:V, reg xtsp8:*, reg xtsp9:V, reg c2:L, reg r15:V, reg offset4:V, reg xtsp11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r17:V, reg offset6:V, reg dx5:V, reg __2:cls, reg r18:V, reg r19:V, reg r20:V, reg ts_eps1:*, reg ts_eps2:V, reg r21:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg round:cls, reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg iy:*, reg iy1:V, reg y:*, reg y1:V, reg r27:V, reg abs:cls, reg r28:V, reg ts_eps3:*, reg ts_eps4:V, reg r29:V, reg iy2:*, reg iy3:V, reg c4:L, reg iy5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg nearI:*, reg nearI1:V, reg __3:cls, reg r30:V, reg l:*, reg c5:L, reg dx9:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg dx13:V, reg nearI2:*, reg nearI3:V, reg ___:cls, reg r31:V, reg xtsp12:*, reg xtsp13:V, reg l3:*, reg tsp__:cls, reg r32:V, reg y2:*, reg y3:V |
    mkenv;
    st x = x;
    offset_isMissing = missing.0(offset);
    if offset_isMissing then L0(0.0) else L0(offset);
  L0(offset_orDefault):
    st offset = offset_orDefault;
    ts_eps_isMissing = missing.0(ts_eps);
    if ts_eps_isMissing then L1() else L2(ts_eps);
  L1():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("ts.eps");
      return r;
    };
    goto L2(p);
  L2(ts_eps_orDefault):
    st `ts.eps` = ts_eps_orDefault;
    st `...` = ddd;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L3(r3):
    st xtsp = r3;
    sym1 = ldf `seq.int`;
    base1 = ldf `seq.int` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L14():
    hasTsp = ldf hasTsp;
    check L16() else D0();
  L15():
    r2 = dyn base(<lang hasTsp(x)>, "tsp");
    goto L3(r2);
  D0():
    deopt 3 [];
  L4(r8):
    offset1 = ld offset;
    check L32() else D8();
  L16():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r5 = dyn hasTsp(p1);
    check L17() else D1();
  L19():
    xtsp = ld xtsp;
    check L21() else D3();
  L20():
    r7 = dyn base1[, , `length.out`](<lang `[`(xtsp, 1)>, <lang `[`(xtsp, 2)>, <lang NROW(x)>);
    goto L4(r7);
  D1():
    deopt 5 [r5];
  D3():
    deopt 12 [xtsp];
  D8():
    deopt 28 [r8, offset1];
  L17():
    attr = ldf attr in base;
    r6 = dyn attr(r5, "tsp");
    check L18() else D2();
  L21():
    xtsp1 = force? xtsp;
    checkMissing(xtsp1);
    c = `is.object`(xtsp1);
    if c then L22() else L23(xtsp1);
  L32():
    offset2 = force? offset1;
    checkMissing(offset2);
    xtsp8 = ld xtsp;
    check L33() else D9();
  D2():
    deopt 8 [r6];
  D9():
    deopt 29 [r8, offset2, xtsp8];
  L5(dx1):
    xtsp4 = ld xtsp;
    check L25() else D4();
  L18():
    goto L3(r6);
  L22():
    dr = tryDispatchBuiltin.1("[", xtsp1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(xtsp3):
    __ = ldf `[` in base;
    r9 = dyn __(xtsp3, 1);
    goto L5(r9);
  L33():
    xtsp9 = force? xtsp8;
    checkMissing(xtsp9);
    c2 = `is.object`(xtsp9);
    if c2 then L34() else L35(r8, offset2, xtsp9);
  D4():
    deopt 17 [xtsp4];
  L7(r17, offset6, dx5):
    r19 = `/`(offset6, dx5);
    r20 = `+`(r17, r19);
    st y = r20;
    ts_eps1 = ld `ts.eps`;
    check L37() else D10();
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L25():
    xtsp5 = force? xtsp4;
    checkMissing(xtsp5);
    c1 = `is.object`(xtsp5);
    if c1 then L26() else L27(xtsp5);
  L34():
    dr4 = tryDispatchBuiltin.1("[", xtsp9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L36() else L35(r8, offset2, dr4);
  L35(r15, offset4, xtsp11):
    __2 = ldf `[` in base;
    r18 = dyn __2(xtsp11, 3);
    goto L7(r15, offset4, r18);
  D10():
    deopt 37 [ts_eps1];
  L6(dx3):
    NROW = ldf NROW;
    check L29() else D5();
  L26():
    dr2 = tryDispatchBuiltin.1("[", xtsp5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(dr2);
  L27(xtsp7):
    __1 = ldf `[` in base;
    r10 = dyn __1(xtsp7, 2);
    goto L6(r10);
  L36():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(r8, offset2, dx4);
  L37():
    ts_eps2 = force? ts_eps1;
    checkMissing(ts_eps2);
    r21 = `>`(ts_eps2, 0.0);
    c3 = `as.logical`(r21);
    if c3 then L38() else L8();
  D5():
    deopt 23 [];
  L8():
    goto L13();
  L13():
    xtsp12 = ld xtsp;
    check L57() else D18();
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L29():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r12 = dyn NROW(p2);
    check L30() else D6();
  L38():
    sym2 = ldf round;
    base2 = ldf round in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  D6():
    deopt 25 [r12];
  D18():
    deopt 68 [xtsp12];
  L9(r23):
    st iy = r23;
    sym3 = ldf abs;
    base3 = ldf abs in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L41() else L42();
  L30():
    seq_int = ldf `seq.int` in base;
    r13 = dyn seq_int(dx1, dx3, r12);
    check L31() else D7();
  L39():
    round = ldf round in base;
    r24 = dyn round(<sym y>);
    goto L9(r24);
  L40():
    r22 = dyn base2(<sym y>);
    goto L9(r22);
  L57():
    xtsp13 = force? xtsp12;
    checkMissing(xtsp13);
    l3 = ld y;
    tsp__ = ldf `tsp<-`;
    check L58() else D19();
  D7():
    deopt 28 [r13];
  D19():
    deopt 71 [xtsp13, l3, xtsp13];
  L10(r26):
    ts_eps3 = ld `ts.eps`;
    check L46() else D14();
  L31():
    goto L4(r13);
  L41():
    iy = ld iy;
    check L43() else D11();
  L42():
    r25 = dyn base3(<lang `-`(iy, y)>);
    goto L10(r25);
  L58():
    r32 = dyn tsp__(l3, NULL, xtsp13);
    check L59() else D20();
  D11():
    deopt 47 [iy];
  D14():
    deopt 52 [r26, ts_eps3];
  D20():
    deopt 73 [xtsp13, r32];
  L43():
    iy1 = force? iy;
    checkMissing(iy1);
    y = ld y;
    check L44() else D12();
  L46():
    ts_eps4 = force? ts_eps3;
    checkMissing(ts_eps4);
    r29 = `<`(r26, ts_eps4);
    st nearI = r29;
    iy2 = ld iy;
    check L47() else D15();
  L59():
    st y = r32;
    y2 = ld y;
    check L60() else D21();
  D12():
    deopt 48 [iy1, y];
  D15():
    deopt 56 [iy2];
  D21():
    deopt 75 [y2];
  L44():
    y1 = force? y;
    checkMissing(y1);
    r27 = `-`(iy1, y1);
    abs = ldf abs in base;
    r28 = dyn abs(r27);
    check L45() else D13();
  L47():
    iy3 = force? iy2;
    checkMissing(iy3);
    c4 = `is.object`(iy3);
    if c4 then L48() else L49(iy3);
  L60():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  D13():
    deopt 52 [r28];
  L11(dx7):
    l = ld y;
    c5 = `is.object`(l);
    if c5 then L52() else L53(dx7, l);
  L45():
    goto L10(r28);
  L48():
    dr6 = tryDispatchBuiltin.1("[", iy3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L50() else L49(dr6);
  L49(iy5):
    nearI = ld nearI;
    check L51() else D16();
  D16():
    deopt 58 [iy5, nearI];
  L12(dx12, dx13):
    st y = dx13;
    goto L13();
  L50():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx6);
  L51():
    nearI1 = force? nearI;
    __3 = ldf `[` in base;
    r30 = dyn __3(iy5, nearI1);
    goto L11(r30);
  L52():
    dr8 = tryDispatchBuiltin.0("[<-", l, dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L54() else L53(dx7, dr8);
  L53(dx9, l2):
    nearI2 = ld nearI;
    check L55() else D17();
  D17():
    deopt 62 [dx9, l2, dx7, nearI2];
  L54():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L12(dx7, dx11);
  L55():
    nearI3 = force? nearI2;
    ___ = ldf `[<-` in base;
    r31 = dyn ___(l2, dx7, nearI3);
    goto L12(dx9, r31);
  }
}