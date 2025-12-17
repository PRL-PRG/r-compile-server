fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `labels.terms` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg attr:cls, reg r2:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    object1 = ld object;
    check L3() else D0();
  L2():
    r = dyn base(<sym object>, "term.labels");
    goto L0(r);
  D0():
    deopt 2 [object1];
  L3():
    object2 = force? object1;
    checkMissing(object2);
    attr = ldf attr in base;
    r2 = dyn attr(object2, "term.labels");
    check L4() else D1();
  D1():
    deopt 6 [r2];
  L4():
    goto L0(r2);
  }
}