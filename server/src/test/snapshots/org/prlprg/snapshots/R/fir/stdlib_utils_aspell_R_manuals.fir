fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner597286756;
    st aspell_R_manuals = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner597286756(which, dir, program, dictionaries) {
  (reg which:*, reg dir:*, reg program:*, reg dictionaries:*) -+> V { var which:*, reg which_isMissing:L, reg which_orDefault:*, var dir:*, reg dir_isMissing:L, reg dir_orDefault:*, var program:*, reg program_isMissing:L, reg program_orDefault:*, var dictionaries:*, reg dictionaries_isMissing:L, reg dictionaries_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg aspell_dictionaries_R:*, reg aspell_dictionaries_R1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg dir1:*, reg dir2:V, reg c1:V, reg c2:L, reg ___:cls, reg r6:V, reg r7:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg which1:*, reg which2:V, reg c3:V, reg c4:L, reg Sys_glob:cls, reg file_path:cls, reg dir3:*, reg dir4:V, reg p1:p(V +), reg r13:V, reg p2:p(V +), reg r15:V, reg r16:V, reg which3:cls, reg which4:*, reg which5:V, reg basename:cls, reg __:cls, reg r17:V, reg r18:cls, reg which6:*, reg which7:V, reg p3:p(V +), reg r20:V, reg p4:p(V +), reg r22:V, reg r23:V, reg p5:p(V +), reg r25:V, reg file_path1:cls, reg dir5:*, reg dir6:V, reg p6:p(V +), reg sprintf:cls, reg which8:*, reg which9:V, reg c5:L, reg which11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __1:cls, reg r27:V, reg p7:p(V +), reg r29:V, reg p8:p(V +), reg r31:V, reg l:*, reg c6:L, reg r33:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind2:*, reg ind3:V, reg ___1:cls, reg r36:V, reg which12:*, reg which13:V, reg aspell_find_program:cls, reg program1:*, reg program2:V, reg p9:p(V +), reg r38:V, reg aspell:cls, reg files:*, reg files1:V, reg p10:p(V +), reg aspell_control_R_manuals:*, reg aspell_control_R_manuals1:V, reg c7:L, reg aspell_control_R_manuals3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg aspell_control_R_manuals6:V, reg r41:V, reg program3:*, reg program4:V, reg names:cls, reg r42:V, reg __2:cls, reg r43:V, reg p11:p(V +), reg program5:*, reg program6:V, reg p12:p(V +), reg dictionaries1:*, reg dictionaries2:V, reg p13:p(V +), reg r47:V |
    mkenv;
    which_isMissing = missing.0(which);
    if which_isMissing then L0(NULL) else L0(which);
  L0(which_orDefault):
    st which = which_orDefault;
    dir_isMissing = missing.0(dir);
    if dir_isMissing then L1(NULL) else L1(dir);
  L1(dir_orDefault):
    st dir = dir_orDefault;
    program_isMissing = missing.0(program);
    if program_isMissing then L2(NULL) else L2(program);
  L2(program_orDefault):
    st program = program_orDefault;
    dictionaries_isMissing = missing.0(dictionaries);
    if dictionaries_isMissing then L3() else L4(dictionaries);
  L3():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      aspell_dictionaries_R = ld aspell_dictionaries_R;
      aspell_dictionaries_R1 = force? aspell_dictionaries_R;
      checkMissing(aspell_dictionaries_R1);
      c = ldf c in base;
      r2 = dyn c(aspell_dictionaries_R1, "R_manuals");
      goto L0(r2);
    L2():
      r = dyn base(<sym aspell_dictionaries_R>, "R_manuals");
      goto L0(r);
    };
    goto L4(p);
  L4(dictionaries_orDefault):
    st dictionaries = dictionaries_orDefault;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L5(r5):
    c2 = `as.logical`(r5);
    if c2 then L15() else L6();
  L12():
    dir1 = ld dir;
    check L14() else D0();
  L13():
    r4 = dyn base1(<sym dir>);
    goto L5(r4);
  D0():
    deopt 1 [dir1];
  L6():
    goto L7();
  L7():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L14():
    dir2 = force? dir1;
    checkMissing(dir2);
    c1 = `==`(dir2, NULL);
    goto L5(c1);
  L15():
    ___ = ldf `:::`;
    check L16() else D1();
  D1():
    deopt 5 [];
  L8(r11):
    c4 = `as.logical`(r11);
    if c4 then L23() else L9();
  L16():
    r6 = dyn ___("tools", ".R_top_srcdir_from_Rd");
    check L17() else D2();
  L20():
    which1 = ld which;
    check L22() else D4();
  L21():
    r10 = dyn base2(<sym which>);
    goto L8(r10);
  D2():
    deopt 8 [r6];
  D4():
    deopt 15 [which1];
  L9():
    which3 = ldf which;
    check L27() else D7();
  L10(r16):
    st files = r16;
    aspell_find_program = ldf aspell_find_program;
    check L36() else D13();
  L17():
    checkFun.0(r6);
    r7 = r6 as cls;
    r8 = dyn r7();
    check L18() else D3();
  L22():
    which2 = force? which1;
    checkMissing(which2);
    c3 = `==`(which2, NULL);
    goto L8(c3);
  L23():
    Sys_glob = ldf `Sys.glob`;
    check L24() else D5();
  D3():
    deopt 10 [r8];
  D5():
    deopt 19 [];
  D7():
    deopt 23 [];
  D13():
    deopt 43 [];
  L18():
    st dir = r8;
    goto L7();
  L24():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r13 = dyn file_path(p1, "doc", "manual", "*.texi");
      return r13;
    };
    r15 = dyn Sys_glob(p2);
    check L25() else D6();
  L27():
    p5 = prom<V +>{
      which4 = ld which;
      which5 = force? which4;
      checkMissing(which5);
      basename = ldf basename;
      p4 = prom<V +>{
        __ = ldf `::`;
        r17 = dyn __("tools", "file_path_sans_ext");
        checkFun.0(r17);
        r18 = r17 as cls;
        p3 = prom<V +>{
          which6 = ld which;
          which7 = force? which6;
          checkMissing(which7);
          return which7;
        };
        r20 = dyn r18(p3);
        return r20;
      };
      r22 = dyn basename(p4);
      r23 = `==`(which5, r22);
      return r23;
    };
    r25 = dyn which3(p5);
    check L28() else D8();
  L36():
    p9 = prom<V +>{
      program1 = ld program;
      program2 = force? program1;
      checkMissing(program2);
      return program2;
    };
    r38 = dyn aspell_find_program(p9);
    check L37() else D14();
  D6():
    deopt 21 [r15];
  D8():
    deopt 25 [r25];
  D14():
    deopt 45 [r38];
  L25():
    goto L10(r15);
  L28():
    st ind = r25;
    file_path1 = ldf `file.path`;
    check L29() else D9();
  L37():
    st program = r38;
    aspell = ldf aspell;
    check L38() else D15();
  D9():
    deopt 28 [];
  D15():
    deopt 48 [];
  L29():
    p6 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    p8 = prom<V +>{
      sprintf = ldf sprintf;
      p7 = prom<V +>{
        which8 = ld which;
        which9 = force? which8;
        checkMissing(which9);
        c5 = `is.object`(which9);
        if c5 then L1() else L2(which9);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", which9);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(which11):
        ind = ld ind;
        ind1 = force? ind;
        __1 = ldf `[` in base;
        r27 = dyn __1(which11, ind1);
        goto L0(r27);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r29 = dyn sprintf("%s.texi", p7);
      return r29;
    };
    r31 = dyn file_path1(p6, "doc", "manual", p8);
    check L30() else D10();
  L38():
    p10 = prom<V +>{
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      return files1;
    };
    p11 = prom<V +>{
      aspell_control_R_manuals = ld aspell_control_R_manuals;
      aspell_control_R_manuals1 = force? aspell_control_R_manuals;
      checkMissing(aspell_control_R_manuals1);
      c7 = `is.object`(aspell_control_R_manuals1);
      if c7 then L2() else L3(aspell_control_R_manuals1);
    L0(dx5):
      return dx5;
    L2():
      dr4 = tryDispatchBuiltin.1("[[", aspell_control_R_manuals1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(aspell_control_R_manuals3):
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L5() else L6();
    L1(aspell_control_R_manuals6, r41):
      __2 = ldf `[[` in base;
      r43 = dyn __2(aspell_control_R_manuals6, r41);
      goto L0(r43);
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    L5():
      program3 = ld program;
      program4 = force? program3;
      checkMissing(program4);
      names = ldf names in base;
      r42 = dyn names(program4);
      goto L1(aspell_control_R_manuals3, r42);
    L6():
      r40 = dyn base3(<sym program>);
      goto L1(aspell_control_R_manuals3, r40);
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
    r47 = dyn aspell[, control, program, dictionaries](p10, p11, p12, p13);
    check L39() else D16();
  D10():
    deopt 33 [r31];
  D16():
    deopt 56 [r47];
  L30():
    l = ld which;
    c6 = `is.object`(l);
    if c6 then L31() else L32(r31, l);
  L39():
    popenv;
    return r47;
  L11(dx3):
    st which = dx3;
    which12 = ld which;
    check L35() else D12();
  L31():
    dr2 = tryDispatchBuiltin.0("[<-", l, r31);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(r31, dr2);
  L32(r33, l2):
    ind2 = ld ind;
    check L34() else D11();
  D11():
    deopt 35 [r33, l2, r31, ind2];
  D12():
    deopt 39 [which12];
  L33():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L34():
    ind3 = force? ind2;
    ___1 = ldf `[<-` in base;
    r36 = dyn ___1(l2, r31, ind3);
    goto L11(r36);
  L35():
    which13 = force? which12;
    checkMissing(which13);
    goto L10(which13);
  }
}