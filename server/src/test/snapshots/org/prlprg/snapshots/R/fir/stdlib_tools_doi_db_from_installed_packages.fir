fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3195606894;
    st doi_db_from_installed_packages = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3195606894(packages, `lib.loc`, verbose, Rd) {
  (reg packages:*, reg lib_loc:*, reg verbose:*, reg Rd:*) -+> V { var packages:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var Rd:*, reg Rd_isMissing:L, reg Rd_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg packages1:*, reg packages2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg r6:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg lapply:cls, reg packages3:*, reg packages4:V, reg p1:p(V +), reg one:*, reg one1:V, reg p2:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg list:cls, reg r15:V, reg c1:cls, reg r16:V, reg p3:p(V +), reg r18:V |
    mkenv;
    st packages = packages;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L1(FALSE) else L1(verbose);
  L1(verbose_orDefault):
    st verbose = verbose_orDefault;
    Rd_isMissing = missing.0(Rd);
    if Rd_isMissing then L2(FALSE) else L2(Rd);
  L2(Rd_orDefault):
    st Rd = Rd_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L3(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L10() else L4();
  L6():
    packages1 = ld packages;
    check L8() else D0();
  L7():
    r = dyn base(<sym packages>);
    goto L3(r);
  D0():
    deopt 2 [packages1];
  L4():
    r6 = clos inner3913899244;
    st one = r6;
    do_call = ldf `do.call`;
    check L13() else D2();
  L8():
    packages2 = force? packages1;
    checkMissing(packages2);
    length = ldf length in base;
    r2 = dyn length(packages2);
    check L9() else D1();
  L10():
    popenv;
    return NULL;
  D1():
    deopt 5 [r2];
  D2():
    deopt 16 [];
  L9():
    goto L3(r2);
  L13():
    p = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r9):
      return r9;
    L2():
      lapply = ldf lapply;
      p1 = prom<V +>{
        packages3 = ld packages;
        packages4 = force? packages3;
        checkMissing(packages4);
        return packages4;
      };
      p2 = prom<V +>{
        one = ld one;
        one1 = force? one;
        checkMissing(one1);
        return one1;
      };
      r12 = dyn lapply(p1, p2);
      sym2 = ldf list;
      base2 = ldf list in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r8 = dyn base1(<lang lapply(packages, one)>, <lang list(make.row.names=FALSE)>);
      goto L0(r8);
    L1(r14):
      c1 = ldf c in base;
      r16 = dyn c1(r12, r14);
      goto L0(r16);
    L4():
      list = ldf list in base;
      r15 = dyn list(FALSE);
      goto L1(r15);
    L5():
      r13 = dyn base2[`make.row.names`](FALSE);
      goto L1(r13);
    };
    r18 = dyn do_call(p, p3);
    check L14() else D3();
  D3():
    deopt 19 [r18];
  L14():
    popenv;
    return r18;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg verbose:*, reg verbose1:V, reg c:L, reg message:cls, reg sprintf:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg r1:V, reg p4:p(V +), reg r3:V, reg system_file:cls, reg p5:*, reg p6:V, reg p7:p(V +), reg lib_loc:*, reg lib_loc1:V, reg p8:p(V +), reg r7:V, reg dir:*, reg dir1:V, reg r8:V, reg c1:L, reg _read_description:cls, reg file_path:cls, reg dir2:*, reg dir3:V, reg p9:p(V +), reg r12:V, reg p10:p(V +), reg r14:V, reg rbind:cls, reg doi_db_from_package_metadata:cls, reg meta:*, reg meta1:V, reg p11:p(V +), reg r16:V, reg p12:p(V +), reg doi_db_from_package_citation:cls, reg dir4:*, reg dir5:V, reg p13:p(V +), reg meta2:*, reg meta3:V, reg p14:p(V +), reg r20:V, reg p15:p(V +), reg Rd:*, reg Rd1:V, reg c2:L, reg Rd_db:cls, reg p16:*, reg p17:V, reg p18:p(V +), reg dirname:cls, reg dir6:*, reg dir7:V, reg p19:p(V +), reg r24:V, reg p20:p(V +), reg r26:V, reg doi_db_from_package_Rd_db:cls, reg rddb:*, reg rddb1:V, reg p21:p(V +), reg r28:V, reg p22:p(V +), reg r30:V, reg file_path1:cls, reg p23:*, reg p24:V, reg p25:p(V +), reg db:*, reg db1:V, reg c3:L, reg db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r32:V, reg p26:p(V +), reg r34:V, reg l:*, reg c4:L, reg r36:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r39:V, reg db4:*, reg db5:V |
    mkenv;
    st p = p;
    verbose = ld verbose;
    check L4() else D0();
  D0():
    deopt 0 [verbose];
  L4():
    verbose1 = force? verbose;
    checkMissing(verbose1);
    c = `as.logical`(verbose1);
    if c then L5() else L0();
  L0():
    goto L1();
  L1():
    system_file = ldf `system.file`;
    check L9() else D3();
  L5():
    message = ldf message;
    check L6() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 9 [];
  L6():
    p4 = prom<V +>{
      sprintf = ldf sprintf;
      p3 = prom<V +>{
        p1 = ld p;
        p2 = force? p1;
        checkMissing(p2);
        return p2;
      };
      r1 = dyn sprintf("processing %s", p3);
      return r1;
    };
    r3 = dyn message(p4);
    check L7() else D2();
  L9():
    p7 = prom<V +>{
      p5 = ld p;
      p6 = force? p5;
      checkMissing(p6);
      return p6;
    };
    p8 = prom<V +>{
      lib_loc = ld `lib.loc`;
      lib_loc1 = force? lib_loc;
      checkMissing(lib_loc1);
      return lib_loc1;
    };
    r7 = dyn system_file[package, `lib.loc`](p7, p8);
    check L10() else D4();
  D2():
    deopt 5 [r3];
  D4():
    deopt 14 [r7];
  L7():
    goto L1();
  L10():
    st dir = r7;
    dir = ld dir;
    check L11() else D5();
  D5():
    deopt 16 [dir];
  L11():
    dir1 = force? dir;
    checkMissing(dir1);
    r8 = `==`(dir1, "");
    c1 = `as.logical`(r8);
    if c1 then L12() else L2();
  L2():
    _read_description = ldf `.read_description`;
    check L15() else D6();
  L12():
    popenv;
    return NULL;
  D6():
    deopt 26 [];
  L15():
    p10 = prom<V +>{
      file_path = ldf `file.path`;
      p9 = prom<V +>{
        dir2 = ld dir;
        dir3 = force? dir2;
        checkMissing(dir3);
        return dir3;
      };
      r12 = dyn file_path(p9, "DESCRIPTION");
      return r12;
    };
    r14 = dyn _read_description(p10);
    check L16() else D7();
  D7():
    deopt 28 [r14];
  L16():
    st meta = r14;
    rbind = ldf rbind;
    check L17() else D8();
  D8():
    deopt 31 [];
  L17():
    p12 = prom<V +>{
      doi_db_from_package_metadata = ldf doi_db_from_package_metadata;
      p11 = prom<V +>{
        meta = ld meta;
        meta1 = force? meta;
        checkMissing(meta1);
        return meta1;
      };
      r16 = dyn doi_db_from_package_metadata(p11);
      return r16;
    };
    p15 = prom<V +>{
      doi_db_from_package_citation = ldf doi_db_from_package_citation;
      p13 = prom<V +>{
        dir4 = ld dir;
        dir5 = force? dir4;
        checkMissing(dir5);
        return dir5;
      };
      p14 = prom<V +>{
        meta2 = ld meta;
        meta3 = force? meta2;
        checkMissing(meta3);
        return meta3;
      };
      r20 = dyn doi_db_from_package_citation[, , installed](p13, p14, TRUE);
      return r20;
    };
    p22 = prom<V +>{
      Rd = ld Rd;
      Rd1 = force? Rd;
      checkMissing(Rd1);
      c2 = `as.logical`(Rd1);
      if c2 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      Rd_db = ldf Rd_db;
      p18 = prom<V +>{
        p16 = ld p;
        p17 = force? p16;
        checkMissing(p17);
        return p17;
      };
      p20 = prom<V +>{
        dirname = ldf dirname;
        p19 = prom<V +>{
          dir6 = ld dir;
          dir7 = force? dir6;
          checkMissing(dir7);
          return dir7;
        };
        r24 = dyn dirname(p19);
        return r24;
      };
      r26 = dyn Rd_db[, `lib.loc`](p18, p20);
      st rddb = r26;
      doi_db_from_package_Rd_db = ldf doi_db_from_package_Rd_db;
      p21 = prom<V +>{
        rddb = ld rddb;
        rddb1 = force? rddb;
        checkMissing(rddb1);
        return rddb1;
      };
      r28 = dyn doi_db_from_package_Rd_db(p21);
      return r28;
    };
    r30 = dyn rbind(p12, p15, p22);
    check L18() else D9();
  D9():
    deopt 35 [r30];
  L18():
    st db = r30;
    file_path1 = ldf `file.path`;
    check L19() else D10();
  D10():
    deopt 38 [];
  L19():
    p25 = prom<V +>{
      p23 = ld p;
      p24 = force? p23;
      checkMissing(p24);
      return p24;
    };
    p26 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      c3 = `is.object`(db1);
      if c3 then L1() else L2(db1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", db1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(db3):
      r32 = `$`(db3, <sym Parent>);
      goto L0(r32);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r34 = dyn file_path1(p25, p26);
    check L20() else D11();
  D11():
    deopt 41 [r34];
  L20():
    l = ld db;
    c4 = `is.object`(l);
    if c4 then L22() else L23(r34, l);
  L21(dx3):
    st db = dx3;
    db4 = ld db;
    check L25() else D12();
  L22():
    dr2 = tryDispatchBuiltin.0("$<-", l, r34);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(r34, dr2);
  L23(r36, l2):
    r39 = `$<-`(l2, <sym Parent>, r34);
    goto L21(r39);
  D12():
    deopt 45 [db4];
  L24():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L21(dx2);
  L25():
    db5 = force? db4;
    checkMissing(db5);
    popenv;
    return db5;
  }
}