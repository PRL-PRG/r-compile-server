fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner651031350;
    st `.make_R_license_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner651031350(paths) {
  (reg paths:*) -+> V { var paths:*, reg paths_isMissing:L, reg paths_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg paths1:*, reg paths2:V, reg c:V, reg c1:L, reg unlist:cls, reg strsplit:cls, reg Sys_getenv:cls, reg r2:V, reg p:p(V +), reg _Platform:*, reg _Platform1:V, reg c2:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg paths3:*, reg paths4:V, reg file_path:cls, reg R_home:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg c3:cls, reg r15:V, reg Reduce:cls, reg r16:cls, reg p4:p(V +), reg lapply:cls, reg unique:cls, reg normalizePath:cls, reg paths5:*, reg paths6:V, reg p5:p(V +), reg r19:V, reg p6:p(V +), reg r21:V, reg p7:p(V +), reg read_dcf:*, reg read_dcf1:V, reg p8:p(V +), reg r24:V, reg p9:p(V +), reg r26:V, reg as_matrix:cls, reg ldb:*, reg ldb1:V, reg p10:p(V +), reg r28:V, reg l:*, reg c4:L, reg r30:S, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r37:V, reg r38:S, reg l5:*, reg r39:S, reg r40:V, reg ldb2:*, reg ldb3:V, reg is_na:cls, reg r41:V, reg ___:cls, reg r42:V, reg l6:*, reg c5:L, reg r44:S, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ldb4:*, reg ldb5:V, reg c6:L, reg r49:S, reg l10:*, reg r50:S, reg dr6:V, reg dc3:L, reg dx6:V, reg r53:S, reg l12:*, reg r54:S, reg dx7:V, reg __:cls, reg r55:V, reg r56:V, reg ___1:cls, reg r57:V, reg data_frame:cls, reg ldb8:*, reg ldb9:V, reg p11:p(V +), reg r59:V, reg R_license_db_labels:cls, reg ldb10:*, reg ldb11:V, reg p12:p(V +), reg r61:V, reg l13:*, reg c7:L, reg r63:V, reg l15:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r66:V, reg ldb12:*, reg ldb13:V, reg c8:L, reg ldb15:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg duplicated:cls, reg ldb16:*, reg ldb17:V, reg c9:L, reg ldb19:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r67:V, reg p13:p(V +), reg r69:V, reg r70:V, reg __1:cls, reg r71:V |
    mkenv;
    paths_isMissing = missing.0(paths);
    if paths_isMissing then L0(NULL) else L0(paths);
  L0(paths_orDefault):
    st paths = paths_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L13() else L2();
  L10():
    paths1 = ld paths;
    check L12() else D0();
  L11():
    r = dyn base(<sym paths>);
    goto L1(r);
  D0():
    deopt 1 [paths1];
  L2():
    goto L3();
  L3():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L12():
    paths2 = force? paths1;
    checkMissing(paths2);
    c = `==`(paths2, NULL);
    goto L1(c);
  L13():
    unlist = ldf unlist;
    check L14() else D1();
  D1():
    deopt 5 [];
  L4(r11):
    st paths = r11;
    Reduce = ldf Reduce;
    check L23() else D7();
  L14():
    p2 = prom<V +>{
      strsplit = ldf strsplit;
      p = prom<V +>{
        Sys_getenv = ldf `Sys.getenv`;
        r2 = dyn Sys_getenv("R_LICENSE_DB_PATHS");
        return r2;
      };
      p1 = prom<V +>{
        _Platform = ld `.Platform`;
        _Platform1 = force? _Platform;
        checkMissing(_Platform1);
        c2 = `is.object`(_Platform1);
        if c2 then L1() else L2(_Platform1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", _Platform1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(_Platform3):
        r4 = `$`(_Platform3, <sym path.sep>);
        goto L0(r4);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r6 = dyn strsplit[, , fixed](p, p1, TRUE);
      return r6;
    };
    r8 = dyn unlist(p2);
    check L15() else D2();
  L17():
    paths3 = ld paths;
    check L19() else D3();
  L18():
    r10 = dyn base1(<sym paths>, <lang file.path(R.home("share"), "licenses", "license.db")>);
    goto L4(r10);
  D2():
    deopt 7 [r8];
  D3():
    deopt 13 [paths3];
  D7():
    deopt 25 [];
  L15():
    st paths = r8;
    goto L3();
  L19():
    paths4 = force? paths3;
    checkMissing(paths4);
    file_path = ldf `file.path`;
    check L20() else D4();
  L23():
    p4 = prom<V +>{
      r16 = clos inner4198313549;
      return r16;
    };
    p9 = prom<V +>{
      lapply = ldf lapply;
      p7 = prom<V +>{
        unique = ldf unique;
        p6 = prom<V +>{
          normalizePath = ldf normalizePath;
          p5 = prom<V +>{
            paths5 = ld paths;
            paths6 = force? paths5;
            checkMissing(paths6);
            return paths6;
          };
          r19 = dyn normalizePath(p5);
          return r19;
        };
        r21 = dyn unique(p6);
        return r21;
      };
      p8 = prom<V +>{
        read_dcf = ld `read.dcf`;
        read_dcf1 = force? read_dcf;
        checkMissing(read_dcf1);
        return read_dcf1;
      };
      r24 = dyn lapply(p7, p8);
      return r24;
    };
    r26 = dyn Reduce(p4, p9);
    check L24() else D8();
  D4():
    deopt 16 [];
  D8():
    deopt 28 [r26];
  L20():
    p3 = prom<V +>{
      R_home = ldf `R.home`;
      r12 = dyn R_home("share");
      return r12;
    };
    r14 = dyn file_path(p3, "licenses", "license.db");
    check L21() else D5();
  L24():
    st ldb = r26;
    as_matrix = ldf `as.matrix`;
    check L25() else D9();
  D5():
    deopt 20 [r14];
  D9():
    deopt 31 [];
  L21():
    c3 = ldf c in base;
    r15 = dyn c3(paths4, r14);
    check L22() else D6();
  L25():
    p10 = prom<V +>{
      ldb = ld ldb;
      ldb1 = force? ldb;
      checkMissing(ldb1);
      return ldb1;
    };
    r28 = dyn as_matrix(p10);
    check L26() else D10();
  D6():
    deopt 22 [r15];
  D10():
    deopt 33 [r28];
  L22():
    goto L4(r15);
  L26():
    st ldb = r28;
    l = ld ldb;
    c4 = `is.object`(l);
    if c4 then L27() else L28("", l);
  L5(dx3):
    st ldb = dx3;
    l6 = ld ldb;
    c5 = `is.object`(l6);
    if c5 then L34() else L35("no", l6);
  L27():
    dr2 = tryDispatchBuiltin.0("[<-", l, "");
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28("", dr2);
  L28(r30, l2):
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L6(r38, l5, r39, r40):
    ___ = ldf `[<-` in base;
    r42 = dyn ___(l5, r39, r40);
    goto L5(r42);
  L7(dx5):
    st ldb = dx5;
    data_frame = ldf `data.frame`;
    check L41() else D14();
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L30():
    ldb2 = ld ldb;
    check L32() else D11();
  L31():
    r37 = dyn base2(<sym ldb>);
    goto L6(r30, l2, "", r37);
  L34():
    dr4 = tryDispatchBuiltin.0("[<-", l6, "no");
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L36() else L35("no", dr4);
  L35(r44, l8):
    ldb4 = ld ldb;
    check L37() else D13();
  D11():
    deopt 40 [r30, l2, "", ldb2];
  D13():
    deopt 49 [r44, l8, "no", ldb4];
  D14():
    deopt 61 [];
  L32():
    ldb3 = force? ldb2;
    checkMissing(ldb3);
    is_na = ldf `is.na` in base;
    r41 = dyn is_na(ldb3);
    check L33() else D12();
  L36():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx4);
  L37():
    ldb5 = force? ldb4;
    checkMissing(ldb5);
    c6 = `is.object`(ldb5);
    if c6 then L38() else L39(r44, l8, "no");
  L41():
    p11 = prom<V +>{
      ldb8 = ld ldb;
      ldb9 = force? ldb8;
      checkMissing(ldb9);
      return ldb9;
    };
    r59 = dyn data_frame[, stringsAsFactors](p11, FALSE);
    check L42() else D15();
  D12():
    deopt 43 [r30, l2, "", r41];
  D15():
    deopt 65 [r59];
  L8(r53, l12, r54, dx7):
    r56 = `==`(dx7, "yes");
    ___1 = ldf `[<-` in base;
    r57 = dyn ___1(l12, r54, r56, "Restricts_use");
    goto L7(r57);
  L33():
    goto L6(r30, l2, "", r41);
  L38():
    dr6 = tryDispatchBuiltin.1("[", ldb5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L40() else L39(r44, l8, "no");
  L39(r49, l10, r50):
    __ = ldf `[` in base;
    r55 = dyn __(ldb5, <missing>, "FOSS");
    goto L8(r49, l10, r50, r55);
  L42():
    st ldb = r59;
    R_license_db_labels = ldf R_license_db_labels;
    check L43() else D16();
  D16():
    deopt 68 [];
  L40():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(r44, l8, "no", dx6);
  L43():
    p12 = prom<V +>{
      ldb10 = ld ldb;
      ldb11 = force? ldb10;
      checkMissing(ldb11);
      return ldb11;
    };
    r61 = dyn R_license_db_labels(p12);
    check L44() else D17();
  D17():
    deopt 70 [r61];
  L44():
    l13 = ld ldb;
    c7 = `is.object`(l13);
    if c7 then L46() else L47(r61, l13);
  L45(dx9):
    st ldb = dx9;
    ldb12 = ld ldb;
    check L49() else D18();
  L46():
    dr8 = tryDispatchBuiltin.0("$<-", l13, r61);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L48() else L47(r61, dr8);
  L47(r63, l15):
    r66 = `$<-`(l15, <sym Labels>, r61);
    goto L45(r66);
  D18():
    deopt 74 [ldb12];
  L48():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L45(dx8);
  L49():
    ldb13 = force? ldb12;
    checkMissing(ldb13);
    c8 = `is.object`(ldb13);
    if c8 then L50() else L51(ldb13);
  L9(dx11):
    popenv;
    return dx11;
  L50():
    dr10 = tryDispatchBuiltin.1("[", ldb13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L52() else L51(dr10);
  L51(ldb15):
    duplicated = ldf duplicated;
    check L53() else D19();
  D19():
    deopt 77 [ldb15];
  L52():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L9(dx10);
  L53():
    p13 = prom<V +>{
      ldb16 = ld ldb;
      ldb17 = force? ldb16;
      checkMissing(ldb17);
      c9 = `is.object`(ldb17);
      if c9 then L1() else L2(ldb17);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", ldb17);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(ldb19):
      r67 = `$`(ldb19, <sym Labels>);
      goto L0(r67);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r69 = dyn duplicated(p13);
    check L54() else D20();
  D20():
    deopt 79 [ldb15, r69];
  L54():
    r70 = `!`(r69);
    __1 = ldf `[` in base;
    r71 = dyn __1(ldb13, r70, <missing>);
    goto L9(r71);
  }
}
fun inner4198313549(u, v) {
  (reg u:*, reg v:*) -+> V { var u:*, var v:*, reg merge:cls, reg u1:*, reg u2:V, reg p:p(V +), reg v1:*, reg v2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st u = u;
    st v = v;
    merge = ldf merge;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      u1 = ld u;
      u2 = force? u1;
      checkMissing(u2);
      return u2;
    };
    p1 = prom<V +>{
      v1 = ld v;
      v2 = force? v1;
      checkMissing(v2);
      return v2;
    };
    r2 = dyn merge[, , all](p, p1, TRUE);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}