fun main() {
  () -+> V { reg r:cls, reg t_test:cls, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg t_test1:cls, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg r11:V, reg c1:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg with:cls, reg mtcars:*, reg mtcars1:V, reg p4:p(V +), reg t_test2:cls, reg mpg:*, reg mpg1:V, reg c2:L, reg mpg3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg am:*, reg am1:V, reg r18:V, reg __:cls, reg r19:V, reg p5:p(V +), reg mpg4:*, reg mpg5:V, reg c3:L, reg mpg7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg am2:*, reg am3:V, reg r21:V, reg __1:cls, reg r22:V, reg p6:p(V +), reg r24:V, reg p7:p(V +), reg r26:V, reg t_test3:cls, reg __2:cls, reg r27:V, reg p8:p(V +), reg mtcars2:*, reg mtcars3:V, reg p9:p(V +), reg r30:V, reg t_test4:cls, reg sleep:*, reg sleep1:V, reg c4:L, reg sleep3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r31:V, reg p10:p(V +), reg r33:V, reg t_test5:cls, reg __3:cls, reg r34:V, reg p11:p(V +), reg sleep4:*, reg sleep5:V, reg p12:p(V +), reg r37:V, reg reshape:cls, reg sleep6:*, reg sleep7:V, reg p13:p(V +), reg r39:V, reg t_test6:cls, reg sleep8:*, reg sleep9:V, reg c5:L, reg sleep11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r40:V, reg p14:p(V +), reg sleep12:*, reg sleep13:V, reg c6:L, reg sleep15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r42:V, reg p15:p(V +), reg r44:V, reg t_test7:cls, reg __4:cls, reg r45:V, reg p16:p(V +), reg sleep16:*, reg sleep17:V, reg p17:p(V +), reg r48:V |
    mkenv;
    r = clos inner2044426018;
    st `t.test` = r;
    t_test = ldf `t.test`;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      r4 = `:`(7.0, 20.0);
      c = ldf c in base;
      r5 = dyn c(r4);
      goto L0(r5);
    L2():
      r2 = dyn base(<lang `:`(7.0, 20.0)>);
      goto L0(r2);
    };
    r7 = dyn t_test[, y](p, p1);
    check L2() else D1();
  D1():
    deopt 8 [r7];
  L2():
    t_test1 = ldf `t.test`;
    check L3() else D2();
  D2():
    deopt 10 [];
  L3():
    p2 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      r11 = `:`(7.0, 20.0);
      c1 = ldf c in base;
      r12 = dyn c1(r11, 200.0);
      goto L0(r12);
    L2():
      r9 = dyn base1(<lang `:`(7.0, 20.0)>, 200.0);
      goto L0(r9);
    };
    r14 = dyn t_test1[, y](p2, p3);
    check L4() else D3();
  D3():
    deopt 14 [r14];
  L4():
    sym2 = ldf with;
    base2 = ldf with in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L5() else L6();
  L0():
    t_test3 = ldf `t.test`;
    check L9() else D6();
  L5():
    with = ldf with;
    check L7() else D4();
  L6():
    r15 = dyn base2(<sym mtcars>, <lang t.test(`[`(mpg, `==`(am, 0.0)), `[`(mpg, `==`(am, 1.0)))>);
    goto L0();
  D4():
    deopt 17 [];
  D6():
    deopt 22 [];
  L7():
    p4 = prom<V +>{
      mtcars = ld mtcars;
      mtcars1 = force? mtcars;
      checkMissing(mtcars1);
      return mtcars1;
    };
    p7 = prom<V +>{
      t_test2 = ldf `t.test`;
      p5 = prom<V +>{
        mpg = ld mpg;
        mpg1 = force? mpg;
        checkMissing(mpg1);
        c2 = `is.object`(mpg1);
        if c2 then L1() else L2(mpg1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", mpg1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(mpg3):
        am = ld am;
        am1 = force? am;
        checkMissing(am1);
        r18 = `==`(am1, 0.0);
        __ = ldf `[` in base;
        r19 = dyn __(mpg3, r18);
        goto L0(r19);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p6 = prom<V +>{
        mpg4 = ld mpg;
        mpg5 = force? mpg4;
        checkMissing(mpg5);
        c3 = `is.object`(mpg5);
        if c3 then L1() else L2(mpg5);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", mpg5);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(mpg7):
        am2 = ld am;
        am3 = force? am2;
        checkMissing(am3);
        r21 = `==`(am3, 1.0);
        __1 = ldf `[` in base;
        r22 = dyn __1(mpg7, r21);
        goto L0(r22);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r24 = dyn t_test2(p5, p6);
      return r24;
    };
    r26 = dyn with(p4, p7);
    check L8() else D5();
  L9():
    p8 = prom<V +>{
      __2 = ldf `~` in base;
      r27 = dyn __2(<sym mpg>, <sym am>);
      return r27;
    };
    p9 = prom<V +>{
      mtcars2 = ld mtcars;
      mtcars3 = force? mtcars2;
      checkMissing(mtcars3);
      return mtcars3;
    };
    r30 = dyn t_test3[, data](p8, p9);
    check L10() else D7();
  D5():
    deopt 20 [r26];
  D7():
    deopt 26 [r30];
  L8():
    goto L0();
  L10():
    t_test4 = ldf `t.test`;
    check L11() else D8();
  D8():
    deopt 28 [];
  L11():
    p10 = prom<V +>{
      sleep = ld sleep;
      sleep1 = force? sleep;
      checkMissing(sleep1);
      c4 = `is.object`(sleep1);
      if c4 then L1() else L2(sleep1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", sleep1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(sleep3):
      r31 = `$`(sleep3, <sym extra>);
      goto L0(r31);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r33 = dyn t_test4(p10);
    check L12() else D9();
  D9():
    deopt 30 [r33];
  L12():
    t_test5 = ldf `t.test`;
    check L13() else D10();
  D10():
    deopt 32 [];
  L13():
    p11 = prom<V +>{
      __3 = ldf `~` in base;
      r34 = dyn __3(<sym extra>, 1.0);
      return r34;
    };
    p12 = prom<V +>{
      sleep4 = ld sleep;
      sleep5 = force? sleep4;
      checkMissing(sleep5);
      return sleep5;
    };
    r37 = dyn t_test5[, data](p11, p12);
    check L14() else D11();
  D11():
    deopt 36 [r37];
  L14():
    reshape = ldf reshape;
    check L15() else D12();
  D12():
    deopt 38 [];
  L15():
    p13 = prom<V +>{
      sleep6 = ld sleep;
      sleep7 = force? sleep6;
      checkMissing(sleep7);
      return sleep7;
    };
    r39 = dyn reshape[, direction, idvar, timevar](p13, "wide", "ID", "group");
    check L16() else D13();
  D13():
    deopt 46 [r39];
  L16():
    st sleep2 = r39;
    t_test6 = ldf `t.test`;
    check L17() else D14();
  D14():
    deopt 49 [];
  L17():
    p14 = prom<V +>{
      sleep8 = ld sleep2;
      sleep9 = force? sleep8;
      checkMissing(sleep9);
      c5 = `is.object`(sleep9);
      if c5 then L1() else L2(sleep9);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", sleep9);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(sleep11):
      r40 = `$`(sleep11, <sym extra.1>);
      goto L0(r40);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p15 = prom<V +>{
      sleep12 = ld sleep2;
      sleep13 = force? sleep12;
      checkMissing(sleep13);
      c6 = `is.object`(sleep13);
      if c6 then L1() else L2(sleep13);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", sleep13);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(sleep15):
      r42 = `$`(sleep15, <sym extra.2>);
      goto L0(r42);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r44 = dyn t_test6[, , paired](p14, p15, TRUE);
    check L18() else D15();
  D15():
    deopt 54 [r44];
  L18():
    t_test7 = ldf `t.test`;
    check L19() else D16();
  D16():
    deopt 56 [];
  L19():
    p16 = prom<V +>{
      __4 = ldf `~` in base;
      r45 = dyn __4(<lang Pair(extra.1, extra.2)>, 1.0);
      return r45;
    };
    p17 = prom<V +>{
      sleep16 = ld sleep2;
      sleep17 = force? sleep16;
      checkMissing(sleep17);
      return sleep17;
    };
    r48 = dyn t_test7[, data](p16, p17);
    check L20() else D17();
  D17():
    deopt 60 [r48];
  L20():
    popenv;
    return r48;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
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
    r2 = dyn UseMethod("t.test");
    goto L0(r2);
  L2():
    r = dyn base("t.test");
    goto L0(r);
  }
}