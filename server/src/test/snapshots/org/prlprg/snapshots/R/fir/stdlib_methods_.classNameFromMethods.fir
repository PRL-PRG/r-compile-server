fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2203017188;
    st `.classNameFromMethods` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2203017188(what) {
  (reg what:*) -+> V { var what:*, reg l:*, reg packageSlot__:cls, reg r:V, reg what1:*, reg what2:V |
    mkenv;
    st what = what;
    l = ld what;
    packageSlot__ = ldf `packageSlot<-`;
    check L0() else D0();
  D0():
    deopt 3 ["methods", l, "methods"];
  L0():
    r = dyn packageSlot__(l, NULL, "methods");
    check L1() else D1();
  D1():
    deopt 5 ["methods", r];
  L1():
    st what = r;
    what1 = ld what;
    check L2() else D2();
  D2():
    deopt 7 [what1];
  L2():
    what2 = force? what1;
    checkMissing(what2);
    popenv;
    return what2;
  }
}