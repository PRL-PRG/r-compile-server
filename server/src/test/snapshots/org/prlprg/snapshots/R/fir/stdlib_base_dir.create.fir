fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner132536502;
    st `dir.create` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner132536502(path, showWarnings, recursive, mode) {
  (reg path:*, reg showWarnings:*, reg recursive:*, reg mode:*) -+> V { var path:*, var showWarnings:*, reg showWarnings_isMissing:L, reg showWarnings_orDefault:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg path1:*, reg path2:V, reg showWarnings1:*, reg showWarnings2:V, reg recursive1:*, reg recursive2:V, reg as_octmode:cls, reg mode1:*, reg mode2:V, reg p:p(V +), reg r3:V, reg dir_create:cls, reg r4:V |
    mkenv;
    st path = path;
    showWarnings_isMissing = missing.0(showWarnings);
    if showWarnings_isMissing then L0(TRUE) else L0(showWarnings);
  L0(showWarnings_orDefault):
    st showWarnings = showWarnings_orDefault;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L1(FALSE) else L1(recursive);
  L1(recursive_orDefault):
    st recursive = recursive_orDefault;
    mode_isMissing = missing.0(mode);
    if mode_isMissing then L2("0777") else L2(mode);
  L2(mode_orDefault):
    st mode = mode_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L3(r1):
    popenv;
    return r1;
  L4():
    path1 = ld path;
    check L6() else D0();
  L5():
    r = dyn base(<lang dir.create(path, showWarnings, recursive, as.octmode(mode))>);
    goto L3(r);
  D0():
    deopt 2 [path1];
  L6():
    path2 = force? path1;
    checkMissing(path2);
    showWarnings1 = ld showWarnings;
    check L7() else D1();
  D1():
    deopt 4 [showWarnings1];
  L7():
    showWarnings2 = force? showWarnings1;
    checkMissing(showWarnings2);
    recursive1 = ld recursive;
    check L8() else D2();
  D2():
    deopt 6 [recursive1];
  L8():
    recursive2 = force? recursive1;
    checkMissing(recursive2);
    as_octmode = ldf `as.octmode`;
    check L9() else D3();
  D3():
    deopt 9 [];
  L9():
    p = prom<V +>{
      mode1 = ld mode;
      mode2 = force? mode1;
      checkMissing(mode2);
      return mode2;
    };
    r3 = dyn as_octmode(p);
    check L10() else D4();
  D4():
    deopt 11 [r3];
  L10():
    dir_create = ldf `dir.create` in base;
    r4 = dyn dir_create(path2, showWarnings2, recursive2, r3);
    check L11() else D5();
  D5():
    deopt 13 [r4];
  L11():
    goto L3(r4);
  }
}