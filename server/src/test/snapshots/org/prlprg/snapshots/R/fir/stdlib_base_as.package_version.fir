fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `as.package_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg is_package_version:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg x3:*, reg x4:V, reg package_version:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    is_package_version = ldf `is.package_version`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_package_version(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    c = `as.logical`(r1);
    if c then L3() else L0();
  L0():
    package_version = ldf package_version;
    check L6() else D3();
  L3():
    x3 = ld x;
    check L4() else D2();
  D2():
    deopt 4 [x3];
  D3():
    deopt 7 [];
  L4():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L6():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r3 = dyn package_version(p1);
    check L7() else D4();
  D4():
    deopt 9 [r3];
  L7():
    popenv;
    return r3;
  }
}