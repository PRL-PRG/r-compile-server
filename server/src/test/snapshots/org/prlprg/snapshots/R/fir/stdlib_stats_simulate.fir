fun main() {
  () -+> V { reg r:cls, reg lm:cls, reg __:cls, reg r1:V, reg p:p(V +), reg r3:V, reg simulate:cls, reg mod1:*, reg mod2:V, reg p1:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg S1:*, reg S2:V, reg attr:cls, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg S3:*, reg S4:V, reg simulate1:cls, reg mod3:*, reg mod4:V, reg p2:p(V +), reg r12:V, reg identical:cls, reg r13:V, reg simulate2:cls, reg mod5:*, reg mod6:V, reg p3:p(V +), reg r15:V, reg rowMeans:cls, reg S5:*, reg S6:V, reg p4:p(V +), reg r17:V, reg fitted:cls, reg mod7:*, reg mod8:V, reg p5:p(V +), reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg S7:*, reg S8:V, reg attr1:cls, reg r22:V, reg stopifnot:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg S9:*, reg S10:V, reg simulate3:cls, reg mod9:*, reg mod10:V, reg p6:p(V +), reg sseed:*, reg sseed1:V, reg p7:p(V +), reg r27:V, reg identical1:cls, reg r28:V, reg p8:p(V +), reg r30:V, reg RNGversion:cls, reg r31:V, reg do_call:cls, reg RNGkind:*, reg RNGkind1:V, reg p9:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg sseed2:*, reg sseed3:V, reg attr2:cls, reg r35:V, reg p10:p(V +), reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg S11:*, reg S12:V, reg simulate4:cls, reg mod11:*, reg mod12:V, reg p11:p(V +), reg sseed4:*, reg sseed5:V, reg p12:p(V +), reg r42:V, reg identical2:cls, reg r43:V, reg matrix:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r44:V, reg r45:V, reg c:cls, reg r46:V, reg p13:p(V +), reg r48:V, reg glm:cls, reg __1:cls, reg r49:V, reg p14:p(V +), reg binomial:*, reg binomial1:V, reg p15:p(V +), reg r52:V, reg simulate5:cls, reg modb1:*, reg modb2:V, reg p16:p(V +), reg r54:V, reg sort:cls, reg runif:cls, reg r55:V, reg p17:p(V +), reg r57:V, reg rbinom:cls, reg plogis:cls, reg x2:*, reg x3:V, reg r58:V, reg r59:V, reg p18:p(V +), reg r61:V, reg p19:p(V +), reg r63:V, reg factor:cls, reg yb2:*, reg yb3:V, reg r64:V, reg p20:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r66:V, reg r67:V, reg c1:cls, reg r68:V, reg p21:p(V +), reg r70:V, reg glm1:cls, reg __2:cls, reg r71:V, reg p22:p(V +), reg binomial2:*, reg binomial3:V, reg p23:p(V +), reg r74:V, reg simulate6:cls, reg modb3:*, reg modb4:V, reg p24:p(V +), reg r76:V |
    mkenv;
    r = clos inner3830878509;
    st simulate = r;
    st x = <int 1, 2, 3, 4, 5>;
    lm = ldf lm;
    check L4() else D0();
  D0():
    deopt 7 [];
  L4():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<lang c(`:`(1.0, 3.0), 7.0, 6.0)>, <sym x>);
      return r1;
    };
    r3 = dyn lm(p);
    check L5() else D1();
  D1():
    deopt 9 [r3];
  L5():
    st mod1 = r3;
    simulate = ldf simulate;
    check L6() else D2();
  D2():
    deopt 12 [];
  L6():
    p1 = prom<V +>{
      mod1 = ld mod1;
      mod2 = force? mod1;
      checkMissing(mod2);
      return mod2;
    };
    r5 = dyn simulate[, nsim](p1, 4.0);
    check L7() else D3();
  D3():
    deopt 16 [r5];
  L7():
    st S1 = r5;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r7):
    st `.Random.seed` = r7;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L8():
    S1 = ld S1;
    check L10() else D4();
  L9():
    r6 = dyn base(<sym S1>, "seed");
    goto L0(r6);
  D4():
    deopt 20 [S1];
  L1():
    simulate2 = ldf simulate;
    check L18() else D10();
  L10():
    S2 = force? S1;
    checkMissing(S2);
    attr = ldf attr in base;
    r8 = dyn attr(S2, "seed");
    check L11() else D5();
  L12():
    S3 = ld S1;
    check L14() else D6();
  L13():
    r9 = dyn base1(<sym S1>, <lang simulate(mod1, nsim=4.0)>);
    goto L1();
  D5():
    deopt 24 [r8];
  D6():
    deopt 28 [S3];
  D10():
    deopt 46 [];
  L11():
    goto L0(r8);
  L14():
    S4 = force? S3;
    checkMissing(S4);
    simulate1 = ldf simulate;
    check L15() else D7();
  L18():
    p3 = prom<V +>{
      mod5 = ld mod1;
      mod6 = force? mod5;
      checkMissing(mod6);
      return mod6;
    };
    r15 = dyn simulate2[, nsim, seed](p3, 200.0, 101.0);
    check L19() else D11();
  D7():
    deopt 31 [];
  D11():
    deopt 52 [r15];
  L15():
    p2 = prom<V +>{
      mod3 = ld mod1;
      mod4 = force? mod3;
      checkMissing(mod4);
      return mod4;
    };
    r12 = dyn simulate1[, nsim](p2, 4.0);
    check L16() else D8();
  L19():
    st S2 = r15;
    rowMeans = ldf rowMeans;
    check L20() else D12();
  D8():
    deopt 35 [r12];
  D12():
    deopt 55 [];
  L16():
    identical = ldf identical in base;
    r13 = dyn identical(S4, r12, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L17() else D9();
  L20():
    p4 = prom<V +>{
      S5 = ld S2;
      S6 = force? S5;
      checkMissing(S6);
      return S6;
    };
    r17 = dyn rowMeans(p4);
    check L21() else D13();
  D9():
    deopt 44 [r13];
  D13():
    deopt 57 [r17];
  L17():
    goto L1();
  L21():
    fitted = ldf fitted;
    check L22() else D14();
  D14():
    deopt 59 [];
  L22():
    p5 = prom<V +>{
      mod7 = ld mod1;
      mod8 = force? mod7;
      checkMissing(mod8);
      return mod8;
    };
    r19 = dyn fitted(p5);
    check L23() else D15();
  D15():
    deopt 61 [r19];
  L23():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L2(r21):
    st sseed = r21;
    stopifnot = ldf stopifnot;
    check L28() else D18();
  L24():
    S7 = ld S2;
    check L26() else D16();
  L25():
    r20 = dyn base2(<sym S2>, "seed");
    goto L2(r20);
  D16():
    deopt 64 [S7];
  D18():
    deopt 71 [];
  L26():
    S8 = force? S7;
    checkMissing(S8);
    attr1 = ldf attr in base;
    r22 = dyn attr1(S8, "seed");
    check L27() else D17();
  L28():
    p8 = prom<V +>{
      sym3 = ldf identical;
      base3 = ldf identical in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      S9 = ld S2;
      S10 = force? S9;
      checkMissing(S10);
      simulate3 = ldf simulate;
      p6 = prom<V +>{
        mod9 = ld mod1;
        mod10 = force? mod9;
        checkMissing(mod10);
        return mod10;
      };
      p7 = prom<V +>{
        sseed = ld sseed;
        sseed1 = force? sseed;
        checkMissing(sseed1);
        return sseed1;
      };
      r27 = dyn simulate3[, nsim, seed](p6, 200.0, p7);
      identical1 = ldf identical in base;
      r28 = dyn identical1(S10, r27, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r28);
    L2():
      r23 = dyn base3(<sym S2>, <lang simulate(mod1, nsim=200.0, seed=sseed)>);
      goto L0(r23);
    };
    r30 = dyn stopifnot(p8);
    check L29() else D19();
  D17():
    deopt 68 [r22];
  D19():
    deopt 73 [r30];
  L27():
    goto L2(r22);
  L29():
    RNGversion = ldf RNGversion;
    check L30() else D20();
  D20():
    deopt 75 [];
  L30():
    r31 = dyn RNGversion("2.7.0");
    check L31() else D21();
  D21():
    deopt 77 [r31];
  L31():
    do_call = ldf `do.call`;
    check L32() else D22();
  D22():
    deopt 79 [];
  L32():
    p9 = prom<V +>{
      RNGkind = ld RNGkind;
      RNGkind1 = force? RNGkind;
      checkMissing(RNGkind1);
      return RNGkind1;
    };
    p10 = prom<V +>{
      sym4 = ldf attr;
      base4 = ldf attr in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      sseed2 = ld sseed;
      sseed3 = force? sseed2;
      checkMissing(sseed3);
      attr2 = ldf attr in base;
      r35 = dyn attr2(sseed3, "kind");
      goto L0(r35);
    L2():
      r33 = dyn base4(<sym sseed>, "kind");
      goto L0(r33);
    };
    r37 = dyn do_call(p9, p10);
    check L33() else D23();
  D23():
    deopt 82 [r37];
  L33():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L34() else L35();
  L3():
    matrix = ldf matrix;
    check L40() else D28();
  L34():
    S11 = ld S2;
    check L36() else D24();
  L35():
    r38 = dyn base5(<sym S2>, <lang simulate(mod1, nsim=200.0, seed=sseed)>);
    goto L3();
  D24():
    deopt 85 [S11];
  D28():
    deopt 105 [];
  L36():
    S12 = force? S11;
    checkMissing(S12);
    simulate4 = ldf simulate;
    check L37() else D25();
  L40():
    p13 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      c = ldf c in base;
      r46 = dyn c(4.0, 4.0, 5.0, 7.0, 8.0, 6.0, 6.0, 5.0, 3.0, 2.0);
      goto L0(r46);
    L2():
      r44 = dyn base6(4.0, 4.0, 5.0, 7.0, 8.0, 6.0, 6.0, 5.0, 3.0, 2.0);
      goto L0(r44);
    };
    r48 = dyn matrix[, ncol](p13, 2.0);
    check L41() else D29();
  D25():
    deopt 88 [];
  D29():
    deopt 109 [r48];
  L37():
    p11 = prom<V +>{
      mod11 = ld mod1;
      mod12 = force? mod11;
      checkMissing(mod12);
      return mod12;
    };
    p12 = prom<V +>{
      sseed4 = ld sseed;
      sseed5 = force? sseed4;
      checkMissing(sseed5);
      return sseed5;
    };
    r42 = dyn simulate4[, nsim, seed](p11, 200.0, p12);
    check L38() else D26();
  L41():
    st yb1 = r48;
    glm = ldf glm;
    check L42() else D30();
  D26():
    deopt 94 [r42];
  D30():
    deopt 112 [];
  L38():
    identical2 = ldf identical in base;
    r43 = dyn identical2(S12, r42, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L39() else D27();
  L42():
    p14 = prom<V +>{
      __1 = ldf `~` in base;
      r49 = dyn __1(<sym yb1>, <sym x>);
      return r49;
    };
    p15 = prom<V +>{
      binomial = ld binomial;
      binomial1 = force? binomial;
      checkMissing(binomial1);
      return binomial1;
    };
    r52 = dyn glm[, family](p14, p15);
    check L43() else D31();
  D27():
    deopt 103 [r43];
  D31():
    deopt 116 [r52];
  L39():
    goto L3();
  L43():
    st modb1 = r52;
    simulate5 = ldf simulate;
    check L44() else D32();
  D32():
    deopt 119 [];
  L44():
    p16 = prom<V +>{
      modb1 = ld modb1;
      modb2 = force? modb1;
      checkMissing(modb2);
      return modb2;
    };
    r54 = dyn simulate5[, nsim](p16, 4.0);
    check L45() else D33();
  D33():
    deopt 123 [r54];
  L45():
    st S3 = r54;
    sort = ldf sort;
    check L46() else D34();
  D34():
    deopt 126 [];
  L46():
    p17 = prom<V +>{
      runif = ldf runif;
      r55 = dyn runif(100.0);
      return r55;
    };
    r57 = dyn sort(p17);
    check L47() else D35();
  D35():
    deopt 128 [r57];
  L47():
    st x2 = r57;
    rbinom = ldf rbinom;
    check L48() else D36();
  D36():
    deopt 131 [];
  L48():
    p19 = prom<V +>{
      plogis = ldf plogis;
      p18 = prom<V +>{
        x2 = ld x2;
        x3 = force? x2;
        checkMissing(x3);
        r58 = `-`(x3, 1.0);
        r59 = `*`(2.0, r58);
        return r59;
      };
      r61 = dyn plogis(p18);
      return r61;
    };
    r63 = dyn rbinom[, prob, size](100.0, p19, 1.0);
    check L49() else D37();
  D37():
    deopt 137 [r63];
  L49():
    st yb2 = r63;
    factor = ldf factor;
    check L50() else D38();
  D38():
    deopt 140 [];
  L50():
    p20 = prom<V +>{
      yb2 = ld yb2;
      yb3 = force? yb2;
      checkMissing(yb3);
      r64 = `+`(1.0, yb3);
      return r64;
    };
    p21 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r67):
      return r67;
    L1():
      c1 = ldf c in base;
      r68 = dyn c1("failure", "success");
      goto L0(r68);
    L2():
      r66 = dyn base7("failure", "success");
      goto L0(r66);
    };
    r70 = dyn factor[, labels](p20, p21);
    check L51() else D39();
  D39():
    deopt 144 [r70];
  L51():
    st yb2 = r70;
    glm1 = ldf glm;
    check L52() else D40();
  D40():
    deopt 147 [];
  L52():
    p22 = prom<V +>{
      __2 = ldf `~` in base;
      r71 = dyn __2(<sym yb2>, <sym x2>);
      return r71;
    };
    p23 = prom<V +>{
      binomial2 = ld binomial;
      binomial3 = force? binomial2;
      checkMissing(binomial3);
      return binomial3;
    };
    r74 = dyn glm1[, family](p22, p23);
    check L53() else D41();
  D41():
    deopt 151 [r74];
  L53():
    st modb2 = r74;
    simulate6 = ldf simulate;
    check L54() else D42();
  D42():
    deopt 154 [];
  L54():
    p24 = prom<V +>{
      modb3 = ld modb2;
      modb4 = force? modb3;
      checkMissing(modb4);
      return modb4;
    };
    r76 = dyn simulate6[, nsim](p24, 4.0);
    check L55() else D43();
  D43():
    deopt 158 [r76];
  L55():
    st S4 = r76;
    invisible.0();
    popenv;
    return r76;
  }
}
fun inner3830878509(object, nsim, seed, `...`) {
  (reg object:*, reg nsim:*, reg seed:*, reg ddd:dots) -+> V { var object:*, var nsim:*, reg nsim_isMissing:L, reg nsim_orDefault:*, var seed:*, reg seed_isMissing:L, reg seed_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
    nsim_isMissing = missing.0(nsim);
    if nsim_isMissing then L0(1.0) else L0(nsim);
  L0(nsim_orDefault):
    st nsim = nsim_orDefault;
    seed_isMissing = missing.0(seed);
    if seed_isMissing then L1(NULL) else L1(seed);
  L1(seed_orDefault):
    st seed = seed_orDefault;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("simulate");
    goto L2(r2);
  L4():
    r = dyn base("simulate");
    goto L2(r);
  }
}