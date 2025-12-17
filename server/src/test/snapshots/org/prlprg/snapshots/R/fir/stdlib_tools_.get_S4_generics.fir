fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2916718377;
    st `.get_S4_generics` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2916718377(env) {
  (reg env:*) -+> V { var env:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg as_environment:cls, reg r2:V, reg suppressMessages:cls, reg __:cls, reg r3:V, reg r4:cls, reg env3:*, reg env4:V, reg p:p(V +), reg r6:V, reg p1:p(V +), reg r8:V, reg Map:cls, reg r9:cls, reg p2:p(V +), reg __1:cls, reg r11:V, reg p3:p(V +), reg __2:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg __3:cls, reg r16:V, reg l:*, reg names__:cls, reg r17:V, reg y:*, reg y1:V |
    mkenv;
    st env = env;
    sym = ldf `as.environment`;
    base = ldf `as.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st env = r1;
    suppressMessages = ldf suppressMessages;
    check L5() else D2();
  L1():
    env1 = ld env;
    check L3() else D0();
  L2():
    r = dyn base(<sym env>);
    goto L0(r);
  D0():
    deopt 2 [env1];
  D2():
    deopt 8 [];
  L3():
    env2 = force? env1;
    checkMissing(env2);
    as_environment = ldf `as.environment` in base;
    r2 = dyn as_environment(env2);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      __ = ldf `::`;
      r3 = dyn __("methods", "getGenerics");
      checkFun.0(r3);
      r4 = r3 as cls;
      p = prom<V +>{
        env3 = ld env;
        env4 = force? env3;
        checkMissing(env4);
        return env4;
      };
      r6 = dyn r4(p);
      return r6;
    };
    r8 = dyn suppressMessages(p1);
    check L6() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [r8];
  L4():
    goto L0(r2);
  L6():
    st g = r8;
    Map = ldf Map;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    p2 = prom<V +>{
      r9 = clos inner275746038;
      return r9;
    };
    p3 = prom<V +>{
      __1 = ldf `@` in base;
      r11 = dyn __1(<sym g>, <sym .Data>);
      return r11;
    };
    p4 = prom<V +>{
      __2 = ldf `@` in base;
      r13 = dyn __2(<sym g>, <sym package>);
      return r13;
    };
    r15 = dyn Map(p2, p3, p4);
    check L8() else D5();
  D5():
    deopt 17 [r15];
  L8():
    st y = r15;
    __3 = ldf `@` in base;
    r16 = dyn __3(<sym g>, <sym .Data>);
    l = ld y;
    names__ = ldf `names<-`;
    check L9() else D6();
  D6():
    deopt 22 [r16, l, r16];
  L9():
    r17 = dyn names__(l, NULL, r16);
    check L10() else D7();
  D7():
    deopt 24 [r16, r17];
  L10():
    st y = r17;
    y = ld y;
    check L11() else D8();
  D8():
    deopt 26 [y];
  L11():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}
fun inner275746038(f, p) {
  (reg f:*, reg p:*) -+> V { var f:*, var p:*, reg p1:*, reg p2:V, reg l:*, reg attr__:cls, reg r:V, reg f1:*, reg f2:V |
    mkenv;
    st f = f;
    st p = p;
    p1 = ld p;
    check L0() else D0();
  D0():
    deopt 0 [p1];
  L0():
    p2 = force? p1;
    checkMissing(p2);
    l = ld f;
    attr__ = ldf `attr<-`;
    check L1() else D1();
  D1():
    deopt 3 [p2, l, p2];
  L1():
    r = dyn attr__(l, NULL, "package", p2);
    check L2() else D2();
  D2():
    deopt 6 [p2, r];
  L2():
    st f = r;
    f1 = ld f;
    check L3() else D3();
  D3():
    deopt 8 [f1];
  L3():
    f2 = force? f1;
    checkMissing(f2);
    popenv;
    return f2;
  }
}