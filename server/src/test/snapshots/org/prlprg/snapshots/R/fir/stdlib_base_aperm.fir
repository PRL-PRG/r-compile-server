fun main() {
  () -+> V { reg r:cls, reg array:cls, reg r1:V, reg p:p(V +), reg p1:p(V +), reg r4:V, reg aperm:cls, reg x:*, reg x1:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg c:cls, reg r8:V, reg p3:p(V +), reg r10:V, reg stopifnot:cls, reg t:cls, reg xt:*, reg xt1:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg x2:*, reg x3:V, reg c2:L, reg r15:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r17:V, reg dx3:V, reg __1:cls, reg r18:V, reg r19:V, reg p5:p(V +), reg t1:cls, reg xt4:*, reg xt5:V, reg c3:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r21:V, reg p6:p(V +), reg r23:V, reg x6:*, reg x7:V, reg c4:L, reg r25:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r27:V, reg dx7:V, reg __3:cls, reg r28:V, reg r29:V, reg p7:p(V +), reg t2:cls, reg xt8:*, reg xt9:V, reg c5:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r31:V, reg p8:p(V +), reg r33:V, reg x10:*, reg x11:V, reg c6:L, reg r35:V, reg dr10:V, reg dc5:L, reg dx10:V, reg r37:V, reg dx11:V, reg __5:cls, reg r38:V, reg r39:V, reg p9:p(V +), reg r41:V, reg aperm1:cls, reg UCBAdmissions:*, reg UCBAdmissions1:V, reg p10:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r43:V, reg r44:V, reg c7:cls, reg r45:V, reg p11:p(V +), reg r47:V, reg UCB:*, reg UCB1:V, reg c8:L, reg dr12:V, reg dc6:L, reg dx12:V, reg __6:cls, reg r48:V, reg summary:cls, reg UCB4:*, reg UCB5:V, reg p12:p(V +), reg r50:V, reg stopifnot1:cls, reg is_table:cls, reg UCB6:*, reg UCB7:V, reg p13:p(V +), reg r52:V, reg p14:p(V +), reg r54:V |
    mkenv;
    r = clos `inner-2045931786`;
    st aperm = r;
    array = ldf array;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      r1 = `:`(1.0, 24.0);
      return r1;
    };
    p1 = prom<V +>{
      return <int 2, 3, 4>;
    };
    r4 = dyn array(p, p1);
    check L2() else D1();
  D1():
    deopt 7 [r4];
  L2():
    st x = r4;
    aperm = ldf aperm;
    check L3() else D2();
  D2():
    deopt 10 [];
  L3():
    p2 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c = ldf c in base;
      r8 = dyn c(2.0, 1.0, 3.0);
      goto L0(r8);
    L2():
      r6 = dyn base(2.0, 1.0, 3.0);
      goto L0(r6);
    };
    r10 = dyn aperm(p2, p3);
    check L4() else D3();
  D3():
    deopt 13 [r10];
  L4():
    st xt = r10;
    stopifnot = ldf stopifnot;
    check L5() else D4();
  D4():
    deopt 16 [];
  L5():
    p5 = prom<V +>{
      t = ldf t;
      p4 = prom<V +>{
        xt = ld xt;
        xt1 = force? xt;
        checkMissing(xt1);
        c1 = `is.object`(xt1);
        if c1 then L1() else L2();
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", xt1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2();
      L2():
        __ = ldf `[` in base;
        r11 = dyn __(xt1, <missing>, <missing>, 2.0);
        goto L0(r11);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r13 = dyn t(p4);
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      c2 = `is.object`(x3);
      if c2 then L1() else L2(r13);
    L0(r17, dx3):
      r19 = `==`(r17, dx3);
      return r19;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(r13);
    L2(r15):
      __1 = ldf `[` in base;
      r18 = dyn __1(x3, <missing>, <missing>, 2.0);
      goto L0(r15, r18);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(r13, dx2);
    };
    p7 = prom<V +>{
      t1 = ldf t;
      p6 = prom<V +>{
        xt4 = ld xt;
        xt5 = force? xt4;
        checkMissing(xt5);
        c3 = `is.object`(xt5);
        if c3 then L1() else L2();
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", xt5);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2();
      L2():
        __2 = ldf `[` in base;
        r21 = dyn __2(xt5, <missing>, <missing>, 3.0);
        goto L0(r21);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r23 = dyn t1(p6);
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      c4 = `is.object`(x7);
      if c4 then L1() else L2(r23);
    L0(r27, dx7):
      r29 = `==`(r27, dx7);
      return r29;
    L1():
      dr6 = tryDispatchBuiltin.1("[", x7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(r23);
    L2(r25):
      __3 = ldf `[` in base;
      r28 = dyn __3(x7, <missing>, <missing>, 3.0);
      goto L0(r25, r28);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(r23, dx6);
    };
    p9 = prom<V +>{
      t2 = ldf t;
      p8 = prom<V +>{
        xt8 = ld xt;
        xt9 = force? xt8;
        checkMissing(xt9);
        c5 = `is.object`(xt9);
        if c5 then L1() else L2();
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("[", xt9);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2();
      L2():
        __4 = ldf `[` in base;
        r31 = dyn __4(xt9, <missing>, <missing>, 4.0);
        goto L0(r31);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      r33 = dyn t2(p8);
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      c6 = `is.object`(x11);
      if c6 then L1() else L2(r33);
    L0(r37, dx11):
      r39 = `==`(r37, dx11);
      return r39;
    L1():
      dr10 = tryDispatchBuiltin.1("[", x11);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(r33);
    L2(r35):
      __5 = ldf `[` in base;
      r38 = dyn __5(x11, <missing>, <missing>, 4.0);
      goto L0(r35, r38);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(r33, dx10);
    };
    r41 = dyn stopifnot(p5, p7, p9);
    check L6() else D5();
  D5():
    deopt 20 [r41];
  L6():
    aperm1 = ldf aperm;
    check L7() else D6();
  D6():
    deopt 22 [];
  L7():
    p10 = prom<V +>{
      UCBAdmissions = ld UCBAdmissions;
      UCBAdmissions1 = force? UCBAdmissions;
      checkMissing(UCBAdmissions1);
      return UCBAdmissions1;
    };
    p11 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      c7 = ldf c in base;
      r45 = dyn c7(2.0, 1.0, 3.0);
      goto L0(r45);
    L2():
      r43 = dyn base1(2.0, 1.0, 3.0);
      goto L0(r43);
    };
    r47 = dyn aperm1(p10, p11);
    check L8() else D7();
  D7():
    deopt 25 [r47];
  L8():
    st UCB = r47;
    UCB = ld UCB;
    check L9() else D8();
  D8():
    deopt 27 [UCB];
  L9():
    UCB1 = force? UCB;
    checkMissing(UCB1);
    c8 = `is.object`(UCB1);
    if c8 then L10() else L11();
  L0():
    summary = ldf summary;
    check L13() else D9();
  L10():
    dr12 = tryDispatchBuiltin.1("[", UCB1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L12() else L11();
  L11():
    __6 = ldf `[` in base;
    r48 = dyn __6(UCB1, 1.0, <missing>, <missing>);
    goto L0();
  D9():
    deopt 35 [];
  L12():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L0();
  L13():
    p12 = prom<V +>{
      UCB4 = ld UCB;
      UCB5 = force? UCB4;
      checkMissing(UCB5);
      return UCB5;
    };
    r50 = dyn summary(p12);
    check L14() else D10();
  D10():
    deopt 37 [r50];
  L14():
    stopifnot1 = ldf stopifnot;
    check L15() else D11();
  D11():
    deopt 39 [];
  L15():
    p14 = prom<V +>{
      is_table = ldf `is.table`;
      p13 = prom<V +>{
        UCB6 = ld UCB;
        UCB7 = force? UCB6;
        checkMissing(UCB7);
        return UCB7;
      };
      r52 = dyn is_table(p13);
      return r52;
    };
    r54 = dyn stopifnot1(p14);
    check L16() else D12();
  D12():
    deopt 41 [r54];
  L16():
    popenv;
    return r54;
  }
}
fun `inner-2045931786`(a, perm, `...`) {
  (reg a:*, reg perm:*, reg ddd:dots) -+> V { var a:*, var perm:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st a = a;
    st perm = perm;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("aperm");
    goto L0(r2);
  L2():
    r = dyn base("aperm");
    goto L0(r);
  }
}