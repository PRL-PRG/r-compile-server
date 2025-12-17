fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1827804468;
    st Rd_aliases = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1827804468(package, dir, `lib.loc`) {
  (reg package:*, reg dir:*, reg lib_loc:*) -+> V { var package:*, var dir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg find_package:cls, reg package1:*, reg package2:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg r6:V, reg file_path:cls, reg dir1:*, reg dir2:V, reg p2:p(V +), reg r8:V, reg file_test:cls, reg rds:*, reg rds1:V, reg p3:p(V +), reg r10:V, reg c1:L, reg readRDS:cls, reg rds2:*, reg rds3:V, reg p4:p(V +), reg r12:V, reg c2:L, reg r14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg aliases:*, reg aliases1:V, reg length:cls, reg r18:V, reg c3:L, reg sort:cls, reg unlist:cls, reg aliases2:*, reg aliases3:V, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg r22:V, reg character:cls, reg r23:V, reg character1:cls, reg r24:V, reg dir_exists:cls, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p7:p(V +), reg r26:V, reg p8:p(V +), reg r28:V, reg c4:L, reg Rd_db:cls, reg dir5:*, reg dir6:V, reg p9:p(V +), reg r30:V, reg lapply:cls, reg db:*, reg db1:V, reg p10:p(V +), reg _Rd_get_metadata:*, reg _Rd_get_metadata1:V, reg p11:p(V +), reg r33:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r34:V, reg r35:V, reg aliases4:*, reg aliases5:V, reg length1:cls, reg r36:V, reg c5:L, reg sort1:cls, reg unique:cls, reg unlist1:cls, reg aliases6:*, reg aliases7:V, reg p12:p(V +), reg r38:V, reg p13:p(V +), reg r40:V, reg p14:p(V +), reg r42:V, reg character2:cls, reg r43:V, reg character3:cls, reg r44:V |
    mkenv;
    st package = package;
    st dir = dir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L11() else L2();
  L9():
    missing = ldf missing in base;
    r2 = dyn missing(<sym package>);
    goto L1(r2);
  L10():
    r = dyn base(<sym package>);
    goto L1(r);
  L2():
    dir_exists = ldf `dir.exists`;
    check L39() else D16();
  L11():
    find_package = ldf `find.package`;
    check L12() else D0();
  D0():
    deopt 5 [];
  D16():
    deopt 45 [];
  L12():
    p = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    r6 = dyn find_package(p, p1);
    check L13() else D1();
  L39():
    p8 = prom<V +>{
      file_path1 = ldf `file.path`;
      p7 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r26 = dyn file_path1(p7, "man");
      return r26;
    };
    r28 = dyn dir_exists(p8);
    check L40() else D17();
  D1():
    deopt 8 [r6];
  D17():
    deopt 47 [r28];
  L13():
    st dir = r6;
    file_path = ldf `file.path`;
    check L14() else D2();
  L40():
    c4 = `as.logical`(r28);
    if c4 then L41() else L6();
  D2():
    deopt 11 [];
  L6():
    character3 = ldf character;
    check L57() else D28();
  L14():
    p2 = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r8 = dyn file_path(p2, "Meta", "Rd.rds");
    check L15() else D3();
  L41():
    Rd_db = ldf Rd_db;
    check L42() else D18();
  D3():
    deopt 15 [r8];
  D18():
    deopt 49 [];
  D28():
    deopt 75 [];
  L15():
    st rds = r8;
    file_test = ldf file_test;
    check L16() else D4();
  L42():
    p9 = prom<V +>{
      dir5 = ld dir;
      dir6 = force? dir5;
      checkMissing(dir6);
      return dir6;
    };
    r30 = dyn Rd_db[dir](p9);
    check L43() else D19();
  L57():
    r44 = dyn character3();
    check L58() else D29();
  D4():
    deopt 18 [];
  D19():
    deopt 52 [r30];
  D29():
    deopt 76 [r44];
  L16():
    p3 = prom<V +>{
      rds = ld rds;
      rds1 = force? rds;
      checkMissing(rds1);
      return rds1;
    };
    r10 = dyn file_test("-f", p3);
    check L17() else D5();
  L43():
    st db = r30;
    lapply = ldf lapply;
    check L44() else D20();
  L58():
    popenv;
    return r44;
  D5():
    deopt 21 [r10];
  D20():
    deopt 55 [];
  L17():
    c1 = `as.logical`(r10);
    if c1 then L18() else L3();
  L44():
    p10 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p11 = prom<V +>{
      _Rd_get_metadata = ld `.Rd_get_metadata`;
      _Rd_get_metadata1 = force? _Rd_get_metadata;
      checkMissing(_Rd_get_metadata1);
      return _Rd_get_metadata1;
    };
    r33 = dyn lapply(p10, p11, "alias");
    check L45() else D21();
  D21():
    deopt 59 [r33];
  L3():
    character1 = ldf character;
    check L36() else D14();
  L18():
    readRDS = ldf readRDS;
    check L19() else D6();
  L45():
    st aliases = r33;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  D6():
    deopt 23 [];
  D14():
    deopt 42 [];
  L7(r35):
    c5 = `as.logical`(r35);
    if c5 then L50() else L8();
  L19():
    p4 = prom<V +>{
      rds2 = ld rds;
      rds3 = force? rds2;
      checkMissing(rds3);
      return rds3;
    };
    r12 = dyn readRDS(p4);
    check L20() else D7();
  L36():
    r24 = dyn character1();
    check L37() else D15();
  L46():
    aliases4 = ld aliases;
    check L48() else D22();
  L47():
    r34 = dyn base2(<sym aliases>);
    goto L7(r34);
  D7():
    deopt 25 [r12];
  D15():
    deopt 43 [r24];
  D22():
    deopt 63 [aliases4];
  L8():
    character2 = ldf character;
    check L54() else D26();
  L20():
    c2 = `is.object`(r12);
    if c2 then L22() else L23(r12);
  L37():
    popenv;
    return r24;
  L48():
    aliases5 = force? aliases4;
    checkMissing(aliases5);
    length1 = ldf length in base;
    r36 = dyn length1(aliases5);
    check L49() else D23();
  L50():
    sort1 = ldf sort;
    check L51() else D24();
  D23():
    deopt 66 [r36];
  D24():
    deopt 68 [];
  D26():
    deopt 72 [];
  L21(dx1):
    st aliases = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L22():
    dr = tryDispatchBuiltin.1("$", r12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(r14):
    r15 = `$`(r14, <sym Aliases>);
    goto L21(r15);
  L49():
    goto L7(r36);
  L51():
    p14 = prom<V +>{
      unique = ldf unique;
      p13 = prom<V +>{
        unlist1 = ldf unlist;
        p12 = prom<V +>{
          aliases6 = ld aliases;
          aliases7 = force? aliases6;
          checkMissing(aliases7);
          return aliases7;
        };
        r38 = dyn unlist1[, `use.names`](p12, FALSE);
        return r38;
      };
      r40 = dyn unique(p13);
      return r40;
    };
    r42 = dyn sort1(p14);
    check L52() else D25();
  L54():
    r43 = dyn character2();
    check L55() else D27();
  D25():
    deopt 70 [r42];
  D27():
    deopt 73 [r43];
  L4(r17):
    c3 = `as.logical`(r17);
    if c3 then L29() else L5();
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(dx);
  L25():
    aliases = ld aliases;
    check L27() else D8();
  L26():
    r16 = dyn base1(<sym aliases>);
    goto L4(r16);
  L52():
    popenv;
    return r42;
  L55():
    popenv;
    return r43;
  D8():
    deopt 30 [aliases];
  L5():
    character = ldf character;
    check L33() else D12();
  L27():
    aliases1 = force? aliases;
    checkMissing(aliases1);
    length = ldf length in base;
    r18 = dyn length(aliases1);
    check L28() else D9();
  L29():
    sort = ldf sort;
    check L30() else D10();
  D9():
    deopt 33 [r18];
  D10():
    deopt 35 [];
  D12():
    deopt 39 [];
  L28():
    goto L4(r18);
  L30():
    p6 = prom<V +>{
      unlist = ldf unlist;
      p5 = prom<V +>{
        aliases2 = ld aliases;
        aliases3 = force? aliases2;
        checkMissing(aliases3);
        return aliases3;
      };
      r20 = dyn unlist(p5);
      return r20;
    };
    r22 = dyn sort(p6);
    check L31() else D11();
  L33():
    r23 = dyn character();
    check L34() else D13();
  D11():
    deopt 37 [r22];
  D13():
    deopt 40 [r23];
  L31():
    popenv;
    return r22;
  L34():
    popenv;
    return r23;
  }
}