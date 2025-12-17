fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg prop_test:cls, reg smokers:*, reg smokers1:V, reg p:p(V +), reg patients:*, reg patients1:V, reg p1:p(V +), reg r9:V, reg prop_trend_test:cls, reg smokers2:*, reg smokers3:V, reg p2:p(V +), reg patients2:*, reg patients3:V, reg p3:p(V +), reg r12:V, reg prop_trend_test1:cls, reg smokers4:*, reg smokers5:V, reg p4:p(V +), reg patients4:*, reg patients5:V, reg p5:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg c2:cls, reg r17:V, reg p6:p(V +), reg r19:V |
    mkenv;
    r = clos inner1323482749;
    st `prop.trend.test` = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    st smokers = r2;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L2():
    c = ldf c in base;
    r3 = dyn c(83.0, 90.0, 129.0, 70.0);
    check L4() else D0();
  L3():
    r1 = dyn base(83.0, 90.0, 129.0, 70.0);
    goto L0(r1);
  D0():
    deopt 10 [r3];
  L1(r5):
    st patients = r5;
    prop_test = ldf `prop.test`;
    check L8() else D2();
  L4():
    goto L0(r3);
  L5():
    c1 = ldf c in base;
    r6 = dyn c1(86.0, 93.0, 136.0, 82.0);
    check L7() else D1();
  L6():
    r4 = dyn base1(86.0, 93.0, 136.0, 82.0);
    goto L1(r4);
  D1():
    deopt 19 [r6];
  D2():
    deopt 22 [];
  L7():
    goto L1(r6);
  L8():
    p = prom<V +>{
      smokers = ld smokers;
      smokers1 = force? smokers;
      checkMissing(smokers1);
      return smokers1;
    };
    p1 = prom<V +>{
      patients = ld patients;
      patients1 = force? patients;
      checkMissing(patients1);
      return patients1;
    };
    r9 = dyn prop_test(p, p1);
    check L9() else D3();
  D3():
    deopt 25 [r9];
  L9():
    prop_trend_test = ldf `prop.trend.test`;
    check L10() else D4();
  D4():
    deopt 27 [];
  L10():
    p2 = prom<V +>{
      smokers2 = ld smokers;
      smokers3 = force? smokers2;
      checkMissing(smokers3);
      return smokers3;
    };
    p3 = prom<V +>{
      patients2 = ld patients;
      patients3 = force? patients2;
      checkMissing(patients3);
      return patients3;
    };
    r12 = dyn prop_trend_test(p2, p3);
    check L11() else D5();
  D5():
    deopt 30 [r12];
  L11():
    prop_trend_test1 = ldf `prop.trend.test`;
    check L12() else D6();
  D6():
    deopt 32 [];
  L12():
    p4 = prom<V +>{
      smokers4 = ld smokers;
      smokers5 = force? smokers4;
      checkMissing(smokers5);
      return smokers5;
    };
    p5 = prom<V +>{
      patients4 = ld patients;
      patients5 = force? patients4;
      checkMissing(patients5);
      return patients5;
    };
    p6 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      c2 = ldf c in base;
      r17 = dyn c2(0.0, 0.0, 0.0, 1.0);
      goto L0(r17);
    L2():
      r15 = dyn base2(0.0, 0.0, 0.0, 1.0);
      goto L0(r15);
    };
    r19 = dyn prop_trend_test1(p4, p5, p6);
    check L13() else D7();
  D7():
    deopt 36 [r19];
  L13():
    popenv;
    return r19;
  }
}
fun inner1323482749(x, n, score) {
  (reg x:*, reg n:*, reg score:*) -+> V { var x:*, var n:*, var score:*, reg score_isMissing:L, reg score_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg r2:I, reg p:p(V +), reg paste:cls, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg substitute:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg deparse2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg substitute1:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg paste1:cls, reg score1:*, reg score2:V, reg p5:p(V +), reg r17:V, reg p6:p(V +), reg r19:V, reg as_vector:cls, reg x3:*, reg x4:V, reg p7:p(V +), reg r21:V, reg as_vector1:cls, reg n1:*, reg n2:V, reg p8:p(V +), reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg x5:*, reg x6:V, reg sum:cls, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg r31:V, reg n3:*, reg n4:V, reg sum1:cls, reg r32:V, reg r33:V, reg n5:*, reg n6:V, reg p9:*, reg p10:V, reg r34:V, reg p11:*, reg p12:V, reg r35:V, reg r36:V, reg anova:cls, reg lm:cls, reg __:cls, reg r37:V, reg p13:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg x7:*, reg x8:V, reg n7:*, reg n8:V, reg r41:V, reg as_vector2:cls, reg score3:*, reg score4:V, reg p14:p(V +), reg r43:V, reg list:cls, reg r44:V, reg p15:p(V +), reg w:*, reg w1:V, reg p16:p(V +), reg r47:V, reg p17:p(V +), reg r49:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg a:*, reg a1:V, reg c:L, reg a3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r52:V, reg c1:cls, reg r53:V, reg structure:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg r55:V, reg chisq:*, reg chisq1:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r56:V, reg r57:V, reg c2:cls, reg r58:V, reg pchisq:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg r60:V, reg chisq2:*, reg chisq3:V, reg as_numeric:cls, reg r61:V, reg p18:p(V +), reg r63:V, reg method:*, reg method1:V, reg dname:*, reg dname1:V, reg list1:cls, reg r64:V, reg p19:p(V +), reg r66:V |
    mkenv;
    st x = x;
    st n = n;
    score_isMissing = missing.0(score);
    if score_isMissing then L0() else L1(score);
  L0():
    p = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      r2 = seq_along(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    goto L1(p);
  L1(score_orDefault):
    st score = score_orDefault;
    st method = "Chi-squared Test for Trend in Proportions";
    paste = ldf paste;
    check L6() else D0();
  D0():
    deopt 4 [];
  L6():
    p2 = prom<V +>{
      deparse1 = ldf deparse1;
      p1 = prom<V +>{
        sym1 = ldf substitute;
        base1 = ldf substitute in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r5):
        return r5;
      L1():
        substitute = ldf substitute in base;
        r6 = dyn substitute(<sym x>);
        goto L0(r6);
      L2():
        r4 = dyn base1(<sym x>);
        goto L0(r4);
      };
      r8 = dyn deparse1(p1);
      return r8;
    };
    p4 = prom<V +>{
      deparse2 = ldf deparse1;
      p3 = prom<V +>{
        sym2 = ldf substitute;
        base2 = ldf substitute in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r11):
        return r11;
      L1():
        substitute1 = ldf substitute in base;
        r12 = dyn substitute1(<sym n>);
        goto L0(r12);
      L2():
        r10 = dyn base2(<sym n>);
        goto L0(r10);
      };
      r14 = dyn deparse2(p3);
      return r14;
    };
    p6 = prom<V +>{
      paste1 = ldf paste;
      p5 = prom<V +>{
        score1 = ld score;
        score2 = force? score1;
        checkMissing(score2);
        return score2;
      };
      r17 = dyn paste1[, collapse](p5, " ");
      return r17;
    };
    r19 = dyn paste(p2, "out of", p4, ",\n using scores:", p6);
    check L7() else D1();
  D1():
    deopt 10 [r19];
  L7():
    st dname = r19;
    as_vector = ldf `as.vector`;
    check L8() else D2();
  D2():
    deopt 13 [];
  L8():
    p7 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r21 = dyn as_vector(p7);
    check L9() else D3();
  D3():
    deopt 15 [r21];
  L9():
    st x = r21;
    as_vector1 = ldf `as.vector`;
    check L10() else D4();
  D4():
    deopt 18 [];
  L10():
    p8 = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    r23 = dyn as_vector1(p8);
    check L11() else D5();
  D5():
    deopt 20 [r23];
  L11():
    st n = r23;
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L12() else L13();
  L2(r25):
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L16() else L17();
  L12():
    x5 = ld x;
    check L14() else D6();
  L13():
    r24 = dyn base3(<sym x>);
    goto L2(r24);
  D6():
    deopt 24 [x5];
  L3(r30, r31):
    r33 = `/`(r30, r31);
    st p = r33;
    n5 = ld n;
    check L20() else D10();
  L14():
    x6 = force? x5;
    checkMissing(x6);
    sum = ldf sum in base;
    r26 = dyn sum(x6);
    check L15() else D7();
  L16():
    n3 = ld n;
    check L18() else D8();
  L17():
    r29 = dyn base4(<sym n>);
    goto L3(r25, r29);
  D7():
    deopt 27 [r26];
  D8():
    deopt 29 [r25, n3];
  D10():
    deopt 35 [n5];
  L15():
    goto L2(r26);
  L18():
    n4 = force? n3;
    checkMissing(n4);
    sum1 = ldf sum in base;
    r32 = dyn sum1(n4);
    check L19() else D9();
  L20():
    n6 = force? n5;
    checkMissing(n6);
    p9 = ld p;
    check L21() else D11();
  D9():
    deopt 32 [r25, r32];
  D11():
    deopt 36 [n6, p9];
  L19():
    goto L3(r25, r32);
  L21():
    p10 = force? p9;
    checkMissing(p10);
    r34 = `/`(n6, p10);
    p11 = ld p;
    check L22() else D12();
  D12():
    deopt 39 [r34, 1.0, p11];
  L22():
    p12 = force? p11;
    checkMissing(p12);
    r35 = `-`(1.0, p12);
    r36 = `/`(r34, r35);
    st w = r36;
    anova = ldf anova;
    check L23() else D13();
  D13():
    deopt 45 [];
  L23():
    p17 = prom<V +>{
      lm = ldf lm;
      p13 = prom<V +>{
        __ = ldf `~` in base;
        r37 = dyn __(<sym freq>, <sym score>);
        return r37;
      };
      p15 = prom<V +>{
        sym5 = ldf list;
        base5 = ldf list in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r40):
        return r40;
      L1():
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        n7 = ld n;
        n8 = force? n7;
        checkMissing(n8);
        r41 = `/`(x8, n8);
        as_vector2 = ldf `as.vector`;
        p14 = prom<V +>{
          score3 = ld score;
          score4 = force? score3;
          checkMissing(score4);
          return score4;
        };
        r43 = dyn as_vector2(p14);
        list = ldf list in base;
        r44 = dyn list(r41, r43);
        goto L0(r44);
      L2():
        r39 = dyn base5[freq, score](<lang `/`(x, n)>, <lang as.vector(score)>);
        goto L0(r39);
      };
      p16 = prom<V +>{
        w = ld w;
        w1 = force? w;
        checkMissing(w1);
        return w1;
      };
      r47 = dyn lm[, data, weights](p13, p15, p16);
      return r47;
    };
    r49 = dyn anova(p17);
    check L24() else D14();
  D14():
    deopt 47 [r49];
  L24():
    st a = r49;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L25() else L26();
  L4(r51):
    st chisq = r51;
    structure = ldf structure;
    check L32() else D17();
  L25():
    a = ld a;
    check L27() else D15();
  L26():
    r50 = dyn base6[`X-squared`](<lang `[`(a, "score", "Sum Sq")>);
    goto L4(r50);
  D15():
    deopt 51 [a];
  D17():
    deopt 62 [];
  L27():
    a1 = force? a;
    checkMissing(a1);
    c = `is.object`(a1);
    if c then L28() else L29(a1);
  L32():
    p19 = prom<V +>{
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r55):
      return r55;
    L2():
      chisq = ld chisq;
      chisq1 = force? chisq;
      checkMissing(chisq1);
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r54 = dyn base7[statistic, parameter, `p.value`, method, `data.name`](<sym chisq>, <lang c(df=1.0)>, <lang pchisq(as.numeric(chisq), 1.0, lower.tail=FALSE)>, <sym method>, <sym dname>);
      goto L0(r54);
    L1(r57):
      pchisq = ldf pchisq;
      p18 = prom<V +>{
        sym9 = ldf `as.numeric`;
        base9 = ldf `as.numeric` in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r60):
        return r60;
      L1():
        chisq2 = ld chisq;
        chisq3 = force? chisq2;
        checkMissing(chisq3);
        as_numeric = ldf `as.numeric` in base;
        r61 = dyn as_numeric(chisq3);
        goto L0(r61);
      L2():
        r59 = dyn base9(<sym chisq>);
        goto L0(r59);
      };
      r63 = dyn pchisq[, , `lower.tail`](p18, 1.0, FALSE);
      method = ld method;
      method1 = force? method;
      checkMissing(method1);
      dname = ld dname;
      dname1 = force? dname;
      checkMissing(dname1);
      list1 = ldf list in base;
      r64 = dyn list1(chisq1, r57, r63, method1, dname1);
      goto L0(r64);
    L4():
      c2 = ldf c in base;
      r58 = dyn c2(1.0);
      goto L1(r58);
    L5():
      r56 = dyn base8[df](1.0);
      goto L1(r56);
    };
    r66 = dyn structure[, class](p19, "htest");
    check L33() else D18();
  D18():
    deopt 66 [r66];
  L5(dx1):
    c1 = ldf c in base;
    r53 = dyn c1(dx1);
    check L31() else D16();
  L28():
    dr = tryDispatchBuiltin.1("[", a1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(a3):
    __1 = ldf `[` in base;
    r52 = dyn __1(a3, "score", "Sum Sq");
    goto L5(r52);
  L33():
    popenv;
    return r66;
  D16():
    deopt 59 [r53];
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L31():
    goto L4(r53);
  }
}