fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner913736929;
    st aspell_R_R_files = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner913736929(which, dir, ignore, program, dictionaries) {
  (reg which:*, reg dir:*, reg ignore:*, reg program:*, reg dictionaries:*) -+> V { var which:*, reg which_isMissing:L, reg which_orDefault:*, var dir:*, reg dir_isMissing:L, reg dir_orDefault:*, var ignore:*, reg ignore_isMissing:L, reg ignore_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var program:*, reg program_isMissing:L, reg program_orDefault:*, var dictionaries:*, reg dictionaries_isMissing:L, reg dictionaries_orDefault:*, reg aspell_dictionaries_R:*, reg aspell_dictionaries_R1:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg dir1:*, reg dir2:V, reg c1:V, reg c2:L, reg ___:cls, reg r7:V, reg r8:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg which1:*, reg which2:V, reg c3:V, reg c4:L, reg ___1:cls, reg r13:V, reg r14:cls, reg r15:V, reg c5:L, reg r17:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V, reg unlist:cls, reg lapply:cls, reg file_path:cls, reg dir3:*, reg dir4:V, reg p2:p(V +), reg which3:*, reg which4:V, reg p3:p(V +), reg r21:V, reg p4:p(V +), reg __:cls, reg r23:V, reg p5:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg c6:cls, reg r27:V, reg p6:p(V +), reg r29:V, reg p7:p(V +), reg r31:V, reg aspell_find_program:cls, reg program1:*, reg program2:V, reg p8:p(V +), reg r33:V, reg aspell:cls, reg files:*, reg files1:V, reg p9:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg ignore1:*, reg ignore2:V, reg list:cls, reg r37:V, reg p10:p(V +), reg aspell_control_R_Rd_files:*, reg aspell_control_R_Rd_files1:V, reg c7:L, reg aspell_control_R_Rd_files3:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg aspell_control_R_Rd_files6:V, reg r40:V, reg program3:*, reg program4:V, reg names:cls, reg r41:V, reg __1:cls, reg r42:V, reg p11:p(V +), reg program5:*, reg program6:V, reg p12:p(V +), reg dictionaries1:*, reg dictionaries2:V, reg p13:p(V +), reg r46:V |
    mkenv;
    which_isMissing = missing.0(which);
    if which_isMissing then L0(NULL) else L0(which);
  L0(which_orDefault):
    st which = which_orDefault;
    dir_isMissing = missing.0(dir);
    if dir_isMissing then L1(NULL) else L1(dir);
  L1(dir_orDefault):
    st dir = dir_orDefault;
    ignore_isMissing = missing.0(ignore);
    if ignore_isMissing then L2() else L3(ignore);
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
      r2 = dyn c("[ \t]'[^']*'[ \t[:punct:]]", "[ \t][[:alnum:]_.]*\\(\\)[ \t[:punct:]]");
      goto L0(r2);
    L2():
      r = dyn base("[ \t]'[^']*'[ \t[:punct:]]", "[ \t][[:alnum:]_.]*\\(\\)[ \t[:punct:]]");
      goto L0(r);
    };
    goto L3(p);
  L3(ignore_orDefault):
    st ignore = ignore_orDefault;
    program_isMissing = missing.0(program);
    if program_isMissing then L4(NULL) else L4(program);
  L4(program_orDefault):
    st program = program_orDefault;
    dictionaries_isMissing = missing.0(dictionaries);
    if dictionaries_isMissing then L5() else L6(dictionaries);
  L5():
    p1 = prom<V +>{
      aspell_dictionaries_R = ld aspell_dictionaries_R;
      aspell_dictionaries_R1 = force? aspell_dictionaries_R;
      checkMissing(aspell_dictionaries_R1);
      return aspell_dictionaries_R1;
    };
    goto L6(p1);
  L6(dictionaries_orDefault):
    st dictionaries = dictionaries_orDefault;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L7(r6):
    c2 = `as.logical`(r6);
    if c2 then L16() else L8();
  L13():
    dir1 = ld dir;
    check L15() else D0();
  L14():
    r5 = dyn base1(<sym dir>);
    goto L7(r5);
  D0():
    deopt 1 [dir1];
  L8():
    goto L9();
  L9():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L15():
    dir2 = force? dir1;
    checkMissing(dir2);
    c1 = `==`(dir2, NULL);
    goto L7(c1);
  L16():
    ___ = ldf `:::`;
    check L17() else D1();
  D1():
    deopt 5 [];
  L10(r12):
    c4 = `as.logical`(r12);
    if c4 then L24() else L11();
  L17():
    r7 = dyn ___("tools", ".R_top_srcdir_from_Rd");
    check L18() else D2();
  L21():
    which1 = ld which;
    check L23() else D4();
  L22():
    r11 = dyn base2(<sym which>);
    goto L10(r11);
  D2():
    deopt 8 [r7];
  D4():
    deopt 15 [which1];
  L11():
    goto L12();
  L12():
    unlist = ldf unlist;
    check L33() else D8();
  L18():
    checkFun.0(r7);
    r8 = r7 as cls;
    r9 = dyn r8();
    check L19() else D3();
  L23():
    which2 = force? which1;
    checkMissing(which2);
    c3 = `==`(which2, NULL);
    goto L10(c3);
  L24():
    ___1 = ldf `:::`;
    check L25() else D5();
  D3():
    deopt 10 [r9];
  D5():
    deopt 19 [];
  D8():
    deopt 30 [];
  L19():
    st dir = r9;
    goto L9();
  L25():
    r13 = dyn ___1("tools", ".get_standard_package_names");
    check L26() else D6();
  L33():
    p7 = prom<V +>{
      lapply = ldf lapply;
      p4 = prom<V +>{
        file_path = ldf `file.path`;
        p2 = prom<V +>{
          dir3 = ld dir;
          dir4 = force? dir3;
          checkMissing(dir4);
          return dir4;
        };
        p3 = prom<V +>{
          which3 = ld which;
          which4 = force? which3;
          checkMissing(which4);
          return which4;
        };
        r21 = dyn file_path(p2, "src", "library", p3, "R");
        return r21;
      };
      p5 = prom<V +>{
        __ = ldf `::`;
        r23 = dyn __("tools", "list_files_with_type");
        return r23;
      };
      p6 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r26):
        return r26;
      L1():
        c6 = ldf c in base;
        r27 = dyn c6("unix", "windows");
        goto L0(r27);
      L2():
        r25 = dyn base3("unix", "windows");
        goto L0(r25);
      };
      r29 = dyn lapply[, , , OS_subdirs](p4, p5, "code", p6);
      return r29;
    };
    r31 = dyn unlist[, `use.names`](p7, FALSE);
    check L34() else D9();
  D6():
    deopt 22 [r13];
  D9():
    deopt 34 [r31];
  L26():
    checkFun.0(r13);
    r14 = r13 as cls;
    r15 = dyn r14();
    check L27() else D7();
  L34():
    st files = r31;
    aspell_find_program = ldf aspell_find_program;
    check L35() else D10();
  D7():
    deopt 24 [r15];
  D10():
    deopt 37 [];
  L27():
    c5 = `is.object`(r15);
    if c5 then L29() else L30(r15);
  L35():
    p8 = prom<V +>{
      program1 = ld program;
      program2 = force? program1;
      checkMissing(program2);
      return program2;
    };
    r33 = dyn aspell_find_program(p8);
    check L36() else D11();
  D11():
    deopt 39 [r33];
  L28(dx1):
    st which = dx1;
    goto L12();
  L29():
    dr = tryDispatchBuiltin.1("$", r15);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(r17):
    r18 = `$`(r17, <sym base>);
    goto L28(r18);
  L36():
    st program = r33;
    aspell = ldf aspell;
    check L37() else D12();
  D12():
    deopt 42 [];
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L28(dx);
  L37():
    p9 = prom<V +>{
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      return files1;
    };
    p10 = prom<V +>{
      sym4 = ldf list;
      base4 = ldf list in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      ignore1 = ld ignore;
      ignore2 = force? ignore1;
      checkMissing(ignore2);
      list = ldf list in base;
      r37 = dyn list("R", ignore2);
      goto L0(r37);
    L2():
      r35 = dyn base4[, ignore]("R", <sym ignore>);
      goto L0(r35);
    };
    p11 = prom<V +>{
      aspell_control_R_Rd_files = ld aspell_control_R_Rd_files;
      aspell_control_R_Rd_files1 = force? aspell_control_R_Rd_files;
      checkMissing(aspell_control_R_Rd_files1);
      c7 = `is.object`(aspell_control_R_Rd_files1);
      if c7 then L2() else L3(aspell_control_R_Rd_files1);
    L0(dx4):
      return dx4;
    L2():
      dr2 = tryDispatchBuiltin.1("[[", aspell_control_R_Rd_files1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(aspell_control_R_Rd_files3):
      sym5 = ldf names;
      base5 = ldf names in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L5() else L6();
    L1(aspell_control_R_Rd_files6, r40):
      __1 = ldf `[[` in base;
      r42 = dyn __1(aspell_control_R_Rd_files6, r40);
      goto L0(r42);
    L4():
      dx3 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx3);
    L5():
      program3 = ld program;
      program4 = force? program3;
      checkMissing(program4);
      names = ldf names in base;
      r41 = dyn names(program4);
      goto L1(aspell_control_R_Rd_files3, r41);
    L6():
      r39 = dyn base5(<sym program>);
      goto L1(aspell_control_R_Rd_files3, r39);
    };
    p12 = prom<V +>{
      program5 = ld program;
      program6 = force? program5;
      checkMissing(program6);
      return program6;
    };
    p13 = prom<V +>{
      dictionaries1 = ld dictionaries;
      dictionaries2 = force? dictionaries1;
      checkMissing(dictionaries2);
      return dictionaries2;
    };
    r46 = dyn aspell[, filter, control, program, dictionaries](p9, p10, p11, p12, p13);
    check L38() else D13();
  D13():
    deopt 52 [r46];
  L38():
    popenv;
    return r46;
  }
}