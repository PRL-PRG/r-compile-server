fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner270641308;
    st `.getHelpFile` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner270641308(file) {
  (reg file:*) -+> V { var file:*, reg dirname:cls, reg file1:*, reg file2:V, reg p:p(V +), reg r1:V, reg dirname1:cls, reg path:*, reg path1:V, reg p1:p(V +), reg r3:V, reg file_exists:cls, reg dirpath:*, reg dirpath1:V, reg p2:p(V +), reg r5:V, reg r6:V, reg c:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg r7:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg basename:cls, reg dirpath2:*, reg dirpath3:V, reg p5:p(V +), reg r14:V, reg file_path:cls, reg path2:*, reg path3:V, reg p6:p(V +), reg pkgname:*, reg pkgname1:V, reg p7:p(V +), reg r17:V, reg file_exists1:cls, reg paste0:cls, reg RdDB:*, reg RdDB1:V, reg p8:p(V +), reg r19:V, reg p9:p(V +), reg r21:V, reg r22:V, reg c1:L, reg stop1:cls, reg gettextf1:cls, reg sQuote1:cls, reg pkgname2:*, reg pkgname3:V, reg p10:p(V +), reg r24:V, reg p11:p(V +), reg r26:V, reg p12:p(V +), reg r28:V, reg ___:cls, reg r30:V, reg r31:cls, reg RdDB2:*, reg RdDB3:V, reg p13:p(V +), reg basename1:cls, reg file3:*, reg file4:V, reg p14:p(V +), reg r34:V, reg p15:p(V +), reg r36:V |
    mkenv;
    st file = file;
    dirname = ldf dirname;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r1 = dyn dirname(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    st path = r1;
    dirname1 = ldf dirname;
    check L6() else D2();
  D2():
    deopt 6 [];
  L6():
    p1 = prom<V +>{
      path = ld path;
      path1 = force? path;
      checkMissing(path1);
      return path1;
    };
    r3 = dyn dirname1(p1);
    check L7() else D3();
  D3():
    deopt 8 [r3];
  L7():
    st dirpath = r3;
    file_exists = ldf `file.exists`;
    check L8() else D4();
  D4():
    deopt 11 [];
  L8():
    p2 = prom<V +>{
      dirpath = ld dirpath;
      dirpath1 = force? dirpath;
      checkMissing(dirpath1);
      return dirpath1;
    };
    r5 = dyn file_exists(p2);
    check L9() else D5();
  D5():
    deopt 13 [r5];
  L9():
    r6 = `!`(r5);
    c = `as.logical`(r6);
    if c then L10() else L0();
  L0():
    goto L1();
  L1():
    basename = ldf basename;
    check L14() else D8();
  L10():
    stop = ldf stop;
    check L11() else D6();
  D6():
    deopt 16 [];
  D8():
    deopt 24 [];
  L11():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        sQuote = ldf sQuote;
        r7 = dyn sQuote("file");
        return r7;
      };
      r9 = dyn gettextf("invalid %s argument", p3);
      return r9;
    };
    r11 = dyn stop[, domain](p4, NA_LGL);
    check L12() else D7();
  L14():
    p5 = prom<V +>{
      dirpath2 = ld dirpath;
      dirpath3 = force? dirpath2;
      checkMissing(dirpath3);
      return dirpath3;
    };
    r14 = dyn basename(p5);
    check L15() else D9();
  D7():
    deopt 20 [r11];
  D9():
    deopt 26 [r14];
  L12():
    goto L1();
  L15():
    st pkgname = r14;
    file_path = ldf `file.path`;
    check L16() else D10();
  D10():
    deopt 29 [];
  L16():
    p6 = prom<V +>{
      path2 = ld path;
      path3 = force? path2;
      checkMissing(path3);
      return path3;
    };
    p7 = prom<V +>{
      pkgname = ld pkgname;
      pkgname1 = force? pkgname;
      checkMissing(pkgname1);
      return pkgname1;
    };
    r17 = dyn file_path(p6, p7);
    check L17() else D11();
  D11():
    deopt 32 [r17];
  L17():
    st RdDB = r17;
    file_exists1 = ldf `file.exists`;
    check L18() else D12();
  D12():
    deopt 35 [];
  L18():
    p9 = prom<V +>{
      paste0 = ldf paste0;
      p8 = prom<V +>{
        RdDB = ld RdDB;
        RdDB1 = force? RdDB;
        checkMissing(RdDB1);
        return RdDB1;
      };
      r19 = dyn paste0(p8, ".rdx");
      return r19;
    };
    r21 = dyn file_exists1(p9);
    check L19() else D13();
  D13():
    deopt 37 [r21];
  L19():
    r22 = `!`(r21);
    c1 = `as.logical`(r22);
    if c1 then L20() else L2();
  L2():
    goto L3();
  L3():
    ___ = ldf `:::`;
    check L24() else D16();
  L20():
    stop1 = ldf stop;
    check L21() else D14();
  D14():
    deopt 40 [];
  D16():
    deopt 48 [];
  L21():
    p12 = prom<V +>{
      gettextf1 = ldf gettextf;
      p11 = prom<V +>{
        sQuote1 = ldf sQuote;
        p10 = prom<V +>{
          pkgname2 = ld pkgname;
          pkgname3 = force? pkgname2;
          checkMissing(pkgname3);
          return pkgname3;
        };
        r24 = dyn sQuote1(p10);
        return r24;
      };
      r26 = dyn gettextf1("package %s exists but was not installed under R >= 2.10.0 so help cannot be accessed", p11);
      return r26;
    };
    r28 = dyn stop1[, domain](p12, NA_LGL);
    check L22() else D15();
  L24():
    r30 = dyn ___("tools", "fetchRdDB");
    check L25() else D17();
  D15():
    deopt 44 [r28];
  D17():
    deopt 51 [r30];
  L22():
    goto L3();
  L25():
    checkFun.0(r30);
    r31 = r30 as cls;
    p13 = prom<V +>{
      RdDB2 = ld RdDB;
      RdDB3 = force? RdDB2;
      checkMissing(RdDB3);
      return RdDB3;
    };
    p15 = prom<V +>{
      basename1 = ldf basename;
      p14 = prom<V +>{
        file3 = ld file;
        file4 = force? file3;
        checkMissing(file4);
        return file4;
      };
      r34 = dyn basename1(p14);
      return r34;
    };
    r36 = dyn r31(p13, p15);
    check L26() else D18();
  D18():
    deopt 55 [r36];
  L26():
    popenv;
    return r36;
  }
}