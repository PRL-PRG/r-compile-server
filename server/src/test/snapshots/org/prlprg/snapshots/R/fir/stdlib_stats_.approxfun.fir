fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3653040030;
    st `.approxfun` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3653040030(x, y, v, method, yleft, yright, f, `na.rm`) {
  (reg x:*, reg y:*, reg v:*, reg method:*, reg yleft:*, reg yright:*, reg f:*, reg na_rm:*) -+> V { var x:*, var y:*, var v:*, var method:*, var yleft:*, var yright:*, var f:*, var `na.rm`:*, reg na_rm_isMissing:L, reg na_rm_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_Approx:*, reg C_Approx1:V, reg x1:*, reg x2:V, reg y1:*, reg y2:V, reg v1:*, reg v2:V, reg method1:*, reg method2:V, reg yleft1:*, reg yleft2:V, reg yright1:*, reg yright2:V, reg f1:*, reg f2:V, reg na_rm1:*, reg na_rm2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st x = x;
    st y = y;
    st v = v;
    st method = method;
    st yleft = yleft;
    st yright = yright;
    st f = f;
    na_rm_isMissing = missing.0(na_rm);
    if na_rm_isMissing then L0(TRUE) else L0(na_rm);
  L0(na_rm_orDefault):
    st `na.rm` = na_rm_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    C_Approx = ld C_Approx;
    check L4() else D0();
  L3():
    r = dyn base(<sym C_Approx>, <sym x>, <sym y>, <sym v>, <sym method>, <sym yleft>, <sym yright>, <sym f>, <sym na.rm>);
    goto L1(r);
  D0():
    deopt 1 [C_Approx];
  L4():
    C_Approx1 = force? C_Approx;
    checkMissing(C_Approx1);
    x1 = ld x;
    check L5() else D1();
  D1():
    deopt 2 [C_Approx1, x1];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    y1 = ld y;
    check L6() else D2();
  D2():
    deopt 3 [C_Approx1, x2, y1];
  L6():
    y2 = force? y1;
    checkMissing(y2);
    v1 = ld v;
    check L7() else D3();
  D3():
    deopt 4 [C_Approx1, x2, y2, v1];
  L7():
    v2 = force? v1;
    checkMissing(v2);
    method1 = ld method;
    check L8() else D4();
  D4():
    deopt 5 [C_Approx1, x2, y2, v2, method1];
  L8():
    method2 = force? method1;
    checkMissing(method2);
    yleft1 = ld yleft;
    check L9() else D5();
  D5():
    deopt 6 [C_Approx1, x2, y2, v2, method2, yleft1];
  L9():
    yleft2 = force? yleft1;
    checkMissing(yleft2);
    yright1 = ld yright;
    check L10() else D6();
  D6():
    deopt 7 [C_Approx1, x2, y2, v2, method2, yleft2, yright1];
  L10():
    yright2 = force? yright1;
    checkMissing(yright2);
    f1 = ld f;
    check L11() else D7();
  D7():
    deopt 8 [C_Approx1, x2, y2, v2, method2, yleft2, yright2, f1];
  L11():
    f2 = force? f1;
    checkMissing(f2);
    na_rm1 = ld `na.rm`;
    check L12() else D8();
  D8():
    deopt 9 [C_Approx1, x2, y2, v2, method2, yleft2, yright2, f2, na_rm1];
  L12():
    na_rm2 = force? na_rm1;
    checkMissing(na_rm2);
    vargs = dots[x2, y2, v2, method2, yleft2, yright2, f2, na_rm2];
    r2 = `.Call`(C_Approx1, vargs, <missing>);
    goto L1(r2);
  }
}