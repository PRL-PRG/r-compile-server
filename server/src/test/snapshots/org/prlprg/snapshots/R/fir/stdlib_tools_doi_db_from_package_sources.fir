fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2387830386;
    st doi_db_from_package_sources = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2387830386(dir, add, Rd) {
  (reg dir:*, reg add:*, reg Rd:*) -+> V { var dir:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, var Rd:*, reg Rd_isMissing:L, reg Rd_orDefault:*, reg _get_package_metadata:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg rbind:cls, reg doi_db_from_package_metadata:cls, reg meta:*, reg meta1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg doi_db_from_package_citation:cls, reg dir3:*, reg dir4:V, reg p3:p(V +), reg meta2:*, reg meta3:V, reg p4:p(V +), reg r7:V, reg p5:p(V +), reg Rd1:*, reg Rd2:V, reg c:L, reg Rd_db:cls, reg dir5:*, reg dir6:V, reg p6:p(V +), reg r10:V, reg doi_db_from_package_Rd_db:cls, reg rddb:*, reg rddb1:V, reg p7:p(V +), reg r12:V, reg p8:p(V +), reg r14:V, reg add1:*, reg add2:V, reg c1:L, reg file_path:cls, reg basename:cls, reg dir7:*, reg dir8:V, reg p9:p(V +), reg r16:V, reg p10:p(V +), reg db:*, reg db1:V, reg c2:L, reg db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V, reg p11:p(V +), reg r20:V, reg l:*, reg c3:L, reg r22:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r24:V, reg dx3:V, reg r25:V, reg db4:*, reg db5:V |
    mkenv;
    st dir = dir;
    add_isMissing = missing.0(add);
    if add_isMissing then L0(FALSE) else L0(add);
  L0(add_orDefault):
    st add = add_orDefault;
    Rd_isMissing = missing.0(Rd);
    if Rd_isMissing then L1(FALSE) else L1(Rd);
  L1(Rd_orDefault):
    st Rd = Rd_orDefault;
    _get_package_metadata = ldf `.get_package_metadata`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn _get_package_metadata(p, FALSE);
    check L5() else D1();
  D1():
    deopt 4 [r1];
  L5():
    st meta = r1;
    rbind = ldf rbind;
    check L6() else D2();
  D2():
    deopt 7 [];
  L6():
    p2 = prom<V +>{
      doi_db_from_package_metadata = ldf doi_db_from_package_metadata;
      p1 = prom<V +>{
        meta = ld meta;
        meta1 = force? meta;
        checkMissing(meta1);
        return meta1;
      };
      r3 = dyn doi_db_from_package_metadata(p1);
      return r3;
    };
    p5 = prom<V +>{
      doi_db_from_package_citation = ldf doi_db_from_package_citation;
      p3 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      p4 = prom<V +>{
        meta2 = ld meta;
        meta3 = force? meta2;
        checkMissing(meta3);
        return meta3;
      };
      r7 = dyn doi_db_from_package_citation(p3, p4);
      return r7;
    };
    p8 = prom<V +>{
      Rd1 = ld Rd;
      Rd2 = force? Rd1;
      checkMissing(Rd2);
      c = `as.logical`(Rd2);
      if c then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      Rd_db = ldf Rd_db;
      p6 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r10 = dyn Rd_db[dir](p6);
      st rddb = r10;
      doi_db_from_package_Rd_db = ldf doi_db_from_package_Rd_db;
      p7 = prom<V +>{
        rddb = ld rddb;
        rddb1 = force? rddb;
        checkMissing(rddb1);
        return rddb1;
      };
      r12 = dyn doi_db_from_package_Rd_db(p7);
      return r12;
    };
    r14 = dyn rbind(p2, p5, p8);
    check L7() else D3();
  D3():
    deopt 11 [r14];
  L7():
    st db = r14;
    add1 = ld add;
    check L8() else D4();
  D4():
    deopt 13 [add1];
  L8():
    add2 = force? add1;
    checkMissing(add2);
    c1 = `as.logical`(add2);
    if c1 then L9() else L2();
  L2():
    goto L3();
  L3():
    db4 = ld db;
    check L17() else D7();
  L9():
    file_path = ldf `file.path`;
    check L10() else D5();
  D5():
    deopt 16 [];
  D7():
    deopt 25 [db4];
  L10():
    p10 = prom<V +>{
      basename = ldf basename;
      p9 = prom<V +>{
        dir7 = ld dir;
        dir8 = force? dir7;
        checkMissing(dir8);
        return dir8;
      };
      r16 = dyn basename(p9);
      return r16;
    };
    p11 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      c2 = `is.object`(db1);
      if c2 then L1() else L2(db1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", db1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(db3):
      r18 = `$`(db3, <sym Parent>);
      goto L0(r18);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r20 = dyn file_path(p10, p11);
    check L11() else D6();
  L17():
    db5 = force? db4;
    checkMissing(db5);
    popenv;
    return db5;
  D6():
    deopt 19 [r20];
  L11():
    l = ld db;
    c3 = `is.object`(l);
    if c3 then L13() else L14(r20, l);
  L12(r24, dx3):
    st db = dx3;
    goto L3();
  L13():
    dr2 = tryDispatchBuiltin.0("$<-", l, r20);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(r20, dr2);
  L14(r22, l2):
    r25 = `$<-`(l2, <sym Parent>, r20);
    goto L12(r22, r25);
  L15():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(r20, dx2);
  }
}