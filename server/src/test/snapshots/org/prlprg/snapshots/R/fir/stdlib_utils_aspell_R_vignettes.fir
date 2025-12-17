fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner596097450;
    st aspell_R_vignettes = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner596097450(program, dictionaries) {
  (reg program:*, reg dictionaries:*) -+> V { var program:*, reg program_isMissing:L, reg program_orDefault:*, var dictionaries:*, reg dictionaries_isMissing:L, reg dictionaries_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg aspell_dictionaries_R:*, reg aspell_dictionaries_R1:V, reg c:cls, reg r2:V, reg p:p(V +), reg Sys_glob:cls, reg file_path:cls, reg ___:cls, reg r4:V, reg r5:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg aspell_find_program:cls, reg program1:*, reg program2:V, reg p3:p(V +), reg r12:V, reg aspell:cls, reg files:*, reg files1:V, reg p4:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg c1:cls, reg r18:V, reg list:cls, reg r19:V, reg p5:p(V +), reg aspell_control_R_vignettes:*, reg aspell_control_R_vignettes1:V, reg c2:L, reg aspell_control_R_vignettes3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg aspell_control_R_vignettes6:V, reg r22:V, reg program3:*, reg program4:V, reg names:cls, reg r23:V, reg __:cls, reg r24:V, reg p6:p(V +), reg program5:*, reg program6:V, reg p7:p(V +), reg dictionaries1:*, reg dictionaries2:V, reg p8:p(V +), reg r28:V |
    mkenv;
    program_isMissing = missing.0(program);
    if program_isMissing then L0(NULL) else L0(program);
  L0(program_orDefault):
    st program = program_orDefault;
    dictionaries_isMissing = missing.0(dictionaries);
    if dictionaries_isMissing then L1() else L2(dictionaries);
  L1():
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
      r2 = dyn c(aspell_dictionaries_R1, "R_vignettes");
      goto L0(r2);
    L2():
      r = dyn base(<sym aspell_dictionaries_R>, "R_vignettes");
      goto L0(r);
    };
    goto L2(p);
  L2(dictionaries_orDefault):
    st dictionaries = dictionaries_orDefault;
    Sys_glob = ldf `Sys.glob`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        ___ = ldf `:::`;
        r4 = dyn ___("tools", ".R_top_srcdir_from_Rd");
        checkFun.0(r4);
        r5 = r4 as cls;
        r6 = dyn r5();
        return r6;
      };
      r8 = dyn file_path(p1, "src", "library", "*", "vignettes", "*.Rnw");
      return r8;
    };
    r10 = dyn Sys_glob(p2);
    check L4() else D1();
  D1():
    deopt 3 [r10];
  L4():
    st files = r10;
    aspell_find_program = ldf aspell_find_program;
    check L5() else D2();
  D2():
    deopt 6 [];
  L5():
    p3 = prom<V +>{
      program1 = ld program;
      program2 = force? program1;
      checkMissing(program2);
      return program2;
    };
    r12 = dyn aspell_find_program(p3);
    check L6() else D3();
  D3():
    deopt 8 [r12];
  L6():
    st program = r12;
    aspell = ldf aspell;
    check L7() else D4();
  D4():
    deopt 11 [];
  L7():
    p4 = prom<V +>{
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      return files1;
    };
    p5 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r15):
      return r15;
    L2():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r14 = dyn base1[, cmds]("Sweave+LaTeX", <lang c("Sexpr p", "SweaveOpts p", "code p", "hypersetup p")>);
      goto L0(r14);
    L1(r17):
      list = ldf list in base;
      r19 = dyn list("Sweave+LaTeX", r17);
      goto L0(r19);
    L4():
      c1 = ldf c in base;
      r18 = dyn c1("Sexpr p", "SweaveOpts p", "code p", "hypersetup p");
      goto L1(r18);
    L5():
      r16 = dyn base2("Sexpr p", "SweaveOpts p", "code p", "hypersetup p");
      goto L1(r16);
    };
    p6 = prom<V +>{
      aspell_control_R_vignettes = ld aspell_control_R_vignettes;
      aspell_control_R_vignettes1 = force? aspell_control_R_vignettes;
      checkMissing(aspell_control_R_vignettes1);
      c2 = `is.object`(aspell_control_R_vignettes1);
      if c2 then L2() else L3(aspell_control_R_vignettes1);
    L0(dx1):
      return dx1;
    L2():
      dr = tryDispatchBuiltin.1("[[", aspell_control_R_vignettes1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(aspell_control_R_vignettes3):
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L5() else L6();
    L1(aspell_control_R_vignettes6, r22):
      __ = ldf `[[` in base;
      r24 = dyn __(aspell_control_R_vignettes6, r22);
      goto L0(r24);
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L5():
      program3 = ld program;
      program4 = force? program3;
      checkMissing(program4);
      names = ldf names in base;
      r23 = dyn names(program4);
      goto L1(aspell_control_R_vignettes3, r23);
    L6():
      r21 = dyn base3(<sym program>);
      goto L1(aspell_control_R_vignettes3, r21);
    };
    p7 = prom<V +>{
      program5 = ld program;
      program6 = force? program5;
      checkMissing(program6);
      return program6;
    };
    p8 = prom<V +>{
      dictionaries1 = ld dictionaries;
      dictionaries2 = force? dictionaries1;
      checkMissing(dictionaries2);
      return dictionaries2;
    };
    r28 = dyn aspell[, filter, control, program, dictionaries](p4, p5, p6, p7, p8);
    check L8() else D5();
  D5():
    deopt 21 [r28];
  L8():
    popenv;
    return r28;
  }
}