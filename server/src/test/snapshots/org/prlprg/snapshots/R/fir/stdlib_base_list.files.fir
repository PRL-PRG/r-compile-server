fun main() {
  () -+> V { reg r:cls, reg list_files:cls, reg R_home:cls, reg r1:V, reg p:p(V +), reg r3:V, reg dir:cls, reg r4:V, reg list_dirs:cls, reg R_home1:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg list_dirs1:cls, reg R_home2:cls, reg r8:V, reg p2:p(V +), reg r10:V |
    mkenv;
    r = clos inner632376304;
    st `list.files` = r;
    list_files = ldf `list.files`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      R_home = ldf `R.home`;
      r1 = dyn R_home();
      return r1;
    };
    r3 = dyn list_files(p);
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    dir = ldf dir;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    r4 = dyn dir[, pattern, `full.names`, `ignore.case`]("../..", "^[a-lr]", TRUE, TRUE);
    check L3() else D3();
  D3():
    deopt 16 [r4];
  L3():
    list_dirs = ldf `list.dirs`;
    check L4() else D4();
  D4():
    deopt 18 [];
  L4():
    p1 = prom<V +>{
      R_home1 = ldf `R.home`;
      r5 = dyn R_home1("doc");
      return r5;
    };
    r7 = dyn list_dirs(p1);
    check L5() else D5();
  D5():
    deopt 20 [r7];
  L5():
    list_dirs1 = ldf `list.dirs`;
    check L6() else D6();
  D6():
    deopt 22 [];
  L6():
    p2 = prom<V +>{
      R_home2 = ldf `R.home`;
      r8 = dyn R_home2("doc");
      return r8;
    };
    r10 = dyn list_dirs1[, `full.names`](p2, FALSE);
    check L7() else D7();
  D7():
    deopt 26 [r10];
  L7():
    popenv;
    return r10;
  }
}
fun inner632376304(path, pattern, `all.files`, `full.names`, recursive, `ignore.case`, `include.dirs`, `no..`) {
  (reg path:*, reg pattern:*, reg all_files:*, reg full_names:*, reg recursive:*, reg ignore_case:*, reg include_dirs:*, reg no__:*) -+> V { var path:*, reg path_isMissing:L, reg path_orDefault:*, var pattern:*, reg pattern_isMissing:L, reg pattern_orDefault:*, var `all.files`:*, reg all_files_isMissing:L, reg all_files_orDefault:*, var `full.names`:*, reg full_names_isMissing:L, reg full_names_orDefault:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var `ignore.case`:*, reg ignore_case_isMissing:L, reg ignore_case_orDefault:*, var `include.dirs`:*, reg include_dirs_isMissing:L, reg include_dirs_orDefault:*, var `no..`:*, reg no___isMissing:L, reg no___orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg path1:*, reg path2:V, reg pattern1:*, reg pattern2:V, reg all_files1:*, reg all_files2:V, reg full_names1:*, reg full_names2:V, reg recursive1:*, reg recursive2:V, reg ignore_case1:*, reg ignore_case2:V, reg include_dirs1:*, reg include_dirs2:V, reg no__1:*, reg no__2:V, reg list_files:cls, reg r2:V |
    mkenv;
    path_isMissing = missing.0(path);
    if path_isMissing then L0(".") else L0(path);
  L0(path_orDefault):
    st path = path_orDefault;
    pattern_isMissing = missing.0(pattern);
    if pattern_isMissing then L1(NULL) else L1(pattern);
  L1(pattern_orDefault):
    st pattern = pattern_orDefault;
    all_files_isMissing = missing.0(all_files);
    if all_files_isMissing then L2(FALSE) else L2(all_files);
  L2(all_files_orDefault):
    st `all.files` = all_files_orDefault;
    full_names_isMissing = missing.0(full_names);
    if full_names_isMissing then L3(FALSE) else L3(full_names);
  L3(full_names_orDefault):
    st `full.names` = full_names_orDefault;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L4(FALSE) else L4(recursive);
  L4(recursive_orDefault):
    st recursive = recursive_orDefault;
    ignore_case_isMissing = missing.0(ignore_case);
    if ignore_case_isMissing then L5(FALSE) else L5(ignore_case);
  L5(ignore_case_orDefault):
    st `ignore.case` = ignore_case_orDefault;
    include_dirs_isMissing = missing.0(include_dirs);
    if include_dirs_isMissing then L6(FALSE) else L6(include_dirs);
  L6(include_dirs_orDefault):
    st `include.dirs` = include_dirs_orDefault;
    no___isMissing = missing.0(no__);
    if no___isMissing then L7(FALSE) else L7(no__);
  L7(no___orDefault):
    st `no..` = no___orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L8(r1):
    popenv;
    return r1;
  L9():
    path1 = ld path;
    check L11() else D0();
  L10():
    r = dyn base(<lang list.files(path, pattern, all.files, full.names, recursive, ignore.case, include.dirs, no..)>);
    goto L8(r);
  D0():
    deopt 2 [path1];
  L11():
    path2 = force? path1;
    checkMissing(path2);
    pattern1 = ld pattern;
    check L12() else D1();
  D1():
    deopt 4 [pattern1];
  L12():
    pattern2 = force? pattern1;
    checkMissing(pattern2);
    all_files1 = ld `all.files`;
    check L13() else D2();
  D2():
    deopt 6 [all_files1];
  L13():
    all_files2 = force? all_files1;
    checkMissing(all_files2);
    full_names1 = ld `full.names`;
    check L14() else D3();
  D3():
    deopt 8 [full_names1];
  L14():
    full_names2 = force? full_names1;
    checkMissing(full_names2);
    recursive1 = ld recursive;
    check L15() else D4();
  D4():
    deopt 10 [recursive1];
  L15():
    recursive2 = force? recursive1;
    checkMissing(recursive2);
    ignore_case1 = ld `ignore.case`;
    check L16() else D5();
  D5():
    deopt 12 [ignore_case1];
  L16():
    ignore_case2 = force? ignore_case1;
    checkMissing(ignore_case2);
    include_dirs1 = ld `include.dirs`;
    check L17() else D6();
  D6():
    deopt 14 [include_dirs1];
  L17():
    include_dirs2 = force? include_dirs1;
    checkMissing(include_dirs2);
    no__1 = ld `no..`;
    check L18() else D7();
  D7():
    deopt 16 [no__1];
  L18():
    no__2 = force? no__1;
    checkMissing(no__2);
    list_files = ldf `list.files` in base;
    r2 = dyn list_files(path2, pattern2, all_files2, full_names2, recursive2, ignore_case2, include_dirs2, no__2);
    check L19() else D8();
  D8():
    deopt 19 [r2];
  L19():
    goto L8(r2);
  }
}