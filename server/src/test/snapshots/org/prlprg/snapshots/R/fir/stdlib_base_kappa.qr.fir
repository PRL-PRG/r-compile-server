fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1435282401;
    st `kappa.qr` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1435282401(z, `...`) {
  (reg z:*, reg ddd:dots) -+> V { var z:*, var `...`:dots?, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg z1:*, reg z2:V, reg c:L, reg z4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg dim:cls, reg r5:V, reg length:cls, reg r6:V, reg r7:V, reg p:p(V +), reg r9:V, reg d:*, reg d1:V, reg c1:L, reg d3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r10:V, reg d4:*, reg d5:V, reg c2:L, reg dx5:V, reg d7:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg dx9:V, reg __1:cls, reg r11:V, reg r12:V, reg c3:L, reg qr:*, reg qr1:V, reg c4:L, reg qr3:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg d8:*, reg d9:V, reg c5:L, reg qr8:V, reg d11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg qr10:V, reg dx13:V, reg __2:cls, reg r15:V, reg r16:I, reg __3:cls, reg r17:V, reg dx14:V, reg d12:*, reg d13:V, reg c6:L, reg d15:V, reg dr10:V, reg dc5:L, reg dx15:V, reg dx16:V, reg __4:cls, reg r18:V, reg d16:*, reg d17:V, reg c7:L, reg dx18:V, reg d19:V, reg dr12:V, reg dc6:L, reg dx20:V, reg dx21:V, reg dx22:V, reg __5:cls, reg r19:V, reg r20:V, reg c8:L, reg qr11:*, reg qr12:V, reg c9:L, reg qr14:V, reg dr14:V, reg dc7:L, reg dx23:V, reg dx24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg d20:*, reg d21:V, reg c10:L, reg qr19:V, reg d23:V, reg dr16:V, reg dc8:L, reg dx25:V, reg qr21:V, reg dx26:V, reg __6:cls, reg r23:V, reg r24:I, reg __7:cls, reg r25:V, reg qr22:*, reg qr23:V, reg l:*, reg c11:L, reg r27:R, reg l2:*, reg dr18:V, reg dc9:L, reg dx27:V, reg dx28:V, reg lower_tri:cls, reg R:*, reg R1:V, reg p1:p(V +), reg r31:V, reg ___:cls, reg r32:V, reg _kappa_tri:cls, reg R2:*, reg R3:V, reg p2:p(V +), reg ddd1:dots?, reg r34:V |
    mkenv;
    st z = z;
    st `...` = ddd;
    stopifnot = ldf stopifnot;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r1):
      r7 = `==`(r1, 2);
      return r7;
    L2():
      sym1 = ldf dim;
      base1 = ldf dim in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r = dyn base(<lang `<-`(d, dim(`<-`(qr, `$`(z, qr))))>);
      goto L0(r);
    L1(r3):
      st d = r3;
      length = ldf length in base;
      r6 = dyn length(r3);
      goto L0(r6);
    L4():
      z1 = ld z;
      z2 = force? z1;
      checkMissing(z2);
      c = `is.object`(z2);
      if c then L7() else L8(z2);
    L5():
      r2 = dyn base1(<lang `<-`(qr, `$`(z, qr))>);
      goto L1(r2);
    L6(dx1):
      st qr = dx1;
      dim = ldf dim in base;
      r5 = dyn dim(dx1);
      goto L1(r5);
    L7():
      dr = tryDispatchBuiltin.1("$", z2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L9() else L8(dr);
    L8(z4):
      r4 = `$`(z4, <sym qr>);
      goto L6(r4);
    L9():
      dx = getTryDispatchBuiltinValue(dr);
      goto L6(dx);
    };
    r9 = dyn stopifnot(p);
    check L15() else D1();
  D1():
    deopt 3 [r9];
  L15():
    d = ld d;
    check L16() else D2();
  D2():
    deopt 4 [d];
  L16():
    d1 = force? d;
    checkMissing(d1);
    c1 = `is.object`(d1);
    if c1 then L17() else L18(d1);
  L0(dx3):
    d4 = ld d;
    check L20() else D3();
  L17():
    dr2 = tryDispatchBuiltin.1("[", d1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L19() else L18(dr2);
  L18(d3):
    __ = ldf `[` in base;
    r10 = dyn __(d3, 1);
    goto L0(r10);
  D3():
    deopt 8 [dx3, d4];
  L19():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  L20():
    d5 = force? d4;
    checkMissing(d5);
    c2 = `is.object`(d5);
    if c2 then L21() else L22(dx3, d5);
  L1(dx8, dx9):
    r12 = `>`(dx8, dx9);
    c3 = `as.logical`(r12);
    if c3 then L24() else L2();
  L21():
    dr4 = tryDispatchBuiltin.1("[", d5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L23() else L22(dx3, dr4);
  L22(dx5, d7):
    __1 = ldf `[` in base;
    r11 = dyn __1(d7, 2);
    goto L1(dx5, r11);
  L2():
    d12 = ld d;
    check L36() else D6();
  L6(dx14):
    st R = dx14;
    l = ld R;
    c11 = `is.object`(l);
    if c11 then L57() else L58(0.0, l);
  L23():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L1(dx3, dx7);
  L24():
    qr = ld qr;
    check L25() else D4();
  D4():
    deopt 14 [qr];
  D6():
    deopt 28 [d12];
  L13(dx28):
    st R = dx28;
    _kappa_tri = ldf `.kappa_tri`;
    check L62() else D13();
  L25():
    qr1 = force? qr;
    checkMissing(qr1);
    c4 = `is.object`(qr1);
    if c4 then L26() else L27(qr1);
  L36():
    d13 = force? d12;
    checkMissing(d13);
    c6 = `is.object`(d13);
    if c6 then L37() else L38(d13);
  L57():
    dr18 = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L59() else L58(0.0, dr18);
  L58(r27, l2):
    lower_tri = ldf `lower.tri`;
    check L60() else D11();
  D11():
    deopt 59 [r27, l2, 0.0];
  D13():
    deopt 65 [];
  L3(dx11):
    goto L6(dx11);
  L7(dx16):
    d16 = ld d;
    check L40() else D7();
  L26():
    dr6 = tryDispatchBuiltin.1("[", qr1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L28() else L27(dr6);
  L27(qr3):
    sym2 = ldf seq_len;
    base2 = ldf seq_len in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L37():
    dr10 = tryDispatchBuiltin.1("[", d13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L39() else L38(dr10);
  L38(d15):
    __4 = ldf `[` in base;
    r18 = dyn __4(d15, 1);
    goto L7(r18);
  L59():
    dx27 = getTryDispatchBuiltinValue(dr18);
    goto L13(dx27);
  L60():
    p1 = prom<V +>{
      R = ld R;
      R1 = force? R;
      checkMissing(R1);
      return R1;
    };
    r31 = dyn lower_tri(p1);
    check L61() else D12();
  L62():
    p2 = prom<V +>{
      R2 = ld R;
      R3 = force? R2;
      checkMissing(R3);
      return R3;
    };
    ddd1 = ld `...`;
    r34 = dyn _kappa_tri[, `...`](p2, ddd1);
    check L63() else D14();
  D7():
    deopt 32 [dx16, d16];
  D12():
    deopt 61 [r27, l2, 0.0, r31];
  D14():
    deopt 68 [r34];
  L4(r14):
    __3 = ldf `[` in base;
    r17 = dyn __3(qr1, r14, <missing>, FALSE);
    goto L3(r17);
  L28():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L3(dx10);
  L29():
    d8 = ld d;
    check L31() else D5();
  L30():
    r13 = dyn base2(<lang `[`(d, 2)>);
    goto L4(r13);
  L39():
    dx15 = getTryDispatchBuiltinValue(dr10);
    goto L7(dx15);
  L40():
    d17 = force? d16;
    checkMissing(d17);
    c7 = `is.object`(d17);
    if c7 then L41() else L42(dx16, d17);
  L61():
    ___ = ldf `[<-` in base;
    r32 = dyn ___(l2, 0.0, r31);
    goto L13(r32);
  L63():
    popenv;
    return r34;
  D5():
    deopt 17 [qr3, d8];
  L8(dx21, dx22):
    r20 = `<`(dx21, dx22);
    c8 = `as.logical`(r20);
    if c8 then L44() else L9();
  L31():
    d9 = force? d8;
    checkMissing(d9);
    c5 = `is.object`(d9);
    if c5 then L32() else L33(qr3, d9);
  L41():
    dr12 = tryDispatchBuiltin.1("[", d17);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L43() else L42(dx16, dr12);
  L42(dx18, d19):
    __5 = ldf `[` in base;
    r19 = dyn __5(d19, 2);
    goto L8(dx18, r19);
  L5(qr10, dx13):
    r16 = seq_len(dx13);
    goto L4(r16);
  L9():
    qr22 = ld qr;
    check L56() else D10();
  L32():
    dr8 = tryDispatchBuiltin.1("[", d9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L34() else L33(qr3, dr8);
  L33(qr8, d11):
    __2 = ldf `[` in base;
    r15 = dyn __2(d11, 2);
    goto L5(qr8, r15);
  L43():
    dx20 = getTryDispatchBuiltinValue(dr12);
    goto L8(dx16, dx20);
  L44():
    qr11 = ld qr;
    check L45() else D8();
  D8():
    deopt 38 [qr11];
  D10():
    deopt 52 [qr22];
  L34():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L5(qr3, dx12);
  L45():
    qr12 = force? qr11;
    checkMissing(qr12);
    c9 = `is.object`(qr12);
    if c9 then L46() else L47(qr12);
  L56():
    qr23 = force? qr22;
    checkMissing(qr23);
    goto L6(qr23);
  L10(dx24):
    goto L6(dx24);
  L46():
    dr14 = tryDispatchBuiltin.1("[", qr12);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L48() else L47(dr14);
  L47(qr14):
    sym3 = ldf seq_len;
    base3 = ldf seq_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L11(r22):
    __7 = ldf `[` in base;
    r25 = dyn __7(qr12, <missing>, r22, FALSE);
    goto L10(r25);
  L48():
    dx23 = getTryDispatchBuiltinValue(dr14);
    goto L10(dx23);
  L49():
    d20 = ld d;
    check L51() else D9();
  L50():
    r21 = dyn base3(<lang `[`(d, 1)>);
    goto L11(r21);
  D9():
    deopt 42 [qr14, d20];
  L51():
    d21 = force? d20;
    checkMissing(d21);
    c10 = `is.object`(d21);
    if c10 then L52() else L53(qr14, d21);
  L12(qr21, dx26):
    r24 = seq_len(dx26);
    goto L11(r24);
  L52():
    dr16 = tryDispatchBuiltin.1("[", d21);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L54() else L53(qr14, dr16);
  L53(qr19, d23):
    __6 = ldf `[` in base;
    r23 = dyn __6(d23, 1);
    goto L12(qr19, r23);
  L54():
    dx25 = getTryDispatchBuiltinValue(dr16);
    goto L12(qr14, dx25);
  }
}