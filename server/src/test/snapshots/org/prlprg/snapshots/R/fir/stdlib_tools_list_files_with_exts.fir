fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1333577761;
    st list_files_with_exts = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1333577761(dir, exts, `all.files`, `full.names`) {
  (reg dir:*, reg exts:*, reg all_files:*, reg full_names:*) -+> V { var dir:*, var exts:*, var `all.files`:*, reg all_files_isMissing:L, reg all_files_orDefault:*, var `full.names`:*, reg full_names_isMissing:L, reg full_names_orDefault:*, reg list_files:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg all_files1:*, reg all_files2:V, reg p1:p(V +), reg r2:V, reg paste0:cls, reg paste1:cls, reg exts1:*, reg exts2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg grep:cls, reg patt:*, reg patt1:V, reg p4:p(V +), reg files:*, reg files1:V, reg p5:p(V +), reg r9:V, reg full_names1:*, reg full_names2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg files2:*, reg files3:V, reg length:cls, reg r12:V, reg c1:L, reg file_path:cls, reg dir3:*, reg dir4:V, reg p6:p(V +), reg files4:*, reg files5:V, reg p7:p(V +), reg r15:V, reg r16:V, reg character:cls, reg r17:V, reg files6:*, reg files7:V |
    mkenv;
    st dir = dir;
    st exts = exts;
    all_files_isMissing = missing.0(all_files);
    if all_files_isMissing then L0(FALSE) else L0(all_files);
  L0(all_files_orDefault):
    st `all.files` = all_files_orDefault;
    full_names_isMissing = missing.0(full_names);
    if full_names_isMissing then L1(TRUE) else L1(full_names);
  L1(full_names_orDefault):
    st `full.names` = full_names_orDefault;
    list_files = ldf `list.files`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p1 = prom<V +>{
      all_files1 = ld `all.files`;
      all_files2 = force? all_files1;
      checkMissing(all_files2);
      return all_files2;
    };
    r2 = dyn list_files[, `all.files`](p, p1);
    check L8() else D1();
  D1():
    deopt 5 [r2];
  L8():
    st files = r2;
    paste0 = ldf paste0;
    check L9() else D2();
  D2():
    deopt 8 [];
  L9():
    p3 = prom<V +>{
      paste1 = ldf paste;
      p2 = prom<V +>{
        exts1 = ld exts;
        exts2 = force? exts1;
        checkMissing(exts2);
        return exts2;
      };
      r4 = dyn paste1[, collapse](p2, "|");
      return r4;
    };
    r6 = dyn paste0("\\.(", p3, ")$");
    check L10() else D3();
  D3():
    deopt 12 [r6];
  L10():
    st patt = r6;
    grep = ldf grep;
    check L11() else D4();
  D4():
    deopt 15 [];
  L11():
    p4 = prom<V +>{
      patt = ld patt;
      patt1 = force? patt;
      checkMissing(patt1);
      return patt1;
    };
    p5 = prom<V +>{
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      return files1;
    };
    r9 = dyn grep[, , value](p4, p5, TRUE);
    check L12() else D5();
  D5():
    deopt 20 [r9];
  L12():
    st files = r9;
    full_names1 = ld `full.names`;
    check L13() else D6();
  D6():
    deopt 22 [full_names1];
  L13():
    full_names2 = force? full_names1;
    checkMissing(full_names2);
    c = `as.logical`(full_names2);
    if c then L14() else L2();
  L2():
    goto L6();
  L6():
    files6 = ld files;
    check L26() else D13();
  L14():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  D13():
    deopt 41 [files6];
  L3(r11):
    c1 = `as.logical`(r11);
    if c1 then L19() else L4();
  L15():
    files2 = ld files;
    check L17() else D7();
  L16():
    r10 = dyn base(<sym files>);
    goto L3(r10);
  L26():
    files7 = force? files6;
    checkMissing(files7);
    popenv;
    return files7;
  D7():
    deopt 26 [files2];
  L4():
    character = ldf character;
    check L23() else D11();
  L5(r16):
    st files = r16;
    goto L6();
  L17():
    files3 = force? files2;
    checkMissing(files3);
    length = ldf length in base;
    r12 = dyn length(files3);
    check L18() else D8();
  L19():
    file_path = ldf `file.path`;
    check L20() else D9();
  D8():
    deopt 29 [r12];
  D9():
    deopt 31 [];
  D11():
    deopt 36 [];
  L18():
    goto L3(r12);
  L20():
    p6 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    p7 = prom<V +>{
      files4 = ld files;
      files5 = force? files4;
      checkMissing(files5);
      return files5;
    };
    r15 = dyn file_path(p6, p7);
    check L21() else D10();
  L23():
    r17 = dyn character();
    check L24() else D12();
  D10():
    deopt 34 [r15];
  D12():
    deopt 37 [r17];
  L21():
    goto L5(r15);
  L24():
    goto L5(r17);
  }
}