fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner781220489;
    st `.lm.fit` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner781220489(x, y, tol) {
  (reg x:*, reg y:*, reg tol:*) -+> V { var x:*, var y:*, var tol:*, reg tol_isMissing:L, reg tol_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_Cdqrls:*, reg C_Cdqrls1:V, reg x1:*, reg x2:V, reg y1:*, reg y2:V, reg tol1:*, reg tol2:V, reg _Call:cls, reg r2:V |
    mkenv;
    st x = x;
    st y = y;
    tol_isMissing = missing.0(tol);
    if tol_isMissing then L0(1.0E-7) else L0(tol);
  L0(tol_orDefault):
    st tol = tol_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    C_Cdqrls = ld C_Cdqrls;
    check L4() else D0();
  L3():
    r = dyn base[, , , , check](<sym C_Cdqrls>, <sym x>, <sym y>, <sym tol>, TRUE);
    goto L1(r);
  D0():
    deopt 2 [C_Cdqrls];
  L4():
    C_Cdqrls1 = force? C_Cdqrls;
    checkMissing(C_Cdqrls1);
    x1 = ld x;
    check L5() else D1();
  D1():
    deopt 4 [x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    y1 = ld y;
    check L6() else D2();
  D2():
    deopt 6 [y1];
  L6():
    y2 = force? y1;
    checkMissing(y2);
    tol1 = ld tol;
    check L7() else D3();
  D3():
    deopt 8 [tol1];
  L7():
    tol2 = force? tol1;
    checkMissing(tol2);
    _Call = ldf `.Call` in base;
    r2 = dyn _Call(C_Cdqrls1, x2, y2, tol2, TRUE);
    check L8() else D4();
  D4():
    deopt 13 [r2];
  L8():
    goto L1(r2);
  }
}