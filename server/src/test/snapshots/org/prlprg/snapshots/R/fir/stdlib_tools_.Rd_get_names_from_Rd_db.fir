fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2058174622;
    st `.Rd_get_names_from_Rd_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2058174622(db) {
  (reg db:*) -+> V { var db:*, reg lapply:cls, reg db1:*, reg db2:V, reg p:p(V +), reg _Rd_get_name:*, reg _Rd_get_name1:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg lengths:cls, reg Rd_names:*, reg Rd_names1:V, reg p2:p(V +), reg r6:V, reg as_integer:cls, reg r7:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg idx:*, reg idx1:V, reg any:cls, reg r11:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg db3:*, reg db4:V, reg names:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg Rd_paths:*, reg Rd_paths1:V, reg c1:V, reg c2:L, reg stop:cls, reg r17:V, reg r18:V, reg stop1:cls, reg sprintf:cls, reg ngettext:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg idx2:*, reg idx3:V, reg sum:cls, reg r21:V, reg p3:p(V +), reg r23:V, reg p4:p(V +), reg paste0:cls, reg Rd_paths2:*, reg Rd_paths3:V, reg c3:L, reg Rd_paths5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg idx4:*, reg idx5:V, reg __:cls, reg r25:V, reg p5:p(V +), reg r27:V, reg p6:p(V +), reg r29:V, reg p7:p(V +), reg r31:V, reg unlist:cls, reg Rd_names2:*, reg Rd_names3:V, reg p8:p(V +), reg r34:V |
    mkenv;
    st db = db;
    lapply = ldf lapply;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      db1 = ld db;
      db2 = force? db1;
      checkMissing(db2);
      return db2;
    };
    p1 = prom<V +>{
      _Rd_get_name = ld `.Rd_get_name`;
      _Rd_get_name1 = force? _Rd_get_name;
      checkMissing(_Rd_get_name1);
      return _Rd_get_name1;
    };
    r2 = dyn lapply(p, p1);
    check L9() else D1();
  D1():
    deopt 4 [r2];
  L9():
    st Rd_names = r2;
    sym = ldf `as.integer`;
    base = ldf `as.integer` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r4):
    r8 = `==`(r4, 0);
    st idx = r8;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L10():
    lengths = ldf lengths;
    check L12() else D2();
  L11():
    r3 = dyn base(<lang lengths(Rd_names)>);
    goto L0(r3);
  D2():
    deopt 9 [];
  L1(r10):
    c = `as.logical`(r10);
    if c then L19() else L2();
  L12():
    p2 = prom<V +>{
      Rd_names = ld Rd_names;
      Rd_names1 = force? Rd_names;
      checkMissing(Rd_names1);
      return Rd_names1;
    };
    r6 = dyn lengths(p2);
    check L13() else D3();
  L15():
    idx = ld idx;
    check L17() else D5();
  L16():
    r9 = dyn base1(<sym idx>);
    goto L1(r9);
  D3():
    deopt 11 [r6];
  D5():
    deopt 19 [idx];
  L2():
    goto L7();
  L7():
    unlist = ldf unlist;
    check L34() else D14();
  L13():
    as_integer = ldf `as.integer` in base;
    r7 = dyn as_integer(r6);
    check L14() else D4();
  L17():
    idx1 = force? idx;
    checkMissing(idx1);
    any = ldf any in base;
    r11 = dyn any(idx1);
    check L18() else D6();
  L19():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  D4():
    deopt 13 [r7];
  D6():
    deopt 22 [r11];
  D14():
    deopt 49 [];
  L3(r13):
    st Rd_paths = r13;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L14():
    goto L0(r7);
  L18():
    goto L1(r11);
  L20():
    db3 = ld db;
    check L22() else D7();
  L21():
    r12 = dyn base2(<sym db>);
    goto L3(r12);
  L34():
    p8 = prom<V +>{
      Rd_names2 = ld Rd_names;
      Rd_names3 = force? Rd_names2;
      checkMissing(Rd_names3);
      return Rd_names3;
    };
    r34 = dyn unlist(p8);
    check L35() else D15();
  D7():
    deopt 25 [db3];
  D15():
    deopt 51 [r34];
  L4(r16):
    c2 = `as.logical`(r16);
    if c2 then L27() else L5();
  L22():
    db4 = force? db3;
    checkMissing(db4);
    names = ldf names in base;
    r14 = dyn names(db4);
    check L23() else D8();
  L24():
    Rd_paths = ld Rd_paths;
    check L26() else D9();
  L25():
    r15 = dyn base3(<sym Rd_paths>);
    goto L4(r15);
  L35():
    popenv;
    return r34;
  D8():
    deopt 28 [r14];
  D9():
    deopt 31 [Rd_paths];
  L5():
    stop1 = ldf stop;
    check L31() else D12();
  L6(r18):
    goto L7();
  L23():
    goto L3(r14);
  L26():
    Rd_paths1 = force? Rd_paths;
    checkMissing(Rd_paths1);
    c1 = `==`(Rd_paths1, NULL);
    goto L4(c1);
  L27():
    stop = ldf stop;
    check L28() else D10();
  D10():
    deopt 35 [];
  D12():
    deopt 39 [];
  L28():
    r17 = dyn stop("cannot deal with Rd objects with missing/empty names");
    check L29() else D11();
  L31():
    p7 = prom<V +>{
      sprintf = ldf sprintf;
      p4 = prom<V +>{
        ngettext = ldf ngettext;
        p3 = prom<V +>{
          sym4 = ldf sum;
          base4 = ldf sum in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r20):
          return r20;
        L1():
          idx2 = ld idx;
          idx3 = force? idx2;
          checkMissing(idx3);
          sum = ldf sum in base;
          r21 = dyn sum(idx3);
          goto L0(r21);
        L2():
          r19 = dyn base4(<sym idx>);
          goto L0(r19);
        };
        r23 = dyn ngettext(p3, "missing/empty \\name field in Rd file\n%s", "missing/empty \\name field in Rd files\n%s");
        return r23;
      };
      p6 = prom<V +>{
        paste0 = ldf paste0;
        p5 = prom<V +>{
          Rd_paths2 = ld Rd_paths;
          Rd_paths3 = force? Rd_paths2;
          checkMissing(Rd_paths3);
          c3 = `is.object`(Rd_paths3);
          if c3 then L1() else L2(Rd_paths3);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", Rd_paths3);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(Rd_paths5):
          idx4 = ld idx;
          idx5 = force? idx4;
          __ = ldf `[` in base;
          r25 = dyn __(Rd_paths5, idx5);
          goto L0(r25);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r27 = dyn paste0[, , collapse]("  ", p5, "\n");
        return r27;
      };
      r29 = dyn sprintf(p4, p6);
      return r29;
    };
    r31 = dyn stop1[, `call.`, domain](p7, FALSE, NA_LGL);
    check L32() else D13();
  D11():
    deopt 37 [r17];
  D13():
    deopt 45 [r31];
  L29():
    goto L6(r17);
  L32():
    goto L6(r31);
  }
}