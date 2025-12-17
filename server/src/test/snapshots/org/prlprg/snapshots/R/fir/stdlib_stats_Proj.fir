fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2665567685;
    st Proj = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2665567685(X, orth) {
  (reg X:*, reg orth:*) -+> V { var X:*, var orth:*, reg orth_isMissing:L, reg orth_orDefault:*, reg Thin_col:cls, reg X1:*, reg X2:V, reg p:p(V +), reg r1:V, reg ncol:cls, reg X3:*, reg X4:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c:L, reg matrix:cls, reg nrow:cls, reg X5:*, reg X6:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg nrow1:cls, reg X7:*, reg X8:V, reg p4:p(V +), reg r9:V, reg p5:p(V +), reg r11:V, reg r12:V, reg X9:*, reg X10:V, reg solve:cls, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg X11:*, reg X12:V, reg crossprod:cls, reg r15:V, reg p6:p(V +), reg t:cls, reg X13:*, reg X14:V, reg p7:p(V +), reg r18:V, reg p8:p(V +), reg r20:V, reg ___:cls, reg r21:V, reg orth1:*, reg orth2:V, reg c1:L, reg diag:cls, reg nrow2:cls, reg X15:*, reg X16:V, reg p9:p(V +), reg r23:V, reg p10:p(V +), reg r25:V, reg P:*, reg P1:V, reg r26:V, reg P2:*, reg P3:V |
    mkenv;
    st X = X;
    orth_isMissing = missing.0(orth);
    if orth_isMissing then L0(FALSE) else L0(orth);
  L0(orth_orDefault):
    st orth = orth_orDefault;
    Thin_col = ldf `Thin.col`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      X1 = ld X;
      X2 = force? X1;
      checkMissing(X2);
      return X2;
    };
    r1 = dyn Thin_col(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    st X = r1;
    ncol = ldf ncol;
    check L6() else D2();
  D2():
    deopt 6 [];
  L6():
    p1 = prom<V +>{
      X3 = ld X;
      X4 = force? X3;
      checkMissing(X4);
      return X4;
    };
    r3 = dyn ncol(p1);
    check L7() else D3();
  D3():
    deopt 8 [r3];
  L7():
    r4 = `==`(r3, 0.0);
    c = `as.logical`(r4);
    if c then L8() else L1();
  L1():
    X9 = ld X;
    check L12() else D6();
  L2(r12):
    st P = r12;
    orth1 = ld orth;
    check L16() else D10();
  L8():
    matrix = ldf matrix;
    check L9() else D4();
  D4():
    deopt 12 [];
  D6():
    deopt 18 [X9];
  D10():
    deopt 28 [orth1];
  L9():
    p3 = prom<V +>{
      nrow = ldf nrow;
      p2 = prom<V +>{
        X5 = ld X;
        X6 = force? X5;
        checkMissing(X6);
        return X6;
      };
      r6 = dyn nrow(p2);
      return r6;
    };
    p5 = prom<V +>{
      nrow1 = ldf nrow;
      p4 = prom<V +>{
        X7 = ld X;
        X8 = force? X7;
        checkMissing(X8);
        return X8;
      };
      r9 = dyn nrow1(p4);
      return r9;
    };
    r11 = dyn matrix(0.0, p3, p5);
    check L10() else D5();
  L12():
    X10 = force? X9;
    checkMissing(X10);
    solve = ldf solve;
    check L13() else D7();
  L16():
    orth2 = force? orth1;
    checkMissing(orth2);
    c1 = `as.logical`(orth2);
    if c1 then L17() else L3();
  D5():
    deopt 16 [r11];
  D7():
    deopt 21 [];
  L3():
    P2 = ld P;
    check L22() else D14();
  L10():
    goto L2(r11);
  L13():
    p6 = prom<V +>{
      sym = ldf crossprod;
      base = ldf crossprod in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r14):
      return r14;
    L1():
      X11 = ld X;
      X12 = force? X11;
      checkMissing(X12);
      crossprod = ldf crossprod in base;
      r15 = dyn crossprod(X12);
      goto L0(r15);
    L2():
      r13 = dyn base(<sym X>);
      goto L0(r13);
    };
    p8 = prom<V +>{
      t = ldf t;
      p7 = prom<V +>{
        X13 = ld X;
        X14 = force? X13;
        checkMissing(X14);
        return X14;
      };
      r18 = dyn t(p7);
      return r18;
    };
    r20 = dyn solve(p6, p8);
    check L14() else D8();
  L17():
    diag = ldf diag;
    check L18() else D11();
  D8():
    deopt 24 [r20];
  D11():
    deopt 31 [];
  D14():
    deopt 37 [P2];
  L14():
    ___ = ldf `%*%` in base;
    r21 = dyn ___(X10, r20);
    check L15() else D9();
  L18():
    p10 = prom<V +>{
      nrow2 = ldf nrow;
      p9 = prom<V +>{
        X15 = ld X;
        X16 = force? X15;
        checkMissing(X16);
        return X16;
      };
      r23 = dyn nrow2(p9);
      return r23;
    };
    r25 = dyn diag[nrow](p10);
    check L19() else D12();
  L22():
    P3 = force? P2;
    checkMissing(P3);
    popenv;
    return P3;
  D9():
    deopt 26 [r21];
  D12():
    deopt 34 [r25];
  L15():
    goto L2(r21);
  L19():
    P = ld P;
    check L20() else D13();
  D13():
    deopt 34 [r25, P];
  L20():
    P1 = force? P;
    checkMissing(P1);
    r26 = `-`(r25, P1);
    popenv;
    return r26;
  }
}