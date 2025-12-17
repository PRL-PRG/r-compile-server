fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg cbind:cls, reg p1:p(V +), reg p2:p(V +), reg r7:V, reg var:cls, reg ma:*, reg ma1:V, reg p3:p(V +), reg r9:V, reg mahalanobis:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg c:cls, reg r12:V, reg p4:p(V +), reg p5:p(V +), reg S:*, reg S1:V, reg p6:p(V +), reg r16:V, reg matrix:cls, reg rnorm:cls, reg p7:p(V +), reg r18:V, reg p8:p(V +), reg r20:V, reg stopifnot:cls, reg mahalanobis1:cls, reg x:*, reg x1:V, reg p9:p(V +), reg diag:cls, reg ncol:cls, reg x2:*, reg x3:V, reg p10:p(V +), reg r23:V, reg p11:p(V +), reg r25:V, reg p12:p(V +), reg r27:V, reg rowSums:cls, reg x4:*, reg x5:V, reg x6:*, reg x7:V, reg r28:V, reg p13:p(V +), reg r30:V, reg r31:V, reg p14:p(V +), reg r33:V, reg cov:cls, reg x8:*, reg x9:V, reg p15:p(V +), reg r35:V, reg mahalanobis2:cls, reg x10:*, reg x11:V, reg p16:p(V +), reg colMeans:cls, reg x12:*, reg x13:V, reg p17:p(V +), reg r38:V, reg p18:p(V +), reg Sx:*, reg Sx1:V, reg p19:p(V +), reg r41:V, reg plot:cls, reg density:cls, reg D2:*, reg D3:V, reg p20:p(V +), reg r43:V, reg p21:p(V +), reg r45:V, reg rug:cls, reg D4:*, reg D5:V, reg p22:p(V +), reg r47:V, reg qqplot:cls, reg qchisq:cls, reg ppoints:cls, reg r48:V, reg p23:p(V +), reg r50:V, reg p24:p(V +), reg D6:*, reg D7:V, reg p25:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r53:V, reg r54:V, reg expression:cls, reg r55:V, reg p26:p(V +), reg r57:V, reg abline:cls, reg r58:V |
    mkenv;
    r = clos inner1133199858;
    st mahalanobis = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    cbind = ldf cbind;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6>;
    };
    p2 = prom<V +>{
      return <int 1, 2, 3>;
    };
    r7 = dyn cbind(p1, p2);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 12 [r7];
  L4():
    goto L0();
  L6():
    st ma = r7;
    var = ldf var;
    check L7() else D4();
  D4():
    deopt 15 [];
  L7():
    p3 = prom<V +>{
      ma = ld ma;
      ma1 = force? ma;
      checkMissing(ma1);
      return ma1;
    };
    r9 = dyn var(p3);
    check L8() else D5();
  D5():
    deopt 17 [r9];
  L8():
    st S = r9;
    mahalanobis = ldf mahalanobis;
    check L9() else D6();
  D6():
    deopt 20 [];
  L9():
    p4 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c = ldf c in base;
      r12 = dyn c(0.0, 0.0);
      goto L0(r12);
    L2():
      r10 = dyn base1(0.0, 0.0);
      goto L0(r10);
    };
    p5 = prom<V +>{
      return <int 1, 2>;
    };
    p6 = prom<V +>{
      S = ld S;
      S1 = force? S;
      checkMissing(S1);
      return S1;
    };
    r16 = dyn mahalanobis(p4, p5, p6);
    check L10() else D7();
  D7():
    deopt 24 [r16];
  L10():
    matrix = ldf matrix;
    check L11() else D8();
  D8():
    deopt 26 [];
  L11():
    p8 = prom<V +>{
      rnorm = ldf rnorm;
      p7 = prom<V +>{
        return 300.0;
      };
      r18 = dyn rnorm(p7);
      return r18;
    };
    r20 = dyn matrix[, ncol](p8, 3.0);
    check L12() else D9();
  D9():
    deopt 30 [r20];
  L12():
    st x = r20;
    stopifnot = ldf stopifnot;
    check L13() else D10();
  D10():
    deopt 33 [];
  L13():
    p14 = prom<V +>{
      mahalanobis1 = ldf mahalanobis;
      p9 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      p12 = prom<V +>{
        diag = ldf diag;
        p11 = prom<V +>{
          ncol = ldf ncol;
          p10 = prom<V +>{
            x2 = ld x;
            x3 = force? x2;
            checkMissing(x3);
            return x3;
          };
          r23 = dyn ncol(p10);
          return r23;
        };
        r25 = dyn diag(p11);
        return r25;
      };
      r27 = dyn mahalanobis1(p9, 0.0, p12);
      rowSums = ldf rowSums;
      p13 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        x6 = ld x;
        x7 = force? x6;
        checkMissing(x7);
        r28 = `*`(x5, x7);
        return r28;
      };
      r30 = dyn rowSums(p13);
      r31 = `==`(r27, r30);
      return r31;
    };
    r33 = dyn stopifnot(p14);
    check L14() else D11();
  D11():
    deopt 35 [r33];
  L14():
    cov = ldf cov;
    check L15() else D12();
  D12():
    deopt 37 [];
  L15():
    p15 = prom<V +>{
      x8 = ld x;
      x9 = force? x8;
      checkMissing(x9);
      return x9;
    };
    r35 = dyn cov(p15);
    check L16() else D13();
  D13():
    deopt 39 [r35];
  L16():
    st Sx = r35;
    mahalanobis2 = ldf mahalanobis;
    check L17() else D14();
  D14():
    deopt 42 [];
  L17():
    p16 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    p18 = prom<V +>{
      colMeans = ldf colMeans;
      p17 = prom<V +>{
        x12 = ld x;
        x13 = force? x12;
        checkMissing(x13);
        return x13;
      };
      r38 = dyn colMeans(p17);
      return r38;
    };
    p19 = prom<V +>{
      Sx = ld Sx;
      Sx1 = force? Sx;
      checkMissing(Sx1);
      return Sx1;
    };
    r41 = dyn mahalanobis2(p16, p18, p19);
    check L18() else D15();
  D15():
    deopt 46 [r41];
  L18():
    st D2 = r41;
    plot = ldf plot;
    check L19() else D16();
  D16():
    deopt 49 [];
  L19():
    p21 = prom<V +>{
      density = ldf density;
      p20 = prom<V +>{
        D2 = ld D2;
        D3 = force? D2;
        checkMissing(D3);
        return D3;
      };
      r43 = dyn density[, bw](p20, 0.5);
      return r43;
    };
    r45 = dyn plot[, main](p21, "Squared Mahalanobis distances, n=100, p=3");
    check L20() else D17();
  D17():
    deopt 53 [r45];
  L20():
    rug = ldf rug;
    check L21() else D18();
  D18():
    deopt 55 [];
  L21():
    p22 = prom<V +>{
      D4 = ld D2;
      D5 = force? D4;
      checkMissing(D5);
      return D5;
    };
    r47 = dyn rug(p22);
    check L22() else D19();
  D19():
    deopt 57 [r47];
  L22():
    qqplot = ldf qqplot;
    check L23() else D20();
  D20():
    deopt 59 [];
  L23():
    p24 = prom<V +>{
      qchisq = ldf qchisq;
      p23 = prom<V +>{
        ppoints = ldf ppoints;
        r48 = dyn ppoints(100.0);
        return r48;
      };
      r50 = dyn qchisq[, df](p23, 3.0);
      return r50;
    };
    p25 = prom<V +>{
      D6 = ld D2;
      D7 = force? D6;
      checkMissing(D7);
      return D7;
    };
    p26 = prom<V +>{
      sym2 = ldf expression;
      base2 = ldf expression in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r54):
      return r54;
    L1():
      expression = ldf expression in base;
      r55 = dyn expression(<lang `*`("Q-Q plot of Mahalanobis", `~`(`*`(`*`(`^`(D, 2.0), " vs. quantiles of"), `~`(`^`(`[`(chi, 3.0), 2.0)))))>);
      goto L0(r55);
    L2():
      r53 = dyn base2(<lang `*`("Q-Q plot of Mahalanobis", `~`(`*`(`*`(`^`(D, 2.0), " vs. quantiles of"), `~`(`^`(`[`(chi, 3.0), 2.0)))))>);
      goto L0(r53);
    };
    r57 = dyn qqplot[, , main](p24, p25, p26);
    check L24() else D21();
  D21():
    deopt 64 [r57];
  L24():
    abline = ldf abline;
    check L25() else D22();
  D22():
    deopt 66 [];
  L25():
    r58 = dyn abline[, , col](0.0, 1.0, "gray");
    check L26() else D23();
  D23():
    deopt 71 [r58];
  L26():
    popenv;
    return r58;
  }
}
fun inner1133199858(x, center, cov, inverted, `...`) {
  (reg x:*, reg center:*, reg cov:*, reg inverted:*, reg ddd:dots) -+> V { var x:*, var center:*, var cov:*, var inverted:*, reg inverted_isMissing:L, reg inverted_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_vector:cls, reg r2:V, reg c:L, reg matrix:cls, reg x3:*, reg x4:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x5:*, reg x6:V, reg length:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg r9:V, reg as_matrix:cls, reg x7:*, reg x8:V, reg p2:p(V +), reg r11:V, reg isFALSE:cls, reg center1:*, reg center2:V, reg p3:p(V +), reg r13:V, reg r14:V, reg c1:L, reg sweep:cls, reg x9:*, reg x10:V, reg p4:p(V +), reg center3:*, reg center4:V, reg p5:p(V +), reg r17:V, reg inverted1:*, reg inverted2:V, reg r19:V, reg c2:L, reg solve:cls, reg cov1:*, reg cov2:V, reg p6:p(V +), reg ddd1:dots?, reg r21:V, reg setNames:cls, reg rowSums:cls, reg x11:*, reg x12:V, reg cov3:*, reg cov4:V, reg ___:cls, reg r23:V, reg x13:*, reg x14:V, reg r24:V, reg p7:p(V +), reg r26:V, reg p8:p(V +), reg rownames:cls, reg x15:*, reg x16:V, reg p9:p(V +), reg r29:V, reg p10:p(V +), reg r31:V |
    mkenv;
    st x = x;
    st center = center;
    st cov = cov;
    inverted_isMissing = missing.0(inverted);
    if inverted_isMissing then L0(FALSE) else L0(inverted);
  L0(inverted_orDefault):
    st inverted = inverted_orDefault;
    st `...` = ddd;
    sym = ldf `is.vector`;
    base = ldf `is.vector` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L1(r1):
    c = `as.logical`(r1);
    if c then L12() else L2();
  L8():
    x1 = ld x;
    check L10() else D0();
  L9():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    as_matrix = ldf `as.matrix`;
    check L16() else D4();
  L3(r9):
    st x = r9;
    isFALSE = ldf isFALSE;
    check L18() else D6();
  L10():
    x2 = force? x1;
    checkMissing(x2);
    is_vector = ldf `is.vector` in base;
    r2 = dyn is_vector(x2, "any");
    check L11() else D1();
  L12():
    matrix = ldf matrix;
    check L13() else D2();
  D1():
    deopt 6 [r2];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  D6():
    deopt 19 [];
  L11():
    goto L1(r2);
  L13():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p1 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      length = ldf length in base;
      r6 = dyn length(x6);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym x>);
      goto L0(r4);
    };
    r8 = dyn matrix[, ncol](p, p1);
    check L14() else D3();
  L16():
    p2 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r11 = dyn as_matrix(p2);
    check L17() else D5();
  L18():
    p3 = prom<V +>{
      center1 = ld center;
      center2 = force? center1;
      checkMissing(center2);
      return center2;
    };
    r13 = dyn isFALSE(p3);
    check L19() else D7();
  D3():
    deopt 12 [r8];
  D5():
    deopt 16 [r11];
  D7():
    deopt 21 [r13];
  L14():
    goto L3(r8);
  L17():
    goto L3(r11);
  L19():
    r14 = `!`(r13);
    c1 = `as.logical`(r14);
    if c1 then L20() else L4();
  L4():
    goto L5();
  L5():
    inverted1 = ld inverted;
    check L24() else D10();
  L20():
    sweep = ldf sweep;
    check L21() else D8();
  D8():
    deopt 24 [];
  D10():
    deopt 32 [inverted1];
  L21():
    p4 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    p5 = prom<V +>{
      center3 = ld center;
      center4 = force? center3;
      checkMissing(center4);
      return center4;
    };
    r17 = dyn sweep(p4, 2, p5);
    check L22() else D9();
  L24():
    inverted2 = force? inverted1;
    checkMissing(inverted2);
    r19 = `!`(inverted2);
    c2 = `as.logical`(r19);
    if c2 then L25() else L6();
  D9():
    deopt 28 [r17];
  L6():
    goto L7();
  L7():
    setNames = ldf setNames;
    check L29() else D13();
  L22():
    st x = r17;
    goto L5();
  L25():
    solve = ldf solve;
    check L26() else D11();
  D11():
    deopt 36 [];
  D13():
    deopt 44 [];
  L26():
    p6 = prom<V +>{
      cov1 = ld cov;
      cov2 = force? cov1;
      checkMissing(cov2);
      return cov2;
    };
    ddd1 = ld `...`;
    r21 = dyn solve[, `...`](p6, ddd1);
    check L27() else D12();
  L29():
    p8 = prom<V +>{
      rowSums = ldf rowSums;
      p7 = prom<V +>{
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        cov3 = ld cov;
        cov4 = force? cov3;
        checkMissing(cov4);
        ___ = ldf `%*%` in base;
        r23 = dyn ___(x12, cov4);
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        r24 = `*`(r23, x14);
        return r24;
      };
      r26 = dyn rowSums(p7);
      return r26;
    };
    p10 = prom<V +>{
      rownames = ldf rownames;
      p9 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        return x16;
      };
      r29 = dyn rownames(p9);
      return r29;
    };
    r31 = dyn setNames(p8, p10);
    check L30() else D14();
  D12():
    deopt 39 [r21];
  D14():
    deopt 47 [r31];
  L27():
    st cov = r21;
    goto L7();
  L30():
    popenv;
    return r31;
  }
}