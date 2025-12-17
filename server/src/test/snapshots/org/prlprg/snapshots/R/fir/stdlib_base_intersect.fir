fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner799576941;
    st intersect = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg y1:*, reg y2:V, reg c7:V, reg c8:L, reg c9:V, reg c11:L, reg as_vector:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r7:V, reg as_vector1:cls, reg y3:*, reg y4:V, reg p1:p(V +), reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg u:*, reg u1:V, reg c12:L, reg u3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg duplicated:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg u4:*, reg u5:V, reg unclass:cls, reg r14:V, reg p2:p(V +), reg r16:V, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg u8:V, reg r21:V, reg r22:V, reg u9:*, reg u10:V, reg v:*, reg v1:V, reg match:cls, reg r23:V, reg r24:V, reg r25:V, reg __:cls, reg r26:V, reg v2:*, reg v3:V, reg c13:L, reg v5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg numeric:cls, reg r27:V, reg __1:cls, reg r28:V, reg c14:cls, reg r29:V |
    mkenv;
    st x = x;
    st y = y;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L1(c1) else L12();
  L9():
    x1 = ld x;
    check L11() else D0();
  L10():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1(c2):
    c11 = `as.logical`(c2);
    if c11 then L17() else L3();
  L11():
    x2 = force? x1;
    checkMissing(x2);
    c = `==`(x2, NULL);
    goto L0(c);
  L12():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L2(c6, r3):
    c8 = `as.logical`(r3);
    c9 = `||`(c6, c8);
    goto L1(c9);
  L3():
    as_vector = ldf `as.vector`;
    check L20() else D2();
  L13():
    y1 = ld y;
    check L15() else D1();
  L14():
    r2 = dyn base1(<sym y>);
    goto L2(c1, r2);
  L17():
    popenv;
    return NULL;
  D1():
    deopt 5 [c1, y1];
  D2():
    deopt 15 [];
  L15():
    y2 = force? y1;
    checkMissing(y2);
    c7 = `==`(y2, NULL);
    goto L2(c1, c7);
  L20():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r7 = dyn as_vector(p);
    check L21() else D3();
  D3():
    deopt 17 [r7];
  L21():
    st u = r7;
    as_vector1 = ldf `as.vector`;
    check L22() else D4();
  D4():
    deopt 20 [];
  L22():
    p1 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r9 = dyn as_vector1(p1);
    check L23() else D5();
  D5():
    deopt 22 [r9];
  L23():
    st v = r9;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L5(r11):
    popenv;
    return r11;
  L24():
    u = ld u;
    check L26() else D6();
  L25():
    r10 = dyn base2(<lang `[`(u, `&`(`!`(duplicated(unclass(u))), `(`(`>`(match(u, v, 0), 0))))>, <lang `[`(v, numeric())>);
    goto L5(r10);
  D6():
    deopt 26 [u];
  L26():
    u1 = force? u;
    checkMissing(u1);
    c12 = `is.object`(u1);
    if c12 then L27() else L28(u1);
  L6(dx1):
    v2 = ld v;
    check L37() else D12();
  L27():
    dr = tryDispatchBuiltin.1("[", u1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(u3):
    duplicated = ldf duplicated;
    check L30() else D7();
  D7():
    deopt 29 [u3];
  D12():
    deopt 46 [v2];
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L30():
    p2 = prom<V +>{
      sym3 = ldf unclass;
      base3 = ldf unclass in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      u4 = ld u;
      u5 = force? u4;
      checkMissing(u5);
      unclass = ldf unclass in base;
      r14 = dyn unclass(u5);
      goto L0(r14);
    L2():
      r12 = dyn base3(<sym u>);
      goto L0(r12);
    };
    r16 = dyn duplicated(p2);
    check L31() else D8();
  L37():
    v3 = force? v2;
    checkMissing(v3);
    c13 = `is.object`(v3);
    if c13 then L38() else L39(v3);
  D8():
    deopt 31 [u3, r16];
  L8(dx3):
    c14 = ldf c in base;
    r29 = dyn c14(dx1, dx3);
    check L43() else D15();
  L31():
    r17 = `!`(r16);
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L32() else L33();
  L38():
    dr2 = tryDispatchBuiltin.1("[", v3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(dr2);
  L39(v5):
    numeric = ldf numeric;
    check L41() else D13();
  D13():
    deopt 49 [v5];
  D15():
    deopt 53 [r29];
  L7(u8, r21, r22):
    r24 = `>`(r22, 0);
    r25 = `&&`(r21, r24);
    __ = ldf `[` in base;
    r26 = dyn __(u8, r25);
    goto L6(r26);
  L32():
    u9 = ld u;
    check L34() else D9();
  L33():
    r20 = dyn base4(<sym u>, <sym v>, 0);
    goto L7(u3, r17, r20);
  L40():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L41():
    r27 = dyn numeric();
    check L42() else D14();
  L43():
    goto L5(r29);
  D9():
    deopt 34 [u3, r17, u9];
  D14():
    deopt 50 [v5, r27];
  L34():
    u10 = force? u9;
    checkMissing(u10);
    v = ld v;
    check L35() else D10();
  L42():
    __1 = ldf `[` in base;
    r28 = dyn __1(v5, r27);
    goto L8(r28);
  D10():
    deopt 36 [u3, r17, v];
  L35():
    v1 = force? v;
    checkMissing(v1);
    match = ldf match in base;
    r23 = dyn match(u10, v1, 0, NULL);
    check L36() else D11();
  D11():
    deopt 41 [u3, r17, r23];
  L36():
    goto L7(u3, r17, r23);
  }
}