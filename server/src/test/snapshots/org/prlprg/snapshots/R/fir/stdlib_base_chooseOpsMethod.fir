fun main() {
  () -+> V { reg r:cls, reg structure:cls, reg r1:V, reg structure1:cls, reg r2:V, reg r3:cls, reg r4:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg foo_obj:*, reg foo_obj1:V, reg bar_obj:*, reg bar_obj1:V, reg r7:V, reg invisible:cls, reg r8:V, reg r9:cls, reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg foo_obj2:*, reg foo_obj3:V, reg bar_obj2:*, reg bar_obj3:V, reg r12:V, reg identical:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg bar_obj4:*, reg bar_obj5:V, reg foo_obj4:*, reg foo_obj5:V, reg r16:V, reg identical1:cls, reg r17:V, reg p:p(V +), reg r19:V, reg rm:cls, reg foo_obj6:*, reg foo_obj7:V, reg p1:p(V +), reg bar_obj6:*, reg bar_obj7:V, reg p2:p(V +), reg __foo:*, reg __foo1:V, reg p3:p(V +), reg Ops_bar:*, reg Ops_bar1:V, reg p4:p(V +), reg chooseOpsMethod_bar:*, reg chooseOpsMethod_bar1:V, reg p5:p(V +), reg r25:V |
    mkenv;
    r = clos inner102261282;
    st chooseOpsMethod = r;
    structure = ldf structure;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    r1 = dyn structure[, class](1.0, "foo");
    check L2() else D1();
  D1():
    deopt 8 [r1];
  L2():
    st foo_obj = r1;
    structure1 = ldf structure;
    check L3() else D2();
  D2():
    deopt 11 [];
  L3():
    r2 = dyn structure1[, class](1.0, "bar");
    check L4() else D3();
  D3():
    deopt 15 [r2];
  L4():
    st bar_obj = r2;
    r3 = clos inner2136888366;
    st `+.foo` = r3;
    r4 = clos inner2136888366;
    st `Ops.bar` = r4;
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0():
    r9 = clos inner102261282;
    st `chooseOpsMethod.bar` = r9;
    stopifnot = ldf stopifnot;
    check L10() else D7();
  L5():
    foo_obj = ld foo_obj;
    check L7() else D4();
  L6():
    r5 = dyn base(<lang `+`(foo_obj, bar_obj)>);
    goto L0();
  D4():
    deopt 25 [foo_obj];
  D7():
    deopt 35 [];
  L7():
    foo_obj1 = force? foo_obj;
    checkMissing(foo_obj1);
    bar_obj = ld bar_obj;
    check L8() else D5();
  L10():
    p = prom<V +>{
      sym1 = ldf identical;
      base1 = ldf identical in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0():
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L2():
      foo_obj2 = ld foo_obj;
      foo_obj3 = force? foo_obj2;
      checkMissing(foo_obj3);
      bar_obj2 = ld bar_obj;
      bar_obj3 = force? bar_obj2;
      checkMissing(bar_obj3);
      r12 = `+`(foo_obj3, bar_obj3);
      identical = ldf identical in base;
      r13 = dyn identical(r12, "bar", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0();
    L3():
      r10 = dyn base1(<lang `+`(foo_obj, bar_obj)>, "bar");
      goto L0();
    L1(r15):
      return r15;
    L4():
      bar_obj4 = ld bar_obj;
      bar_obj5 = force? bar_obj4;
      checkMissing(bar_obj5);
      foo_obj4 = ld foo_obj;
      foo_obj5 = force? foo_obj4;
      checkMissing(foo_obj5);
      r16 = `+`(bar_obj5, foo_obj5);
      identical1 = ldf identical in base;
      r17 = dyn identical1(r16, "bar", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L1(r17);
    L5():
      r14 = dyn base2(<lang `+`(bar_obj, foo_obj)>, "bar");
      goto L1(r14);
    };
    r19 = dyn stopifnot[exprs](p);
    check L11() else D8();
  D5():
    deopt 26 [foo_obj1, bar_obj];
  D8():
    deopt 38 [r19];
  L8():
    bar_obj1 = force? bar_obj;
    checkMissing(bar_obj1);
    r7 = `+`(foo_obj1, bar_obj1);
    invisible = ldf invisible in base;
    r8 = dyn invisible(r7);
    check L9() else D6();
  L11():
    rm = ldf rm;
    check L12() else D9();
  D6():
    deopt 30 [r8];
  D9():
    deopt 40 [];
  L9():
    goto L0();
  L12():
    p1 = prom<V +>{
      foo_obj6 = ld foo_obj;
      foo_obj7 = force? foo_obj6;
      checkMissing(foo_obj7);
      return foo_obj7;
    };
    p2 = prom<V +>{
      bar_obj6 = ld bar_obj;
      bar_obj7 = force? bar_obj6;
      checkMissing(bar_obj7);
      return bar_obj7;
    };
    p3 = prom<V +>{
      __foo = ld `+.foo`;
      __foo1 = force? __foo;
      checkMissing(__foo1);
      return __foo1;
    };
    p4 = prom<V +>{
      Ops_bar = ld `Ops.bar`;
      Ops_bar1 = force? Ops_bar;
      checkMissing(Ops_bar1);
      return Ops_bar1;
    };
    p5 = prom<V +>{
      chooseOpsMethod_bar = ld `chooseOpsMethod.bar`;
      chooseOpsMethod_bar1 = force? chooseOpsMethod_bar;
      checkMissing(chooseOpsMethod_bar1);
      return chooseOpsMethod_bar1;
    };
    r25 = dyn rm(p1, p2, p3, p4, p5);
    check L13() else D10();
  D10():
    deopt 46 [r25];
  L13():
    popenv;
    return r25;
  }
}
fun inner102261282(x, y, mx, my, cl, reverse) {
  (reg x:*, reg y:*, reg mx:*, reg my:*, reg cl:*, reg reverse:*) -+> V { var x:*, var y:*, var mx:*, var my:*, var cl:*, var reverse:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st y = y;
    st mx = mx;
    st my = my;
    st cl = cl;
    st reverse = reverse;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("chooseOpsMethod");
    goto L0(r2);
  L2():
    r = dyn base("chooseOpsMethod");
    goto L0(r);
  }
}
fun inner2136888366(e1, e2) {
  (reg e1:*, reg e2:*) -+> V { var e1:*, var e2:* |
    mkenv;
    st e1 = e1;
    st e2 = e2;
    popenv;
    return "foo";
  }
}