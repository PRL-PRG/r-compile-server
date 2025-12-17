fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3132813264;
    st aspell_R_Rd_files = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3132813264(which, dir, drop, program, dictionaries) {
  (reg which:*, reg dir:*, reg drop:*, reg program:*, reg dictionaries:*) -+> V { var which:*, reg which_isMissing:L, reg which_orDefault:*, var dir:*, reg dir_isMissing:L, reg dir_orDefault:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var program:*, reg program_isMissing:L, reg program_orDefault:*, var dictionaries:*, reg dictionaries_isMissing:L, reg dictionaries_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg aspell_dictionaries_R:*, reg aspell_dictionaries_R1:V, reg c1:cls, reg r6:V, reg p1:p(V +), reg character:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg dir1:*, reg dir2:V, reg c2:V, reg c3:L, reg ___:cls, reg r11:V, reg r12:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg which1:*, reg which2:V, reg c4:V, reg c5:L, reg ___1:cls, reg r17:V, reg r18:cls, reg r19:V, reg c6:L, reg r21:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p2:p(V +), reg r26:V, reg file_path1:cls, reg dir5:*, reg dir6:V, reg p3:p(V +), reg r28:V, reg c7:cls, reg r29:V, reg files:*, reg files1:V, reg c8:L, reg files3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg file_test:cls, reg files4:*, reg files5:V, reg p4:p(V +), reg r31:V, reg __:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg files6:*, reg files7:V, reg unlist:cls, reg lapply:cls, reg file_path2:cls, reg dir7:*, reg dir8:V, reg p5:p(V +), reg which3:*, reg which4:V, reg p6:p(V +), reg r37:V, reg p7:p(V +), reg __1:cls, reg r39:V, reg p8:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg c9:cls, reg r43:V, reg p9:p(V +), reg r45:V, reg p10:p(V +), reg r47:V, reg c10:cls, reg r48:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg r50:V, reg sprintf:cls, reg paste:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg c11:cls, reg r53:V, reg p11:p(V +), reg r55:V, reg p12:p(V +), reg r57:V, reg sprintf1:cls, reg paste1:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg r59:V, reg c12:cls, reg r60:V, reg p13:p(V +), reg r62:V, reg p14:p(V +), reg r64:V, reg c13:cls, reg r65:V, reg aspell_find_program:cls, reg program1:*, reg program2:V, reg p15:p(V +), reg r67:V, reg aspell:cls, reg files8:*, reg files9:V, reg p16:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r69:V, reg r70:V, reg drop1:*, reg drop2:V, reg ignore:*, reg ignore1:V, reg list:cls, reg r71:V, reg p17:p(V +), reg aspell_control_R_Rd_files:*, reg aspell_control_R_Rd_files1:V, reg c14:L, reg aspell_control_R_Rd_files3:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r73:V, reg aspell_control_R_Rd_files6:V, reg r74:V, reg program3:*, reg program4:V, reg names:cls, reg r75:V, reg __2:cls, reg r76:V, reg p18:p(V +), reg program5:*, reg program6:V, reg p19:p(V +), reg dictionaries1:*, reg dictionaries2:V, reg p20:p(V +), reg r80:V |
    mkenv;
    which_isMissing = missing.0(which);
    if which_isMissing then L0(NULL) else L0(which);
  L0(which_orDefault):
    st which = which_orDefault;
    dir_isMissing = missing.0(dir);
    if dir_isMissing then L1(NULL) else L1(dir);
  L1(dir_orDefault):
    st dir = dir_orDefault;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L2() else L3(drop);
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("\\abbr", "\\acronym", "\\author", "\\references");
      goto L0(r2);
    L2():
      r = dyn base("\\abbr", "\\acronym", "\\author", "\\references");
      goto L0(r);
    };
    goto L3(p);
  L3(drop_orDefault):
    st drop = drop_orDefault;
    program_isMissing = missing.0(program);
    if program_isMissing then L4(NULL) else L4(program);
  L4(program_orDefault):
    st program = program_orDefault;
    dictionaries_isMissing = missing.0(dictionaries);
    if dictionaries_isMissing then L5() else L6(dictionaries);
  L5():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      aspell_dictionaries_R = ld aspell_dictionaries_R;
      aspell_dictionaries_R1 = force? aspell_dictionaries_R;
      checkMissing(aspell_dictionaries_R1);
      c1 = ldf c in base;
      r6 = dyn c1(aspell_dictionaries_R1, "R_Rd_files");
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym aspell_dictionaries_R>, "R_Rd_files");
      goto L0(r4);
    };
    goto L6(p1);
  L6(dictionaries_orDefault):
    st dictionaries = dictionaries_orDefault;
    character = ldf character;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    r8 = dyn character();
    check L18() else D1();
  D1():
    deopt 2 [r8];
  L18():
    st files = r8;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L7(r10):
    c3 = `as.logical`(r10);
    if c3 then L22() else L8();
  L19():
    dir1 = ld dir;
    check L21() else D2();
  L20():
    r9 = dyn base2(<sym dir>);
    goto L7(r9);
  D2():
    deopt 5 [dir1];
  L8():
    goto L9();
  L9():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L21():
    dir2 = force? dir1;
    checkMissing(dir2);
    c2 = `==`(dir2, NULL);
    goto L7(c2);
  L22():
    ___ = ldf `:::`;
    check L23() else D3();
  D3():
    deopt 9 [];
  L10(r16):
    c5 = `as.logical`(r16);
    if c5 then L30() else L11();
  L23():
    r11 = dyn ___("tools", ".R_top_srcdir_from_Rd");
    check L24() else D4();
  L27():
    which1 = ld which;
    check L29() else D6();
  L28():
    r15 = dyn base3(<sym which>);
    goto L10(r15);
  D4():
    deopt 12 [r11];
  D6():
    deopt 19 [which1];
  L11():
    goto L14();
  L14():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L52() else L53();
  L24():
    checkFun.0(r11);
    r12 = r11 as cls;
    r13 = dyn r12();
    check L25() else D5();
  L29():
    which2 = force? which1;
    checkMissing(which2);
    c4 = `==`(which2, NULL);
    goto L10(c4);
  L30():
    ___1 = ldf `:::`;
    check L31() else D7();
  D5():
    deopt 14 [r13];
  D7():
    deopt 23 [];
  L15(r34):
    st files = r34;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L58() else L59();
  L25():
    st dir = r13;
    goto L9();
  L31():
    r17 = dyn ___1("tools", ".get_standard_package_names");
    check L32() else D8();
  L52():
    files6 = ld files;
    check L54() else D18();
  L53():
    r33 = dyn base5(<sym files>, <lang unlist(lapply(file.path(dir, "src", "library", which, "man"), `::`(tools, list_files_with_type), "docs", OS_subdirs=c("unix", "windows")), use.names=FALSE)>);
    goto L15(r33);
  D8():
    deopt 26 [r17];
  D18():
    deopt 62 [files6];
  L16(r50):
    st ignore = r50;
    aspell_find_program = ldf aspell_find_program;
    check L65() else D27();
  L32():
    checkFun.0(r17);
    r18 = r17 as cls;
    r19 = dyn r18();
    check L33() else D9();
  L54():
    files7 = force? files6;
    checkMissing(files7);
    unlist = ldf unlist;
    check L55() else D19();
  L58():
    sprintf = ldf sprintf;
    check L60() else D22();
  L59():
    r49 = dyn base7(<lang sprintf("\\b(%s)\\b", paste(c("a priori", "et seq", "post-mortem", "Inter alia", "inter alia", "2nd", "4th", "20th", "100th", "equi-", "intra-", "mis-", "Pre-", "pre-", "un-", "-ary", "-ness"), collapse="|"))>, <lang sprintf("(%s)\\b", paste(c("\\(De\\)", "\\(de\\)", "\\(Un\\)", "\\(un\\)", "-th", "'th"), collapse="|"))>);
    goto L16(r49);
  D9():
    deopt 28 [r19];
  D19():
    deopt 65 [];
  D22():
    deopt 76 [];
  D27():
    deopt 89 [];
  L33():
    c6 = `is.object`(r19);
    if c6 then L35() else L36(r19);
  L55():
    p10 = prom<V +>{
      lapply = ldf lapply;
      p7 = prom<V +>{
        file_path2 = ldf `file.path`;
        p5 = prom<V +>{
          dir7 = ld dir;
          dir8 = force? dir7;
          checkMissing(dir8);
          return dir8;
        };
        p6 = prom<V +>{
          which3 = ld which;
          which4 = force? which3;
          checkMissing(which4);
          return which4;
        };
        r37 = dyn file_path2(p5, "src", "library", p6, "man");
        return r37;
      };
      p8 = prom<V +>{
        __1 = ldf `::`;
        r39 = dyn __1("tools", "list_files_with_type");
        return r39;
      };
      p9 = prom<V +>{
        sym6 = ldf c;
        base6 = ldf c in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r42):
        return r42;
      L1():
        c9 = ldf c in base;
        r43 = dyn c9("unix", "windows");
        goto L0(r43);
      L2():
        r41 = dyn base6("unix", "windows");
        goto L0(r41);
      };
      r45 = dyn lapply[, , , OS_subdirs](p7, p8, "docs", p9);
      return r45;
    };
    r47 = dyn unlist[, `use.names`](p10, FALSE);
    check L56() else D20();
  L60():
    p12 = prom<V +>{
      paste = ldf paste;
      p11 = prom<V +>{
        sym8 = ldf c;
        base8 = ldf c in base;
        guard8 = `==`.4(sym8, base8);
        if guard8 then L1() else L2();
      L0(r52):
        return r52;
      L1():
        c11 = ldf c in base;
        r53 = dyn c11("a priori", "et seq", "post-mortem", "Inter alia", "inter alia", "2nd", "4th", "20th", "100th", "equi-", "intra-", "mis-", "Pre-", "pre-", "un-", "-ary", "-ness");
        goto L0(r53);
      L2():
        r51 = dyn base8("a priori", "et seq", "post-mortem", "Inter alia", "inter alia", "2nd", "4th", "20th", "100th", "equi-", "intra-", "mis-", "Pre-", "pre-", "un-", "-ary", "-ness");
        goto L0(r51);
      };
      r55 = dyn paste[, collapse](p11, "|");
      return r55;
    };
    r57 = dyn sprintf("\\b(%s)\\b", p12);
    check L61() else D23();
  L65():
    p15 = prom<V +>{
      program1 = ld program;
      program2 = force? program1;
      checkMissing(program2);
      return program2;
    };
    r67 = dyn aspell_find_program(p15);
    check L66() else D28();
  D20():
    deopt 69 [r47];
  D23():
    deopt 79 [r57];
  D28():
    deopt 91 [r67];
  L34(dx1):
    st which = dx1;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L38() else L39();
  L35():
    dr = tryDispatchBuiltin.1("$", r19);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(dr);
  L36(r21):
    r22 = `$`(r21, <sym base>);
    goto L34(r22);
  L56():
    c10 = ldf c in base;
    r48 = dyn c10(files7, r47);
    check L57() else D21();
  L61():
    sprintf1 = ldf sprintf;
    check L62() else D24();
  L66():
    st program = r67;
    aspell = ldf aspell;
    check L67() else D29();
  D21():
    deopt 71 [r48];
  D24():
    deopt 81 [];
  D29():
    deopt 94 [];
  L12(r24):
    st files = r24;
    files = ld files;
    check L45() else D15();
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L34(dx);
  L38():
    file_path = ldf `file.path`;
    check L40() else D10();
  L39():
    r23 = dyn base4(<lang file.path(dir, "doc", "NEWS.Rd")>, <lang file.path(dir, "src", "gnuwin32", "CHANGES.Rd")>);
    goto L12(r23);
  L57():
    goto L15(r48);
  L62():
    p14 = prom<V +>{
      paste1 = ldf paste;
      p13 = prom<V +>{
        sym9 = ldf c;
        base9 = ldf c in base;
        guard9 = `==`.4(sym9, base9);
        if guard9 then L1() else L2();
      L0(r59):
        return r59;
      L1():
        c12 = ldf c in base;
        r60 = dyn c12("\\(De\\)", "\\(de\\)", "\\(Un\\)", "\\(un\\)", "-th", "'th");
        goto L0(r60);
      L2():
        r58 = dyn base9("\\(De\\)", "\\(de\\)", "\\(Un\\)", "\\(un\\)", "-th", "'th");
        goto L0(r58);
      };
      r62 = dyn paste1[, collapse](p13, "|");
      return r62;
    };
    r64 = dyn sprintf1("(%s)\\b", p14);
    check L63() else D25();
  L67():
    p16 = prom<V +>{
      files8 = ld files;
      files9 = force? files8;
      checkMissing(files9);
      return files9;
    };
    p17 = prom<V +>{
      sym10 = ldf list;
      base10 = ldf list in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r70):
      return r70;
    L1():
      drop1 = ld drop;
      drop2 = force? drop1;
      checkMissing(drop2);
      ignore = ld ignore;
      ignore1 = force? ignore;
      checkMissing(ignore1);
      list = ldf list in base;
      r71 = dyn list("Rd", drop2, ignore1);
      goto L0(r71);
    L2():
      r69 = dyn base10[, drop, ignore]("Rd", <sym drop>, <sym ignore>);
      goto L0(r69);
    };
    p18 = prom<V +>{
      aspell_control_R_Rd_files = ld aspell_control_R_Rd_files;
      aspell_control_R_Rd_files1 = force? aspell_control_R_Rd_files;
      checkMissing(aspell_control_R_Rd_files1);
      c14 = `is.object`(aspell_control_R_Rd_files1);
      if c14 then L2() else L3(aspell_control_R_Rd_files1);
    L0(dx6):
      return dx6;
    L2():
      dr4 = tryDispatchBuiltin.1("[[", aspell_control_R_Rd_files1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(aspell_control_R_Rd_files3):
      sym11 = ldf names;
      base11 = ldf names in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L5() else L6();
    L1(aspell_control_R_Rd_files6, r74):
      __2 = ldf `[[` in base;
      r76 = dyn __2(aspell_control_R_Rd_files6, r74);
      goto L0(r76);
    L4():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    L5():
      program3 = ld program;
      program4 = force? program3;
      checkMissing(program4);
      names = ldf names in base;
      r75 = dyn names(program4);
      goto L1(aspell_control_R_Rd_files3, r75);
    L6():
      r73 = dyn base11(<sym program>);
      goto L1(aspell_control_R_Rd_files3, r73);
    };
    p19 = prom<V +>{
      program5 = ld program;
      program6 = force? program5;
      checkMissing(program6);
      return program6;
    };
    p20 = prom<V +>{
      dictionaries1 = ld dictionaries;
      dictionaries2 = force? dictionaries1;
      checkMissing(dictionaries2);
      return dictionaries2;
    };
    r80 = dyn aspell[, filter, control, program, dictionaries](p16, p17, p18, p19, p20);
    check L68() else D30();
  D10():
    deopt 34 [];
  D15():
    deopt 49 [files];
  D25():
    deopt 84 [r64];
  D30():
    deopt 104 [r80];
  L40():
    p2 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r26 = dyn file_path(p2, "doc", "NEWS.Rd");
    check L41() else D11();
  L45():
    files1 = force? files;
    checkMissing(files1);
    c8 = `is.object`(files1);
    if c8 then L46() else L47(files1);
  L63():
    c13 = ldf c in base;
    r65 = dyn c13(r57, r64);
    check L64() else D26();
  L68():
    popenv;
    return r80;
  D11():
    deopt 38 [r26];
  D26():
    deopt 86 [r65];
  L13(dx3):
    st files = dx3;
    goto L14();
  L41():
    file_path1 = ldf `file.path`;
    check L42() else D12();
  L46():
    dr2 = tryDispatchBuiltin.1("[", files1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L48() else L47(dr2);
  L47(files3):
    file_test = ldf file_test;
    check L49() else D16();
  L64():
    goto L16(r65);
  D12():
    deopt 40 [];
  D16():
    deopt 52 [files3];
  L42():
    p3 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r28 = dyn file_path1(p3, "src", "gnuwin32", "CHANGES.Rd");
    check L43() else D13();
  L48():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L49():
    p4 = prom<V +>{
      files4 = ld files;
      files5 = force? files4;
      checkMissing(files5);
      return files5;
    };
    r31 = dyn file_test("-f", p4);
    check L50() else D17();
  D13():
    deopt 45 [r28];
  D17():
    deopt 55 [files3, r31];
  L43():
    c7 = ldf c in base;
    r29 = dyn c7(r26, r28);
    check L44() else D14();
  L50():
    __ = ldf `[` in base;
    r32 = dyn __(files3, r31);
    goto L13(r32);
  D14():
    deopt 47 [r29];
  L44():
    goto L12(r29);
  }
}