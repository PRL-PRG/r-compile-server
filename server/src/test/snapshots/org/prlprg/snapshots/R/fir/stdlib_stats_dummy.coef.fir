fun main() {
  () -+> V { reg r:cls, reg options:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg aov:cls, reg __:cls, reg r6:V, reg p1:p(V +), reg npk:*, reg npk1:V, reg p2:p(V +), reg r9:V, reg dummy_coef:cls, reg npk_aov:*, reg npk_aov1:V, reg p3:p(V +), reg r11:V, reg aov1:cls, reg __1:cls, reg r12:V, reg p4:p(V +), reg npk2:*, reg npk3:V, reg p5:p(V +), reg r15:V, reg dummy_coef1:cls, reg npk_aovE:*, reg npk_aovE1:V, reg p6:p(V +), reg r17:V |
    mkenv;
    r = clos inner64320599;
    st `dummy.coef` = r;
    options = ldf options;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("contr.helmert", "contr.poly");
      goto L0(r3);
    L2():
      r1 = dyn base("contr.helmert", "contr.poly");
      goto L0(r1);
    };
    r5 = dyn options[contrasts](p);
    check L1() else D1();
  D1():
    deopt 7 [r5];
  L1():
    aov = ldf aov;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p1 = prom<V +>{
      __ = ldf `~` in base;
      r6 = dyn __(<sym yield>, <lang `+`(block, `*`(`*`(N, P), K))>);
      return r6;
    };
    p2 = prom<V +>{
      npk = ld npk;
      npk1 = force? npk;
      checkMissing(npk1);
      return npk1;
    };
    r9 = dyn aov(p1, p2);
    check L3() else D3();
  D3():
    deopt 12 [r9];
  L3():
    st `npk.aov` = r9;
    dummy_coef = ldf `dummy.coef`;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p3 = prom<V +>{
      npk_aov = ld `npk.aov`;
      npk_aov1 = force? npk_aov;
      checkMissing(npk_aov1);
      return npk_aov1;
    };
    r11 = dyn dummy_coef(p3);
    check L5() else D5();
  D5():
    deopt 17 [r11];
  L5():
    aov1 = ldf aov;
    check L6() else D6();
  D6():
    deopt 19 [];
  L6():
    p4 = prom<V +>{
      __1 = ldf `~` in base;
      r12 = dyn __1(<sym yield>, <lang `+`(`*`(`*`(N, P), K), Error(block))>);
      return r12;
    };
    p5 = prom<V +>{
      npk2 = ld npk;
      npk3 = force? npk2;
      checkMissing(npk3);
      return npk3;
    };
    r15 = dyn aov1(p4, p5);
    check L7() else D7();
  D7():
    deopt 22 [r15];
  L7():
    st `npk.aovE` = r15;
    dummy_coef1 = ldf `dummy.coef`;
    check L8() else D8();
  D8():
    deopt 25 [];
  L8():
    p6 = prom<V +>{
      npk_aovE = ld `npk.aovE`;
      npk_aovE1 = force? npk_aovE;
      checkMissing(npk_aovE1);
      return npk_aovE1;
    };
    r17 = dyn dummy_coef1(p6);
    check L9() else D9();
  D9():
    deopt 27 [r17];
  L9():
    popenv;
    return r17;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
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
    r2 = dyn UseMethod("dummy.coef");
    goto L0(r2);
  L2():
    r = dyn base("dummy.coef");
    goto L0(r);
  }
}