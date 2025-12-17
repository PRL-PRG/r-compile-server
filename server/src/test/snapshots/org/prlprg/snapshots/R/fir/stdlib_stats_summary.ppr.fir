fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `summary.ppr` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg l:*, reg class__:cls, reg r:V, reg object1:*, reg object2:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    l = ld object;
    class__ = ldf `class<-`;
    check L0() else D0();
  D0():
    deopt 3 ["summary.ppr", l, "summary.ppr"];
  L0():
    r = dyn class__(l, NULL, "summary.ppr");
    check L1() else D1();
  D1():
    deopt 5 ["summary.ppr", r];
  L1():
    st object = r;
    object1 = ld object;
    check L2() else D2();
  D2():
    deopt 7 [object1];
  L2():
    object2 = force? object1;
    checkMissing(object2);
    popenv;
    return object2;
  }
}