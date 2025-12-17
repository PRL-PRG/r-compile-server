fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner440454000;
    st Rank = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner440454000(X, tol) {
  (reg X:*, reg tol:*) -+> V { var X:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, reg qr:cls, reg zapsmall:cls, reg X1:*, reg X2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg tol1:*, reg tol2:V, reg log10:cls, reg r3:V, reg r4:V, reg r5:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg tol3:*, reg tol4:V, reg p3:p(V +), reg r10:V, reg c:L, reg r12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r13:V |
    mkenv;
    st X = X;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L0(1.0E-7) else L0(tol);
  L0(tol_orDefault):
    st tol = tol_orDefault;
    qr = ldf qr;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p2 = prom<V +>{
      zapsmall = ldf zapsmall;
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
      return r7;
    };
    p3 = prom<V +>{
      tol3 = ld tol;
      tol4 = force? tol3;
      checkMissing(tol4);
      return tol4;
    };
    r10 = dyn qr[, tol, LAPACK](p2, p3, FALSE);
    check L2() else D1();
  D1():
    deopt 7 [r10];
  L2():
    c = `is.object`(r10);
    if c then L4() else L5(r10);
  L3(dx1):
    popenv;
    return dx1;
  L4():
    dr = tryDispatchBuiltin.1("$", r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(r12):
    r13 = `$`(r12, <sym rank>);
    goto L3(r13);
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  }
}