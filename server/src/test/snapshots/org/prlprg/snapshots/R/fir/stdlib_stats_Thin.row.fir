fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner440454000;
    st `Thin.row` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner440454000(X, tol) {
  (reg X:*, reg tol:*) -+> V { var X:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, reg zapsmall:cls, reg X1:*, reg X2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg tol1:*, reg tol2:V, reg log10:cls, reg r3:V, reg r4:V, reg r5:V, reg p1:p(V +), reg r7:V, reg qr:cls, reg t:cls, reg X3:*, reg X4:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg tol3:*, reg tol4:V, reg p4:p(V +), reg r12:V, reg X5:*, reg X6:V, reg c:L, reg X8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg QR:*, reg QR1:V, reg c1:L, reg X10:V, reg QR3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg X12:V, reg dx3:V, reg r13:V, reg c2:L, reg X14:V, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg X19:V, reg dx10:V, reg r15:V, reg QR4:*, reg QR5:V, reg c3:L, reg X21:V, reg dx12:V, reg QR7:V, reg dr6:V, reg dc3:L, reg dx14:V, reg X23:V, reg dx15:V, reg dx16:V, reg r16:V, reg r17:I, reg __:cls, reg r18:V, reg __1:cls, reg r19:V |
    mkenv;
    st X = X;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L0(1.0E-7) else L0(tol);
  L0(tol_orDefault):
    st tol = tol_orDefault;
    zapsmall = ldf zapsmall;
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
    p1 = prom<V +>{
      sym = ldf log10;
      base = ldf log10 in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      r4 = `-`(<missing>, r2);
      r5 = `+`(r4, 5.0);
      return r5;
    L1():
      tol1 = ld tol;
      tol2 = force? tol1;
      checkMissing(tol2);
      log10 = ldf log10 in base;
      r3 = dyn log10(tol2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym tol>);
      goto L0(r1);
    };
    r7 = dyn zapsmall[, digits](p, p1);
    check L5() else D1();
  D1():
    deopt 5 [r7];
  L5():
    st X = r7;
    qr = ldf qr;
    check L6() else D2();
  D2():
    deopt 8 [];
  L6():
    p3 = prom<V +>{
      t = ldf t;
      p2 = prom<V +>{
        X3 = ld X;
        X4 = force? X3;
        checkMissing(X4);
        return X4;
      };
      r9 = dyn t(p2);
      return r9;
    };
    p4 = prom<V +>{
      tol3 = ld tol;
      tol4 = force? tol3;
      checkMissing(tol4);
      return tol4;
    };
    r12 = dyn qr[, tol, LAPACK](p3, p4, FALSE);
    check L7() else D3();
  D3():
    deopt 14 [r12];
  L7():
    st QR = r12;
    X5 = ld X;
    check L8() else D4();
  D4():
    deopt 16 [X5];
  L8():
    X6 = force? X5;
    checkMissing(X6);
    c = `is.object`(X6);
    if c then L9() else L10(X6);
  L1(dx1):
    popenv;
    return dx1;
  L9():
    dr = tryDispatchBuiltin.1("[", X6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(X8):
    QR = ld QR;
    check L12() else D5();
  D5():
    deopt 18 [X8, QR];
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L12():
    QR1 = force? QR;
    checkMissing(QR1);
    c1 = `is.object`(QR1);
    if c1 then L14() else L15(X8, QR1);
  L13(X12, dx3):
    c2 = `is.object`(dx3);
    if c2 then L17() else L18(X12, dx3);
  L14():
    dr2 = tryDispatchBuiltin.1("$", QR1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L16() else L15(X8, dr2);
  L15(X10, QR3):
    r13 = `$`(QR3, <sym pivot>);
    goto L13(X10, r13);
  L2(dx7):
    __1 = ldf `[` in base;
    r19 = dyn __1(X6, dx7, <missing>, FALSE);
    goto L1(r19);
  L16():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(X8, dx2);
  L17():
    dr4 = tryDispatchBuiltin.1("[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L19() else L18(X12, dr4);
  L18(X14, dx5):
    sym1 = ldf seq_len;
    base1 = ldf seq_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L3(X19, dx10, r15):
    __ = ldf `[` in base;
    r18 = dyn __(dx10, r15);
    goto L2(r18);
  L19():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L2(dx6);
  L20():
    QR4 = ld QR;
    check L22() else D6();
  L21():
    r14 = dyn base1(<lang `$`(QR, rank)>);
    goto L3(X14, dx5, r14);
  D6():
    deopt 22 [X14, dx5, QR4];
  L22():
    QR5 = force? QR4;
    checkMissing(QR5);
    c3 = `is.object`(QR5);
    if c3 then L24() else L25(X14, dx5, QR5);
  L23(X23, dx15, dx16):
    r17 = seq_len(dx16);
    goto L3(X23, dx15, r17);
  L24():
    dr6 = tryDispatchBuiltin.1("$", QR5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L26() else L25(X14, dx5, dr6);
  L25(X21, dx12, QR7):
    r16 = `$`(QR7, <sym rank>);
    goto L23(X21, dx12, r16);
  L26():
    dx14 = getTryDispatchBuiltinValue(dr6);
    goto L23(X14, dx5, dx14);
  }
}