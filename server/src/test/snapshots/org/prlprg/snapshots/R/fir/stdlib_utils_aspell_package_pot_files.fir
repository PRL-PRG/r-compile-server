fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3796144728;
    st aspell_package_pot_files = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3796144728(dir, ignore, control, program, dictionaries) {
  (reg dir:*, reg ignore:*, reg control:*, reg program:*, reg dictionaries:*) -+> V { var dir:*, var ignore:*, reg ignore_isMissing:L, reg ignore_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var control:*, reg control_isMissing:L, reg control_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg r4:V, reg p1:p(V +), var program:*, reg program_isMissing:L, reg program_orDefault:*, var dictionaries:*, reg dictionaries_isMissing:L, reg dictionaries_orDefault:*, reg character1:cls, reg r6:V, reg p2:p(V +), reg __:cls, reg r8:V, reg r9:cls, reg dir1:*, reg dir2:V, reg p3:p(V +), reg r11:V, reg file_path:cls, reg dir3:*, reg dir4:V, reg p4:p(V +), reg r13:V, reg dir_exists:cls, reg subdir:*, reg subdir1:V, reg p5:p(V +), reg r15:V, reg c:L, reg Sys_glob:cls, reg file_path1:cls, reg subdir2:*, reg subdir3:V, reg p6:p(V +), reg r17:V, reg p7:p(V +), reg r19:V, reg r20:V, reg character2:cls, reg r21:V, reg ___:cls, reg r22:V, reg r23:cls, reg dir5:*, reg dir6:V, reg p8:p(V +), reg r25:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r26:V, reg r27:V, reg meta:*, reg meta1:V, reg c1:L, reg meta3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r28:V, reg is_na:cls, reg r29:V, reg c2:L, reg aspell_find_program:cls, reg program1:*, reg program2:V, reg p9:p(V +), reg r32:V, reg aspell:cls, reg files:*, reg files1:V, reg p10:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r34:V, reg r35:V, reg ignore1:*, reg ignore2:V, reg list1:cls, reg r36:V, reg p11:p(V +), reg control1:*, reg control2:V, reg p12:p(V +), reg encoding:*, reg encoding1:V, reg p13:p(V +), reg program3:*, reg program4:V, reg p14:p(V +), reg dictionaries1:*, reg dictionaries2:V, reg p15:p(V +), reg r42:V |
    mkenv;
    st dir = dir;
    ignore_isMissing = missing.0(ignore);
    if ignore_isMissing then L0() else L1(ignore);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(ignore_orDefault):
    st ignore = ignore_orDefault;
    control_isMissing = missing.0(control);
    if control_isMissing then L2() else L3(control);
  L2():
    p1 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      list = ldf list in base;
      r4 = dyn list();
      goto L0(r4);
    L2():
      r2 = dyn base();
      goto L0(r2);
    };
    goto L3(p1);
  L3(control_orDefault):
    st control = control_orDefault;
    program_isMissing = missing.0(program);
    if program_isMissing then L4(NULL) else L4(program);
  L4(program_orDefault):
    st program = program_orDefault;
    dictionaries_isMissing = missing.0(dictionaries);
    if dictionaries_isMissing then L5() else L6(dictionaries);
  L5():
    p2 = prom<V +>{
      character1 = ldf character;
      r6 = dyn character1();
      return r6;
    };
    goto L6(p2);
  L6(dictionaries_orDefault):
    st dictionaries = dictionaries_orDefault;
    __ = ldf `::`;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    r8 = dyn __("tools", "file_path_as_absolute");
    check L14() else D1();
  D1():
    deopt 4 [r8];
  L14():
    checkFun.0(r8);
    r9 = r8 as cls;
    p3 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r11 = dyn r9(p3);
    check L15() else D2();
  D2():
    deopt 7 [r11];
  L15():
    st dir = r11;
    file_path = ldf `file.path`;
    check L16() else D3();
  D3():
    deopt 10 [];
  L16():
    p4 = prom<V +>{
      dir3 = ld dir;
      dir4 = force? dir3;
      checkMissing(dir4);
      return dir4;
    };
    r13 = dyn file_path(p4, "po");
    check L17() else D4();
  D4():
    deopt 13 [r13];
  L17():
    st subdir = r13;
    dir_exists = ldf `dir.exists`;
    check L18() else D5();
  D5():
    deopt 16 [];
  L18():
    p5 = prom<V +>{
      subdir = ld subdir;
      subdir1 = force? subdir;
      checkMissing(subdir1);
      return subdir1;
    };
    r15 = dyn dir_exists(p5);
    check L19() else D6();
  D6():
    deopt 18 [r15];
  L19():
    c = `as.logical`(r15);
    if c then L20() else L7();
  L7():
    character2 = ldf character;
    check L24() else D9();
  L8(r20):
    st files = r20;
    ___ = ldf `:::`;
    check L26() else D11();
  L20():
    Sys_glob = ldf `Sys.glob`;
    check L21() else D7();
  D7():
    deopt 20 [];
  D9():
    deopt 24 [];
  D11():
    deopt 28 [];
  L21():
    p7 = prom<V +>{
      file_path1 = ldf `file.path`;
      p6 = prom<V +>{
        subdir2 = ld subdir;
        subdir3 = force? subdir2;
        checkMissing(subdir3);
        return subdir3;
      };
      r17 = dyn file_path1(p6, "*.pot");
      return r17;
    };
    r19 = dyn Sys_glob(p7);
    check L22() else D8();
  L24():
    r21 = dyn character2();
    check L25() else D10();
  L26():
    r22 = dyn ___("tools", ".get_package_metadata");
    check L27() else D12();
  D8():
    deopt 22 [r19];
  D10():
    deopt 25 [r21];
  D12():
    deopt 31 [r22];
  L22():
    goto L8(r19);
  L25():
    goto L8(r21);
  L27():
    checkFun.0(r22);
    r23 = r22 as cls;
    p8 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r25 = dyn r23[, installed](p8, FALSE);
    check L28() else D13();
  D13():
    deopt 36 [r25];
  L28():
    st meta = r25;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L9(r27):
    c2 = `as.logical`(r27);
    if c2 then L36() else L11();
  L29():
    meta = ld meta;
    check L31() else D14();
  L30():
    r26 = dyn base1(<lang `<-`(encoding, `[`(meta, "Encoding"))>);
    goto L9(r26);
  D14():
    deopt 40 [meta];
  L11():
    goto L12();
  L12():
    aspell_find_program = ldf aspell_find_program;
    check L38() else D16();
  L31():
    meta1 = force? meta;
    checkMissing(meta1);
    c1 = `is.object`(meta1);
    if c1 then L32() else L33(meta1);
  L36():
    st encoding = "unknown";
    goto L12();
  D16():
    deopt 54 [];
  L10(dx1):
    st encoding = dx1;
    is_na = ldf `is.na` in base;
    r29 = dyn is_na(dx1);
    check L35() else D15();
  L32():
    dr = tryDispatchBuiltin.1("[", meta1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(dr);
  L33(meta3):
    __1 = ldf `[` in base;
    r28 = dyn __1(meta3, "Encoding");
    goto L10(r28);
  L38():
    p9 = prom<V +>{
      program1 = ld program;
      program2 = force? program1;
      checkMissing(program2);
      return program2;
    };
    r32 = dyn aspell_find_program(p9);
    check L39() else D17();
  D15():
    deopt 47 [r29];
  D17():
    deopt 56 [r32];
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L35():
    goto L9(r29);
  L39():
    st program = r32;
    aspell = ldf aspell;
    check L40() else D18();
  D18():
    deopt 59 [];
  L40():
    p10 = prom<V +>{
      files = ld files;
      files1 = force? files;
      checkMissing(files1);
      return files1;
    };
    p11 = prom<V +>{
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r35):
      return r35;
    L1():
      ignore1 = ld ignore;
      ignore2 = force? ignore1;
      checkMissing(ignore2);
      list1 = ldf list in base;
      r36 = dyn list1("pot", ignore2);
      goto L0(r36);
    L2():
      r34 = dyn base2[, ignore]("pot", <sym ignore>);
      goto L0(r34);
    };
    p12 = prom<V +>{
      control1 = ld control;
      control2 = force? control1;
      checkMissing(control2);
      return control2;
    };
    p13 = prom<V +>{
      encoding = ld encoding;
      encoding1 = force? encoding;
      checkMissing(encoding1);
      return encoding1;
    };
    p14 = prom<V +>{
      program3 = ld program;
      program4 = force? program3;
      checkMissing(program4);
      return program4;
    };
    p15 = prom<V +>{
      dictionaries1 = ld dictionaries;
      dictionaries2 = force? dictionaries1;
      checkMissing(dictionaries2);
      return dictionaries2;
    };
    r42 = dyn aspell[, filter, control, encoding, program, dictionaries](p10, p11, p12, p13, p14, p15);
    check L41() else D19();
  D19():
    deopt 71 [r42];
  L41():
    popenv;
    return r42;
  }
}