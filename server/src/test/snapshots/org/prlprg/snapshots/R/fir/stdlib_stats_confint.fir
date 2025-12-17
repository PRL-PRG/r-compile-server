fun main() {
  () -+> V { reg r:cls, reg lm:cls, reg __:cls, reg r1:V, reg p:p(V +), reg mtcars:*, reg mtcars1:V, reg p1:p(V +), reg r4:V, reg confint:cls, reg fit:*, reg fit1:V, reg p2:p(V +), reg r6:V, reg confint1:cls, reg fit2:*, reg fit3:V, reg p3:p(V +), reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg c:cls, reg r11:V, reg gl:cls, reg r12:V, reg gl1:cls, reg r13:V, reg glm:cls, reg __1:cls, reg r14:V, reg p4:p(V +), reg poisson:cls, reg r16:V, reg p5:p(V +), reg r18:V, reg confint2:cls, reg glm_D93:*, reg glm_D94:V, reg p6:p(V +), reg r20:V, reg confint_default:cls, reg glm_D95:*, reg glm_D96:V, reg p7:p(V +), reg r22:V |
    mkenv;
    r = clos inner1979052304;
    st confint = r;
    lm = ldf lm;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<lang `/`(100.0, mpg)>, <lang `+`(`+`(`+`(disp, hp), wt), am)>);
      return r1;
    };
    p1 = prom<V +>{
      mtcars = ld mtcars;
      mtcars1 = force? mtcars;
      checkMissing(mtcars1);
      return mtcars1;
    };
    r4 = dyn lm[, data](p, p1);
    check L2() else D1();
  D1():
    deopt 8 [r4];
  L2():
    st fit = r4;
    confint = ldf confint;
    check L3() else D2();
  D2():
    deopt 11 [];
  L3():
    p2 = prom<V +>{
      fit = ld fit;
      fit1 = force? fit;
      checkMissing(fit1);
      return fit1;
    };
    r6 = dyn confint(p2);
    check L4() else D3();
  D3():
    deopt 13 [r6];
  L4():
    confint1 = ldf confint;
    check L5() else D4();
  D4():
    deopt 15 [];
  L5():
    p3 = prom<V +>{
      fit2 = ld fit;
      fit3 = force? fit2;
      checkMissing(fit3);
      return fit3;
    };
    r8 = dyn confint1(p3, "wt");
    check L6() else D5();
  D5():
    deopt 18 [r8];
  L6():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r10):
    st counts = r10;
    gl = ldf gl;
    check L10() else D7();
  L7():
    c = ldf c in base;
    r11 = dyn c(18.0, 17.0, 15.0, 20.0, 10.0, 20.0, 25.0, 13.0, 12.0);
    check L9() else D6();
  L8():
    r9 = dyn base(18.0, 17.0, 15.0, 20.0, 10.0, 20.0, 25.0, 13.0, 12.0);
    goto L0(r9);
  D6():
    deopt 31 [r11];
  D7():
    deopt 34 [];
  L9():
    goto L0(r11);
  L10():
    r12 = dyn gl(3.0, 1.0, 9.0);
    check L11() else D8();
  D8():
    deopt 38 [r12];
  L11():
    st outcome = r12;
    gl1 = ldf gl;
    check L12() else D9();
  D9():
    deopt 41 [];
  L12():
    r13 = dyn gl1(3.0, 3.0);
    check L13() else D10();
  D10():
    deopt 44 [r13];
  L13():
    st treatment = r13;
    glm = ldf glm;
    check L14() else D11();
  D11():
    deopt 47 [];
  L14():
    p4 = prom<V +>{
      __1 = ldf `~` in base;
      r14 = dyn __1(<sym counts>, <lang `+`(outcome, treatment)>);
      return r14;
    };
    p5 = prom<V +>{
      poisson = ldf poisson;
      r16 = dyn poisson();
      return r16;
    };
    r18 = dyn glm[, family](p4, p5);
    check L15() else D12();
  D12():
    deopt 51 [r18];
  L15():
    st `glm.D93` = r18;
    confint2 = ldf confint;
    check L16() else D13();
  D13():
    deopt 54 [];
  L16():
    p6 = prom<V +>{
      glm_D93 = ld `glm.D93`;
      glm_D94 = force? glm_D93;
      checkMissing(glm_D94);
      return glm_D94;
    };
    r20 = dyn confint2(p6);
    check L17() else D14();
  D14():
    deopt 56 [r20];
  L17():
    confint_default = ldf `confint.default`;
    check L18() else D15();
  D15():
    deopt 58 [];
  L18():
    p7 = prom<V +>{
      glm_D95 = ld `glm.D93`;
      glm_D96 = force? glm_D95;
      checkMissing(glm_D96);
      return glm_D96;
    };
    r22 = dyn confint_default(p7);
    check L19() else D16();
  D16():
    deopt 60 [r22];
  L19():
    popenv;
    return r22;
  }
}
fun inner1979052304(object, parm, level, `...`) {
  (reg object:*, reg parm:*, reg level:*, reg ddd:dots) -+> V { var object:*, var parm:*, var level:*, reg level_isMissing:L, reg level_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
    st parm = parm;
    level_isMissing = missing.0(level);
    if level_isMissing then L0(0.95) else L0(level);
  L0(level_orDefault):
    st level = level_orDefault;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("confint");
    goto L1(r2);
  L3():
    r = dyn base("confint");
    goto L1(r);
  }
}