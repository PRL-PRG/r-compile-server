fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2583901014;
    st `.NonstandardGenericTest` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2583901014(body, fname, stdBody) {
  (reg body:*, reg fname:*, reg stdBody:*) -+> V { var body:*, var fname:*, var stdBody:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg body1:*, reg body2:V, reg stdBody1:*, reg stdBody2:V, reg identical:cls, reg r2:V, reg c:L, reg _recursiveCallTest:cls, reg body3:*, reg body4:V, reg p:p(V +), reg fname1:*, reg fname2:V, reg p1:p(V +), reg r5:V, reg c1:L |
    mkenv;
    st body = body;
    st fname = fname;
    st stdBody = stdBody;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L8() else L1();
  L3():
    body1 = ld body;
    check L5() else D0();
  L4():
    r = dyn base(<sym body>, <sym stdBody>);
    goto L0(r);
  D0():
    deopt 2 [body1];
  L1():
    _recursiveCallTest = ldf `.recursiveCallTest`;
    check L10() else D3();
  L5():
    body2 = force? body1;
    checkMissing(body2);
    stdBody1 = ld stdBody;
    check L6() else D1();
  L8():
    popenv;
    return FALSE;
  D1():
    deopt 4 [stdBody1];
  D3():
    deopt 18 [];
  L6():
    stdBody2 = force? stdBody1;
    checkMissing(stdBody2);
    identical = ldf identical in base;
    r2 = dyn identical(body2, stdBody2, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L7() else D2();
  L10():
    p = prom<V +>{
      body3 = ld body;
      body4 = force? body3;
      checkMissing(body4);
      return body4;
    };
    p1 = prom<V +>{
      fname1 = ld fname;
      fname2 = force? fname1;
      checkMissing(fname2);
      return fname2;
    };
    r5 = dyn _recursiveCallTest(p, p1);
    check L11() else D4();
  D2():
    deopt 14 [r2];
  D4():
    deopt 21 [r5];
  L7():
    goto L0(r2);
  L11():
    c1 = `as.logical`(r5);
    if c1 then L12() else L2();
  L2():
    popenv;
    return NA_LGL;
  L12():
    popenv;
    return TRUE;
  }
}