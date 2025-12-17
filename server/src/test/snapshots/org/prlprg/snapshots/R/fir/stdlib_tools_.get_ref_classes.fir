fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2916718377;
    st `.get_ref_classes` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2916718377(env) {
  (reg env:*) -+> V { var env:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg as_environment:cls, reg r2:V, reg __:cls, reg r3:V, reg r4:cls, reg env3:*, reg env4:V, reg p:p(V +), reg r6:V, reg cl:*, reg cl1:V, reg c:L, reg cl3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vapply:cls, reg cl4:*, reg cl5:V, reg p1:p(V +), reg r8:cls, reg p2:p(V +), reg r10:V, reg __1:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg cl6:*, reg cl7:V, reg length:cls, reg r14:V, reg c1:L, reg lapply:cls, reg cl8:*, reg cl9:V, reg p3:p(V +), reg r16:cls, reg p4:p(V +), reg r18:V, reg cl10:*, reg cl11:V, reg l:*, reg names__:cls, reg r19:V, reg res:*, reg res1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg list:cls, reg r22:V |
    mkenv;
    st env = env;
    sym = ldf `as.environment`;
    base = ldf `as.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st env = r1;
    __ = ldf `::`;
    check L9() else D2();
  L5():
    env1 = ld env;
    check L7() else D0();
  L6():
    r = dyn base(<sym env>);
    goto L0(r);
  D0():
    deopt 2 [env1];
  D2():
    deopt 8 [];
  L7():
    env2 = force? env1;
    checkMissing(env2);
    as_environment = ldf `as.environment` in base;
    r2 = dyn as_environment(env2);
    check L8() else D1();
  L9():
    r3 = dyn __("methods", "getClasses");
    check L10() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 11 [r3];
  L8():
    goto L0(r2);
  L10():
    checkFun.0(r3);
    r4 = r3 as cls;
    p = prom<V +>{
      env3 = ld env;
      env4 = force? env3;
      checkMissing(env4);
      return env4;
    };
    r6 = dyn r4(p);
    check L11() else D4();
  D4():
    deopt 14 [r6];
  L11():
    st cl = r6;
    cl = ld cl;
    check L12() else D5();
  D5():
    deopt 16 [cl];
  L12():
    cl1 = force? cl;
    checkMissing(cl1);
    c = `is.object`(cl1);
    if c then L13() else L14(cl1);
  L1(dx1):
    st cl = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L13():
    dr = tryDispatchBuiltin.1("[", cl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(cl3):
    vapply = ldf vapply;
    check L16() else D6();
  D6():
    deopt 19 [cl3];
  L2(r13):
    c1 = `as.logical`(r13);
    if c1 then L22() else L3();
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L16():
    p1 = prom<V +>{
      cl4 = ld cl;
      cl5 = force? cl4;
      checkMissing(cl5);
      return cl5;
    };
    p2 = prom<V +>{
      r8 = clos inner2023598292;
      return r8;
    };
    r10 = dyn vapply(p1, p2, NA_LGL);
    check L17() else D7();
  L18():
    cl6 = ld cl;
    check L20() else D8();
  L19():
    r12 = dyn base1(<sym cl>);
    goto L2(r12);
  D7():
    deopt 23 [cl3, r10];
  D8():
    deopt 28 [cl6];
  L3():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L17():
    __1 = ldf `[` in base;
    r11 = dyn __1(cl3, r10);
    goto L1(r11);
  L20():
    cl7 = force? cl6;
    checkMissing(cl7);
    length = ldf length in base;
    r14 = dyn length(cl7);
    check L21() else D9();
  L22():
    lapply = ldf lapply;
    check L23() else D10();
  D9():
    deopt 31 [r14];
  D10():
    deopt 33 [];
  L4(r21):
    popenv;
    return r21;
  L21():
    goto L2(r14);
  L23():
    p3 = prom<V +>{
      cl8 = ld cl;
      cl9 = force? cl8;
      checkMissing(cl9);
      return cl9;
    };
    p4 = prom<V +>{
      r16 = clos inner2023598292;
      return r16;
    };
    r18 = dyn lapply(p3, p4);
    check L24() else D11();
  L30():
    list = ldf list in base;
    r22 = dyn list();
    check L32() else D16();
  L31():
    r20 = dyn base2();
    goto L4(r20);
  D11():
    deopt 36 [r18];
  D16():
    deopt 50 [r22];
  L24():
    st res = r18;
    cl10 = ld cl;
    check L25() else D12();
  L32():
    goto L4(r22);
  D12():
    deopt 38 [cl10];
  L25():
    cl11 = force? cl10;
    checkMissing(cl11);
    l = ld res;
    names__ = ldf `names<-`;
    check L26() else D13();
  D13():
    deopt 41 [cl11, l, cl11];
  L26():
    r19 = dyn names__(l, NULL, cl11);
    check L27() else D14();
  D14():
    deopt 43 [cl11, r19];
  L27():
    st res = r19;
    res = ld res;
    check L28() else D15();
  D15():
    deopt 45 [res];
  L28():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  }
}
fun inner2023598292(Class) {
  (reg Class:*) -+> V { var Class:*, reg __:cls, reg r:V, reg r1:cls, reg __1:cls, reg r2:V, reg r3:cls, reg Class1:*, reg Class2:V, reg p:p(V +), reg env:*, reg env1:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V |
    mkenv;
    st Class = Class;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn __("methods", "is");
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    checkFun.0(r);
    r1 = r as cls;
    p2 = prom<V +>{
      __1 = ldf `::`;
      r2 = dyn __1("methods", "getClass");
      checkFun.0(r2);
      r3 = r2 as cls;
      p = prom<V +>{
        Class1 = ld Class;
        Class2 = force? Class1;
        checkMissing(Class2);
        return Class2;
      };
      p1 = prom<V +>{
        env = ld env;
        env1 = force? env;
        checkMissing(env1);
        return env1;
      };
      r6 = dyn r3[, where](p, p1);
      return r6;
    };
    r8 = dyn r1(p2, "refClassRepresentation");
    check L2() else D2();
  D2():
    deopt 8 [r8];
  L2():
    popenv;
    return r8;
  }
}