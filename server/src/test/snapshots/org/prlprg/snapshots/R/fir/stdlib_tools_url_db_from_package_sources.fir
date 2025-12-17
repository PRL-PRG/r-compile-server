fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2523651142;
    st url_db_from_package_sources = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2523651142(dir, add) {
  (reg dir:*, reg add:*) -+> V { var dir:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, reg _get_package_metadata:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg rbind:cls, reg url_db_from_package_metadata:cls, reg meta:*, reg meta1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg url_db_from_package_Rd_db:cls, reg Rd_db:cls, reg dir3:*, reg dir4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), reg url_db_from_package_citation:cls, reg dir5:*, reg dir6:V, reg p6:p(V +), reg meta2:*, reg meta3:V, reg p7:p(V +), reg r12:V, reg p8:p(V +), reg url_db_from_package_news:cls, reg dir7:*, reg dir8:V, reg p9:p(V +), reg r15:V, reg p10:p(V +), reg r17:V, reg requireNamespace:cls, reg r18:V, reg c:L, reg rbind1:cls, reg db:*, reg db1:V, reg p11:p(V +), reg url_db_from_package_HTML_files:cls, reg dir9:*, reg dir10:V, reg p12:p(V +), reg r21:V, reg p13:p(V +), reg url_db_from_package_README_md:cls, reg dir11:*, reg dir12:V, reg p14:p(V +), reg r24:V, reg p15:p(V +), reg url_db_from_package_NEWS_md:cls, reg dir13:*, reg dir14:V, reg p16:p(V +), reg r27:V, reg p17:p(V +), reg r29:V, reg add1:*, reg add2:V, reg c1:L, reg file_path:cls, reg basename:cls, reg dir15:*, reg dir16:V, reg p18:p(V +), reg r32:V, reg p19:p(V +), reg db2:*, reg db3:V, reg c2:L, reg db5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r34:V, reg p20:p(V +), reg r36:V, reg l:*, reg c3:L, reg r38:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r40:V, reg dx3:V, reg r41:V, reg db6:*, reg db7:V |
    mkenv;
    st dir = dir;
    add_isMissing = missing.0(add);
    if add_isMissing then L0(FALSE) else L0(add);
  L0(add_orDefault):
    st add = add_orDefault;
    _get_package_metadata = ldf `.get_package_metadata`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn _get_package_metadata(p, FALSE);
    check L6() else D1();
  D1():
    deopt 4 [r1];
  L6():
    st meta = r1;
    rbind = ldf rbind;
    check L7() else D2();
  D2():
    deopt 7 [];
  L7():
    p2 = prom<V +>{
      url_db_from_package_metadata = ldf url_db_from_package_metadata;
      p1 = prom<V +>{
        meta = ld meta;
        meta1 = force? meta;
        checkMissing(meta1);
        return meta1;
      };
      r3 = dyn url_db_from_package_metadata(p1);
      return r3;
    };
    p5 = prom<V +>{
      url_db_from_package_Rd_db = ldf url_db_from_package_Rd_db;
      p4 = prom<V +>{
        Rd_db = ldf Rd_db;
        p3 = prom<V +>{
          dir3 = ld dir;
          dir4 = force? dir3;
          checkMissing(dir4);
          return dir4;
        };
        r6 = dyn Rd_db[dir](p3);
        return r6;
      };
      r8 = dyn url_db_from_package_Rd_db(p4);
      return r8;
    };
    p8 = prom<V +>{
      url_db_from_package_citation = ldf url_db_from_package_citation;
      p6 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      p7 = prom<V +>{
        meta2 = ld meta;
        meta3 = force? meta2;
        checkMissing(meta3);
        return meta3;
      };
      r12 = dyn url_db_from_package_citation(p6, p7);
      return r12;
    };
    p10 = prom<V +>{
      url_db_from_package_news = ldf url_db_from_package_news;
      p9 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r15 = dyn url_db_from_package_news(p9);
      return r15;
    };
    r17 = dyn rbind(p2, p5, p8, p10);
    check L8() else D3();
  D3():
    deopt 12 [r17];
  L8():
    st db = r17;
    requireNamespace = ldf requireNamespace;
    check L9() else D4();
  D4():
    deopt 15 [];
  L9():
    r18 = dyn requireNamespace[, quietly]("xml2", TRUE);
    check L10() else D5();
  D5():
    deopt 19 [r18];
  L10():
    c = `as.logical`(r18);
    if c then L11() else L1();
  L1():
    goto L2();
  L2():
    add1 = ld add;
    check L15() else D8();
  L11():
    rbind1 = ldf rbind;
    check L12() else D6();
  D6():
    deopt 21 [];
  D8():
    deopt 30 [add1];
  L12():
    p11 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    p13 = prom<V +>{
      url_db_from_package_HTML_files = ldf url_db_from_package_HTML_files;
      p12 = prom<V +>{
        dir9 = ld dir;
        dir10 = force? dir9;
        checkMissing(dir10);
        return dir10;
      };
      r21 = dyn url_db_from_package_HTML_files(p12);
      return r21;
    };
    p15 = prom<V +>{
      url_db_from_package_README_md = ldf url_db_from_package_README_md;
      p14 = prom<V +>{
        dir11 = ld dir;
        dir12 = force? dir11;
        checkMissing(dir12);
        return dir12;
      };
      r24 = dyn url_db_from_package_README_md(p14);
      return r24;
    };
    p17 = prom<V +>{
      url_db_from_package_NEWS_md = ldf url_db_from_package_NEWS_md;
      p16 = prom<V +>{
        dir13 = ld dir;
        dir14 = force? dir13;
        checkMissing(dir14);
        return dir14;
      };
      r27 = dyn url_db_from_package_NEWS_md(p16);
      return r27;
    };
    r29 = dyn rbind1(p11, p13, p15, p17);
    check L13() else D7();
  L15():
    add2 = force? add1;
    checkMissing(add2);
    c1 = `as.logical`(add2);
    if c1 then L16() else L3();
  D7():
    deopt 26 [r29];
  L3():
    goto L4();
  L4():
    db6 = ld db;
    check L24() else D11();
  L13():
    st db = r29;
    goto L2();
  L16():
    file_path = ldf `file.path`;
    check L17() else D9();
  D9():
    deopt 33 [];
  D11():
    deopt 42 [db6];
  L17():
    p19 = prom<V +>{
      basename = ldf basename;
      p18 = prom<V +>{
        dir15 = ld dir;
        dir16 = force? dir15;
        checkMissing(dir16);
        return dir16;
      };
      r32 = dyn basename(p18);
      return r32;
    };
    p20 = prom<V +>{
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      c2 = `is.object`(db3);
      if c2 then L1() else L2(db3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", db3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(db5):
      r34 = `$`(db5, <sym Parent>);
      goto L0(r34);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r36 = dyn file_path(p19, p20);
    check L18() else D10();
  L24():
    db7 = force? db6;
    checkMissing(db7);
    popenv;
    return db7;
  D10():
    deopt 36 [r36];
  L18():
    l = ld db;
    c3 = `is.object`(l);
    if c3 then L20() else L21(r36, l);
  L19(r40, dx3):
    st db = dx3;
    goto L4();
  L20():
    dr2 = tryDispatchBuiltin.0("$<-", l, r36);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(r36, dr2);
  L21(r38, l2):
    r41 = `$<-`(l2, <sym Parent>, r36);
    goto L19(r38, r41);
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(r36, dx2);
  }
}