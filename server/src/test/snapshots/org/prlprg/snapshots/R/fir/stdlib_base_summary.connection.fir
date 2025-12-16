fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-2083163048`;
    st `summary.connection` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-2083163048`(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg summary_connection:cls, reg r2:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    object1 = ld object;
    check L3() else D0();
  L2():
    r = dyn base(<lang summary.connection(object)>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  L3():
    object2 = force? object1;
    checkMissing(object2);
    summary_connection = ldf `summary.connection` in base;
    r2 = dyn summary_connection(object2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}