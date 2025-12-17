fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `as.bibentry.citation` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg l:*, reg class__:cls, reg r:V, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    l = ld x;
    class__ = ldf `class<-`;
    check L0() else D0();
  D0():
    deopt 3 ["bibentry", l, "bibentry"];
  L0():
    r = dyn class__(l, NULL, "bibentry");
    check L1() else D1();
  D1():
    deopt 5 ["bibentry", r];
  L1():
    st x = r;
    x1 = ld x;
    check L2() else D2();
  D2():
    deopt 7 [x1];
  L2():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}