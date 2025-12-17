fun main() {
  () -+> V { reg r:cls, reg lm:cls, reg __:cls, reg r1:V, reg p:p(V +), reg swiss:*, reg swiss1:V, reg p1:p(V +), reg r4:V, reg AIC:cls, reg lm1:*, reg lm2:V, reg p2:p(V +), reg r6:V, reg stopifnot:cls, reg all_equal:cls, reg AIC1:cls, reg lm3:*, reg lm4:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg AIC2:cls, reg logLik:cls, reg lm5:*, reg lm6:V, reg p5:p(V +), reg r11:V, reg p6:p(V +), reg r13:V, reg p7:p(V +), reg r15:V, reg p8:p(V +), reg r17:V, reg BIC:cls, reg lm7:*, reg lm8:V, reg p9:p(V +), reg r19:V, reg update:cls, reg lm9:*, reg lm10:V, reg p10:p(V +), reg __1:cls, reg r21:V, reg p11:p(V +), reg r23:V, reg AIC3:cls, reg lm11:*, reg lm12:V, reg p12:p(V +), reg lm13:*, reg lm14:V, reg p13:p(V +), reg r26:V, reg BIC1:cls, reg lm15:*, reg lm16:V, reg p14:p(V +), reg lm17:*, reg lm18:V, reg p15:p(V +), reg r29:V |
    mkenv;
    r = clos inner262388851;
    st AIC = r;
    lm = ldf lm;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<sym Fertility>, <sym .>);
      return r1;
    };
    p1 = prom<V +>{
      swiss = ld swiss;
      swiss1 = force? swiss;
      checkMissing(swiss1);
      return swiss1;
    };
    r4 = dyn lm[, data](p, p1);
    check L1() else D1();
  D1():
    deopt 8 [r4];
  L1():
    st lm1 = r4;
    AIC = ldf AIC;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    p2 = prom<V +>{
      lm1 = ld lm1;
      lm2 = force? lm1;
      checkMissing(lm2);
      return lm2;
    };
    r6 = dyn AIC(p2);
    check L3() else D3();
  D3():
    deopt 13 [r6];
  L3():
    stopifnot = ldf stopifnot;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p8 = prom<V +>{
      all_equal = ldf `all.equal`;
      p4 = prom<V +>{
        AIC1 = ldf AIC;
        p3 = prom<V +>{
          lm3 = ld lm1;
          lm4 = force? lm3;
          checkMissing(lm4);
          return lm4;
        };
        r8 = dyn AIC1(p3);
        return r8;
      };
      p7 = prom<V +>{
        AIC2 = ldf AIC;
        p6 = prom<V +>{
          logLik = ldf logLik;
          p5 = prom<V +>{
            lm5 = ld lm1;
            lm6 = force? lm5;
            checkMissing(lm6);
            return lm6;
          };
          r11 = dyn logLik(p5);
          return r11;
        };
        r13 = dyn AIC2(p6);
        return r13;
      };
      r15 = dyn all_equal(p4, p7);
      return r15;
    };
    r17 = dyn stopifnot(p8);
    check L5() else D5();
  D5():
    deopt 17 [r17];
  L5():
    BIC = ldf BIC;
    check L6() else D6();
  D6():
    deopt 19 [];
  L6():
    p9 = prom<V +>{
      lm7 = ld lm1;
      lm8 = force? lm7;
      checkMissing(lm8);
      return lm8;
    };
    r19 = dyn BIC(p9);
    check L7() else D7();
  D7():
    deopt 21 [r19];
  L7():
    update = ldf update;
    check L8() else D8();
  D8():
    deopt 23 [];
  L8():
    p10 = prom<V +>{
      lm9 = ld lm1;
      lm10 = force? lm9;
      checkMissing(lm10);
      return lm10;
    };
    p11 = prom<V +>{
      __1 = ldf `~` in base;
      r21 = dyn __1(<sym .>, <lang `-`(., Examination)>);
      return r21;
    };
    r23 = dyn update(p10, p11);
    check L9() else D9();
  D9():
    deopt 26 [r23];
  L9():
    st lm2 = r23;
    AIC3 = ldf AIC;
    check L10() else D10();
  D10():
    deopt 29 [];
  L10():
    p12 = prom<V +>{
      lm11 = ld lm1;
      lm12 = force? lm11;
      checkMissing(lm12);
      return lm12;
    };
    p13 = prom<V +>{
      lm13 = ld lm2;
      lm14 = force? lm13;
      checkMissing(lm14);
      return lm14;
    };
    r26 = dyn AIC3(p12, p13);
    check L11() else D11();
  D11():
    deopt 32 [r26];
  L11():
    BIC1 = ldf BIC;
    check L12() else D12();
  D12():
    deopt 34 [];
  L12():
    p14 = prom<V +>{
      lm15 = ld lm1;
      lm16 = force? lm15;
      checkMissing(lm16);
      return lm16;
    };
    p15 = prom<V +>{
      lm17 = ld lm2;
      lm18 = force? lm17;
      checkMissing(lm18);
      return lm18;
    };
    r29 = dyn BIC1(p14, p15);
    check L13() else D13();
  D13():
    deopt 37 [r29];
  L13():
    popenv;
    return r29;
  }
}
fun inner262388851(object, `...`, k) {
  (reg object:*, reg ddd:dots, reg k:*) -+> V { var object:*, var `...`:dots?, var k:*, reg k_isMissing:L, reg k_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    k_isMissing = missing.0(k);
    if k_isMissing then L0(2.0) else L0(k);
  L0(k_orDefault):
    st k = k_orDefault;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("AIC");
    goto L1(r2);
  L3():
    r = dyn base("AIC");
    goto L1(r);
  }
}