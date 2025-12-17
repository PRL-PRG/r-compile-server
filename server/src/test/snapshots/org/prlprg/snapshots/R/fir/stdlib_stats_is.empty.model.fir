fun main() {
  () -+> V { reg r:cls, reg rnorm:cls, reg r1:V, reg is_empty_model:cls, reg __:cls, reg r2:V, reg p:p(V +), reg r4:V, reg is_empty_model1:cls, reg __1:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg is_empty_model2:cls, reg lm:cls, reg __2:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V |
    mkenv;
    r = clos inner2501545716;
    st `is.empty.model` = r;
    rnorm = ldf rnorm;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn rnorm(20.0);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    st y = r1;
    is_empty_model = ldf `is.empty.model`;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p = prom<V +>{
      __ = ldf `~` in base;
      r2 = dyn __(<sym y>, 0.0);
      return r2;
    };
    r4 = dyn is_empty_model(p);
    check L3() else D3();
  D3():
    deopt 11 [r4];
  L3():
    is_empty_model1 = ldf `is.empty.model`;
    check L4() else D4();
  D4():
    deopt 13 [];
  L4():
    p1 = prom<V +>{
      __1 = ldf `~` in base;
      r5 = dyn __1(<sym y>, <lang `-`(1.0)>);
      return r5;
    };
    r7 = dyn is_empty_model1(p1);
    check L5() else D5();
  D5():
    deopt 15 [r7];
  L5():
    is_empty_model2 = ldf `is.empty.model`;
    check L6() else D6();
  D6():
    deopt 17 [];
  L6():
    p3 = prom<V +>{
      lm = ldf lm;
      p2 = prom<V +>{
        __2 = ldf `~` in base;
        r8 = dyn __2(<sym y>, 0.0);
        return r8;
      };
      r10 = dyn lm(p2);
      return r10;
    };
    r12 = dyn is_empty_model2(p3);
    check L7() else D7();
  D7():
    deopt 19 [r12];
  L7():
    popenv;
    return r12;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg terms:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg tt:*, reg tt1:V, reg attr:cls, reg r6:V, reg length:cls, reg r7:V, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg r13:V, reg tt2:*, reg tt3:V, reg attr1:cls, reg r14:V, reg r15:V, reg r16:V |
    mkenv;
    st x = x;
    terms = ldf terms;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn terms(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    st tt = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r3):
    r8 = `==`(r3, 0);
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L5():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r2 = dyn base(<lang attr(tt, "factors")>);
    goto L0(r2);
  L1(r5):
    length = ldf length in base;
    r7 = dyn length(r5);
    check L11() else D4();
  L2(r12, r13):
    r15 = `==`(r13, 0);
    r16 = `&&`(r12, r15);
    popenv;
    return r16;
  L7():
    tt = ld tt;
    check L9() else D2();
  L8():
    r4 = dyn base1(<sym tt>, "factors");
    goto L1(r4);
  L12():
    tt2 = ld tt;
    check L14() else D5();
  L13():
    r11 = dyn base2(<sym tt>, "intercept");
    goto L2(r8, r11);
  D2():
    deopt 9 [tt];
  D4():
    deopt 15 [r7];
  D5():
    deopt 19 [r8, tt2];
  L9():
    tt1 = force? tt;
    checkMissing(tt1);
    attr = ldf attr in base;
    r6 = dyn attr(tt1, "factors");
    check L10() else D3();
  L11():
    goto L0(r7);
  L14():
    tt3 = force? tt2;
    checkMissing(tt3);
    attr1 = ldf attr in base;
    r14 = dyn attr1(tt3, "intercept");
    check L15() else D6();
  D3():
    deopt 13 [r6];
  D6():
    deopt 23 [r8, r14];
  L10():
    goto L1(r6);
  L15():
    goto L2(r8, r14);
  }
}