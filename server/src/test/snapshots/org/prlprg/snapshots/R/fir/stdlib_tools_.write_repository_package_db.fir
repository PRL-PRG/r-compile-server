fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner926888363;
    st `.write_repository_package_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner926888363(db, dir, rds_compress) {
  (reg db:*, reg dir:*, reg rds_compress:*) -+> V { var db:*, var dir:*, var rds_compress:*, reg NROW:cls, reg db1:*, reg db2:V, reg p:p(V +), reg r1:V, reg np:*, reg np1:V, reg r2:V, reg c:L, reg l:*, reg c1:L, reg r4:S, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:S, reg l5:*, reg r13:S, reg r14:V, reg db3:*, reg db4:V, reg is_na:cls, reg r15:V, reg r16:V, reg db5:*, reg db6:V, reg r17:V, reg r18:V, reg ___:cls, reg r19:V, reg file:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg r21:V, reg p2:p(V +), reg r23:V, reg write_dcf:cls, reg db7:*, reg db8:V, reg p3:p(V +), reg con:*, reg con1:V, reg p4:p(V +), reg r26:V, reg close:cls, reg con2:*, reg con3:V, reg p5:p(V +), reg r28:V, reg gzfile:cls, reg file_path1:cls, reg dir3:*, reg dir4:V, reg p6:p(V +), reg r30:V, reg p7:p(V +), reg r32:V, reg write_dcf1:cls, reg db9:*, reg db10:V, reg p8:p(V +), reg con4:*, reg con5:V, reg p9:p(V +), reg r35:V, reg close1:cls, reg con6:*, reg con7:V, reg p10:p(V +), reg r37:V, reg db11:*, reg db12:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r38:V, reg l6:*, reg rownames__:cls, reg r39:V, reg saveRDS:cls, reg db15:*, reg db16:V, reg p11:p(V +), reg file_path2:cls, reg dir5:*, reg dir6:V, reg p12:p(V +), reg r42:V, reg p13:p(V +), reg rds_compress1:*, reg rds_compress2:V, reg p14:p(V +), reg r45:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r47:V, reg r48:V, reg np2:*, reg np3:V, reg invisible:cls, reg r49:V |
    mkenv;
    st db = db;
    st dir = dir;
    st rds_compress = rds_compress;
    NROW = ldf NROW;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      db1 = ld db;
      db2 = force? db1;
      checkMissing(db2);
      return db2;
    };
    r1 = dyn NROW(p);
    check L7() else D1();
  D1():
    deopt 3 [r1];
  L7():
    st np = r1;
    np = ld np;
    check L8() else D2();
  D2():
    deopt 5 [np];
  L8():
    np1 = force? np;
    checkMissing(np1);
    r2 = `>`(np1, 0);
    c = `as.logical`(r2);
    if c then L9() else L0();
  L0():
    goto L4();
  L4():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L9():
    l = ld db;
    c1 = `is.object`(l);
    if c1 then L10() else L11(NA_STR, l);
  L1(dx1):
    st db = dx1;
    file = ldf file;
    check L18() else D6();
  L5(r48):
    popenv;
    return r48;
  L10():
    dr = tryDispatchBuiltin.0("[<-", l, NA_STR);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(NA_STR, dr);
  L11(r4, l2):
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L39():
    np2 = ld np;
    check L41() else D23();
  L40():
    r47 = dyn base1(<sym np>);
    goto L5(r47);
  D6():
    deopt 26 [];
  D23():
    deopt 77 [np2];
  L2(r12, l5, r13, r14):
    r16 = `!`(r14);
    db5 = ld db;
    check L17() else D5();
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    db3 = ld db;
    check L15() else D3();
  L14():
    r11 = dyn base(<sym db>);
    goto L2(r4, l2, NA_STR, r11);
  L18():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p1 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r21 = dyn file_path(p1, "PACKAGES");
      return r21;
    };
    r23 = dyn file(p2, "wt");
    check L19() else D7();
  L41():
    np3 = force? np2;
    checkMissing(np3);
    invisible = ldf invisible in base;
    r49 = dyn invisible(np3);
    check L42() else D24();
  D3():
    deopt 14 [r4, l2, NA_STR, db3];
  D5():
    deopt 18 [r12, l5, r13, r16, db5];
  D7():
    deopt 29 [r23];
  D24():
    deopt 80 [r49];
  L15():
    db4 = force? db3;
    checkMissing(db4);
    is_na = ldf `is.na` in base;
    r15 = dyn is_na(db4);
    check L16() else D4();
  L17():
    db6 = force? db5;
    checkMissing(db6);
    r17 = `==`(db6, "");
    r18 = `&&`(r16, r17);
    ___ = ldf `[<-` in base;
    r19 = dyn ___(l5, r13, r18);
    goto L1(r19);
  L19():
    st con = r23;
    write_dcf = ldf `write.dcf`;
    check L20() else D8();
  L42():
    goto L5(r49);
  D4():
    deopt 17 [r4, l2, NA_STR, r15];
  D8():
    deopt 32 [];
  L16():
    goto L2(r4, l2, NA_STR, r15);
  L20():
    p3 = prom<V +>{
      db7 = ld db;
      db8 = force? db7;
      checkMissing(db8);
      return db8;
    };
    p4 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r26 = dyn write_dcf(p3, p4);
    check L21() else D9();
  D9():
    deopt 35 [r26];
  L21():
    close = ldf close;
    check L22() else D10();
  D10():
    deopt 37 [];
  L22():
    p5 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r28 = dyn close(p5);
    check L23() else D11();
  D11():
    deopt 39 [r28];
  L23():
    gzfile = ldf gzfile;
    check L24() else D12();
  D12():
    deopt 41 [];
  L24():
    p7 = prom<V +>{
      file_path1 = ldf `file.path`;
      p6 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r30 = dyn file_path1(p6, "PACKAGES.gz");
      return r30;
    };
    r32 = dyn gzfile(p7, "wt");
    check L25() else D13();
  D13():
    deopt 44 [r32];
  L25():
    st con = r32;
    write_dcf1 = ldf `write.dcf`;
    check L26() else D14();
  D14():
    deopt 47 [];
  L26():
    p8 = prom<V +>{
      db9 = ld db;
      db10 = force? db9;
      checkMissing(db10);
      return db10;
    };
    p9 = prom<V +>{
      con4 = ld con;
      con5 = force? con4;
      checkMissing(con5);
      return con5;
    };
    r35 = dyn write_dcf1(p8, p9);
    check L27() else D15();
  D15():
    deopt 50 [r35];
  L27():
    close1 = ldf close;
    check L28() else D16();
  D16():
    deopt 52 [];
  L28():
    p10 = prom<V +>{
      con6 = ld con;
      con7 = force? con6;
      checkMissing(con7);
      return con7;
    };
    r37 = dyn close1(p10);
    check L29() else D17();
  D17():
    deopt 54 [r37];
  L29():
    db11 = ld db;
    check L30() else D18();
  D18():
    deopt 55 [db11];
  L30():
    db12 = force? db11;
    checkMissing(db12);
    c2 = `is.object`(db12);
    if c2 then L31() else L32();
  L3(dx3):
    l6 = ld db;
    rownames__ = ldf `rownames<-`;
    check L34() else D19();
  L31():
    dr2 = tryDispatchBuiltin.1("[", db12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32();
  L32():
    __ = ldf `[` in base;
    r38 = dyn __(db12, <missing>, "Package");
    goto L3(r38);
  D19():
    deopt 62 [dx3, l6, dx3];
  L33():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L34():
    r39 = dyn rownames__(l6, NULL, dx3);
    check L35() else D20();
  D20():
    deopt 64 [dx3, r39];
  L35():
    st db = r39;
    saveRDS = ldf saveRDS;
    check L36() else D21();
  D21():
    deopt 67 [];
  L36():
    p11 = prom<V +>{
      db15 = ld db;
      db16 = force? db15;
      checkMissing(db16);
      return db16;
    };
    p13 = prom<V +>{
      file_path2 = ldf `file.path`;
      p12 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r42 = dyn file_path2(p12, "PACKAGES.rds");
      return r42;
    };
    p14 = prom<V +>{
      rds_compress1 = ld rds_compress;
      rds_compress2 = force? rds_compress1;
      checkMissing(rds_compress2);
      return rds_compress2;
    };
    r45 = dyn saveRDS[, , compress](p11, p13, p14);
    check L37() else D22();
  D22():
    deopt 72 [r45];
  L37():
    goto L4();
  }
}