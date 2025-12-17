fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3147354972;
    st methodsPackageMetaName = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3147354972(prefix, name, package) {
  (reg prefix:*, reg name:*, reg package:*) -+> V { var prefix:*, var name:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_R_methodsPackageMetaName:*, reg C_R_methodsPackageMetaName1:V, reg prefix1:*, reg prefix2:V, reg name1:*, reg name2:V, reg package1:*, reg package2:V, reg vargs:dots, reg r2:V |
    mkenv;
    st prefix = prefix;
    st name = name;
    package_isMissing = missing.0(package);
    if package_isMissing then L0("") else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    C_R_methodsPackageMetaName = ld C_R_methodsPackageMetaName;
    check L4() else D0();
  L3():
    r = dyn base(<sym C_R_methodsPackageMetaName>, <sym prefix>, <sym name>, <sym package>);
    goto L1(r);
  D0():
    deopt 1 [C_R_methodsPackageMetaName];
  L4():
    C_R_methodsPackageMetaName1 = force? C_R_methodsPackageMetaName;
    checkMissing(C_R_methodsPackageMetaName1);
    prefix1 = ld prefix;
    check L5() else D1();
  D1():
    deopt 2 [C_R_methodsPackageMetaName1, prefix1];
  L5():
    prefix2 = force? prefix1;
    checkMissing(prefix2);
    name1 = ld name;
    check L6() else D2();
  D2():
    deopt 3 [C_R_methodsPackageMetaName1, prefix2, name1];
  L6():
    name2 = force? name1;
    checkMissing(name2);
    package1 = ld package;
    check L7() else D3();
  D3():
    deopt 4 [C_R_methodsPackageMetaName1, prefix2, name2, package1];
  L7():
    package2 = force? package1;
    checkMissing(package2);
    vargs = dots[prefix2, name2, package2];
    r2 = `.Call`(C_R_methodsPackageMetaName1, vargs, <missing>);
    goto L1(r2);
  }
}