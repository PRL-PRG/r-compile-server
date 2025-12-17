fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2045738975;
    st url_db_from_package_HTML_files = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2045738975(dir, installed) {
  (reg dir:*, reg installed:*) -+> V { var dir:*, var installed:*, reg installed_isMissing:L, reg installed_orDefault:*, reg installed1:*, reg installed2:V, reg c:L, reg r:V, reg file_path:cls, reg r1:V, reg Sys_glob:cls, reg file_path1:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg path:*, reg path1:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg installed3:*, reg installed4:V, reg c1:L, reg c3:V, reg file_exists:cls, reg file_path2:cls, reg dir3:*, reg dir4:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V, reg c4:L, reg c5:V, reg c7:L, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg files:*, reg files1:V, reg rfile:*, reg rfile1:V, reg c8:cls, reg r13:V, reg url_db_from_HTML_files:cls, reg dir5:*, reg dir6:V, reg p5:p(V +), reg files2:*, reg files3:V, reg p6:p(V +), reg r17:V |
    mkenv;
    st dir = dir;
    installed_isMissing = missing.0(installed);
    if installed_isMissing then L0(FALSE) else L0(installed);
  L0(installed_orDefault):
    st installed = installed_orDefault;
    installed1 = ld installed;
    check L7() else D0();
  D0():
    deopt 0 [installed1];
  L7():
    installed2 = force? installed1;
    checkMissing(installed2);
    c = `as.logical`(installed2);
    if c then L8() else L1();
  L1():
    file_path = ldf `file.path`;
    check L10() else D1();
  L2(r):
    st path = r;
    Sys_glob = ldf `Sys.glob`;
    check L12() else D3();
  L8():
    goto L2("doc");
  D1():
    deopt 5 [];
  D3():
    deopt 11 [];
  L10():
    r1 = dyn file_path("inst", "doc");
    check L11() else D2();
  L12():
    p2 = prom<V +>{
      file_path1 = ldf `file.path`;
      p = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      p1 = prom<V +>{
        path = ld path;
        path1 = force? path;
        checkMissing(path1);
        return path1;
      };
      r4 = dyn file_path1(p, p1, "*.html");
      return r4;
    };
    r6 = dyn Sys_glob(p2);
    check L13() else D4();
  D2():
    deopt 8 [r1];
  D4():
    deopt 13 [r6];
  L11():
    goto L2(r1);
  L13():
    st files = r6;
    installed3 = ld installed;
    check L14() else D5();
  D5():
    deopt 15 [installed3];
  L14():
    installed4 = force? installed3;
    checkMissing(installed4);
    c1 = `as.logical`(installed4);
    if c1 then L15() else L3(c1);
  L3(c3):
    c7 = `as.logical`(c3);
    if c7 then L19() else L4();
  L15():
    file_exists = ldf `file.exists`;
    check L16() else D6();
  D6():
    deopt 18 [c1];
  L4():
    goto L6();
  L6():
    url_db_from_HTML_files = ldf url_db_from_HTML_files;
    check L26() else D11();
  L16():
    p4 = prom<V +>{
      file_path2 = ldf `file.path`;
      p3 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r8 = dyn file_path2(p3, "README.html");
      st rfile = r8;
      invisible.0();
      return r8;
    };
    r10 = dyn file_exists(p4);
    check L17() else D7();
  L19():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  D7():
    deopt 20 [c1, r10];
  D11():
    deopt 34 [];
  L5(r12):
    st files = r12;
    goto L6();
  L17():
    c4 = `as.logical`(r10);
    c5 = `&&`(c1, c4);
    goto L3(c5);
  L20():
    files = ld files;
    check L22() else D8();
  L21():
    r11 = dyn base(<sym files>, <sym rfile>);
    goto L5(r11);
  L26():
    p5 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    p6 = prom<V +>{
      files2 = ld files;
      files3 = force? files2;
      checkMissing(files3);
      return files3;
    };
    r17 = dyn url_db_from_HTML_files[, files](p5, p6);
    check L27() else D12();
  D8():
    deopt 24 [files];
  D12():
    deopt 38 [r17];
  L22():
    files1 = force? files;
    checkMissing(files1);
    rfile = ld rfile;
    check L23() else D9();
  L27():
    popenv;
    return r17;
  D9():
    deopt 26 [rfile];
  L23():
    rfile1 = force? rfile;
    checkMissing(rfile1);
    c8 = ldf c in base;
    r13 = dyn c8(files1, rfile1);
    check L24() else D10();
  D10():
    deopt 29 [r13];
  L24():
    goto L5(r13);
  }
}