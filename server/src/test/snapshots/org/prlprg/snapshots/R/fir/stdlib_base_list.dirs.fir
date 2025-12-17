fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1918212217;
    st `list.dirs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1918212217(path, `full.names`, recursive) {
  (reg path:*, reg full_names:*, reg recursive:*) -+> V { var path:*, reg path_isMissing:L, reg path_orDefault:*, var `full.names`:*, reg full_names_isMissing:L, reg full_names_orDefault:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg path1:*, reg path2:V, reg full_names1:*, reg full_names2:V, reg recursive1:*, reg recursive2:V, reg list_dirs:cls, reg r2:V |
    mkenv;
    path_isMissing = missing.0(path);
    if path_isMissing then L0(".") else L0(path);
  L0(path_orDefault):
    st path = path_orDefault;
    full_names_isMissing = missing.0(full_names);
    if full_names_isMissing then L1(TRUE) else L1(full_names);
  L1(full_names_orDefault):
    st `full.names` = full_names_orDefault;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L2(TRUE) else L2(recursive);
  L2(recursive_orDefault):
    st recursive = recursive_orDefault;
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
    r = dyn base(<lang list.dirs(path, full.names, recursive)>);
    goto L3(r);
  D0():
    deopt 2 [path1];
  L6():
    path2 = force? path1;
    checkMissing(path2);
    full_names1 = ld `full.names`;
    check L7() else D1();
  D1():
    deopt 4 [full_names1];
  L7():
    full_names2 = force? full_names1;
    checkMissing(full_names2);
    recursive1 = ld recursive;
    check L8() else D2();
  D2():
    deopt 6 [recursive1];
  L8():
    recursive2 = force? recursive1;
    checkMissing(recursive2);
    list_dirs = ldf `list.dirs` in base;
    r2 = dyn list_dirs(path2, full_names2, recursive2);
    check L9() else D3();
  D3():
    deopt 9 [r2];
  L9():
    goto L3(r2);
  }
}