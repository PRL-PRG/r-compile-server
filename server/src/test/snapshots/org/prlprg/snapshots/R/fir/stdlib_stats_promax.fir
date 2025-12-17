fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2425312954;
    st promax = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2425312954(x, m) {
  (reg x:*, reg m:*) -+> V { var x:*, var m:*, reg m_isMissing:L, reg m_orDefault:*, reg ncol:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg x5:*, reg x6:V, reg dimnames:cls, reg r7:V, reg varimax:cls, reg x7:*, reg x8:V, reg p1:p(V +), reg r9:V, reg xx:*, reg xx1:V, reg c1:L, reg xx3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg x9:*, reg x10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg x13:V, reg r12:V, reg x14:*, reg x15:V, reg abs:cls, reg r13:V, reg m1:*, reg m2:V, reg r14:V, reg r15:V, reg r16:V, reg lm_fit:cls, reg x16:*, reg x17:V, reg p2:p(V +), reg Q:*, reg Q1:V, reg p3:p(V +), reg r19:V, reg c2:L, reg r21:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r22:V, reg diag:cls, reg solve:cls, reg t:cls, reg U:*, reg U1:V, reg p4:p(V +), reg r24:V, reg U2:*, reg U3:V, reg ___:cls, reg r25:V, reg p5:p(V +), reg r27:V, reg p6:p(V +), reg r29:V, reg U4:*, reg U5:V, reg diag1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg d:*, reg d1:V, reg r32:V, reg p7:p(V +), reg r34:V, reg ___1:cls, reg r35:V, reg l:*, reg dimnames__:cls, reg r36:V, reg x18:*, reg x19:V, reg U6:*, reg U7:V, reg ___2:cls, reg r37:V, reg xx4:*, reg xx5:V, reg c3:L, reg xx7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r38:V, reg U8:*, reg U9:V, reg ___3:cls, reg r39:V, reg dn:*, reg dn1:V, reg l1:*, reg dimnames__1:cls, reg r40:V, reg l2:*, reg class__:cls, reg r41:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r42:V, reg r43:V, reg z:*, reg z1:V, reg U10:*, reg U11:V, reg list:cls, reg r44:V |
    mkenv;
    st x = x;
    m_isMissing = missing.0(m);
    if m_isMissing then L0(4.0) else L0(m);
  L0(m_orDefault):
    st m = m_orDefault;
    ncol = ldf ncol;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn ncol(p);
    check L7() else D1();
  D1():
    deopt 3 [r1];
  L7():
    r2 = `<`(r1, 2.0);
    c = `as.logical`(r2);
    if c then L8() else L1();
  L1():
    sym = ldf dimnames;
    base = ldf dimnames in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L8():
    x3 = ld x;
    check L9() else D2();
  D2():
    deopt 6 [x3];
  L3(r6):
    st dn = r6;
    varimax = ldf varimax;
    check L16() else D5();
  L9():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L12():
    x5 = ld x;
    check L14() else D3();
  L13():
    r5 = dyn base(<sym x>);
    goto L3(r5);
  D3():
    deopt 13 [x5];
  D5():
    deopt 19 [];
  L14():
    x6 = force? x5;
    checkMissing(x6);
    dimnames = ldf dimnames in base;
    r7 = dyn dimnames(x6);
    check L15() else D4();
  L16():
    p1 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r9 = dyn varimax(p1);
    check L17() else D6();
  D4():
    deopt 16 [r7];
  D6():
    deopt 21 [r9];
  L15():
    goto L3(r7);
  L17():
    st xx = r9;
    xx = ld xx;
    check L18() else D7();
  D7():
    deopt 23 [xx];
  L18():
    xx1 = force? xx;
    checkMissing(xx1);
    c1 = `is.object`(xx1);
    if c1 then L20() else L21(xx1);
  L19(dx1):
    st x = dx1;
    x9 = ld x;
    check L23() else D8();
  L20():
    dr = tryDispatchBuiltin.1("$", xx1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(xx3):
    r10 = `$`(xx3, <sym loadings>);
    goto L19(r10);
  D8():
    deopt 27 [x9];
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L23():
    x10 = force? x9;
    checkMissing(x10);
    sym1 = ldf abs;
    base1 = ldf abs in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L4(x13, r12):
    m1 = ld m;
    check L28() else D11();
  L24():
    x14 = ld x;
    check L26() else D9();
  L25():
    r11 = dyn base1(<sym x>);
    goto L4(x10, r11);
  D9():
    deopt 30 [x10, x14];
  D11():
    deopt 33 [x13, r12, m1];
  L26():
    x15 = force? x14;
    checkMissing(x15);
    abs = ldf abs in base;
    r13 = dyn abs(x15);
    check L27() else D10();
  L28():
    m2 = force? m1;
    checkMissing(m2);
    r14 = `-`(m2, 1.0);
    r15 = `^`(r12, r14);
    r16 = `*`(x13, r15);
    st Q = r16;
    lm_fit = ldf `lm.fit`;
    check L29() else D12();
  D10():
    deopt 33 [x10, r13];
  D12():
    deopt 41 [];
  L27():
    goto L4(x10, r13);
  L29():
    p2 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    p3 = prom<V +>{
      Q = ld Q;
      Q1 = force? Q;
      checkMissing(Q1);
      return Q1;
    };
    r19 = dyn lm_fit(p2, p3);
    check L30() else D13();
  D13():
    deopt 44 [r19];
  L30():
    c2 = `is.object`(r19);
    if c2 then L32() else L33(r19);
  L31(dx3):
    st U = dx3;
    diag = ldf diag;
    check L35() else D14();
  L32():
    dr2 = tryDispatchBuiltin.1("$", r19);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L34() else L33(dr2);
  L33(r21):
    r22 = `$`(r21, <sym coefficients>);
    goto L31(r22);
  D14():
    deopt 48 [];
  L34():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L31(dx2);
  L35():
    p6 = prom<V +>{
      solve = ldf solve;
      p5 = prom<V +>{
        t = ldf t;
        p4 = prom<V +>{
          U = ld U;
          U1 = force? U;
          checkMissing(U1);
          return U1;
        };
        r24 = dyn t(p4);
        U2 = ld U;
        U3 = force? U2;
        checkMissing(U3);
        ___ = ldf `%*%` in base;
        r25 = dyn ___(r24, U3);
        return r25;
      };
      r27 = dyn solve(p5);
      return r27;
    };
    r29 = dyn diag(p6);
    check L36() else D15();
  D15():
    deopt 50 [r29];
  L36():
    st d = r29;
    U4 = ld U;
    check L37() else D16();
  D16():
    deopt 53 [U4];
  L37():
    U5 = force? U4;
    checkMissing(U5);
    diag1 = ldf diag;
    check L38() else D17();
  D17():
    deopt 56 [];
  L38():
    p7 = prom<V +>{
      sym2 = ldf sqrt;
      base2 = ldf sqrt in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      r32 = sqrt(d1);
      goto L0(r32);
    L2():
      r30 = dyn base2(<sym d>);
      goto L0(r30);
    };
    r34 = dyn diag1(p7);
    check L39() else D18();
  D18():
    deopt 58 [r34];
  L39():
    ___1 = ldf `%*%` in base;
    r35 = dyn ___1(U5, r34);
    check L40() else D19();
  D19():
    deopt 60 [r35];
  L40():
    st U = r35;
    l = ld U;
    dimnames__ = ldf `dimnames<-`;
    check L41() else D20();
  D20():
    deopt 65 [NULL, l, NULL];
  L41():
    r36 = dyn dimnames__(l, NULL, NULL);
    check L42() else D21();
  D21():
    deopt 67 [NULL, r36];
  L42():
    st U = r36;
    x18 = ld x;
    check L43() else D22();
  D22():
    deopt 70 [x18];
  L43():
    x19 = force? x18;
    checkMissing(x19);
    U6 = ld U;
    check L44() else D23();
  D23():
    deopt 72 [U6];
  L44():
    U7 = force? U6;
    checkMissing(U7);
    ___2 = ldf `%*%` in base;
    r37 = dyn ___2(x19, U7);
    check L45() else D24();
  D24():
    deopt 75 [r37];
  L45():
    st z = r37;
    xx4 = ld xx;
    check L46() else D25();
  D25():
    deopt 78 [xx4];
  L46():
    xx5 = force? xx4;
    checkMissing(xx5);
    c3 = `is.object`(xx5);
    if c3 then L48() else L49(xx5);
  L47(dx5):
    U8 = ld U;
    check L51() else D26();
  L48():
    dr4 = tryDispatchBuiltin.1("$", xx5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L50() else L49(dr4);
  L49(xx7):
    r38 = `$`(xx7, <sym rotmat>);
    goto L47(r38);
  D26():
    deopt 81 [U8];
  L50():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L47(dx4);
  L51():
    U9 = force? U8;
    checkMissing(U9);
    ___3 = ldf `%*%` in base;
    r39 = dyn ___3(dx5, U9);
    check L52() else D27();
  D27():
    deopt 84 [r39];
  L52():
    st U = r39;
    dn = ld dn;
    check L53() else D28();
  D28():
    deopt 86 [dn];
  L53():
    dn1 = force? dn;
    checkMissing(dn1);
    l1 = ld z;
    dimnames__1 = ldf `dimnames<-`;
    check L54() else D29();
  D29():
    deopt 89 [dn1, l1, dn1];
  L54():
    r40 = dyn dimnames__1(l1, NULL, dn1);
    check L55() else D30();
  D30():
    deopt 91 [dn1, r40];
  L55():
    st z = r40;
    l2 = ld z;
    class__ = ldf `class<-`;
    check L56() else D31();
  D31():
    deopt 96 ["loadings", l2, "loadings"];
  L56():
    r41 = dyn class__(l2, NULL, "loadings");
    check L57() else D32();
  D32():
    deopt 98 ["loadings", r41];
  L57():
    st z = r41;
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L58() else L59();
  L5(r43):
    popenv;
    return r43;
  L58():
    z = ld z;
    check L60() else D33();
  L59():
    r42 = dyn base3[loadings, rotmat](<sym z>, <sym U>);
    goto L5(r42);
  D33():
    deopt 102 [z];
  L60():
    z1 = force? z;
    checkMissing(z1);
    U10 = ld U;
    check L61() else D34();
  D34():
    deopt 105 [U10];
  L61():
    U11 = force? U10;
    checkMissing(U11);
    list = ldf list in base;
    r44 = dyn list(z1, U11);
    check L62() else D35();
  D35():
    deopt 109 [r44];
  L62():
    goto L5(r44);
  }
}