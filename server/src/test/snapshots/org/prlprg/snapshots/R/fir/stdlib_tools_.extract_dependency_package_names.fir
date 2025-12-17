fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.extract_dependency_package_names` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_package_dependencies_scan:*, reg C_package_dependencies_scan1:V, reg x1:*, reg x2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    C_package_dependencies_scan = ld C_package_dependencies_scan;
    check L3() else D0();
  L2():
    r = dyn base(<sym C_package_dependencies_scan>, <sym x>);
    goto L0(r);
  D0():
    deopt 1 [C_package_dependencies_scan];
  L3():
    C_package_dependencies_scan1 = force? C_package_dependencies_scan;
    checkMissing(C_package_dependencies_scan1);
    x1 = ld x;
    check L4() else D1();
  D1():
    deopt 2 [C_package_dependencies_scan1, x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    vargs = dots[x2];
    r2 = `.Call`(C_package_dependencies_scan1, vargs, <missing>);
    goto L0(r2);
  }
}