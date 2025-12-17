fun main() {
  () -+> V { reg r:cls, reg options:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg require1:cls, reg utils:*, reg utils1:V, reg p1:p(V +), reg r9:V, reg lm:cls, reg __:cls, reg r10:V, reg p2:p(V +), reg swiss:*, reg swiss1:V, reg p3:p(V +), reg r13:V, reg add1:cls, reg lm1:*, reg lm2:V, reg p4:p(V +), reg __1:cls, reg r15:V, reg p5:p(V +), reg r17:V, reg drop1:cls, reg lm3:*, reg lm4:V, reg p6:p(V +), reg r19:V, reg example:cls, reg glm:*, reg glm1:V, reg p7:p(V +), reg r21:V, reg drop2:cls, reg glm_D93:*, reg glm_D94:V, reg p8:p(V +), reg r23:V, reg drop3:cls, reg glm_D95:*, reg glm_D96:V, reg p9:p(V +), reg r25:V, reg add2:cls, reg glm_D97:*, reg glm_D98:V, reg p10:p(V +), reg __2:cls, reg r27:V, reg p11:p(V +), reg r29:V, reg options1:cls, reg od:*, reg od1:V, reg p12:p(V +), reg r31:V |
    mkenv;
    r = clos inner2300758201;
    st add1 = r;
    options = ldf options;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    r1 = dyn options[digits](5.0);
    check L3() else D1();
  D1():
    deopt 7 [r1];
  L3():
    st od = r1;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    sym1 = ldf require;
    base1 = ldf require in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    require = ldf require;
    check L6() else D2();
  L5():
    r2 = dyn base(<sym graphics>);
    goto L0();
  D2():
    deopt 11 [];
  L1():
    lm = ldf lm;
    check L12() else D6();
  L6():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r5 = dyn require(p);
    check L7() else D3();
  L8():
    require1 = ldf require;
    check L10() else D4();
  L9():
    r6 = dyn base1(<sym utils>);
    goto L1();
  D3():
    deopt 13 [r5];
  D4():
    deopt 16 [];
  D6():
    deopt 20 [];
  L7():
    goto L0();
  L10():
    p1 = prom<V +>{
      utils = ld utils;
      utils1 = force? utils;
      checkMissing(utils1);
      return utils1;
    };
    r9 = dyn require1(p1);
    check L11() else D5();
  L12():
    p2 = prom<V +>{
      __ = ldf `~` in base;
      r10 = dyn __(<sym Fertility>, <sym .>);
      return r10;
    };
    p3 = prom<V +>{
      swiss = ld swiss;
      swiss1 = force? swiss;
      checkMissing(swiss1);
      return swiss1;
    };
    r13 = dyn lm[, data](p2, p3);
    check L13() else D7();
  D5():
    deopt 18 [r9];
  D7():
    deopt 24 [r13];
  L11():
    goto L1();
  L13():
    st lm1 = r13;
    add1 = ldf add1;
    check L14() else D8();
  D8():
    deopt 27 [];
  L14():
    p4 = prom<V +>{
      lm1 = ld lm1;
      lm2 = force? lm1;
      checkMissing(lm2);
      return lm2;
    };
    p5 = prom<V +>{
      __1 = ldf `~` in base;
      r15 = dyn __1(<lang `+`(I(`^`(Education, 2.0)), `^`(., 2.0))>);
      return r15;
    };
    r17 = dyn add1(p4, p5);
    check L15() else D9();
  D9():
    deopt 30 [r17];
  L15():
    drop1 = ldf drop1;
    check L16() else D10();
  D10():
    deopt 32 [];
  L16():
    p6 = prom<V +>{
      lm3 = ld lm1;
      lm4 = force? lm3;
      checkMissing(lm4);
      return lm4;
    };
    r19 = dyn drop1[, test](p6, "F");
    check L17() else D11();
  D11():
    deopt 36 [r19];
  L17():
    example = ldf example;
    check L18() else D12();
  D12():
    deopt 38 [];
  L18():
    p7 = prom<V +>{
      glm = ld glm;
      glm1 = force? glm;
      checkMissing(glm1);
      return glm1;
    };
    r21 = dyn example[, echo](p7, FALSE);
    check L19() else D13();
  D13():
    deopt 42 [r21];
  L19():
    drop2 = ldf drop1;
    check L20() else D14();
  D14():
    deopt 44 [];
  L20():
    p8 = prom<V +>{
      glm_D93 = ld `glm.D93`;
      glm_D94 = force? glm_D93;
      checkMissing(glm_D94);
      return glm_D94;
    };
    r23 = dyn drop2[, test](p8, "Chisq");
    check L21() else D15();
  D15():
    deopt 48 [r23];
  L21():
    drop3 = ldf drop1;
    check L22() else D16();
  D16():
    deopt 50 [];
  L22():
    p9 = prom<V +>{
      glm_D95 = ld `glm.D93`;
      glm_D96 = force? glm_D95;
      checkMissing(glm_D96);
      return glm_D96;
    };
    r25 = dyn drop3[, test](p9, "F");
    check L23() else D17();
  D17():
    deopt 54 [r25];
  L23():
    add2 = ldf add1;
    check L24() else D18();
  D18():
    deopt 56 [];
  L24():
    p10 = prom<V +>{
      glm_D97 = ld `glm.D93`;
      glm_D98 = force? glm_D97;
      checkMissing(glm_D98);
      return glm_D98;
    };
    p11 = prom<V +>{
      __2 = ldf `~` in base;
      r27 = dyn __2(<lang `*`(outcome, treatment)>);
      return r27;
    };
    r29 = dyn add2[, scope, test](p10, p11, "Rao");
    check L25() else D19();
  D19():
    deopt 62 [r29];
  L25():
    options1 = ldf options;
    check L26() else D20();
  D20():
    deopt 64 [];
  L26():
    p12 = prom<V +>{
      od = ld od;
      od1 = force? od;
      checkMissing(od1);
      return od1;
    };
    r31 = dyn options1(p12);
    check L27() else D21();
  D21():
    deopt 66 [r31];
  L27():
    popenv;
    return r31;
  }
}
fun inner2300758201(object, scope, `...`) {
  (reg object:*, reg scope:*, reg ddd:dots) -+> V { var object:*, var scope:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
    st scope = scope;
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
    r2 = dyn UseMethod("add1");
    goto L0(r2);
  L2():
    r = dyn base("add1");
    goto L0(r);
  }
}