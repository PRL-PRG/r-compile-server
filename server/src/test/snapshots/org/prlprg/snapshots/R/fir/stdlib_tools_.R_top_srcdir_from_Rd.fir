fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.R_top_srcdir_from_Rd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg file_path_sans_ext:cls, reg system_file:cls, reg r:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg fetchRdDB:cls, reg filebase:*, reg filebase1:V, reg p1:p(V +), reg r6:V, reg attr:cls, reg r7:V, reg substr:cls, reg path:*, reg path1:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg path2:*, reg path3:V, reg nchar:cls, reg r11:V, reg r12:V, reg p3:p(V +), reg r14:V |
    mkenv;
    file_path_sans_ext = ldf file_path_sans_ext;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      system_file = ldf `system.file`;
      r = dyn system_file[, , package]("help", "tools.rdb", "tools");
      return r;
    };
    r2 = dyn file_path_sans_ext(p);
    check L2() else D1();
  D1():
    deopt 3 [r2];
  L2():
    st filebase = r2;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r4):
    st path = r4;
    substr = ldf substr;
    check L8() else D5();
  L3():
    fetchRdDB = ldf fetchRdDB;
    check L5() else D2();
  L4():
    r3 = dyn base(<lang fetchRdDB(filebase, "QC")>, "Rdfile");
    goto L0(r3);
  D2():
    deopt 8 [];
  D5():
    deopt 17 [];
  L5():
    p1 = prom<V +>{
      filebase = ld filebase;
      filebase1 = force? filebase;
      checkMissing(filebase1);
      return filebase1;
    };
    r6 = dyn fetchRdDB(p1, "QC");
    check L6() else D3();
  L8():
    p2 = prom<V +>{
      path = ld path;
      path1 = force? path;
      checkMissing(path1);
      return path1;
    };
    p3 = prom<V +>{
      sym1 = ldf nchar;
      base1 = ldf nchar in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r10):
      r12 = `-`(r10, 28);
      return r12;
    L1():
      path2 = ld path;
      path3 = force? path2;
      checkMissing(path3);
      nchar = ldf nchar in base;
      r11 = dyn nchar(path3, "chars", FALSE, NA_LGL);
      goto L0(r11);
    L2():
      r9 = dyn base1(<sym path>);
      goto L0(r9);
    };
    r14 = dyn substr(p2, 1, p3);
    check L9() else D6();
  D3():
    deopt 11 [r6];
  D6():
    deopt 21 [r14];
  L6():
    attr = ldf attr in base;
    r7 = dyn attr(r6, "Rdfile");
    check L7() else D4();
  L9():
    popenv;
    return r14;
  D4():
    deopt 14 [r7];
  L7():
    goto L0(r7);
  }
}