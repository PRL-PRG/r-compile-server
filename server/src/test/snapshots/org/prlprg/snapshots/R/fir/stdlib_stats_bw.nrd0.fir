fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `bw.nrd0` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg stop:cls, reg r4:V, reg sd:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg hi:*, reg hi1:V, reg IQR:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r11:V, reg r12:V, reg min:cls, reg r13:V, reg r14:V, reg c1:L, reg hi2:*, reg hi3:V, reg c2:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg c7:L, reg r16:V, reg x7:*, reg x8:V, reg c8:L, reg c10:L, reg x10:V, reg dr:V, reg dc:L, reg dx:V, reg c12:L, reg dx1:V, reg __:cls, reg r17:V, reg abs:cls, reg r18:V, reg c13:L, reg c14:V, reg c16:L, reg c17:V, reg c19:L, reg c20:V, reg lo:*, reg lo1:V, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg r24:V, reg x11:*, reg x12:V, reg length1:cls, reg r25:V, reg r26:V, reg r27:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    r3 = `<`(r1, 2);
    c = `as.logical`(r3);
    if c then L15() else L1();
  L11():
    x1 = ld x;
    check L13() else D0();
  L12():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    goto L2();
  L2():
    sd = ldf sd;
    check L19() else D4();
  L13():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L14() else D1();
  L15():
    stop = ldf stop;
    check L16() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 15 [];
  L14():
    goto L0(r2);
  L16():
    r4 = dyn stop("need at least 2 data points");
    check L17() else D3();
  L19():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r7 = dyn sd(p);
    check L20() else D5();
  D3():
    deopt 11 [r4];
  D5():
    deopt 17 [r7];
  L17():
    goto L2();
  L20():
    st hi = r7;
    sym1 = ldf min;
    base1 = ldf min in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L3(r9):
    st lo = r9;
    r14 = `!`(r9);
    c1 = `as.logical`(r14);
    if c1 then L27() else L4();
  L21():
    hi = ld hi;
    check L23() else D6();
  L22():
    r8 = dyn base1(<sym hi>, <lang `/`(IQR(x), 1.34)>);
    goto L3(r8);
  D6():
    deopt 21 [hi];
  L4():
    goto L9();
  L9():
    lo = ld lo;
    check L41() else D13();
  L23():
    hi1 = force? hi;
    checkMissing(hi1);
    IQR = ldf IQR;
    check L24() else D7();
  L27():
    hi2 = ld hi;
    check L28() else D10();
  D7():
    deopt 24 [];
  D10():
    deopt 33 [hi2];
  D13():
    deopt 54 [0.9, lo];
  L24():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r11 = dyn IQR(p1);
    check L25() else D8();
  L28():
    hi3 = force? hi2;
    checkMissing(hi3);
    st lo = hi3;
    c2 = `as.logical`(hi3);
    if c2 then L5(c2) else L29();
  L41():
    lo1 = force? lo;
    checkMissing(lo1);
    r19 = `*`(0.9, lo1);
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  D8():
    deopt 26 [r11];
  L5(c3):
    c16 = `as.logical`(c3);
    if c16 then L8(c16) else L38();
  L10(r23, r24):
    r26 = `^`(r24, -0.2);
    r27 = `*`(r23, r26);
    popenv;
    return r27;
  L25():
    r12 = `/`(r11, 1.34);
    min = ldf min in base;
    r13 = dyn min(hi1, r12);
    check L26() else D9();
  L29():
    sym2 = ldf abs;
    base2 = ldf abs in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L42():
    x11 = ld x;
    check L44() else D14();
  L43():
    r22 = dyn base3(<sym x>);
    goto L10(r19, r22);
  D9():
    deopt 30 [r13];
  D14():
    deopt 58 [r19, x11];
  L6(c7, r16):
    st lo = r16;
    c13 = `as.logical`(r16);
    c14 = `||`(c7, c13);
    goto L5(c14);
  L8(c17):
    goto L9();
  L26():
    goto L3(r13);
  L30():
    x7 = ld x;
    check L32() else D11();
  L31():
    r15 = dyn base2(<lang `[`(x, 1)>);
    goto L6(c2, r15);
  L38():
    st lo = 1.0;
    c19 = `as.logical`(1.0);
    c20 = `||`(c16, c19);
    goto L8(c20);
  L44():
    x12 = force? x11;
    checkMissing(x12);
    length1 = ldf length in base;
    r25 = dyn length1(x12);
    check L45() else D15();
  D11():
    deopt 38 [c2, x7];
  D15():
    deopt 61 [r19, r25];
  L32():
    x8 = force? x7;
    checkMissing(x8);
    c8 = `is.object`(x8);
    if c8 then L33() else L34(c2, x8);
  L45():
    goto L10(r19, r25);
  L7(c12, dx1):
    abs = ldf abs in base;
    r18 = dyn abs(dx1);
    check L36() else D12();
  L33():
    dr = tryDispatchBuiltin.1("[", x8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(c2, dr);
  L34(c10, x10):
    __ = ldf `[` in base;
    r17 = dyn __(x10, 1);
    goto L7(c10, r17);
  D12():
    deopt 44 [c12, r18];
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(c2, dx);
  L36():
    goto L6(c12, r18);
  }
}