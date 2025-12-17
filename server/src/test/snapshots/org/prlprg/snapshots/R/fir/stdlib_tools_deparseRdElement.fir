fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1179584769;
    st deparseRdElement = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1179584769(element, state) {
  (reg element:*, reg state:*) -+> V { var element:*, var state:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_deparseRd:*, reg C_deparseRd1:V, reg element1:*, reg element2:V, reg state1:*, reg state2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st element = element;
    st state = state;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_deparseRd = ld C_deparseRd;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_deparseRd>, <sym element>, <sym state>);
    goto L0(r);
  D0():
    deopt 1 [C_deparseRd];
  L3():
    C_deparseRd1 = force? C_deparseRd;
    checkMissing(C_deparseRd1);
    element1 = ld element;
    check L4() else D1();
  D1():
    deopt 2 [C_deparseRd1, element1];
  L4():
    element2 = force? element1;
    checkMissing(element2);
    state1 = ld state;
    check L5() else D2();
  D2():
    deopt 3 [C_deparseRd1, element2, state1];
  L5():
    state2 = force? state1;
    checkMissing(state2);
    vargs = dots[element2, state2];
    r2 = `.Call`(C_deparseRd1, vargs, <missing>);
    goto L0(r2);
  }
}