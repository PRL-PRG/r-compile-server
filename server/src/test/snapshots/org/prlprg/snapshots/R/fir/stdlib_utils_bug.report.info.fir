fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `bug.report.info` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg paste0:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg R_version:*, reg R_version1:V, reg names:cls, reg r4:V, reg p:p(V +), reg R_version2:*, reg R_version3:V, reg p1:p(V +), reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg Sys_getenv:cls, reg r10:V, reg nzchar:cls, reg r11:V, reg c:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg paste1:cls, reg Sys_getenv1:cls, reg r14:V, reg p2:p(V +), reg Sys_getenv2:cls, reg r16:V, reg p3:p(V +), reg r18:V, reg c1:cls, reg r19:V, reg r20:V, reg _Platform:*, reg _Platform1:V, reg c2:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r21:V, reg r22:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg win_version:cls, reg r25:V, reg c4:cls, reg r26:V, reg r27:V, reg paste2:cls, reg Sys_getlocale:cls, reg r28:V, reg p4:p(V +), reg r30:V, reg strwrap:cls, reg paste3:cls, reg search:cls, reg r31:V, reg p5:p(V +), reg r33:V, reg p6:p(V +), reg r35:V, reg c5:cls, reg r36:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    popenv;
    return r1;
  L8():
    paste0 = ldf paste0;
    check L10() else D0();
  L9():
    r = dyn base("R Version:", <lang paste0(" ", names(R.version), " = ", R.version)>, <lang if(nzchar(Sys.getenv("R_GUI_APP_VERSION")), c("", "GUI:", paste0(" R-GUI ", Sys.getenv("R_GUI_APP_VERSION"), " (", Sys.getenv("R_GUI_APP_REVISION"), ")")))>, <lang if(`==`(`$`(.Platform, OS.type), "windows"), c("", win.version()))>, "", "Locale:", <lang paste0(" ", Sys.getlocale())>, "", "Search Path:", <lang strwrap(paste(search(), collapse=", "), indent=1.0, exdent=1.0)>, "");
    goto L0(r);
  D0():
    deopt 4 [];
  L10():
    p = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      R_version = ld `R.version`;
      R_version1 = force? R_version;
      checkMissing(R_version1);
      names = ldf names in base;
      r4 = dyn names(R_version1);
      goto L0(r4);
    L2():
      r2 = dyn base1(<sym R.version>);
      goto L0(r2);
    };
    p1 = prom<V +>{
      R_version2 = ld `R.version`;
      R_version3 = force? R_version2;
      checkMissing(R_version3);
      return R_version3;
    };
    r7 = dyn paste0(" ", p, " = ", p1);
    check L11() else D1();
  D1():
    deopt 9 [r7];
  L11():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L1(r9):
    c = `as.logical`(r9);
    if c then L17() else L2();
  L12():
    Sys_getenv = ldf `Sys.getenv`;
    check L14() else D2();
  L13():
    r8 = dyn base2(<lang Sys.getenv("R_GUI_APP_VERSION")>);
    goto L1(r8);
  D2():
    deopt 13 [];
  L2():
    goto L4(NULL);
  L4(r20):
    _Platform = ld `.Platform`;
    check L24() else D8();
  L14():
    r10 = dyn Sys_getenv("R_GUI_APP_VERSION");
    check L15() else D3();
  L17():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L18() else L19();
  D3():
    deopt 15 [r10];
  D8():
    deopt 34 [_Platform];
  L3(r13):
    goto L4(r13);
  L15():
    nzchar = ldf nzchar in base;
    r11 = dyn nzchar(r10);
    check L16() else D4();
  L18():
    paste1 = ldf paste0;
    check L20() else D5();
  L19():
    r12 = dyn base3("", "GUI:", <lang paste0(" R-GUI ", Sys.getenv("R_GUI_APP_VERSION"), " (", Sys.getenv("R_GUI_APP_REVISION"), ")")>);
    goto L3(r12);
  L24():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c2 = `is.object`(_Platform1);
    if c2 then L26() else L27(_Platform1);
  D4():
    deopt 17 [r11];
  D5():
    deopt 23 [];
  L16():
    goto L1(r11);
  L20():
    p2 = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r14 = dyn Sys_getenv1("R_GUI_APP_VERSION");
      return r14;
    };
    p3 = prom<V +>{
      Sys_getenv2 = ldf `Sys.getenv`;
      r16 = dyn Sys_getenv2("R_GUI_APP_REVISION");
      return r16;
    };
    r18 = dyn paste1(" R-GUI ", p2, " (", p3, ")");
    check L21() else D6();
  L25(dx1):
    r22 = `==`(dx1, "windows");
    c3 = `as.logical`(r22);
    if c3 then L29() else L5();
  L26():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(dr);
  L27(_Platform3):
    r21 = `$`(_Platform3, <sym OS.type>);
    goto L25(r21);
  D6():
    deopt 29 [r18];
  L5():
    goto L7(NULL);
  L7(r27):
    paste2 = ldf paste0;
    check L36() else D12();
  L21():
    c1 = ldf c in base;
    r19 = dyn c1("", "GUI:", r18);
    check L22() else D7();
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L25(dx);
  L29():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  D7():
    deopt 31 [r19];
  D12():
    deopt 52 [];
  L6(r24):
    goto L7(r24);
  L22():
    goto L3(r19);
  L30():
    win_version = ldf `win.version`;
    check L32() else D9();
  L31():
    r23 = dyn base4("", <lang win.version()>);
    goto L6(r23);
  L36():
    p4 = prom<V +>{
      Sys_getlocale = ldf `Sys.getlocale`;
      r28 = dyn Sys_getlocale();
      return r28;
    };
    r30 = dyn paste2(" ", p4);
    check L37() else D13();
  D9():
    deopt 43 [];
  D13():
    deopt 55 [r30];
  L32():
    r25 = dyn win_version();
    check L33() else D10();
  L37():
    strwrap = ldf strwrap;
    check L38() else D14();
  D10():
    deopt 44 [r25];
  D14():
    deopt 59 [];
  L33():
    c4 = ldf c in base;
    r26 = dyn c4("", r25);
    check L34() else D11();
  L38():
    p6 = prom<V +>{
      paste3 = ldf paste;
      p5 = prom<V +>{
        search = ldf search;
        r31 = dyn search();
        return r31;
      };
      r33 = dyn paste3[, collapse](p5, ", ");
      return r33;
    };
    r35 = dyn strwrap[, indent, exdent](p6, 1.0, 1.0);
    check L39() else D15();
  D11():
    deopt 46 [r26];
  D15():
    deopt 65 [r35];
  L34():
    goto L6(r26);
  L39():
    c5 = ldf c in base;
    r36 = dyn c5("R Version:", r7, r20, r27, "", "Locale:", r30, "", "Search Path:", r35, "");
    check L40() else D16();
  D16():
    deopt 68 [r36];
  L40():
    goto L0(r36);
  }
}