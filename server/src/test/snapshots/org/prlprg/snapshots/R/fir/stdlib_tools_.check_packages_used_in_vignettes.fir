fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3455886275;
    st `.check_packages_used_in_vignettes` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3455886275(package, `lib.loc`) {
  (reg package:*, reg lib_loc:*) -+> V { var package:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg package1:*, reg package2:V, reg length:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r7:V, reg find_package:cls, reg package3:*, reg package4:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r11:V, reg _read_description:cls, reg file_path:cls, reg dir:*, reg dir1:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg _package_vignettes_via_call_to_R:cls, reg dir2:*, reg dir3:V, reg p4:p(V +), reg r17:V, reg unique:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg unlist:cls, reg vinfo:*, reg vinfo1:V, reg c10:L, reg vinfo3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r20:V, reg p5:p(V +), reg r22:V, reg as_character:cls, reg r23:V, reg p6:p(V +), reg r25:V, reg _check_packages_used_helper:cls, reg db:*, reg db1:V, reg p7:p(V +), reg Rfiles:*, reg Rfiles1:V, reg p8:p(V +), reg r28:V |
    mkenv;
    st package = package;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L1(r1):
    c = `as.logical`(r1);
    if c then L2(c) else L8();
  L6():
    missing = ldf missing in base;
    r2 = dyn missing(<sym package>);
    goto L1(r2);
  L7():
    r = dyn base(<sym package>);
    goto L1(r);
  L2(c1):
    c9 = `as.logical`(c1);
    if c9 then L14() else L4();
  L8():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L3(c5, r4):
    r6 = `!=`(r4, 1);
    c6 = `as.logical`(r6);
    c7 = `||`(c5, c6);
    goto L2(c7);
  L4():
    goto L5();
  L5():
    find_package = ldf `find.package`;
    check L18() else D4();
  L9():
    package1 = ld package;
    check L11() else D0();
  L10():
    r3 = dyn base1(<sym package>);
    goto L3(c, r3);
  L14():
    stop = ldf stop;
    check L15() else D2();
  D0():
    deopt 5 [c, package1];
  D2():
    deopt 13 [];
  D4():
    deopt 19 [];
  L11():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r5 = dyn length(package2);
    check L12() else D1();
  L15():
    r7 = dyn stop("argument 'package' must be of length 1");
    check L16() else D3();
  L18():
    p = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r11 = dyn find_package(p, p1);
    check L19() else D5();
  D1():
    deopt 8 [c, r5];
  D3():
    deopt 15 [r7];
  D5():
    deopt 22 [r11];
  L12():
    goto L3(c, r5);
  L16():
    goto L5();
  L19():
    st dir = r11;
    _read_description = ldf `.read_description`;
    check L20() else D6();
  D6():
    deopt 25 [];
  L20():
    p3 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        dir = ld dir;
        dir1 = force? dir;
        checkMissing(dir1);
        return dir1;
      };
      r13 = dyn file_path(p2, "DESCRIPTION");
      return r13;
    };
    r15 = dyn _read_description(p3);
    check L21() else D7();
  D7():
    deopt 27 [r15];
  L21():
    st db = r15;
    _package_vignettes_via_call_to_R = ldf `.package_vignettes_via_call_to_R`;
    check L22() else D8();
  D8():
    deopt 30 [];
  L22():
    p4 = prom<V +>{
      dir2 = ld dir;
      dir3 = force? dir2;
      checkMissing(dir3);
      return dir3;
    };
    r17 = dyn _package_vignettes_via_call_to_R[dir, subdirs, source](p4, "doc", TRUE);
    check L23() else D9();
  D9():
    deopt 37 [r17];
  L23():
    st vinfo = r17;
    unique = ldf unique;
    check L24() else D10();
  D10():
    deopt 40 [];
  L24():
    p6 = prom<V +>{
      sym2 = ldf `as.character`;
      base2 = ldf `as.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      unlist = ldf unlist;
      p5 = prom<V +>{
        vinfo = ld vinfo;
        vinfo1 = force? vinfo;
        checkMissing(vinfo1);
        c10 = `is.object`(vinfo1);
        if c10 then L1() else L2(vinfo1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", vinfo1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(vinfo3):
        r20 = `$`(vinfo3, <sym sources>);
        goto L0(r20);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r22 = dyn unlist(p5);
      as_character = ldf `as.character` in base;
      r23 = dyn as_character(r22);
      goto L0(r23);
    L2():
      r18 = dyn base2(<lang unlist(`$`(vinfo, sources))>);
      goto L0(r18);
    };
    r25 = dyn unique(p6);
    check L25() else D11();
  D11():
    deopt 42 [r25];
  L25():
    st Rfiles = r25;
    _check_packages_used_helper = ldf `.check_packages_used_helper`;
    check L26() else D12();
  D12():
    deopt 45 [];
  L26():
    p7 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p8 = prom<V +>{
      Rfiles = ld Rfiles;
      Rfiles1 = force? Rfiles;
      checkMissing(Rfiles1);
      return Rfiles1;
    };
    r28 = dyn _check_packages_used_helper(p7, p8);
    check L27() else D13();
  D13():
    deopt 48 [r28];
  L27():
    popenv;
    return r28;
  }
}