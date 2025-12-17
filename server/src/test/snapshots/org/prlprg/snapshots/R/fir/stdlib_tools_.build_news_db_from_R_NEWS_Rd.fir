fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3992388481;
    st `.build_news_db_from_R_NEWS_Rd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3992388481(file, Rfile) {
  (reg file:*, reg Rfile:*) -+> V { var file:*, reg file_isMissing:L, reg file_orDefault:*, var Rfile:*, reg Rfile_isMissing:L, reg Rfile_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg file1:*, reg file2:V, reg c:V, reg c1:L, reg readRDS:cls, reg file_path:cls, reg R_home:cls, reg r2:V, reg p:p(V +), reg Rfile1:*, reg Rfile2:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V, reg r8:V, reg initialRdMacros:cls, reg r9:V, reg prepare_Rd:cls, reg parse_Rd:cls, reg file3:*, reg file4:V, reg p3:p(V +), reg macros:*, reg macros1:V, reg p4:p(V +), reg r12:V, reg p5:p(V +), reg r14:V, reg _extract_news_from_Rd:cls, reg x:*, reg x1:V, reg p6:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg c2:cls, reg r19:V, reg db:*, reg db1:V, reg c3:L, reg db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _in_:cls, reg db4:*, reg db5:V, reg c4:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r20:V, reg p7:p(V +), reg skip:*, reg skip1:V, reg p8:p(V +), reg r23:V, reg r24:V, reg __1:cls, reg r25:V, reg _make_news_db:cls, reg cbind:cls, reg sub:cls, reg db8:*, reg db9:V, reg c5:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r26:V, reg p9:p(V +), reg r28:V, reg p10:p(V +), reg db12:*, reg db13:V, reg c6:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r30:V, reg p11:p(V +), reg sub1:cls, reg db16:*, reg db17:V, reg c7:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r32:V, reg p12:p(V +), reg r34:V, reg p13:p(V +), reg db20:*, reg db21:V, reg c8:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __5:cls, reg r36:V, reg p14:p(V +), reg r38:V, reg p15:p(V +), reg r40:V |
    mkenv;
    file_isMissing = missing.0(file);
    if file_isMissing then L0(NULL) else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    Rfile_isMissing = missing.0(Rfile);
    if Rfile_isMissing then L1("NEWS.rds") else L1(Rfile);
  L1(Rfile_orDefault):
    st Rfile = Rfile_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L2(r1):
    c1 = `as.logical`(r1);
    if c1 then L10() else L3();
  L7():
    file1 = ld file;
    check L9() else D0();
  L8():
    r = dyn base(<sym file>);
    goto L2(r);
  D0():
    deopt 1 [file1];
  L3():
    initialRdMacros = ldf initialRdMacros;
    check L14() else D3();
  L4(r8):
    st x = r8;
    _extract_news_from_Rd = ldf `.extract_news_from_Rd`;
    check L18() else D7();
  L9():
    file2 = force? file1;
    checkMissing(file2);
    c = `==`(file2, NULL);
    goto L2(c);
  L10():
    readRDS = ldf readRDS;
    check L11() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 9 [];
  D7():
    deopt 20 [];
  L11():
    p2 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        R_home = ldf `R.home`;
        r2 = dyn R_home("doc");
        return r2;
      };
      p1 = prom<V +>{
        Rfile1 = ld Rfile;
        Rfile2 = force? Rfile1;
        checkMissing(Rfile2);
        return Rfile2;
      };
      r5 = dyn file_path(p, p1);
      return r5;
    };
    r7 = dyn readRDS(p2);
    check L12() else D2();
  L14():
    r9 = dyn initialRdMacros();
    check L15() else D4();
  L18():
    p6 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r16 = dyn _extract_news_from_Rd(p6);
    check L19() else D8();
  D2():
    deopt 7 [r7];
  D4():
    deopt 10 [r9];
  D8():
    deopt 22 [r16];
  L12():
    goto L4(r7);
  L15():
    st macros = r9;
    prepare_Rd = ldf prepare_Rd;
    check L16() else D5();
  L19():
    st db = r16;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  D5():
    deopt 13 [];
  L5(r18):
    st skip = r18;
    db = ld db;
    check L23() else D10();
  L16():
    p5 = prom<V +>{
      parse_Rd = ldf parse_Rd;
      p3 = prom<V +>{
        file3 = ld file;
        file4 = force? file3;
        checkMissing(file4);
        return file4;
      };
      p4 = prom<V +>{
        macros = ld macros;
        macros1 = force? macros;
        checkMissing(macros1);
        return macros1;
      };
      r12 = dyn parse_Rd[, macros](p3, p4);
      return r12;
    };
    r14 = dyn prepare_Rd[, stages](p5, "install");
    check L17() else D6();
  L20():
    c2 = ldf c in base;
    r19 = dyn c2("CHANGES in previous versions", "LATER NEWS", "OLDER NEWS");
    check L22() else D9();
  L21():
    r17 = dyn base1("CHANGES in previous versions", "LATER NEWS", "OLDER NEWS");
    goto L5(r17);
  D6():
    deopt 17 [r14];
  D9():
    deopt 30 [r19];
  D10():
    deopt 32 [db];
  L17():
    goto L4(r14);
  L22():
    goto L5(r19);
  L23():
    db1 = force? db;
    checkMissing(db1);
    c3 = `is.object`(db1);
    if c3 then L24() else L25(db1);
  L6(dx1):
    st db = dx1;
    _make_news_db = ldf `.make_news_db`;
    check L29() else D13();
  L24():
    dr = tryDispatchBuiltin.1("[", db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(dr);
  L25(db3):
    _in_ = ldf `%in%`;
    check L27() else D11();
  D11():
    deopt 35 [db3];
  D13():
    deopt 47 [];
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L27():
    p7 = prom<V +>{
      db4 = ld db;
      db5 = force? db4;
      checkMissing(db5);
      c4 = `is.object`(db5);
      if c4 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", db5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r20 = dyn __(db5, <missing>, 1);
      goto L0(r20);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p8 = prom<V +>{
      skip = ld skip;
      skip1 = force? skip;
      checkMissing(skip1);
      return skip1;
    };
    r23 = dyn _in_(p7, p8);
    check L28() else D12();
  L29():
    p15 = prom<V +>{
      cbind = ldf cbind;
      p10 = prom<V +>{
        sub = ldf sub;
        p9 = prom<V +>{
          db8 = ld db;
          db9 = force? db8;
          checkMissing(db9);
          c5 = `is.object`(db9);
          if c5 then L1() else L2();
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("[", db9);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2();
        L2():
          __2 = ldf `[` in base;
          r26 = dyn __2(db9, <missing>, 1);
          goto L0(r26);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r28 = dyn sub("^CHANGES IN (R )?(VERSION )?", "", p9);
        return r28;
      };
      p11 = prom<V +>{
        db12 = ld db;
        db13 = force? db12;
        checkMissing(db13);
        c6 = `is.object`(db13);
        if c6 then L1() else L2();
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[", db13);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2();
      L2():
        __3 = ldf `[` in base;
        r30 = dyn __3(db13, <missing>, 2);
        goto L0(r30);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p13 = prom<V +>{
        sub1 = ldf sub;
        p12 = prom<V +>{
          db16 = ld db;
          db17 = force? db16;
          checkMissing(db17);
          c7 = `is.object`(db17);
          if c7 then L1() else L2();
        L0(dx9):
          return dx9;
        L1():
          dr8 = tryDispatchBuiltin.1("[", db17);
          dc4 = getTryDispatchBuiltinDispatched(dr8);
          if dc4 then L3() else L2();
        L2():
          __4 = ldf `[` in base;
          r32 = dyn __4(db17, <missing>, 3);
          goto L0(r32);
        L3():
          dx8 = getTryDispatchBuiltinValue(dr8);
          goto L0(dx8);
        };
        r34 = dyn sub1("\n*$", "", p12);
        return r34;
      };
      p14 = prom<V +>{
        db20 = ld db;
        db21 = force? db20;
        checkMissing(db21);
        c8 = `is.object`(db21);
        if c8 then L1() else L2();
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("[", db21);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2();
      L2():
        __5 = ldf `[` in base;
        r36 = dyn __5(db21, <missing>, 4);
        goto L0(r36);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      r38 = dyn cbind[, , , Text, HTML](p10, NA_STR, p11, p13, p14);
      return r38;
    };
    r40 = dyn _make_news_db(p15, NULL, "news_db_from_Rd");
    check L30() else D14();
  D12():
    deopt 38 [db3, r23];
  D14():
    deopt 51 [r40];
  L28():
    r24 = `!`(r23);
    __1 = ldf `[` in base;
    r25 = dyn __1(db1, r24, <missing>, FALSE);
    goto L6(r25);
  L30():
    popenv;
    return r40;
  }
}