fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3536574386;
    st aspell_R_C_files = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3536574386(which, dir, ignore, program, dictionaries) {
  (reg which:*, reg dir:*, reg ignore:*, reg program:*, reg dictionaries:*) -+> V { var which:*, reg which_isMissing:L, reg which_orDefault:*, var dir:*, reg dir_isMissing:L, reg dir_orDefault:*, var ignore:*, reg ignore_isMissing:L, reg ignore_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var program:*, reg program_isMissing:L, reg program_orDefault:*, var dictionaries:*, reg dictionaries_isMissing:L, reg dictionaries_orDefault:*, reg aspell_dictionaries_R:*, reg aspell_dictionaries_R1:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg dir1:*, reg dir2:V, reg c1:V, reg c2:L, reg ___:cls, reg r7:V, reg r8:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg which1:*, reg which2:V, reg c3:V, reg c4:L, reg ___1:cls, reg r13:V, reg r14:cls, reg r15:V, reg c5:L, reg r17:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg which3:*, reg which4:V, reg match:cls, reg r23:V, reg is_na:cls, reg r24:V, reg r25:V, reg c6:L, reg l:*, reg c7:L, reg r27:S, reg l2:*, reg dr2:V, reg dc1:L, reg dx3:V, reg r29:S, reg dx4:V, reg pos:*, reg pos1:V, reg ___2:cls, reg r30:V, reg sprintf:cls, reg file_path:cls, reg dir3:*, reg dir4:V, reg p2:p(V +), reg which5:*, reg which6:V, reg p3:p(V +), reg which7:*, reg which8:V, reg p4:p(V +), reg r35:V, reg p5:p(V +), reg r37:V, reg files:*, reg files1:V, reg c8:L, reg files3:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg file_test:cls, reg files4:*, reg files5:V, reg p6:p(V +), reg r39:V, reg __:cls, reg r40:V, reg aspell_find_program:cls, reg program1:*, reg program2:V, reg p7:p(V +), reg r42:V, reg aspell:cls, reg files6:*, reg files7:V, reg p8:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg ignore1:*, reg ignore2:V, reg list:cls, reg r46:V, reg p9:p(V +), reg aspell_control_R_Rd_files:*, reg aspell_control_R_Rd_files1:V, reg c9:L, reg aspell_control_R_Rd_files3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg aspell_control_R_Rd_files6:V, reg r49:V, reg program3:*, reg program4:V, reg names:cls, reg r50:V, reg __1:cls, reg r51:V, reg p10:p(V +), reg program5:*, reg program6:V, reg p11:p(V +), reg dictionaries1:*, reg dictionaries2:V, reg p12:p(V +), reg r55:V |
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
      r2 = dyn c("[ \t]'[[:alnum:]_.]*'[ \t[:punct:]]", "[ \t][[:alnum:]_.]*\\(\\)[ \t[:punct:]]");
      goto L0(r2);
    L2():
      r = dyn base("[ \t]'[[:alnum:]_.]*'[ \t[:punct:]]", "[ \t][[:alnum:]_.]*\\(\\)[ \t[:punct:]]");
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
    if guard1 then L19() else L20();
  L7(r6):
    c2 = `as.logical`(r6);
    if c2 then L22() else L8();
  L19():
    dir1 = ld dir;
    check L21() else D0();
  L20():
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
    if guard2 then L27() else L28();
  L21():
    dir2 = force? dir1;
    checkMissing(dir2);
    c1 = `==`(dir2, NULL);
    goto L7(c1);
  L22():
    ___ = ldf `:::`;
    check L23() else D1();
  D1():
    deopt 5 [];
  L10(r12):
    c4 = `as.logical`(r12);
    if c4 then L30() else L11();
  L23():
    r7 = dyn ___("tools", ".R_top_srcdir_from_Rd");
    check L24() else D2();
  L27():
    which1 = ld which;
    check L29() else D4();
  L28():
    r11 = dyn base2(<sym which>);
    goto L10(r11);
  D2():
    deopt 8 [r7];
  D4():
    deopt 15 [which1];
  L11():
    goto L12();
  L12():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L39() else L40();
  L24():
    checkFun.0(r7);
    r8 = r7 as cls;
    r9 = dyn r8();
    check L25() else D3();
  L29():
    which2 = force? which1;
    checkMissing(which2);
    c3 = `==`(which2, NULL);
    goto L10(c3);
  L30():
    ___1 = ldf `:::`;
    check L31() else D5();
  D3():
    deopt 10 [r9];
  D5():
    deopt 19 [];
  L13(r20):
    r25 = `!`(r20);
    c6 = `as.logical`(r25);
    if c6 then L46() else L15();
  L25():
    st dir = r9;
    goto L9();
  L31():
    r13 = dyn ___1("tools", ".get_standard_package_names");
    check L32() else D6();
  L39():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L40():
    r19 = dyn base3(<lang `<-`(pos, match("base", which))>);
    goto L13(r19);
  D6():
    deopt 22 [r13];
  L14(r22):
    st pos = r22;
    is_na = ldf `is.na` in base;
    r24 = dyn is_na(r22);
    check L45() else D10();
  L15():
    goto L17();
  L17():
    sprintf = ldf sprintf;
    check L52() else D12();
  L32():
    checkFun.0(r13);
    r14 = r13 as cls;
    r15 = dyn r14();
    check L33() else D7();
  L41():
    which3 = ld which;
    check L43() else D8();
  L42():
    r21 = dyn base4("base", <sym which>);
    goto L14(r21);
  L46():
    l = ld which;
    c7 = `is.object`(l);
    if c7 then L47() else L48("R", l);
  D7():
    deopt 24 [r15];
  D8():
    deopt 34 [which3];
  D10():
    deopt 42 [r24];
  D12():
    deopt 54 [];
  L16(r29, dx4):
    st which = dx4;
    goto L17();
  L33():
    c5 = `is.object`(r15);
    if c5 then L35() else L36(r15);
  L43():
    which4 = force? which3;
    checkMissing(which4);
    match = ldf match in base;
    r23 = dyn match("base", which4, NA_INT, NULL);
    check L44() else D9();
  L45():
    goto L13(r24);
  L47():
    dr2 = tryDispatchBuiltin.0("[<-", l, "R");
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L49() else L48("R", dr2);
  L48(r27, l2):
    pos = ld pos;
    check L50() else D11();
  L52():
    p5 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      p3 = prom<V +>{
        which5 = ld which;
        which6 = force? which5;
        checkMissing(which6);
        return which6;
      };
      p4 = prom<V +>{
        which7 = ld which;
        which8 = force? which7;
        checkMissing(which8);
        return which8;
      };
      r35 = dyn file_path(p2, "src", "library", p3, "po", p4);
      return r35;
    };
    r37 = dyn sprintf("%s.pot", p5);
    check L53() else D13();
  D9():
    deopt 39 [r23];
  D11():
    deopt 47 [r27, l2, "R", pos];
  D13():
    deopt 57 [r37];
  L34(dx1):
    st which = dx1;
    goto L12();
  L35():
    dr = tryDispatchBuiltin.1("$", r15);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(dr);
  L36(r17):
    r18 = `$`(r17, <sym base>);
    goto L34(r18);
  L44():
    goto L14(r23);
  L49():
    dx3 = getTryDispatchBuiltinValue(dr2);
    goto L16("R", dx3);
  L50():
    pos1 = force? pos;
    ___2 = ldf `[<-` in base;
    r30 = dyn ___2(l2, "R", pos1);
    goto L16(r27, r30);
  L53():
    st files = r37;
    files = ld files;
    check L54() else D14();
  D14():
    deopt 59 [files];
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L34(dx);
  L54():
    files1 = force? files;
    checkMissing(files1);
    c8 = `is.object`(files1);
    if c8 then L55() else L56(files1);
  L18(dx6):
    st files = dx6;
    aspell_find_program = ldf aspell_find_program;
    check L60() else D17();
  L55():
    dr4 = tryDispatchBuiltin.1("[", files1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L57() else L56(dr4);
  L56(files3):
    file_test = ldf file_test;
    check L58() else D15();
  D15():
    deopt 62 [files3];
  D17():
    deopt 69 [];
  L57():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L18(dx5);
  L58():
    p6 = prom<V +>{
      files4 = ld files;
      files5 = force? files4;
      checkMissing(files5);
      return files5;
    };
    r39 = dyn file_test("-f", p6);
    check L59() else D16();
  L60():
    p7 = prom<V +>{
      program1 = ld program;
      program2 = force? program1;
      checkMissing(program2);
      return program2;
    };
    r42 = dyn aspell_find_program(p7);
    check L61() else D18();
  D16():
    deopt 65 [files3, r39];
  D18():
    deopt 71 [r42];
  L59():
    __ = ldf `[` in base;
    r40 = dyn __(files3, r39);
    goto L18(r40);
  L61():
    st program = r42;
    aspell = ldf aspell;
    check L62() else D19();
  D19():
    deopt 74 [];
  L62():
    p8 = prom<V +>{
      files6 = ld files;
      files7 = force? files6;
      checkMissing(files7);
      return files7;
    };
    p9 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      ignore1 = ld ignore;
      ignore2 = force? ignore1;
      checkMissing(ignore2);
      list = ldf list in base;
      r46 = dyn list("pot", ignore2);
      goto L0(r46);
    L2():
      r44 = dyn base5[, ignore]("pot", <sym ignore>);
      goto L0(r44);
    };
    p10 = prom<V +>{
      aspell_control_R_Rd_files = ld aspell_control_R_Rd_files;
      aspell_control_R_Rd_files1 = force? aspell_control_R_Rd_files;
      checkMissing(aspell_control_R_Rd_files1);
      c9 = `is.object`(aspell_control_R_Rd_files1);
      if c9 then L2() else L3(aspell_control_R_Rd_files1);
    L0(dx8):
      return dx8;
    L2():
      dr6 = tryDispatchBuiltin.1("[[", aspell_control_R_Rd_files1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(aspell_control_R_Rd_files3):
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L5() else L6();
    L1(aspell_control_R_Rd_files6, r49):
      __1 = ldf `[[` in base;
      r51 = dyn __1(aspell_control_R_Rd_files6, r49);
      goto L0(r51);
    L4():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    L5():
      program3 = ld program;
      program4 = force? program3;
      checkMissing(program4);
      names = ldf names in base;
      r50 = dyn names(program4);
      goto L1(aspell_control_R_Rd_files3, r50);
    L6():
      r48 = dyn base6(<sym program>);
      goto L1(aspell_control_R_Rd_files3, r48);
    };
    p11 = prom<V +>{
      program5 = ld program;
      program6 = force? program5;
      checkMissing(program6);
      return program6;
    };
    p12 = prom<V +>{
      dictionaries1 = ld dictionaries;
      dictionaries2 = force? dictionaries1;
      checkMissing(dictionaries2);
      return dictionaries2;
    };
    r55 = dyn aspell[, filter, control, program, dictionaries](p8, p9, p10, p11, p12);
    check L63() else D20();
  D20():
    deopt 84 [r55];
  L63():
    popenv;
    return r55;
  }
}