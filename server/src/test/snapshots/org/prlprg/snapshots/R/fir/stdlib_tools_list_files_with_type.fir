fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4186685880;
    st list_files_with_type = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4186685880(dir, type, `all.files`, `full.names`, OS_subdirs) {
  (reg dir:*, reg type:*, reg all_files:*, reg full_names:*, reg OS_subdirs:*) -+> V { var dir:*, var type:*, var `all.files`:*, reg all_files_isMissing:L, reg all_files_orDefault:*, var `full.names`:*, reg full_names_isMissing:L, reg full_names_orDefault:*, var OS_subdirs:*, reg OS_subdirs_isMissing:L, reg OS_subdirs_orDefault:*, reg _OStype:cls, reg r:V, reg p:p(V +), reg _make_file_exts:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r3:V, reg list_files_with_exts:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg exts:*, reg exts1:V, reg p3:p(V +), reg all_files1:*, reg all_files2:V, reg p4:p(V +), reg full_names1:*, reg full_names2:V, reg p5:p(V +), reg r8:V, reg _in_:cls, reg type3:*, reg type4:V, reg p6:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg c:cls, reg r12:V, reg p7:p(V +), reg r14:V, reg c1:L, reg OS_subdirs1:*, reg OS_subdirs2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p8:p(V +), reg os:*, reg os1:V, reg p9:p(V +), reg r17:V, reg dir_exists:cls, reg os_dir:*, reg os_dir1:V, reg p10:p(V +), reg r19:V, reg c3:L, reg list_files_with_exts1:cls, reg os_dir2:*, reg os_dir3:V, reg p11:p(V +), reg exts2:*, reg exts3:V, reg p12:p(V +), reg all_files3:*, reg all_files4:V, reg p13:p(V +), reg r23:V, reg file_path1:cls, reg full_names3:*, reg full_names4:V, reg c4:L, reg os_dir4:*, reg os_dir5:V, reg os2:*, reg os3:V, reg p14:p(V +), reg os_files:*, reg os_files1:V, reg p15:p(V +), reg r26:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg i9:I, reg r28:V, reg files:*, reg files1:V, reg os_files2:*, reg os_files3:V, reg c5:cls, reg r29:V, reg i10:I, reg _in_1:cls, reg type5:*, reg type6:V, reg p16:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r32:V, reg r33:V, reg c6:cls, reg r34:V, reg p17:p(V +), reg r36:V, reg c7:L, reg files2:*, reg files3:V, reg c8:L, reg files5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg grep:cls, reg basename:cls, reg files6:*, reg files7:V, reg p18:p(V +), reg r38:V, reg p19:p(V +), reg r40:V, reg __:cls, reg r41:V, reg _in_2:cls, reg type7:*, reg type8:V, reg p20:p(V +), reg r43:V, reg c9:L, reg files8:*, reg files9:V, reg c10:L, reg files11:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg grep1:cls, reg basename1:cls, reg files12:*, reg files13:V, reg p21:p(V +), reg r45:V, reg p22:p(V +), reg r47:V, reg __1:cls, reg r48:V, reg files14:*, reg files15:V |
    mkenv;
    st dir = dir;
    st type = type;
    all_files_isMissing = missing.0(all_files);
    if all_files_isMissing then L0(FALSE) else L0(all_files);
  L0(all_files_orDefault):
    st `all.files` = all_files_orDefault;
    full_names_isMissing = missing.0(full_names);
    if full_names_isMissing then L1(TRUE) else L1(full_names);
  L1(full_names_orDefault):
    st `full.names` = full_names_orDefault;
    OS_subdirs_isMissing = missing.0(OS_subdirs);
    if OS_subdirs_isMissing then L2() else L3(OS_subdirs);
  L2():
    p = prom<V +>{
      _OStype = ldf `.OStype`;
      r = dyn _OStype();
      return r;
    };
    goto L3(p);
  L3(OS_subdirs_orDefault):
    st OS_subdirs = OS_subdirs_orDefault;
    _make_file_exts = ldf `.make_file_exts`;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r3 = dyn _make_file_exts(p1);
    check L18() else D1();
  D1():
    deopt 3 [r3];
  L18():
    st exts = r3;
    list_files_with_exts = ldf list_files_with_exts;
    check L19() else D2();
  D2():
    deopt 6 [];
  L19():
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p3 = prom<V +>{
      exts = ld exts;
      exts1 = force? exts;
      checkMissing(exts1);
      return exts1;
    };
    p4 = prom<V +>{
      all_files1 = ld `all.files`;
      all_files2 = force? all_files1;
      checkMissing(all_files2);
      return all_files2;
    };
    p5 = prom<V +>{
      full_names1 = ld `full.names`;
      full_names2 = force? full_names1;
      checkMissing(full_names2);
      return full_names2;
    };
    r8 = dyn list_files_with_exts[, , `all.files`, `full.names`](p2, p3, p4, p5);
    check L20() else D3();
  D3():
    deopt 13 [r8];
  L20():
    st files = r8;
    _in_ = ldf `%in%`;
    check L21() else D4();
  D4():
    deopt 16 [];
  L21():
    p6 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    p7 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r11):
      return r11;
    L1():
      c = ldf c in base;
      r12 = dyn c("code", "docs");
      goto L0(r12);
    L2():
      r10 = dyn base("code", "docs");
      goto L0(r10);
    };
    r14 = dyn _in_(p6, p7);
    check L22() else D5();
  D5():
    deopt 19 [r14];
  L22():
    c1 = `as.logical`(r14);
    if c1 then L23() else L4();
  L4():
    goto L10();
  L10():
    _in_1 = ldf `%in%`;
    check L42() else D18();
  L23():
    OS_subdirs1 = ld OS_subdirs;
    check L24() else D6();
  D6():
    deopt 20 [OS_subdirs1];
  D18():
    deopt 65 [];
  L24():
    OS_subdirs2 = force? OS_subdirs1;
    checkMissing(OS_subdirs2);
    s = toForSeq(OS_subdirs2);
    l = length(s);
    i = 0;
    goto L5(i);
  L42():
    p16 = prom<V +>{
      type5 = ld type;
      type6 = force? type5;
      checkMissing(type6);
      return type6;
    };
    p17 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      c6 = ldf c in base;
      r34 = dyn c6("code", "docs");
      goto L0(r34);
    L2():
      r32 = dyn base2("code", "docs");
      goto L0(r32);
    };
    r36 = dyn _in_1(p16, p17);
    check L43() else D19();
  D19():
    deopt 68 [r36];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L25() else L9();
  L43():
    c7 = `as.logical`(r36);
    if c7 then L44() else L11();
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st os = x;
    file_path = ldf `file.path`;
    check L26() else D7();
  L11():
    goto L13();
  L13():
    _in_2 = ldf `%in%`;
    check L52() else D23();
  L25():
    goto L10();
  L44():
    files2 = ld files;
    check L45() else D20();
  D7():
    deopt 23 [i2];
  D20():
    deopt 69 [files2];
  D23():
    deopt 81 [];
  L26():
    p8 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    p9 = prom<V +>{
      os = ld os;
      os1 = force? os;
      checkMissing(os1);
      return os1;
    };
    r17 = dyn file_path(p8, p9);
    check L27() else D8();
  L45():
    files3 = force? files2;
    checkMissing(files3);
    c8 = `is.object`(files3);
    if c8 then L46() else L47(files3);
  L52():
    p20 = prom<V +>{
      type7 = ld type;
      type8 = force? type7;
      checkMissing(type8);
      return type8;
    };
    r43 = dyn _in_2(p20, "demo");
    check L53() else D24();
  D8():
    deopt 26 [i2, r17];
  D24():
    deopt 84 [r43];
  L12(dx1):
    st files = dx1;
    goto L13();
  L27():
    st os_dir = r17;
    dir_exists = ldf `dir.exists`;
    check L28() else D9();
  L46():
    dr = tryDispatchBuiltin.1("[", files3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L48() else L47(dr);
  L47(files5):
    grep = ldf grep;
    check L49() else D21();
  L53():
    c9 = `as.logical`(r43);
    if c9 then L54() else L14();
  D9():
    deopt 29 [i2];
  D21():
    deopt 72 [files5];
  L14():
    goto L16();
  L16():
    files14 = ld files;
    check L62() else D28();
  L28():
    p10 = prom<V +>{
      os_dir = ld os_dir;
      os_dir1 = force? os_dir;
      checkMissing(os_dir1);
      return os_dir1;
    };
    r19 = dyn dir_exists(p10);
    check L29() else D10();
  L48():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L49():
    p19 = prom<V +>{
      basename = ldf basename;
      p18 = prom<V +>{
        files6 = ld files;
        files7 = force? files6;
        checkMissing(files7);
        return files7;
      };
      r38 = dyn basename(p18);
      return r38;
    };
    r40 = dyn grep("^[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789]", p19);
    check L50() else D22();
  L54():
    files8 = ld files;
    check L55() else D25();
  D10():
    deopt 31 [i2, r19];
  D22():
    deopt 75 [files5, r40];
  D25():
    deopt 85 [files8];
  D28():
    deopt 96 [files14];
  L29():
    c3 = `as.logical`(r19);
    if c3 then L30() else L6();
  L50():
    __ = ldf `[` in base;
    r41 = dyn __(files5, r40);
    goto L12(r41);
  L55():
    files9 = force? files8;
    checkMissing(files9);
    c10 = `is.object`(files9);
    if c10 then L56() else L57(files9);
  L62():
    files15 = force? files14;
    checkMissing(files15);
    popenv;
    return files15;
  L6():
    goto L8(i2);
  L8(i10):
    goto L5(i10);
  L15(dx4):
    st files = dx4;
    goto L16();
  L30():
    list_files_with_exts1 = ldf list_files_with_exts;
    check L31() else D11();
  L56():
    dr2 = tryDispatchBuiltin.1("[", files9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L58() else L57(dr2);
  L57(files11):
    grep1 = ldf grep;
    check L59() else D26();
  D11():
    deopt 33 [i2];
  D26():
    deopt 88 [files11];
  L31():
    p11 = prom<V +>{
      os_dir2 = ld os_dir;
      os_dir3 = force? os_dir2;
      checkMissing(os_dir3);
      return os_dir3;
    };
    p12 = prom<V +>{
      exts2 = ld exts;
      exts3 = force? exts2;
      checkMissing(exts3);
      return exts3;
    };
    p13 = prom<V +>{
      all_files3 = ld `all.files`;
      all_files4 = force? all_files3;
      checkMissing(all_files4);
      return all_files4;
    };
    r23 = dyn list_files_with_exts1[, , `all.files`, `full.names`](p11, p12, p13, FALSE);
    check L32() else D12();
  L58():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx3);
  L59():
    p22 = prom<V +>{
      basename1 = ldf basename;
      p21 = prom<V +>{
        files12 = ld files;
        files13 = force? files12;
        checkMissing(files13);
        return files13;
      };
      r45 = dyn basename1(p21);
      return r45;
    };
    r47 = dyn grep1("^[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]", p22);
    check L60() else D27();
  D12():
    deopt 40 [i2, r23];
  D27():
    deopt 91 [files11, r47];
  L32():
    st os_files = r23;
    file_path1 = ldf `file.path`;
    check L33() else D13();
  L60():
    __1 = ldf `[` in base;
    r48 = dyn __1(files11, r47);
    goto L15(r48);
  D13():
    deopt 43 [i2];
  L33():
    p14 = prom<V +>{
      full_names3 = ld `full.names`;
      full_names4 = force? full_names3;
      checkMissing(full_names4);
      c4 = `as.logical`(full_names4);
      if c4 then L1() else L0();
    L0():
      os2 = ld os;
      os3 = force? os2;
      checkMissing(os3);
      return os3;
    L1():
      os_dir4 = ld os_dir;
      os_dir5 = force? os_dir4;
      checkMissing(os_dir5);
      return os_dir5;
    };
    p15 = prom<V +>{
      os_files = ld os_files;
      os_files1 = force? os_files;
      checkMissing(os_files1);
      return os_files1;
    };
    r26 = dyn file_path1(p14, p15);
    check L34() else D14();
  D14():
    deopt 46 [i2, r26];
  L34():
    st os_files = r26;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L7(i9, r28):
    st files = r28;
    goto L8(i9);
  L35():
    files = ld files;
    check L37() else D15();
  L36():
    r27 = dyn base1(<sym files>, <sym os_files>);
    goto L7(i2, r27);
  D15():
    deopt 50 [i2, files];
  L37():
    files1 = force? files;
    checkMissing(files1);
    os_files2 = ld os_files;
    check L38() else D16();
  D16():
    deopt 52 [i2, os_files2];
  L38():
    os_files3 = force? os_files2;
    checkMissing(os_files3);
    c5 = ldf c in base;
    r29 = dyn c5(files1, os_files3);
    check L39() else D17();
  D17():
    deopt 55 [i2, r29];
  L39():
    goto L7(i2, r29);
  }
}