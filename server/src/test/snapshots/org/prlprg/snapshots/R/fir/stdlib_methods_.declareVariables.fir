fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1989162548;
    st `.declareVariables` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1989162548(def, env) {
  (reg def:*, reg env:*) -+> V { var def:*, var env:*, reg __:cls, reg r:V, reg r1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg __1:cls, reg r6:V, reg names:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg __2:cls, reg r10:V, reg names1:cls, reg r11:V, reg c:cls, reg r12:V, reg p:p(V +), reg env1:*, reg env2:V, reg p1:p(V +), reg r15:V |
    mkenv;
    st def = def;
    st env = env;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn __("utils", "globalVariables");
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r3):
      return r3;
    L3():
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L4():
      r2 = dyn base(<lang names(`@`(def, fieldClasses))>, <lang names(`@`(def, refMethods))>, ".self");
      goto L0(r2);
    L1(r5):
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L7() else L8();
    L5():
      __1 = ldf `@` in base;
      r6 = dyn __1(<sym def>, <sym fieldClasses>);
      names = ldf names in base;
      r7 = dyn names(r6);
      goto L1(r7);
    L6():
      r4 = dyn base1(<lang `@`(def, fieldClasses)>);
      goto L1(r4);
    L2(r9):
      c = ldf c in base;
      r12 = dyn c(r5, r9, ".self");
      goto L0(r12);
    L7():
      __2 = ldf `@` in base;
      r10 = dyn __2(<sym def>, <sym refMethods>);
      names1 = ldf names in base;
      r11 = dyn names1(r10);
      goto L2(r11);
    L8():
      r8 = dyn base2(<lang `@`(def, refMethods)>);
      goto L2(r8);
    };
    p1 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r15 = dyn r1(p, p1);
    check L2() else D2();
  D2():
    deopt 8 [r15];
  L2():
    popenv;
    return r15;
  }
}