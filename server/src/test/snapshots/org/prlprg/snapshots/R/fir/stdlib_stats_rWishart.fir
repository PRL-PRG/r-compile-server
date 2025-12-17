fun main() {
  () -+> V { reg r:cls, reg toeplitz:cls, reg p:p(V +), reg r2:V, reg set_seed:cls, reg r3:V, reg rWishart:cls, reg S:*, reg S1:V, reg p1:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg R:*, reg R1:V, reg dim:cls, reg r8:V, reg apply:cls, reg R2:*, reg R3:V, reg p2:p(V +), reg p3:p(V +), reg mean:*, reg mean1:V, reg p4:p(V +), reg r12:V, reg stopifnot:cls, reg all_equal:cls, reg mR:*, reg mR1:V, reg p5:p(V +), reg S2:*, reg S3:V, reg r14:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg S4:*, reg S5:V, reg r19:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:R, reg r26:V, reg r27:V, reg diag:cls, reg S6:*, reg S7:V, reg p8:p(V +), reg r29:V, reg tcrossprod:cls, reg r30:V, reg r31:V, reg r32:V, reg apply1:cls, reg R4:*, reg R5:V, reg p9:p(V +), reg p10:p(V +), reg var:*, reg var1:V, reg p11:p(V +), reg r36:V, reg stopifnot1:cls, reg all_equal1:cls, reg vR:*, reg vR1:V, reg p12:p(V +), reg Va:*, reg Va1:V, reg p13:p(V +), reg p14:p(V +), reg r40:V, reg p15:p(V +), reg r42:V |
    mkenv;
    r = clos inner2843011469;
    st rWishart = r;
    toeplitz = ldf toeplitz;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      return <real 1.0, 0.9, 0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1>;
    };
    r2 = dyn toeplitz(p);
    check L3() else D1();
  D1():
    deopt 6 [r2];
  L3():
    st S = r2;
    set_seed = ldf `set.seed`;
    check L4() else D2();
  D2():
    deopt 9 [];
  L4():
    r3 = dyn set_seed(11.0);
    check L5() else D3();
  D3():
    deopt 11 [r3];
  L5():
    rWishart = ldf rWishart;
    check L6() else D4();
  D4():
    deopt 13 [];
  L6():
    p1 = prom<V +>{
      S = ld S;
      S1 = force? S;
      checkMissing(S1);
      return S1;
    };
    r5 = dyn rWishart(1000.0, 20.0, p1);
    check L7() else D5();
  D5():
    deopt 17 [r5];
  L7():
    st R = r5;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0():
    apply = ldf apply;
    check L12() else D8();
  L8():
    R = ld R;
    check L10() else D6();
  L9():
    r6 = dyn base(<sym R>);
    goto L0();
  D6():
    deopt 21 [R];
  D8():
    deopt 26 [];
  L10():
    R1 = force? R;
    checkMissing(R1);
    dim = ldf dim in base;
    r8 = dyn dim(R1);
    check L11() else D7();
  L12():
    p2 = prom<V +>{
      R2 = ld R;
      R3 = force? R2;
      checkMissing(R3);
      return R3;
    };
    p3 = prom<V +>{
      return <int 1, 2>;
    };
    p4 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    r12 = dyn apply(p2, p3, p4);
    check L13() else D9();
  D7():
    deopt 24 [r8];
  D9():
    deopt 30 [r12];
  L11():
    goto L0();
  L13():
    st mR = r12;
    stopifnot = ldf stopifnot;
    check L14() else D10();
  D10():
    deopt 33 [];
  L14():
    p7 = prom<V +>{
      all_equal = ldf `all.equal`;
      p5 = prom<V +>{
        mR = ld mR;
        mR1 = force? mR;
        checkMissing(mR1);
        return mR1;
      };
      p6 = prom<V +>{
        S2 = ld S;
        S3 = force? S2;
        checkMissing(S3);
        r14 = `*`(20.0, S3);
        return r14;
      };
      r16 = dyn all_equal[, , tolerance](p5, p6, 0.009);
      return r16;
    };
    r18 = dyn stopifnot(p7);
    check L15() else D11();
  D11():
    deopt 35 [r18];
  L15():
    S4 = ld S;
    check L16() else D12();
  D12():
    deopt 37 [20.0, S4];
  L16():
    S5 = force? S4;
    checkMissing(S5);
    r19 = `^`(S5, 2.0);
    sym1 = ldf tcrossprod;
    base1 = ldf tcrossprod in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L1(r25, r26, r27):
    r31 = `+`(r26, r27);
    r32 = `*`(r25, r31);
    st Va = r32;
    apply1 = ldf apply;
    check L22() else D16();
  L17():
    diag = ldf diag;
    check L19() else D13();
  L18():
    r24 = dyn base1(<lang diag(S)>);
    goto L1(20.0, r19, r24);
  D13():
    deopt 43 [20.0, r19];
  D16():
    deopt 52 [];
  L19():
    p8 = prom<V +>{
      S6 = ld S;
      S7 = force? S6;
      checkMissing(S7);
      return S7;
    };
    r29 = dyn diag(p8);
    check L20() else D14();
  L22():
    p9 = prom<V +>{
      R4 = ld R;
      R5 = force? R4;
      checkMissing(R5);
      return R5;
    };
    p10 = prom<V +>{
      return <int 1, 2>;
    };
    p11 = prom<V +>{
      var = ld var;
      var1 = force? var;
      checkMissing(var1);
      return var1;
    };
    r36 = dyn apply1(p9, p10, p11);
    check L23() else D17();
  D14():
    deopt 45 [20.0, r19, r29];
  D17():
    deopt 56 [r36];
  L20():
    tcrossprod = ldf tcrossprod in base;
    r30 = dyn tcrossprod(r29);
    check L21() else D15();
  L23():
    st vR = r36;
    stopifnot1 = ldf stopifnot;
    check L24() else D18();
  D15():
    deopt 47 [20.0, r19, r30];
  D18():
    deopt 59 [];
  L21():
    goto L1(20.0, r19, r30);
  L24():
    p15 = prom<V +>{
      all_equal1 = ldf `all.equal`;
      p12 = prom<V +>{
        vR = ld vR;
        vR1 = force? vR;
        checkMissing(vR1);
        return vR1;
      };
      p13 = prom<V +>{
        Va = ld Va;
        Va1 = force? Va;
        checkMissing(Va1);
        return Va1;
      };
      p14 = prom<V +>{
        return 0.0625;
      };
      r40 = dyn all_equal1[, , tolerance](p12, p13, p14);
      return r40;
    };
    r42 = dyn stopifnot1(p15);
    check L25() else D19();
  D19():
    deopt 61 [r42];
  L25():
    popenv;
    return r42;
  }
}
fun inner2843011469(n, df, Sigma) {
  (reg n:*, reg df:*, reg Sigma:*) -+> V { var n:*, var df:*, var Sigma:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_rWishart:*, reg C_rWishart1:V, reg n1:*, reg n2:V, reg df1:*, reg df2:V, reg Sigma1:*, reg Sigma2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st n = n;
    st df = df;
    st Sigma = Sigma;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_rWishart = ld C_rWishart;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_rWishart>, <sym n>, <sym df>, <sym Sigma>);
    goto L0(r);
  D0():
    deopt 1 [C_rWishart];
  L3():
    C_rWishart1 = force? C_rWishart;
    checkMissing(C_rWishart1);
    n1 = ld n;
    check L4() else D1();
  D1():
    deopt 2 [C_rWishart1, n1];
  L4():
    n2 = force? n1;
    checkMissing(n2);
    df1 = ld df;
    check L5() else D2();
  D2():
    deopt 3 [C_rWishart1, n2, df1];
  L5():
    df2 = force? df1;
    checkMissing(df2);
    Sigma1 = ld Sigma;
    check L6() else D3();
  D3():
    deopt 4 [C_rWishart1, n2, df2, Sigma1];
  L6():
    Sigma2 = force? Sigma1;
    checkMissing(Sigma2);
    vargs = dots[n2, df2, Sigma2];
    r2 = `.Call`(C_rWishart1, vargs, <missing>);
    goto L0(r2);
  }
}