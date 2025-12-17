fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3444821629;
    st `co.intervals` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3444821629(x, number, overlap) {
  (reg x:*, reg number:*, reg overlap:*) -+> V { var x:*, var number:*, reg number_isMissing:L, reg number_orDefault:*, var overlap:*, reg overlap_isMissing:L, reg overlap_orDefault:*, reg sort:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg x7:V, reg r1:V, reg x8:*, reg x9:V, reg is_na:cls, reg r2:V, reg r3:V, reg __:cls, reg r4:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x10:*, reg x11:V, reg length:cls, reg r9:V, reg n:*, reg n1:V, reg number1:*, reg number2:V, reg overlap1:*, reg overlap2:V, reg r10:V, reg r11:V, reg overlap3:*, reg overlap4:V, reg r12:V, reg r13:V, reg number3:*, reg number4:V, reg r14:V, reg r15:V, reg overlap5:*, reg overlap6:V, reg r16:V, reg r17:V, reg r18:*, reg r19:V, reg r20:V, reg x12:*, reg x13:V, reg c1:L, reg x15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg x18:V, reg r22:V, reg round:cls, reg r23:V, reg __1:cls, reg r24:V, reg x19:*, reg x20:V, reg c2:L, reg x22:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg x25:V, reg r26:V, reg round1:cls, reg r27:V, reg __2:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg diff:cls, reg x26:*, reg x27:V, reg p1:p(V +), reg r32:V, reg r33:V, reg diff1:cls, reg xr:*, reg xr1:V, reg p2:p(V +), reg r35:V, reg r36:V, reg r37:V, reg c3:cls, reg r38:V, reg diff2:cls, reg x28:*, reg x29:V, reg p3:p(V +), reg r40:V, reg r41:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:R, reg r46:V, reg j_gt_0:*, reg j_gt_1:V, reg any:cls, reg r47:V, reg c4:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r52:V, reg r53:R, reg r54:V, reg jump:*, reg jump1:V, reg c5:L, reg r56:R, reg jump3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r58:R, reg dx7:V, reg j_gt_2:*, reg j_gt_3:V, reg __3:cls, reg r59:V, reg min:cls, reg r60:V, reg r61:R, reg r62:V, reg r63:V, reg cbind:cls, reg x30:*, reg x31:V, reg c6:L, reg x33:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg keep:*, reg keep1:V, reg __4:cls, reg r64:V, reg eps:*, reg eps1:V, reg r65:V, reg p4:p(V +), reg xr2:*, reg xr3:V, reg c7:L, reg xr5:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg keep2:*, reg keep3:V, reg __5:cls, reg r67:V, reg eps2:*, reg eps3:V, reg r68:V, reg p5:p(V +), reg r70:V |
    mkenv;
    st x = x;
    number_isMissing = missing.0(number);
    if number_isMissing then L0(6.0) else L0(number);
  L0(number_orDefault):
    st number = number_orDefault;
    overlap_isMissing = missing.0(overlap);
    if overlap_isMissing then L1(0.5) else L1(overlap);
  L1(overlap_orDefault):
    st overlap = overlap_orDefault;
    sort = ldf sort;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L2() else L3(x2);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(x4):
      sym = ldf `is.na`;
      base = ldf `is.na` in base;
      guard = `==`.4(sym, base);
      if guard then L5() else L6();
    L1(x7, r1):
      r3 = `!`(r1);
      __ = ldf `[` in base;
      r4 = dyn __(x7, r3);
      goto L0(r4);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      is_na = ldf `is.na` in base;
      r2 = dyn is_na(x9);
      goto L1(x4, r2);
    L6():
      r = dyn base(<sym x>);
      goto L1(x4, r);
    };
    r6 = dyn sort(p);
    check L14() else D1();
  D1():
    deopt 3 [r6];
  L14():
    st x = r6;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L2(r8):
    st n = r8;
    n = ld n;
    check L19() else D4();
  L15():
    x10 = ld x;
    check L17() else D2();
  L16():
    r7 = dyn base1(<sym x>);
    goto L2(r7);
  D2():
    deopt 7 [x10];
  D4():
    deopt 12 [n];
  L17():
    x11 = force? x10;
    checkMissing(x11);
    length = ldf length in base;
    r9 = dyn length(x11);
    check L18() else D3();
  L19():
    n1 = force? n;
    checkMissing(n1);
    number1 = ld number;
    check L20() else D5();
  D3():
    deopt 10 [r9];
  D5():
    deopt 13 [n1, number1];
  L18():
    goto L2(r9);
  L20():
    number2 = force? number1;
    checkMissing(number2);
    overlap1 = ld overlap;
    check L21() else D6();
  D6():
    deopt 15 [n1, number2, 1.0, overlap1];
  L21():
    overlap2 = force? overlap1;
    checkMissing(overlap2);
    r10 = `-`(1.0, overlap2);
    r11 = `*`(number2, r10);
    overlap3 = ld overlap;
    check L22() else D7();
  D7():
    deopt 18 [n1, r11, overlap3];
  L22():
    overlap4 = force? overlap3;
    checkMissing(overlap4);
    r12 = `+`(r11, overlap4);
    r13 = `/`(n1, r12);
    st r = r13;
    number3 = ld number;
    check L23() else D8();
  D8():
    deopt 24 [0.0, number3];
  L23():
    number4 = force? number3;
    checkMissing(number4);
    r14 = `-`(number4, 1.0);
    r15 = `:`(0.0, r14);
    overlap5 = ld overlap;
    check L24() else D9();
  D9():
    deopt 29 [r15, 1.0, overlap5];
  L24():
    overlap6 = force? overlap5;
    checkMissing(overlap6);
    r16 = `-`(1.0, overlap6);
    r17 = `*`(r15, r16);
    r18 = ld r;
    check L25() else D10();
  D10():
    deopt 32 [r17, r18];
  L25():
    r19 = force? r18;
    checkMissing(r19);
    r20 = `*`(r17, r19);
    st ii = r20;
    x12 = ld x;
    check L26() else D11();
  D11():
    deopt 36 [x12];
  L26():
    x13 = force? x12;
    checkMissing(x13);
    c1 = `is.object`(x13);
    if c1 then L27() else L28(x13);
  L3(dx3):
    st x1 = dx3;
    x19 = ld x;
    check L32() else D12();
  L27():
    dr2 = tryDispatchBuiltin.1("[", x13);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(dr2);
  L28(x15):
    sym2 = ldf round;
    base2 = ldf round in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  D12():
    deopt 43 [x19];
  L4(x18, r22):
    __1 = ldf `[` in base;
    r24 = dyn __1(x18, r22);
    goto L3(r24);
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L30():
    round = ldf round in base;
    r23 = dyn round(<lang `+`(1.0, ii)>);
    goto L4(x15, r23);
  L31():
    r21 = dyn base2(<lang `+`(1.0, ii)>);
    goto L4(x15, r21);
  L32():
    x20 = force? x19;
    checkMissing(x20);
    c2 = `is.object`(x20);
    if c2 then L33() else L34(x20);
  L5(dx5):
    st xr = dx5;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L33():
    dr4 = tryDispatchBuiltin.1("[", x20);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L35() else L34(dr4);
  L34(x22):
    sym3 = ldf round;
    base3 = ldf round in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L6(x25, r26):
    __2 = ldf `[` in base;
    r28 = dyn __2(x25, r26);
    goto L5(r28);
  L7(r30):
    st keep = r30;
    diff2 = ldf diff;
    check L45() else D18();
  L35():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(dx4);
  L36():
    round1 = ldf round in base;
    r27 = dyn round1(<lang `+`(r, ii)>);
    goto L6(x22, r27);
  L37():
    r25 = dyn base3(<lang `+`(r, ii)>);
    goto L6(x22, r25);
  L38():
    diff = ldf diff;
    check L40() else D13();
  L39():
    r29 = dyn base4(TRUE, <lang `|`(`>`(diff(x1), 0.0), `>`(diff(xr), 0.0))>);
    goto L7(r29);
  D13():
    deopt 54 [];
  D18():
    deopt 70 [0.0];
  L40():
    p1 = prom<V +>{
      x26 = ld x1;
      x27 = force? x26;
      checkMissing(x27);
      return x27;
    };
    r32 = dyn diff(p1);
    check L41() else D14();
  L45():
    p3 = prom<V +>{
      x28 = ld x;
      x29 = force? x28;
      checkMissing(x29);
      return x29;
    };
    r40 = dyn diff2(p3);
    check L46() else D19();
  D14():
    deopt 56 [r32];
  D19():
    deopt 72 [0.0, r40];
  L41():
    r33 = `>`(r32, 0.0);
    diff1 = ldf diff;
    check L42() else D15();
  L46():
    st jump = r40;
    r41 = `<`(0.0, r40);
    st `j.gt.0` = r41;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  D15():
    deopt 59 [r33];
  L8(r45, r46):
    c4 = `as.logical`(r46);
    if c4 then L51() else L9();
  L42():
    p2 = prom<V +>{
      xr = ld xr;
      xr1 = force? xr;
      checkMissing(xr1);
      return xr1;
    };
    r35 = dyn diff1(p2);
    check L43() else D16();
  L47():
    j_gt_0 = ld `j.gt.0`;
    check L49() else D20();
  L48():
    r44 = dyn base5(<sym j.gt.0>);
    goto L8(0.5, r44);
  D16():
    deopt 61 [r33, r35];
  D20():
    deopt 79 [0.5, j_gt_0];
  L9():
    goto L12(r45, 0.0);
  L12(r61, r62):
    r63 = `*`(r61, r62);
    st eps = r63;
    cbind = ldf cbind;
    check L61() else D25();
  L43():
    r36 = `>`(r35, 0.0);
    r37 = `||`(r33, r36);
    c3 = ldf c in base;
    r38 = dyn c3(TRUE, r37);
    check L44() else D17();
  L49():
    j_gt_1 = force? j_gt_0;
    checkMissing(j_gt_1);
    any = ldf any in base;
    r47 = dyn any(j_gt_1);
    check L50() else D21();
  L51():
    sym6 = ldf min;
    base6 = ldf min in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L52() else L53();
  D17():
    deopt 66 [r38];
  D21():
    deopt 82 [0.5, r47];
  D25():
    deopt 97 [];
  L10(r53, r54):
    goto L12(r53, r54);
  L44():
    goto L7(r38);
  L50():
    goto L8(0.5, r47);
  L52():
    jump = ld jump;
    check L54() else D22();
  L53():
    r52 = dyn base6(<lang `[`(jump, j.gt.0)>);
    goto L10(r45, r52);
  L61():
    p4 = prom<V +>{
      x30 = ld x1;
      x31 = force? x30;
      checkMissing(x31);
      c6 = `is.object`(x31);
      if c6 then L1() else L2(x31);
    L0(dx9):
      eps = ld eps;
      eps1 = force? eps;
      checkMissing(eps1);
      r65 = `-`(dx9, eps1);
      return r65;
    L1():
      dr8 = tryDispatchBuiltin.1("[", x31);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x33):
      keep = ld keep;
      keep1 = force? keep;
      __4 = ldf `[` in base;
      r64 = dyn __4(x33, keep1);
      goto L0(r64);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p5 = prom<V +>{
      xr2 = ld xr;
      xr3 = force? xr2;
      checkMissing(xr3);
      c7 = `is.object`(xr3);
      if c7 then L1() else L2(xr3);
    L0(dx11):
      eps2 = ld eps;
      eps3 = force? eps2;
      checkMissing(eps3);
      r68 = `+`(dx11, eps3);
      return r68;
    L1():
      dr10 = tryDispatchBuiltin.1("[", xr3);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(xr5):
      keep2 = ld keep;
      keep3 = force? keep2;
      __5 = ldf `[` in base;
      r67 = dyn __5(xr5, keep3);
      goto L0(r67);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r70 = dyn cbind(p4, p5);
    check L62() else D26();
  D22():
    deopt 85 [r45, jump];
  D26():
    deopt 100 [r70];
  L54():
    jump1 = force? jump;
    checkMissing(jump1);
    c5 = `is.object`(jump1);
    if c5 then L55() else L56(r45, jump1);
  L62():
    popenv;
    return r70;
  L11(r58, dx7):
    min = ldf min in base;
    r60 = dyn min(dx7);
    check L59() else D24();
  L55():
    dr6 = tryDispatchBuiltin.1("[", jump1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L57() else L56(r45, dr6);
  L56(r56, jump3):
    j_gt_2 = ld `j.gt.0`;
    check L58() else D23();
  D23():
    deopt 87 [r56, jump3, j_gt_2];
  D24():
    deopt 91 [r58, r60];
  L57():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L11(r45, dx6);
  L58():
    j_gt_3 = force? j_gt_2;
    __3 = ldf `[` in base;
    r59 = dyn __3(jump3, j_gt_3);
    goto L11(r56, r59);
  L59():
    goto L10(r58, r60);
  }
}