fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-325818903`;
    st `.getRequiredPackages` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-325818903`(file, `lib.loc`, quietly, useImports) {
  (reg file:*, reg lib_loc:*, reg quietly:*, reg useImports:*) -+> V { var file:*, reg file_isMissing:L, reg file_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var quietly:*, reg quietly_isMissing:L, reg quietly_orDefault:*, var useImports:*, reg useImports_isMissing:L, reg useImports_orDefault:*, reg ___:cls, reg r:V, reg r1:cls, reg ___1:cls, reg r2:V, reg r3:cls, reg file1:*, reg file2:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg _getRequiredPackages2:cls, reg pkgInfo:*, reg pkgInfo1:V, reg p2:p(V +), reg quietly1:*, reg quietly2:V, reg p3:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p4:p(V +), reg useImports1:*, reg useImports2:V, reg p5:p(V +), reg r12:V, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg invisible:cls, reg r15:V |
    mkenv;
    file_isMissing = missing.0(file);
    if file_isMissing then L0("DESCRIPTION") else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L1(NULL) else L1(lib_loc);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    quietly_isMissing = missing.0(quietly);
    if quietly_isMissing then L2(FALSE) else L2(quietly);
  L2(quietly_orDefault):
    st quietly = quietly_orDefault;
    useImports_isMissing = missing.0(useImports);
    if useImports_isMissing then L3(FALSE) else L3(useImports);
  L3(useImports_orDefault):
    st useImports = useImports_orDefault;
    ___ = ldf `:::`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r = dyn ___("tools", ".split_description");
    check L6() else D1();
  D1():
    deopt 4 [r];
  L6():
    checkFun.0(r);
    r1 = r as cls;
    p1 = prom<V +>{
      ___1 = ldf `:::`;
      r2 = dyn ___1("tools", ".read_description");
      checkFun.0(r2);
      r3 = r2 as cls;
      p = prom<V +>{
        file1 = ld file;
        file2 = force? file1;
        checkMissing(file2);
        return file2;
      };
      r5 = dyn r3(p);
      return r5;
    };
    r7 = dyn r1(p1);
    check L7() else D2();
  D2():
    deopt 7 [r7];
  L7():
    st pkgInfo = r7;
    _getRequiredPackages2 = ldf `.getRequiredPackages2`;
    check L8() else D3();
  D3():
    deopt 10 [];
  L8():
    p2 = prom<V +>{
      pkgInfo = ld pkgInfo;
      pkgInfo1 = force? pkgInfo;
      checkMissing(pkgInfo1);
      return pkgInfo1;
    };
    p3 = prom<V +>{
      quietly1 = ld quietly;
      quietly2 = force? quietly1;
      checkMissing(quietly2);
      return quietly2;
    };
    p4 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    p5 = prom<V +>{
      useImports1 = ld useImports;
      useImports2 = force? useImports1;
      checkMissing(useImports2);
      return useImports2;
    };
    r12 = dyn _getRequiredPackages2(p2, p3, p4, p5);
    check L9() else D4();
  D4():
    deopt 15 [r12];
  L9():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L4(r14):
    popenv;
    return r14;
  L10():
    invisible = ldf invisible in base;
    r15 = dyn invisible();
    check L12() else D5();
  L11():
    r13 = dyn base();
    goto L4(r13);
  D5():
    deopt 19 [r15];
  L12():
    goto L4(r15);
  }
}