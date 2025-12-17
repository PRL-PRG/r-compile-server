fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner104994629;
    st aspell_package = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner104994629(dir, control, program, dictionaries) {
  (reg dir:*, reg control:*, reg program:*, reg dictionaries:*) -+> V { var dir:*, var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var program:*, reg program_isMissing:L, reg program_orDefault:*, var dictionaries:*, reg dictionaries_isMissing:L, reg dictionaries_orDefault:*, reg character:cls, reg r4:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg dir1:*, reg dir2:V, reg program1:*, reg program2:V, reg control1:*, reg control2:V, reg dictionaries1:*, reg dictionaries2:V, reg list1:cls, reg r8:V, reg rbind:cls, reg do_call:cls, reg aspell_package_description:*, reg aspell_package_description1:V, reg p2:p(V +), reg args:*, reg args1:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg do_call1:cls, reg aspell_package_Rd_files:*, reg aspell_package_Rd_files1:V, reg p5:p(V +), reg args2:*, reg args3:V, reg p6:p(V +), reg r15:V, reg p7:p(V +), reg do_call2:cls, reg aspell_package_vignettes:*, reg aspell_package_vignettes1:V, reg p8:p(V +), reg args4:*, reg args5:V, reg p9:p(V +), reg r19:V, reg p10:p(V +), reg do_call3:cls, reg aspell_package_R_files:*, reg aspell_package_R_files1:V, reg p11:p(V +), reg args6:*, reg args7:V, reg p12:p(V +), reg r23:V, reg p13:p(V +), reg do_call4:cls, reg aspell_package_C_files:*, reg aspell_package_C_files1:V, reg p14:p(V +), reg args8:*, reg args9:V, reg p15:p(V +), reg r27:V, reg p16:p(V +), reg r29:V, reg nrow:cls, reg a:*, reg a1:V, reg p17:p(V +), reg r31:V, reg c:L, reg ___:cls, reg r32:V, reg r33:cls, reg a2:*, reg a3:V, reg c1:L, reg a5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r34:V, reg p18:p(V +), reg dirname:cls, reg dir3:*, reg dir4:V, reg p19:p(V +), reg r37:V, reg p20:p(V +), reg r39:V, reg l:*, reg c2:L, reg r41:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r43:V, reg dx3:V, reg r44:V, reg a6:*, reg a7:V |
    mkenv;
    st dir = dir;
    control_isMissing = missing.0(control);
    if control_isMissing then L0() else L1(control);
  L0():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L1(p);
  L1(control_orDefault):
    st control = control_orDefault;
    program_isMissing = missing.0(program);
    if program_isMissing then L2(NULL) else L2(program);
  L2(program_orDefault):
    st program = program_orDefault;
    dictionaries_isMissing = missing.0(dictionaries);
    if dictionaries_isMissing then L3() else L4(dictionaries);
  L3():
    p1 = prom<V +>{
      character = ldf character;
      r4 = dyn character();
      return r4;
    };
    goto L4(p1);
  L4(dictionaries_orDefault):
    st dictionaries = dictionaries_orDefault;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L5(r7):
    st args = r7;
    rbind = ldf rbind;
    check L15() else D5();
  L8():
    dir1 = ld dir;
    check L10() else D0();
  L9():
    r6 = dyn base1[dir, program, control, dictionaries](<sym dir>, <sym program>, <sym control>, <sym dictionaries>);
    goto L5(r6);
  D0():
    deopt 2 [dir1];
  D5():
    deopt 18 [];
  L10():
    dir2 = force? dir1;
    checkMissing(dir2);
    program1 = ld program;
    check L11() else D1();
  L15():
    p4 = prom<V +>{
      do_call = ldf `do.call`;
      p2 = prom<V +>{
        aspell_package_description = ld aspell_package_description;
        aspell_package_description1 = force? aspell_package_description;
        checkMissing(aspell_package_description1);
        return aspell_package_description1;
      };
      p3 = prom<V +>{
        args = ld args;
        args1 = force? args;
        checkMissing(args1);
        return args1;
      };
      r11 = dyn do_call(p2, p3);
      return r11;
    };
    p7 = prom<V +>{
      do_call1 = ldf `do.call`;
      p5 = prom<V +>{
        aspell_package_Rd_files = ld aspell_package_Rd_files;
        aspell_package_Rd_files1 = force? aspell_package_Rd_files;
        checkMissing(aspell_package_Rd_files1);
        return aspell_package_Rd_files1;
      };
      p6 = prom<V +>{
        args2 = ld args;
        args3 = force? args2;
        checkMissing(args3);
        return args3;
      };
      r15 = dyn do_call1(p5, p6);
      return r15;
    };
    p10 = prom<V +>{
      do_call2 = ldf `do.call`;
      p8 = prom<V +>{
        aspell_package_vignettes = ld aspell_package_vignettes;
        aspell_package_vignettes1 = force? aspell_package_vignettes;
        checkMissing(aspell_package_vignettes1);
        return aspell_package_vignettes1;
      };
      p9 = prom<V +>{
        args4 = ld args;
        args5 = force? args4;
        checkMissing(args5);
        return args5;
      };
      r19 = dyn do_call2(p8, p9);
      return r19;
    };
    p13 = prom<V +>{
      do_call3 = ldf `do.call`;
      p11 = prom<V +>{
        aspell_package_R_files = ld aspell_package_R_files;
        aspell_package_R_files1 = force? aspell_package_R_files;
        checkMissing(aspell_package_R_files1);
        return aspell_package_R_files1;
      };
      p12 = prom<V +>{
        args6 = ld args;
        args7 = force? args6;
        checkMissing(args7);
        return args7;
      };
      r23 = dyn do_call3(p11, p12);
      return r23;
    };
    p16 = prom<V +>{
      do_call4 = ldf `do.call`;
      p14 = prom<V +>{
        aspell_package_C_files = ld aspell_package_C_files;
        aspell_package_C_files1 = force? aspell_package_C_files;
        checkMissing(aspell_package_C_files1);
        return aspell_package_C_files1;
      };
      p15 = prom<V +>{
        args8 = ld args;
        args9 = force? args8;
        checkMissing(args9);
        return args9;
      };
      r27 = dyn do_call4(p14, p15);
      return r27;
    };
    r29 = dyn rbind(p4, p7, p10, p13, p16);
    check L16() else D6();
  D1():
    deopt 5 [program1];
  D6():
    deopt 24 [r29];
  L11():
    program2 = force? program1;
    checkMissing(program2);
    control1 = ld control;
    check L12() else D2();
  L16():
    st a = r29;
    nrow = ldf nrow;
    check L17() else D7();
  D2():
    deopt 8 [control1];
  D7():
    deopt 27 [];
  L12():
    control2 = force? control1;
    checkMissing(control2);
    dictionaries1 = ld dictionaries;
    check L13() else D3();
  L17():
    p17 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    r31 = dyn nrow(p17);
    check L18() else D8();
  D3():
    deopt 11 [dictionaries1];
  D8():
    deopt 29 [r31];
  L13():
    dictionaries2 = force? dictionaries1;
    checkMissing(dictionaries2);
    list1 = ldf list in base;
    r8 = dyn list1(dir2, program2, control2, dictionaries2);
    check L14() else D4();
  L18():
    c = `as.logical`(r31);
    if c then L19() else L6();
  D4():
    deopt 15 [r8];
  L6():
    goto L7();
  L7():
    a6 = ld a;
    check L28() else D12();
  L14():
    goto L5(r8);
  L19():
    ___ = ldf `:::`;
    check L20() else D9();
  D9():
    deopt 31 [];
  D12():
    deopt 46 [a6];
  L20():
    r32 = dyn ___("tools", "file_path_relative_to");
    check L21() else D10();
  L28():
    a7 = force? a6;
    checkMissing(a7);
    popenv;
    return a7;
  D10():
    deopt 34 [r32];
  L21():
    checkFun.0(r32);
    r33 = r32 as cls;
    p18 = prom<V +>{
      a2 = ld a;
      a3 = force? a2;
      checkMissing(a3);
      c1 = `is.object`(a3);
      if c1 then L1() else L2(a3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", a3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(a5):
      r34 = `$`(a5, <sym File>);
      goto L0(r34);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p20 = prom<V +>{
      dirname = ldf dirname;
      p19 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r37 = dyn dirname(p19);
      return r37;
    };
    r39 = dyn r33[, , parent](p18, p20, FALSE);
    check L22() else D11();
  D11():
    deopt 40 [r39];
  L22():
    l = ld a;
    c2 = `is.object`(l);
    if c2 then L24() else L25(r39, l);
  L23(r43, dx3):
    st a = dx3;
    goto L7();
  L24():
    dr2 = tryDispatchBuiltin.0("$<-", l, r39);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(r39, dr2);
  L25(r41, l2):
    r44 = `$<-`(l2, <sym File>, r39);
    goto L23(r41, r44);
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(r39, dx2);
  }
}