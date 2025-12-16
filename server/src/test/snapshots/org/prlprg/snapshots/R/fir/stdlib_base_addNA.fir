fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1400430026;
    st addNA = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1400430026(x, ifany) {
  (reg x:*, reg ifany:*) -+> V { var x:*, var ifany:*, reg ifany_isMissing:L, reg ifany_orDefault:*, reg is_factor:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg factor:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r4:V, reg ifany1:*, reg ifany2:V, reg c1:L, reg c3:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg c6:L, reg r7:V, reg x5:*, reg x6:V, reg anyNA:cls, reg r8:V, reg r9:V, reg c7:L, reg c8:V, reg c10:L, reg x7:*, reg x8:V, reg levels:cls, reg x9:*, reg x10:V, reg p2:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg ll:*, reg ll1:V, reg anyNA1:cls, reg r16:V, reg r17:V, reg c11:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg ll2:*, reg ll3:V, reg c12:cls, reg r20:V, reg ifany3:*, reg ifany4:V, reg r22:V, reg c13:L, reg c15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg c18:L, reg r24:V, reg x11:*, reg x12:V, reg anyNA2:cls, reg r25:V, reg r26:V, reg c19:L, reg c20:V, reg c22:L, reg x13:*, reg x14:V, reg factor1:cls, reg x15:*, reg x16:V, reg p3:p(V +), reg ll4:*, reg ll5:V, reg p4:p(V +), reg r30:V |
    mkenv;
    st x = x;
    ifany_isMissing = missing.0(ifany);
    if ifany_isMissing then L0(FALSE) else L0(ifany);
  L0(ifany_orDefault):
    st ifany = ifany_orDefault;
    is_factor = ldf `is.factor`;
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
    r1 = dyn is_factor(p);
    check L15() else D1();
  D1():
    deopt 3 [r1];
  L15():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L16() else L1();
  L1():
    goto L2();
  L2():
    ifany1 = ld ifany;
    check L20() else D4();
  L16():
    factor = ldf factor;
    check L17() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 12 [ifany1];
  L17():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r4 = dyn factor(p1);
    check L18() else D3();
  L20():
    ifany2 = force? ifany1;
    checkMissing(ifany2);
    c1 = `as.logical`(ifany2);
    if c1 then L21() else L3(c1);
  D3():
    deopt 8 [r4];
  L3(c3):
    c10 = `as.logical`(c3);
    if c10 then L27() else L5();
  L18():
    st x = r4;
    goto L2();
  L21():
    sym = ldf anyNA;
    base = ldf anyNA in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L4(c6, r7):
    r9 = `!`(r7);
    c7 = `as.logical`(r9);
    c8 = `&&`(c6, c7);
    goto L3(c8);
  L5():
    levels = ldf levels;
    check L31() else D8();
  L22():
    x5 = ld x;
    check L24() else D5();
  L23():
    r6 = dyn base(<sym x>);
    goto L4(c1, r6);
  L27():
    x7 = ld x;
    check L28() else D7();
  D5():
    deopt 16 [c1, x5];
  D7():
    deopt 22 [x7];
  D8():
    deopt 28 [];
  L24():
    x6 = force? x5;
    checkMissing(x6);
    anyNA = ldf anyNA in base;
    r8 = dyn anyNA(x6);
    check L25() else D6();
  L28():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  L31():
    p2 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r13 = dyn levels(p2);
    check L32() else D9();
  D6():
    deopt 19 [c1, r8];
  D9():
    deopt 30 [r13];
  L25():
    goto L4(c1, r8);
  L32():
    st ll = r13;
    sym1 = ldf anyNA;
    base1 = ldf anyNA in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L7(r15):
    r17 = `!`(r15);
    c11 = `as.logical`(r17);
    if c11 then L37() else L8();
  L33():
    ll = ld ll;
    check L35() else D10();
  L34():
    r14 = dyn base1(<sym ll>);
    goto L7(r14);
  D10():
    deopt 34 [ll];
  L8():
    ifany3 = ld ifany;
    check L43() else D14();
  L10():
    factor1 = ldf factor;
    check L54() else D18();
  L35():
    ll1 = force? ll;
    checkMissing(ll1);
    anyNA1 = ldf anyNA in base;
    r16 = dyn anyNA1(ll1);
    check L36() else D11();
  L37():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  D11():
    deopt 37 [r16];
  D14():
    deopt 47 [ifany3];
  D18():
    deopt 64 [];
  L9(r19):
    st ll = r19;
    goto L10();
  L36():
    goto L7(r16);
  L38():
    ll2 = ld ll;
    check L40() else D12();
  L39():
    r18 = dyn base2(<sym ll>, NA_LGL);
    goto L9(r18);
  L43():
    ifany4 = force? ifany3;
    checkMissing(ifany4);
    r22 = `!`(ifany4);
    c13 = `as.logical`(r22);
    if c13 then L44() else L11(c13);
  L54():
    p3 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    p4 = prom<V +>{
      ll4 = ld ll;
      ll5 = force? ll4;
      checkMissing(ll5);
      return ll5;
    };
    r30 = dyn factor1[, levels, exclude](p3, p4, NULL);
    check L55() else D19();
  D12():
    deopt 41 [ll2];
  D19():
    deopt 70 [r30];
  L11(c15):
    c22 = `as.logical`(c15);
    if c22 then L50() else L13();
  L40():
    ll3 = force? ll2;
    checkMissing(ll3);
    c12 = ldf c in base;
    r20 = dyn c12(ll3, NA_LGL);
    check L41() else D13();
  L44():
    sym3 = ldf anyNA;
    base3 = ldf anyNA in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L55():
    popenv;
    return r30;
  D13():
    deopt 45 [r20];
  L12(c18, r24):
    r26 = `!`(r24);
    c19 = `as.logical`(r26);
    c20 = `&&`(c18, c19);
    goto L11(c20);
  L13():
    goto L10();
  L41():
    goto L9(r20);
  L45():
    x11 = ld x;
    check L47() else D15();
  L46():
    r23 = dyn base3(<sym x>);
    goto L12(c13, r23);
  L50():
    x13 = ld x;
    check L51() else D17();
  D15():
    deopt 52 [c13, x11];
  D17():
    deopt 58 [x13];
  L47():
    x12 = force? x11;
    checkMissing(x12);
    anyNA2 = ldf anyNA in base;
    r25 = dyn anyNA2(x12);
    check L48() else D16();
  L51():
    x14 = force? x13;
    checkMissing(x14);
    popenv;
    return x14;
  D16():
    deopt 55 [c13, r25];
  L48():
    goto L12(c13, r25);
  }
}