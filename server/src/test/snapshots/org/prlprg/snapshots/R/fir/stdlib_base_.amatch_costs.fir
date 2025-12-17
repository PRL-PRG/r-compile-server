fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3667539052;
    st `.amatch_costs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3667539052(x) {
  (reg x:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg c1:V, reg r5:V, reg c2:L, reg as_list:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r7:V, reg pmatch:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg x5:*, reg x6:V, reg names:cls, reg r10:V, reg p1:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg costs:*, reg costs1:V, reg names1:cls, reg r14:V, reg p2:p(V +), reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg pos:*, reg pos1:V, reg anyNA:cls, reg r19:V, reg c3:L, reg warning:cls, reg r20:V, reg x7:*, reg x8:V, reg c4:L, reg x10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg x13:V, reg r22:V, reg pos2:*, reg pos3:V, reg is_na:cls, reg r23:V, reg r24:V, reg __:cls, reg r25:V, reg unlist:cls, reg x14:*, reg x15:V, reg p3:p(V +), reg r27:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg x16:*, reg x17:V, reg is_numeric:cls, reg r32:V, reg all:cls, reg r33:V, reg r34:V, reg c5:L, reg c6:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg c10:L, reg r36:V, reg x18:*, reg x19:V, reg r37:V, reg any:cls, reg r38:V, reg c11:L, reg c12:V, reg c14:L, reg stop:cls, reg r39:V, reg x20:*, reg x21:V, reg l:*, reg c15:L, reg x23:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx3:V, reg x25:V, reg dx4:V, reg pos4:*, reg pos5:V, reg ___:cls, reg r41:V, reg costs2:*, reg costs3:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0(NULL) else L0(x);
  L0(x_orDefault):
    st x = x_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L1(r1):
    st costs = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L17():
    c = ldf c in base;
    r2 = dyn c(1.0, 1.0, 1.0);
    check L19() else D0();
  L18():
    r = dyn base[insertions, deletions, substitutions](1.0, 1.0, 1.0);
    goto L1(r);
  D0():
    deopt 9 [r2];
  L2(r4):
    r5 = `!`(r4);
    c2 = `as.logical`(r5);
    if c2 then L23() else L3();
  L19():
    goto L1(r2);
  L20():
    x1 = ld x;
    check L22() else D1();
  L21():
    r3 = dyn base1(<sym x>);
    goto L2(r3);
  D1():
    deopt 12 [x1];
  L3():
    goto L16();
  L16():
    costs2 = ld costs;
    check L69() else D24();
  L22():
    x2 = force? x1;
    checkMissing(x2);
    c1 = `==`(x2, NULL);
    goto L2(c1);
  L23():
    as_list = ldf `as.list`;
    check L24() else D2();
  D2():
    deopt 17 [];
  D24():
    deopt 90 [costs2];
  L24():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r7 = dyn as_list(p);
    check L25() else D3();
  L69():
    costs3 = force? costs2;
    checkMissing(costs3);
    popenv;
    return costs3;
  D3():
    deopt 19 [r7];
  L25():
    st x = r7;
    pmatch = ldf pmatch;
    check L26() else D4();
  D4():
    deopt 22 [];
  L26():
    p1 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      names = ldf names in base;
      r10 = dyn names(x6);
      goto L0(r10);
    L2():
      r8 = dyn base2(<sym x>);
      goto L0(r8);
    };
    p2 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      costs = ld costs;
      costs1 = force? costs;
      checkMissing(costs1);
      names1 = ldf names in base;
      r14 = dyn names1(costs1);
      goto L0(r14);
    L2():
      r12 = dyn base3(<sym costs>);
      goto L0(r12);
    };
    r16 = dyn pmatch(p1, p2);
    check L27() else D5();
  D5():
    deopt 25 [r16];
  L27():
    st pos = r16;
    sym4 = ldf anyNA;
    base4 = ldf anyNA in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  L4(r18):
    c3 = `as.logical`(r18);
    if c3 then L32() else L5();
  L28():
    pos = ld pos;
    check L30() else D6();
  L29():
    r17 = dyn base4(<sym pos>);
    goto L4(r17);
  D6():
    deopt 29 [pos];
  L5():
    goto L8();
  L8():
    unlist = ldf unlist;
    check L44() else D13();
  L30():
    pos1 = force? pos;
    checkMissing(pos1);
    anyNA = ldf anyNA in base;
    r19 = dyn anyNA(pos1);
    check L31() else D7();
  L32():
    warning = ldf warning;
    check L33() else D8();
  D7():
    deopt 32 [r19];
  D8():
    deopt 34 [];
  D13():
    deopt 51 [];
  L31():
    goto L4(r19);
  L33():
    r20 = dyn warning("unknown cost components ignored");
    check L34() else D9();
  L44():
    p3 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      return x15;
    };
    r27 = dyn unlist(p3);
    check L45() else D14();
  D9():
    deopt 36 [r20];
  D14():
    deopt 53 [r27];
  L34():
    x7 = ld x;
    check L35() else D10();
  L45():
    st x = r27;
    sym6 = ldf all;
    base6 = ldf all in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L46() else L47();
  D10():
    deopt 37 [x7];
  L9(r29):
    r34 = `!`(r29);
    c5 = `as.logical`(r34);
    if c5 then L11(c5) else L53();
  L35():
    x8 = force? x7;
    checkMissing(x8);
    c4 = `is.object`(x8);
    if c4 then L36() else L37(x8);
  L46():
    sym7 = ldf `is.numeric`;
    base7 = ldf `is.numeric` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L48() else L49();
  L47():
    r28 = dyn base6(<lang is.numeric(x)>);
    goto L9(r28);
  L6(dx1):
    st x = dx1;
    goto L8();
  L10(r31):
    all = ldf all in base;
    r33 = dyn all(r31);
    check L52() else D17();
  L11(c6):
    c14 = `as.logical`(c6);
    if c14 then L59() else L13();
  L36():
    dr = tryDispatchBuiltin.1("[", x8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L38() else L37(dr);
  L37(x10):
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L39() else L40();
  L48():
    x16 = ld x;
    check L50() else D15();
  L49():
    r30 = dyn base7(<sym x>);
    goto L10(r30);
  L53():
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L54() else L55();
  D15():
    deopt 59 [x16];
  D17():
    deopt 64 [r33];
  L7(x13, r22):
    r24 = `!`(r22);
    __ = ldf `[` in base;
    r25 = dyn __(x13, r24);
    goto L6(r25);
  L12(c10, r36):
    c11 = `as.logical`(r36);
    c12 = `||`(c10, c11);
    goto L11(c12);
  L13():
    goto L14();
  L14():
    x20 = ld x;
    check L63() else D22();
  L38():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L39():
    pos2 = ld pos;
    check L41() else D11();
  L40():
    r21 = dyn base5(<sym pos>);
    goto L7(x10, r21);
  L50():
    x17 = force? x16;
    checkMissing(x17);
    is_numeric = ldf `is.numeric` in base;
    r32 = dyn is_numeric(x17);
    check L51() else D16();
  L52():
    goto L9(r33);
  L54():
    x18 = ld x;
    check L56() else D18();
  L55():
    r35 = dyn base8(<lang `<`(x, 0.0)>);
    goto L12(c5, r35);
  L59():
    stop = ldf stop;
    check L60() else D20();
  D11():
    deopt 41 [x10, pos2];
  D16():
    deopt 62 [r32];
  D18():
    deopt 68 [c5, x18];
  D20():
    deopt 76 [];
  D22():
    deopt 81 [x20];
  L41():
    pos3 = force? pos2;
    checkMissing(pos3);
    is_na = ldf `is.na` in base;
    r23 = dyn is_na(pos3);
    check L42() else D12();
  L51():
    goto L10(r32);
  L56():
    x19 = force? x18;
    checkMissing(x19);
    r37 = `<`(x19, 0.0);
    any = ldf any in base;
    r38 = dyn any(r37);
    check L57() else D19();
  L60():
    r39 = dyn stop("cost components must be non-negative");
    check L61() else D21();
  L63():
    x21 = force? x20;
    checkMissing(x21);
    l = ld costs;
    c15 = `is.object`(l);
    if c15 then L64() else L65(x21, l);
  D12():
    deopt 44 [x10, r23];
  D19():
    deopt 73 [c5, r38];
  D21():
    deopt 78 [r39];
  L15(x25, dx4):
    st costs = dx4;
    goto L16();
  L42():
    goto L7(x10, r23);
  L57():
    goto L12(c5, r38);
  L61():
    goto L14();
  L64():
    dr2 = tryDispatchBuiltin.0("[<-", l, x21);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L66() else L65(x21, dr2);
  L65(x23, l2):
    pos4 = ld pos;
    check L67() else D23();
  D23():
    deopt 84 [x23, l2, x21, pos4];
  L66():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L15(x21, dx3);
  L67():
    pos5 = force? pos4;
    ___ = ldf `[<-` in base;
    r41 = dyn ___(l2, x21, pos5);
    goto L15(x23, r41);
  }
}