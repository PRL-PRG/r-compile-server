fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1392412786;
    st find_gs_cmd = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1392412786(gs_cmd) {
  (reg gs_cmd:*) -+> V { var gs_cmd:*, reg gs_cmd_isMissing:L, reg gs_cmd_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg gs_cmd1:*, reg gs_cmd2:V, reg nzchar:cls, reg r2:V, reg r3:V, reg c:L, reg _Platform:*, reg _Platform1:V, reg c1:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg r5:V, reg c2:L, reg Sys_getenv:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg gsexe:*, reg gsexe1:V, reg nzchar1:cls, reg r9:V, reg r10:V, reg c3:L, reg Sys_getenv1:cls, reg r11:V, reg Sys_which:cls, reg gsexe2:*, reg gsexe3:V, reg p:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg gs_cmd3:*, reg gs_cmd4:V, reg nzchar2:cls, reg r17:V, reg r18:V, reg c4:L, reg Sys_which1:cls, reg r19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg gs_cmd5:*, reg gs_cmd6:V, reg nzchar3:cls, reg r23:V, reg r24:V, reg c5:L, reg Sys_which2:cls, reg r25:V, reg gs_cmd7:*, reg gs_cmd8:V, reg Sys_which3:cls, reg Sys_getenv2:cls, reg r27:V, reg p1:p(V +), reg r29:V, reg Sys_which4:cls, reg gs_cmd9:*, reg gs_cmd10:V, reg p2:p(V +), reg r31:V |
    mkenv;
    gs_cmd_isMissing = missing.0(gs_cmd);
    if gs_cmd_isMissing then L0("") else L0(gs_cmd);
  L0(gs_cmd_orDefault):
    st gs_cmd = gs_cmd_orDefault;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L1(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L17() else L2();
  L13():
    gs_cmd1 = ld gs_cmd;
    check L15() else D0();
  L14():
    r = dyn base(<sym gs_cmd>);
    goto L1(r);
  D0():
    deopt 2 [gs_cmd1];
  L2():
    Sys_which4 = ldf `Sys.which`;
    check L57() else D22();
  L15():
    gs_cmd2 = force? gs_cmd1;
    checkMissing(gs_cmd2);
    nzchar = ldf nzchar in base;
    r2 = dyn nzchar(gs_cmd2);
    check L16() else D1();
  L17():
    _Platform = ld `.Platform`;
    check L18() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [_Platform];
  D22():
    deopt 71 [];
  L16():
    goto L1(r2);
  L18():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c1 = `is.object`(_Platform1);
    if c1 then L20() else L21(_Platform1);
  L57():
    p2 = prom<V +>{
      gs_cmd9 = ld gs_cmd;
      gs_cmd10 = force? gs_cmd9;
      checkMissing(gs_cmd10);
      return gs_cmd10;
    };
    r31 = dyn Sys_which4(p2);
    check L58() else D23();
  D23():
    deopt 73 [r31];
  L19(dx1):
    r5 = `==`(dx1, "windows");
    c2 = `as.logical`(r5);
    if c2 then L23() else L3();
  L20():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(_Platform3):
    r4 = `$`(_Platform3, <sym OS.type>);
    goto L19(r4);
  L58():
    popenv;
    return r31;
  L3():
    Sys_which3 = ldf `Sys.which`;
    check L54() else D20();
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L23():
    Sys_getenv = ldf `Sys.getenv`;
    check L24() else D3();
  D3():
    deopt 13 [];
  D20():
    deopt 67 [];
  L24():
    r6 = dyn Sys_getenv("R_GSCMD");
    check L25() else D4();
  L54():
    p1 = prom<V +>{
      Sys_getenv2 = ldf `Sys.getenv`;
      r27 = dyn Sys_getenv2("R_GSCMD", "gs");
      return r27;
    };
    r29 = dyn Sys_which3(p1);
    check L55() else D21();
  D4():
    deopt 15 [r6];
  D21():
    deopt 69 [r29];
  L25():
    st gsexe = r6;
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L55():
    popenv;
    return r29;
  L4(r8):
    r10 = `!`(r8);
    c3 = `as.logical`(r10);
    if c3 then L30() else L5();
  L26():
    gsexe = ld gsexe;
    check L28() else D5();
  L27():
    r7 = dyn base1(<sym gsexe>);
    goto L4(r7);
  D5():
    deopt 19 [gsexe];
  L5():
    goto L6();
  L6():
    Sys_which = ldf `Sys.which`;
    check L34() else D9();
  L28():
    gsexe1 = force? gsexe;
    checkMissing(gsexe1);
    nzchar1 = ldf nzchar in base;
    r9 = dyn nzchar1(gsexe1);
    check L29() else D6();
  L30():
    Sys_getenv1 = ldf `Sys.getenv`;
    check L31() else D7();
  D6():
    deopt 22 [r9];
  D7():
    deopt 25 [];
  D9():
    deopt 32 [];
  L29():
    goto L4(r9);
  L31():
    r11 = dyn Sys_getenv1("GSC");
    check L32() else D8();
  L34():
    p = prom<V +>{
      gsexe2 = ld gsexe;
      gsexe3 = force? gsexe2;
      checkMissing(gsexe3);
      return gsexe3;
    };
    r14 = dyn Sys_which(p);
    check L35() else D10();
  D8():
    deopt 27 [r11];
  D10():
    deopt 34 [r14];
  L32():
    st gsexe = r11;
    goto L6();
  L35():
    st gs_cmd = r14;
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  L7(r16):
    r18 = `!`(r16);
    c4 = `as.logical`(r18);
    if c4 then L40() else L8();
  L36():
    gs_cmd3 = ld gs_cmd;
    check L38() else D11();
  L37():
    r15 = dyn base2(<sym gs_cmd>);
    goto L7(r15);
  D11():
    deopt 38 [gs_cmd3];
  L8():
    goto L9();
  L9():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L38():
    gs_cmd4 = force? gs_cmd3;
    checkMissing(gs_cmd4);
    nzchar2 = ldf nzchar in base;
    r17 = dyn nzchar2(gs_cmd4);
    check L39() else D12();
  L40():
    Sys_which1 = ldf `Sys.which`;
    check L41() else D13();
  D12():
    deopt 41 [r17];
  D13():
    deopt 44 [];
  L10(r22):
    r24 = `!`(r22);
    c5 = `as.logical`(r24);
    if c5 then L48() else L11();
  L39():
    goto L7(r17);
  L41():
    r19 = dyn Sys_which1("gswin64c");
    check L42() else D14();
  L44():
    gs_cmd5 = ld gs_cmd;
    check L46() else D15();
  L45():
    r21 = dyn base3(<sym gs_cmd>);
    goto L10(r21);
  D14():
    deopt 46 [r19];
  D15():
    deopt 52 [gs_cmd5];
  L11():
    goto L12();
  L12():
    gs_cmd7 = ld gs_cmd;
    check L52() else D19();
  L42():
    st gs_cmd = r19;
    goto L9();
  L46():
    gs_cmd6 = force? gs_cmd5;
    checkMissing(gs_cmd6);
    nzchar3 = ldf nzchar in base;
    r23 = dyn nzchar3(gs_cmd6);
    check L47() else D16();
  L48():
    Sys_which2 = ldf `Sys.which`;
    check L49() else D17();
  D16():
    deopt 55 [r23];
  D17():
    deopt 58 [];
  D19():
    deopt 64 [gs_cmd7];
  L47():
    goto L10(r23);
  L49():
    r25 = dyn Sys_which2("gswin32c");
    check L50() else D18();
  L52():
    gs_cmd8 = force? gs_cmd7;
    checkMissing(gs_cmd8);
    popenv;
    return gs_cmd8;
  D18():
    deopt 60 [r25];
  L50():
    st gs_cmd = r25;
    goto L12();
  }
}