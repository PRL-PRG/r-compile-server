fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c2:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg c3:cls, reg r12:V, reg data_frame:cls, reg gl:cls, reg r13:V, reg p:p(V +), reg factor:cls, reg N:*, reg N1:V, reg p1:p(V +), reg r16:V, reg p2:p(V +), reg factor1:cls, reg P:*, reg P1:V, reg p3:p(V +), reg r19:V, reg p4:p(V +), reg factor2:cls, reg K:*, reg K1:V, reg p5:p(V +), reg r22:V, reg p6:p(V +), reg yield:*, reg yield1:V, reg p7:p(V +), reg r25:V, reg aov:cls, reg __:cls, reg r26:V, reg p8:p(V +), reg npk:*, reg npk1:V, reg p9:p(V +), reg r29:V, reg proj:cls, reg npk_aov:*, reg npk_aov1:V, reg p10:p(V +), reg r31:V, reg options:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg c4:cls, reg r34:V, reg p11:p(V +), reg r36:V, reg aov1:cls, reg __1:cls, reg r37:V, reg p12:p(V +), reg npk2:*, reg npk3:V, reg p13:p(V +), reg r40:V, reg proj1:cls, reg npk_aovE:*, reg npk_aovE1:V, reg p14:p(V +), reg r42:V |
    mkenv;
    r = clos inner64320599;
    st proj = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r2):
    st N = r2;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L4():
    c = ldf c in base;
    r3 = dyn c(0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0);
    check L6() else D0();
  L5():
    r1 = dyn base(0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0);
    goto L0(r1);
  D0():
    deopt 30 [r3];
  L1(r5):
    st P = r5;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L10() else L11();
  L6():
    goto L0(r3);
  L7():
    c1 = ldf c in base;
    r6 = dyn c1(1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0);
    check L9() else D1();
  L8():
    r4 = dyn base1(1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0);
    goto L1(r4);
  D1():
    deopt 59 [r6];
  L2(r8):
    st K = r8;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L13() else L14();
  L9():
    goto L1(r6);
  L10():
    c2 = ldf c in base;
    r9 = dyn c2(1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0);
    check L12() else D2();
  L11():
    r7 = dyn base2(1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0);
    goto L2(r7);
  D2():
    deopt 88 [r9];
  L3(r11):
    st yield = r11;
    data_frame = ldf `data.frame`;
    check L16() else D4();
  L12():
    goto L2(r9);
  L13():
    c3 = ldf c in base;
    r12 = dyn c3(49.5, 62.8, 46.8, 57.0, 59.8, 58.5, 55.5, 56.0, 62.8, 55.8, 69.5, 55.0, 62.0, 48.8, 45.5, 44.2, 52.0, 51.5, 49.8, 48.8, 57.2, 59.0, 53.2, 56.0);
    check L15() else D3();
  L14():
    r10 = dyn base3(49.5, 62.8, 46.8, 57.0, 59.8, 58.5, 55.5, 56.0, 62.8, 55.8, 69.5, 55.0, 62.0, 48.8, 45.5, 44.2, 52.0, 51.5, 49.8, 48.8, 57.2, 59.0, 53.2, 56.0);
    goto L3(r10);
  D3():
    deopt 117 [r12];
  D4():
    deopt 120 [];
  L15():
    goto L3(r12);
  L16():
    p = prom<V +>{
      gl = ldf gl;
      r13 = dyn gl(6.0, 4.0);
      return r13;
    };
    p2 = prom<V +>{
      factor = ldf factor;
      p1 = prom<V +>{
        N = ld N;
        N1 = force? N;
        checkMissing(N1);
        return N1;
      };
      r16 = dyn factor(p1);
      return r16;
    };
    p4 = prom<V +>{
      factor1 = ldf factor;
      p3 = prom<V +>{
        P = ld P;
        P1 = force? P;
        checkMissing(P1);
        return P1;
      };
      r19 = dyn factor1(p3);
      return r19;
    };
    p6 = prom<V +>{
      factor2 = ldf factor;
      p5 = prom<V +>{
        K = ld K;
        K1 = force? K;
        checkMissing(K1);
        return K1;
      };
      r22 = dyn factor2(p5);
      return r22;
    };
    p7 = prom<V +>{
      yield = ld yield;
      yield1 = force? yield;
      checkMissing(yield1);
      return yield1;
    };
    r25 = dyn data_frame[block, N, P, K, yield](p, p2, p4, p6, p7);
    check L17() else D5();
  D5():
    deopt 131 [r25];
  L17():
    st npk = r25;
    aov = ldf aov;
    check L18() else D6();
  D6():
    deopt 134 [];
  L18():
    p8 = prom<V +>{
      __ = ldf `~` in base;
      r26 = dyn __(<sym yield>, <lang `+`(block, `*`(`*`(N, P), K))>);
      return r26;
    };
    p9 = prom<V +>{
      npk = ld npk;
      npk1 = force? npk;
      checkMissing(npk1);
      return npk1;
    };
    r29 = dyn aov(p8, p9);
    check L19() else D7();
  D7():
    deopt 137 [r29];
  L19():
    st `npk.aov` = r29;
    proj = ldf proj;
    check L20() else D8();
  D8():
    deopt 140 [];
  L20():
    p10 = prom<V +>{
      npk_aov = ld `npk.aov`;
      npk_aov1 = force? npk_aov;
      checkMissing(npk_aov1);
      return npk_aov1;
    };
    r31 = dyn proj(p10);
    check L21() else D9();
  D9():
    deopt 142 [r31];
  L21():
    options = ldf options;
    check L22() else D10();
  D10():
    deopt 144 [];
  L22():
    p11 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      c4 = ldf c in base;
      r34 = dyn c4("contr.helmert", "contr.treatment");
      goto L0(r34);
    L2():
      r32 = dyn base4("contr.helmert", "contr.treatment");
      goto L0(r32);
    };
    r36 = dyn options[contrasts](p11);
    check L23() else D11();
  D11():
    deopt 147 [r36];
  L23():
    aov1 = ldf aov;
    check L24() else D12();
  D12():
    deopt 149 [];
  L24():
    p12 = prom<V +>{
      __1 = ldf `~` in base;
      r37 = dyn __1(<sym yield>, <lang `+`(`*`(`*`(N, P), K), Error(block))>);
      return r37;
    };
    p13 = prom<V +>{
      npk2 = ld npk;
      npk3 = force? npk2;
      checkMissing(npk3);
      return npk3;
    };
    r40 = dyn aov1(p12, p13);
    check L25() else D13();
  D13():
    deopt 152 [r40];
  L25():
    st `npk.aovE` = r40;
    proj1 = ldf proj;
    check L26() else D14();
  D14():
    deopt 155 [];
  L26():
    p14 = prom<V +>{
      npk_aovE = ld `npk.aovE`;
      npk_aovE1 = force? npk_aovE;
      checkMissing(npk_aovE1);
      return npk_aovE1;
    };
    r42 = dyn proj1(p14);
    check L27() else D15();
  D15():
    deopt 157 [r42];
  L27():
    popenv;
    return r42;
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
    r2 = dyn UseMethod("proj");
    goto L0(r2);
  L2():
    r = dyn base("proj");
    goto L0(r);
  }
}