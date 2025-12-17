fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner740144710;
    st `qr.influence` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner740144710(qr, res, tol) {
  (reg qr:*, reg res:*, reg tol:*) -+> V { var qr:*, var res:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, reg _Machine:*, reg _Machine1:V, reg c:L, reg r1:R, reg _Machine3:V, reg dr:V, reg dc:L, reg dx:V, reg r3:R, reg dx1:V, reg r4:V, reg r5:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg C_influence:*, reg C_influence1:V, reg qr1:*, reg qr2:V, reg res1:*, reg res2:V, reg tol1:*, reg tol2:V, reg vargs:dots, reg r9:V |
    mkenv;
    st qr = qr;
    st res = res;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L0() else L1(tol);
  L0():
    p = prom<V +>{
      _Machine = ld `.Machine`;
      _Machine1 = force? _Machine;
      checkMissing(_Machine1);
      c = `is.object`(_Machine1);
      if c then L1() else L2(10.0, _Machine1);
    L0(r3, dx1):
      r5 = `*`(r3, dx1);
      return r5;
    L1():
      dr = tryDispatchBuiltin.1("$", _Machine1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(10.0, dr);
    L2(r1, _Machine3):
      r4 = `$`(_Machine3, <sym double.eps>);
      goto L0(r1, r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(10.0, dx);
    };
    goto L1(p);
  L1(tol_orDefault):
    st tol = tol_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r8):
    popenv;
    return r8;
  L3():
    C_influence = ld C_influence;
    check L5() else D0();
  L4():
    r7 = dyn base(<sym C_influence>, <sym qr>, <sym res>, <sym tol>);
    goto L2(r7);
  D0():
    deopt 1 [C_influence];
  L5():
    C_influence1 = force? C_influence;
    checkMissing(C_influence1);
    qr1 = ld qr;
    check L6() else D1();
  D1():
    deopt 2 [C_influence1, qr1];
  L6():
    qr2 = force? qr1;
    checkMissing(qr2);
    res1 = ld res;
    check L7() else D2();
  D2():
    deopt 3 [C_influence1, qr2, res1];
  L7():
    res2 = force? res1;
    checkMissing(res2);
    tol1 = ld tol;
    check L8() else D3();
  D3():
    deopt 4 [C_influence1, qr2, res2, tol1];
  L8():
    tol2 = force? tol1;
    checkMissing(tol2);
    vargs = dots[qr2, res2, tol2];
    r9 = `.Call`(C_influence1, vargs, <missing>);
    goto L2(r9);
  }
}