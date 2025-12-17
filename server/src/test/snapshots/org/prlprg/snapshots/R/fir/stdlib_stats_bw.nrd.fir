fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `bw.nrd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg quantile:cls, reg x3:*, reg x4:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg r12:*, reg r13:V, reg c2:L, reg r15:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r16:V, reg r17:*, reg r18:V, reg c3:L, reg dx3:V, reg r20:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg __1:cls, reg r21:V, reg r22:V, reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:R, reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:R, reg r33:V, reg var:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r35:V, reg r36:V, reg h:*, reg h1:V, reg min:cls, reg r37:V, reg r38:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg r43:V, reg x7:*, reg x8:V, reg length1:cls, reg r44:V, reg r45:V, reg r46:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    r3 = `<`(r1, 2);
    c = `as.logical`(r3);
    if c then L12() else L1();
  L8():
    x1 = ld x;
    check L10() else D0();
  L9():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    goto L2();
  L2():
    quantile = ldf quantile;
    check L16() else D4();
  L10():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L11() else D1();
  L12():
    stop = ldf stop;
    check L13() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 15 [];
  L11():
    goto L0(r2);
  L13():
    r4 = dyn stop("need at least 2 data points");
    check L14() else D3();
  L16():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c1 = ldf c in base;
      r9 = dyn c1(0.25, 0.75);
      goto L0(r9);
    L2():
      r7 = dyn base1(0.25, 0.75);
      goto L0(r7);
    };
    r11 = dyn quantile(p, p1);
    check L17() else D5();
  D3():
    deopt 11 [r4];
  D5():
    deopt 18 [r11];
  L14():
    goto L2();
  L17():
    st r = r11;
    r12 = ld r;
    check L18() else D6();
  D6():
    deopt 20 [r12];
  L18():
    r13 = force? r12;
    checkMissing(r13);
    c2 = `is.object`(r13);
    if c2 then L19() else L20(r13);
  L3(dx1):
    r17 = ld r;
    check L22() else D7();
  L19():
    dr = tryDispatchBuiltin.1("[", r13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(r15):
    __ = ldf `[` in base;
    r16 = dyn __(r15, 2);
    goto L3(r16);
  D7():
    deopt 24 [dx1, r17];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L22():
    r18 = force? r17;
    checkMissing(r18);
    c3 = `is.object`(r18);
    if c3 then L23() else L24(dx1, r18);
  L4(dx6, dx7):
    r22 = `-`(dx6, dx7);
    r23 = `/`(r22, 1.34);
    st h = r23;
    sym2 = ldf min;
    base2 = ldf min in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L23():
    dr2 = tryDispatchBuiltin.1("[", r18);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(dx1, dr2);
  L24(dx3, r20):
    __1 = ldf `[` in base;
    r21 = dyn __1(r20, 1);
    goto L4(dx3, r21);
  L5(r27, r28):
    r38 = `*`(r27, r28);
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L34() else L35();
  L25():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx1, dx5);
  L26():
    sym3 = ldf sqrt;
    base3 = ldf sqrt in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L27():
    r26 = dyn base2(<lang sqrt(var(x))>, <sym h>);
    goto L5(1.06, r26);
  L6(r32, r33):
    h = ld h;
    check L32() else D10();
  L7(r42, r43):
    r45 = `^`(r43, -0.2);
    r46 = `*`(r42, r45);
    popenv;
    return r46;
  L28():
    var = ldf var;
    check L30() else D8();
  L29():
    r31 = dyn base3(<lang var(x)>);
    goto L6(1.06, r31);
  L34():
    x7 = ld x;
    check L36() else D12();
  L35():
    r41 = dyn base4(<sym x>);
    goto L7(r38, r41);
  D8():
    deopt 38 [1.06];
  D10():
    deopt 42 [r32, h];
  D12():
    deopt 48 [r38, x7];
  L30():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r35 = dyn var(p2);
    check L31() else D9();
  L32():
    h1 = force? h;
    checkMissing(h1);
    min = ldf min in base;
    r37 = dyn min(r33, h1);
    check L33() else D11();
  L36():
    x8 = force? x7;
    checkMissing(x8);
    length1 = ldf length in base;
    r44 = dyn length1(x8);
    check L37() else D13();
  D9():
    deopt 40 [1.06, r35];
  D11():
    deopt 45 [r32, r37];
  D13():
    deopt 51 [r38, r44];
  L31():
    r36 = sqrt(r35);
    goto L6(1.06, r36);
  L33():
    goto L5(r32, r37);
  L37():
    goto L7(r38, r44);
  }
}