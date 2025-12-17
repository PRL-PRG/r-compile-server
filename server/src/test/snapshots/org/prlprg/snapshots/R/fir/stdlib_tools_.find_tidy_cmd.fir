fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1334922043;
    st `.find_tidy_cmd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1334922043(Tidy) {
  (reg Tidy:*) -+> V { var Tidy:*, reg Tidy_isMissing:L, reg Tidy_orDefault:*, reg Sys_getenv:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg Sys_which:cls, reg Tidy1:*, reg Tidy2:V, reg p1:p(V +), reg r5:V, reg nzchar:cls, reg r6:V, reg OK:*, reg OK1:V, reg c:L, reg system2:cls, reg Tidy3:*, reg Tidy4:V, reg p2:p(V +), reg r8:V, reg regexec:cls, reg ver:*, reg ver1:V, reg p3:p(V +), reg r10:V, reg regmatches:cls, reg ver2:*, reg ver3:V, reg p4:p(V +), reg mat:*, reg mat1:V, reg p5:p(V +), reg r13:V, reg c1:L, reg r15:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r16:V, reg c2:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r17:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg ver4:*, reg ver5:V, reg is_na:cls, reg r20:V, reg r21:V, reg OK2:*, reg OK3:V, reg c3:L, reg numeric_version:cls, reg ver6:*, reg ver7:V, reg p6:p(V +), reg r23:V, reg req:*, reg req1:V, reg r24:V, reg OK4:*, reg OK5:V, reg r25:V, reg c4:L, reg sprintf:cls, reg Tidy5:*, reg Tidy6:V, reg p7:p(V +), reg req2:*, reg req3:V, reg p8:p(V +), reg ver8:*, reg ver9:V, reg p9:p(V +), reg r29:V, reg r30:V, reg r31:V, reg sprintf1:cls, reg Tidy7:*, reg Tidy8:V, reg p10:p(V +), reg r33:V, reg sprintf2:cls, reg Tidy9:*, reg Tidy10:V, reg p11:p(V +), reg r36:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r37:V, reg r38:V, reg msg:*, reg msg1:V, reg nzchar1:cls, reg r39:V, reg c5:L, reg msg2:*, reg msg3:V, reg l:*, reg attr__:cls, reg r40:V, reg Tidy11:*, reg Tidy12:V |
    mkenv;
    Tidy_isMissing = missing.0(Tidy);
    if Tidy_isMissing then L0() else L1(Tidy);
  L0():
    p = prom<V +>{
      Sys_getenv = ldf `Sys.getenv`;
      r = dyn Sys_getenv("R_TIDYCMD", "tidy");
      return r;
    };
    goto L1(p);
  L1(Tidy_orDefault):
    st Tidy = Tidy_orDefault;
    st msg = "";
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L2(r3):
    st OK = r3;
    OK = ld OK;
    check L20() else D3();
  L15():
    Sys_which = ldf `Sys.which`;
    check L17() else D0();
  L16():
    r2 = dyn base(<lang Sys.which(Tidy)>);
    goto L2(r2);
  D0():
    deopt 6 [];
  D3():
    deopt 12 [OK];
  L17():
    p1 = prom<V +>{
      Tidy1 = ld Tidy;
      Tidy2 = force? Tidy1;
      checkMissing(Tidy2);
      return Tidy2;
    };
    r5 = dyn Sys_which(p1);
    check L18() else D1();
  L20():
    OK1 = force? OK;
    checkMissing(OK1);
    c = `as.logical`(OK1);
    if c then L21() else L3();
  D1():
    deopt 8 [r5];
  L3():
    sprintf2 = ldf sprintf;
    check L52() else D21();
  L11():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L54() else L55();
  L18():
    nzchar = ldf nzchar in base;
    r6 = dyn nzchar(r5);
    check L19() else D2();
  L21():
    system2 = ldf system2;
    check L22() else D4();
  D2():
    deopt 10 [r6];
  D4():
    deopt 15 [];
  D21():
    deopt 80 [];
  L12(r38):
    c5 = `as.logical`(r38);
    if c5 then L58() else L13();
  L19():
    goto L2(r6);
  L22():
    p2 = prom<V +>{
      Tidy3 = ld Tidy;
      Tidy4 = force? Tidy3;
      checkMissing(Tidy4);
      return Tidy4;
    };
    r8 = dyn system2[, , stdout](p2, "--version", TRUE);
    check L23() else D5();
  L52():
    p11 = prom<V +>{
      Tidy9 = ld Tidy;
      Tidy10 = force? Tidy9;
      checkMissing(Tidy10);
      return Tidy10;
    };
    r36 = dyn sprintf2("no command '%s' found", p11);
    check L53() else D22();
  L54():
    msg = ld msg;
    check L56() else D23();
  L55():
    r37 = dyn base2(<sym msg>);
    goto L12(r37);
  D5():
    deopt 20 [r8];
  D22():
    deopt 83 [r36];
  D23():
    deopt 87 [msg];
  L13():
    goto L14();
  L14():
    Tidy11 = ld Tidy;
    check L63() else D28();
  L23():
    st ver = r8;
    regexec = ldf regexec;
    check L24() else D6();
  L53():
    st msg = r36;
    goto L11();
  L56():
    msg1 = force? msg;
    checkMissing(msg1);
    nzchar1 = ldf nzchar in base;
    r39 = dyn nzchar1(msg1);
    check L57() else D24();
  L58():
    st Tidy = "";
    msg2 = ld msg;
    check L59() else D25();
  D6():
    deopt 23 [];
  D24():
    deopt 90 [r39];
  D25():
    deopt 94 [msg2];
  D28():
    deopt 104 [Tidy11];
  L24():
    p3 = prom<V +>{
      ver = ld ver;
      ver1 = force? ver;
      checkMissing(ver1);
      return ver1;
    };
    r10 = dyn regexec("^HTML Tidy .* (\\d+\\.\\d+\\.\\d+)$", p3);
    check L25() else D7();
  L57():
    goto L12(r39);
  L59():
    msg3 = force? msg2;
    checkMissing(msg3);
    l = ld Tidy;
    attr__ = ldf `attr<-`;
    check L60() else D26();
  L63():
    Tidy12 = force? Tidy11;
    checkMissing(Tidy12);
    popenv;
    return Tidy12;
  D7():
    deopt 26 [r10];
  D26():
    deopt 97 [msg3, l, msg3];
  L25():
    st mat = r10;
    regmatches = ldf regmatches;
    check L26() else D8();
  L60():
    r40 = dyn attr__(l, NULL, "msg", msg3);
    check L61() else D27();
  D8():
    deopt 29 [];
  D27():
    deopt 100 [msg3, r40];
  L26():
    p4 = prom<V +>{
      ver2 = ld ver;
      ver3 = force? ver2;
      checkMissing(ver3);
      return ver3;
    };
    p5 = prom<V +>{
      mat = ld mat;
      mat1 = force? mat;
      checkMissing(mat1);
      return mat1;
    };
    r13 = dyn regmatches(p4, p5);
    check L27() else D9();
  L61():
    st Tidy = r40;
    goto L14();
  D9():
    deopt 32 [r13];
  L27():
    c1 = `is.object`(r13);
    if c1 then L28() else L29(r13);
  L4(dx1):
    c2 = `is.object`(dx1);
    if c2 then L31() else L32(dx1);
  L28():
    dr = tryDispatchBuiltin.1("[[", r13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(r15):
    __ = ldf `[[` in base;
    r16 = dyn __(r15, 1);
    goto L4(r16);
  L5(dx5):
    st ver = dx5;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L31():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(dr2);
  L32(dx3):
    __1 = ldf `[` in base;
    r17 = dyn __1(dx3, 2);
    goto L5(r17);
  L6(r19):
    r21 = `!`(r19);
    st OK = r21;
    OK2 = ld OK;
    check L38() else D12();
  L33():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx4);
  L34():
    ver4 = ld ver;
    check L36() else D10();
  L35():
    r18 = dyn base1(<sym ver>);
    goto L6(r18);
  D10():
    deopt 42 [ver4];
  D12():
    deopt 48 [OK2];
  L36():
    ver5 = force? ver4;
    checkMissing(ver5);
    is_na = ldf `is.na` in base;
    r20 = dyn is_na(ver5);
    check L37() else D11();
  L38():
    OK3 = force? OK2;
    checkMissing(OK3);
    c3 = `as.logical`(OK3);
    if c3 then L39() else L7();
  D11():
    deopt 45 [r20];
  L7():
    sprintf1 = ldf sprintf;
    check L49() else D19();
  L10(r31):
    goto L11();
  L37():
    goto L6(r20);
  L39():
    st req = "5.0.0";
    numeric_version = ldf numeric_version;
    check L40() else D13();
  D13():
    deopt 54 [];
  D19():
    deopt 74 [];
  L40():
    p6 = prom<V +>{
      ver6 = ld ver;
      ver7 = force? ver6;
      checkMissing(ver7);
      return ver7;
    };
    r23 = dyn numeric_version(p6);
    check L41() else D14();
  L49():
    p10 = prom<V +>{
      Tidy7 = ld Tidy;
      Tidy8 = force? Tidy7;
      checkMissing(Tidy8);
      return Tidy8;
    };
    r33 = dyn sprintf1("'%s' doesn't look like recent enough HTML Tidy", p10);
    check L50() else D20();
  D14():
    deopt 56 [r23];
  D20():
    deopt 77 [r33];
  L41():
    req = ld req;
    check L42() else D15();
  L50():
    st msg = r33;
    goto L10(r33);
  D15():
    deopt 56 [r23, req];
  L42():
    req1 = force? req;
    checkMissing(req1);
    r24 = `>=`(r23, req1);
    st OK = r24;
    OK4 = ld OK;
    check L43() else D16();
  D16():
    deopt 60 [OK4];
  L43():
    OK5 = force? OK4;
    checkMissing(OK5);
    r25 = `!`(OK5);
    c4 = `as.logical`(r25);
    if c4 then L44() else L8();
  L8():
    goto L9(NULL);
  L9(r30):
    goto L10(r30);
  L44():
    sprintf = ldf sprintf;
    check L45() else D17();
  D17():
    deopt 64 [];
  L45():
    p7 = prom<V +>{
      Tidy5 = ld Tidy;
      Tidy6 = force? Tidy5;
      checkMissing(Tidy6);
      return Tidy6;
    };
    p8 = prom<V +>{
      req2 = ld req;
      req3 = force? req2;
      checkMissing(req3);
      return req3;
    };
    p9 = prom<V +>{
      ver8 = ld ver;
      ver9 = force? ver8;
      checkMissing(ver9);
      return ver9;
    };
    r29 = dyn sprintf("'%s' is too old: need version %s, found %s", p7, p8, p9);
    check L46() else D18();
  D18():
    deopt 69 [r29];
  L46():
    st msg = r29;
    goto L9(r29);
  }
}