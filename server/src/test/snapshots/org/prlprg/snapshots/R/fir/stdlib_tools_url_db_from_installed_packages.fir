fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3545192514;
    st url_db_from_installed_packages = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3545192514(packages, `lib.loc`, verbose) {
  (reg packages:*, reg lib_loc:*, reg verbose:*) -+> V { var packages:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg packages1:*, reg packages2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg r6:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg lapply:cls, reg packages3:*, reg packages4:V, reg p1:p(V +), reg one:*, reg one1:V, reg p2:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg list:cls, reg r15:V, reg c1:cls, reg r16:V, reg p3:p(V +), reg r18:V |
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
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L2(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L9() else L3();
  L5():
    packages1 = ld packages;
    check L7() else D0();
  L6():
    r = dyn base(<sym packages>);
    goto L2(r);
  D0():
    deopt 2 [packages1];
  L3():
    r6 = clos inner3913899244;
    st one = r6;
    do_call = ldf `do.call`;
    check L12() else D2();
  L7():
    packages2 = force? packages1;
    checkMissing(packages2);
    length = ldf length in base;
    r2 = dyn length(packages2);
    check L8() else D1();
  L9():
    popenv;
    return NULL;
  D1():
    deopt 5 [r2];
  D2():
    deopt 16 [];
  L8():
    goto L2(r2);
  L12():
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
    check L13() else D3();
  D3():
    deopt 19 [r18];
  L13():
    popenv;
    return r18;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg verbose:*, reg verbose1:V, reg c:L, reg message:cls, reg sprintf:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg r1:V, reg p4:p(V +), reg r3:V, reg system_file:cls, reg p5:*, reg p6:V, reg p7:p(V +), reg lib_loc:*, reg lib_loc1:V, reg p8:p(V +), reg r7:V, reg dir:*, reg dir1:V, reg r8:V, reg c1:L, reg _read_description:cls, reg file_path:cls, reg dir2:*, reg dir3:V, reg p9:p(V +), reg r12:V, reg p10:p(V +), reg r14:V, reg Rd_db:cls, reg p11:*, reg p12:V, reg p13:p(V +), reg dirname:cls, reg dir4:*, reg dir5:V, reg p14:p(V +), reg r17:V, reg p15:p(V +), reg r19:V, reg rbind:cls, reg url_db_from_package_metadata:cls, reg meta:*, reg meta1:V, reg p16:p(V +), reg r21:V, reg p17:p(V +), reg url_db_from_package_Rd_db:cls, reg rddb:*, reg rddb1:V, reg p18:p(V +), reg r24:V, reg p19:p(V +), reg url_db_from_package_citation:cls, reg dir6:*, reg dir7:V, reg p20:p(V +), reg meta2:*, reg meta3:V, reg p21:p(V +), reg r28:V, reg p22:p(V +), reg url_db_from_package_news:cls, reg dir8:*, reg dir9:V, reg p23:p(V +), reg r31:V, reg p24:p(V +), reg r33:V, reg requireNamespace:cls, reg r34:V, reg c2:L, reg rbind1:cls, reg db:*, reg db1:V, reg p25:p(V +), reg url_db_from_package_HTML_files:cls, reg dir10:*, reg dir11:V, reg p26:p(V +), reg r37:V, reg p27:p(V +), reg url_db_from_package_README_md:cls, reg dir12:*, reg dir13:V, reg p28:p(V +), reg r40:V, reg p29:p(V +), reg url_db_from_package_NEWS_md:cls, reg dir14:*, reg dir15:V, reg p30:p(V +), reg r43:V, reg p31:p(V +), reg r45:V, reg file_path1:cls, reg p32:*, reg p33:V, reg p34:p(V +), reg db2:*, reg db3:V, reg c3:L, reg db5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r48:V, reg p35:p(V +), reg r50:V, reg l:*, reg c4:L, reg r52:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r55:V, reg db6:*, reg db7:V |
    mkenv;
    st p = p;
    verbose = ld verbose;
    check L6() else D0();
  D0():
    deopt 0 [verbose];
  L6():
    verbose1 = force? verbose;
    checkMissing(verbose1);
    c = `as.logical`(verbose1);
    if c then L7() else L0();
  L0():
    goto L1();
  L1():
    system_file = ldf `system.file`;
    check L11() else D3();
  L7():
    message = ldf message;
    check L8() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 9 [];
  L8():
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
    check L9() else D2();
  L11():
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
    check L12() else D4();
  D2():
    deopt 5 [r3];
  D4():
    deopt 14 [r7];
  L9():
    goto L1();
  L12():
    st dir = r7;
    dir = ld dir;
    check L13() else D5();
  D5():
    deopt 16 [dir];
  L13():
    dir1 = force? dir;
    checkMissing(dir1);
    r8 = `==`(dir1, "");
    c1 = `as.logical`(r8);
    if c1 then L14() else L2();
  L2():
    _read_description = ldf `.read_description`;
    check L17() else D6();
  L14():
    popenv;
    return NULL;
  D6():
    deopt 26 [];
  L17():
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
    check L18() else D7();
  D7():
    deopt 28 [r14];
  L18():
    st meta = r14;
    Rd_db = ldf Rd_db;
    check L19() else D8();
  D8():
    deopt 31 [];
  L19():
    p13 = prom<V +>{
      p11 = ld p;
      p12 = force? p11;
      checkMissing(p12);
      return p12;
    };
    p15 = prom<V +>{
      dirname = ldf dirname;
      p14 = prom<V +>{
        dir4 = ld dir;
        dir5 = force? dir4;
        checkMissing(dir5);
        return dir5;
      };
      r17 = dyn dirname(p14);
      return r17;
    };
    r19 = dyn Rd_db[, `lib.loc`](p13, p15);
    check L20() else D9();
  D9():
    deopt 35 [r19];
  L20():
    st rddb = r19;
    rbind = ldf rbind;
    check L21() else D10();
  D10():
    deopt 38 [];
  L21():
    p17 = prom<V +>{
      url_db_from_package_metadata = ldf url_db_from_package_metadata;
      p16 = prom<V +>{
        meta = ld meta;
        meta1 = force? meta;
        checkMissing(meta1);
        return meta1;
      };
      r21 = dyn url_db_from_package_metadata(p16);
      return r21;
    };
    p19 = prom<V +>{
      url_db_from_package_Rd_db = ldf url_db_from_package_Rd_db;
      p18 = prom<V +>{
        rddb = ld rddb;
        rddb1 = force? rddb;
        checkMissing(rddb1);
        return rddb1;
      };
      r24 = dyn url_db_from_package_Rd_db(p18);
      return r24;
    };
    p22 = prom<V +>{
      url_db_from_package_citation = ldf url_db_from_package_citation;
      p20 = prom<V +>{
        dir6 = ld dir;
        dir7 = force? dir6;
        checkMissing(dir7);
        return dir7;
      };
      p21 = prom<V +>{
        meta2 = ld meta;
        meta3 = force? meta2;
        checkMissing(meta3);
        return meta3;
      };
      r28 = dyn url_db_from_package_citation[, , installed](p20, p21, TRUE);
      return r28;
    };
    p24 = prom<V +>{
      url_db_from_package_news = ldf url_db_from_package_news;
      p23 = prom<V +>{
        dir8 = ld dir;
        dir9 = force? dir8;
        checkMissing(dir9);
        return dir9;
      };
      r31 = dyn url_db_from_package_news[, installed](p23, TRUE);
      return r31;
    };
    r33 = dyn rbind(p17, p19, p22, p24);
    check L22() else D11();
  D11():
    deopt 43 [r33];
  L22():
    st db = r33;
    requireNamespace = ldf requireNamespace;
    check L23() else D12();
  D12():
    deopt 46 [];
  L23():
    r34 = dyn requireNamespace[, quietly]("xml2", TRUE);
    check L24() else D13();
  D13():
    deopt 50 [r34];
  L24():
    c2 = `as.logical`(r34);
    if c2 then L25() else L4();
  L4():
    goto L5();
  L5():
    file_path1 = ldf `file.path`;
    check L29() else D16();
  L25():
    rbind1 = ldf rbind;
    check L26() else D14();
  D14():
    deopt 52 [];
  D16():
    deopt 62 [];
  L26():
    p25 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p27 = prom<V +>{
      url_db_from_package_HTML_files = ldf url_db_from_package_HTML_files;
      p26 = prom<V +>{
        dir10 = ld dir;
        dir11 = force? dir10;
        checkMissing(dir11);
        return dir11;
      };
      r37 = dyn url_db_from_package_HTML_files[, installed](p26, TRUE);
      return r37;
    };
    p29 = prom<V +>{
      url_db_from_package_README_md = ldf url_db_from_package_README_md;
      p28 = prom<V +>{
        dir12 = ld dir;
        dir13 = force? dir12;
        checkMissing(dir13);
        return dir13;
      };
      r40 = dyn url_db_from_package_README_md[, installed](p28, TRUE);
      return r40;
    };
    p31 = prom<V +>{
      url_db_from_package_NEWS_md = ldf url_db_from_package_NEWS_md;
      p30 = prom<V +>{
        dir14 = ld dir;
        dir15 = force? dir14;
        checkMissing(dir15);
        return dir15;
      };
      r43 = dyn url_db_from_package_NEWS_md[, installed](p30, TRUE);
      return r43;
    };
    r45 = dyn rbind1(p25, p27, p29, p31);
    check L27() else D15();
  L29():
    p34 = prom<V +>{
      p32 = ld p;
      p33 = force? p32;
      checkMissing(p33);
      return p33;
    };
    p35 = prom<V +>{
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      c3 = `is.object`(db3);
      if c3 then L1() else L2(db3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", db3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(db5):
      r48 = `$`(db5, <sym Parent>);
      goto L0(r48);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r50 = dyn file_path1(p34, p35);
    check L30() else D17();
  D15():
    deopt 57 [r45];
  D17():
    deopt 65 [r50];
  L27():
    st db = r45;
    goto L5();
  L30():
    l = ld db;
    c4 = `is.object`(l);
    if c4 then L32() else L33(r50, l);
  L31(dx3):
    st db = dx3;
    db6 = ld db;
    check L35() else D18();
  L32():
    dr2 = tryDispatchBuiltin.0("$<-", l, r50);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L34() else L33(r50, dr2);
  L33(r52, l2):
    r55 = `$<-`(l2, <sym Parent>, r50);
    goto L31(r55);
  D18():
    deopt 69 [db6];
  L34():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L31(dx2);
  L35():
    db7 = force? db6;
    checkMissing(db7);
    popenv;
    return db7;
  }
}