fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3347163942;
    st `.citation` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3347163942(x, package) {
  (reg x:*, reg package:*) -+> V { var x:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg l:*, reg class__:cls, reg r3:V, reg package1:*, reg package2:V, reg l1:*, reg attr__:cls, reg r4:V, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    package_isMissing = missing.0(package);
    if package_isMissing then L0(NULL) else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    l = ld x;
    class__ = ldf `class<-`;
    check L5() else D1();
  L2():
    c = ldf c in base;
    r2 = dyn c("citation", "bibentry");
    check L4() else D0();
  L3():
    r = dyn base("citation", "bibentry");
    goto L1(r);
  D0():
    deopt 5 [r2];
  D1():
    deopt 7 [r1, l, r1];
  L4():
    goto L1(r2);
  L5():
    r3 = dyn class__(l, NULL, r1);
    check L6() else D2();
  D2():
    deopt 9 [r1, r3];
  L6():
    st x = r3;
    package1 = ld package;
    check L7() else D3();
  D3():
    deopt 11 [package1];
  L7():
    package2 = force? package1;
    checkMissing(package2);
    l1 = ld x;
    attr__ = ldf `attr<-`;
    check L8() else D4();
  D4():
    deopt 14 [package2, l1, package2];
  L8():
    r4 = dyn attr__(l1, NULL, "package", package2);
    check L9() else D5();
  D5():
    deopt 17 [package2, r4];
  L9():
    st x = r4;
    x1 = ld x;
    check L10() else D6();
  D6():
    deopt 19 [x1];
  L10():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}