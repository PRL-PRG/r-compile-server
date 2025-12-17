fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2689666480;
    st makeUserAgent = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2689666480(format) {
  (reg format:*) -+> V { var format:*, reg format_isMissing:L, reg format_orDefault:*, reg getOption:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg agent:*, reg agent1:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg agent2:*, reg agent3:V, reg length:cls, reg r7:V, reg r8:V, reg c2:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg r9:V, reg p:p(V +), reg r11:V, reg p1:p(V +), reg r13:V, reg format1:*, reg format2:V, reg c3:L, reg paste0:cls, reg agent4:*, reg agent5:V, reg c4:L, reg agent7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg p2:p(V +), reg r17:V, reg agent8:*, reg agent9:V, reg c5:L, reg agent11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r18:V |
    mkenv;
    format_isMissing = missing.0(format);
    if format_isMissing then L0(TRUE) else L0(format);
  L0(format_orDefault):
    st format = format_orDefault;
    getOption = ldf getOption;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    r = dyn getOption("HTTPUserAgent");
    check L10() else D1();
  D1():
    deopt 3 [r];
  L10():
    st agent = r;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L1(r2):
    c1 = `as.logical`(r2);
    if c1 then L14() else L2();
  L11():
    agent = ld agent;
    check L13() else D2();
  L12():
    r1 = dyn base(<sym agent>);
    goto L1(r1);
  D2():
    deopt 6 [agent];
  L2():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L13():
    agent1 = force? agent;
    checkMissing(agent1);
    c = `==`(agent1, NULL);
    goto L1(c);
  L14():
    popenv;
    return NULL;
  L4(r6):
    r8 = `!=`(r6, 1);
    c2 = `as.logical`(r8);
    if c2 then L21() else L5();
  L17():
    agent2 = ld agent;
    check L19() else D3();
  L18():
    r5 = dyn base1(<sym agent>);
    goto L4(r5);
  D3():
    deopt 16 [agent2];
  L5():
    goto L6();
  L6():
    format1 = ld format;
    check L25() else D7();
  L19():
    agent3 = force? agent2;
    checkMissing(agent3);
    length = ldf length in base;
    r7 = dyn length(agent3);
    check L20() else D4();
  L21():
    stop = ldf stop;
    check L22() else D5();
  D4():
    deopt 19 [r7];
  D5():
    deopt 23 [];
  D7():
    deopt 30 [format1];
  L20():
    goto L4(r7);
  L22():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        sQuote = ldf sQuote;
        r9 = dyn sQuote("HTTPUserAgent");
        return r9;
      };
      r11 = dyn gettextf("%s option must be a length one character vector or NULL", p);
      return r11;
    };
    r13 = dyn stop[, domain](p1, NA_LGL);
    check L23() else D6();
  L25():
    format2 = force? format1;
    checkMissing(format2);
    c3 = `as.logical`(format2);
    if c3 then L26() else L7();
  D6():
    deopt 27 [r13];
  L7():
    agent8 = ld agent;
    check L30() else D10();
  L23():
    goto L6();
  L26():
    paste0 = ldf paste0;
    check L27() else D8();
  D8():
    deopt 33 [];
  D10():
    deopt 38 [agent8];
  L27():
    p2 = prom<V +>{
      agent4 = ld agent;
      agent5 = force? agent4;
      checkMissing(agent5);
      c4 = `is.object`(agent5);
      if c4 then L1() else L2(agent5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", agent5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(agent7):
      __ = ldf `[` in base;
      r15 = dyn __(agent7, 1);
      goto L0(r15);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r17 = dyn paste0("User-Agent: ", p2, "\r\n");
    check L28() else D9();
  L30():
    agent9 = force? agent8;
    checkMissing(agent9);
    c5 = `is.object`(agent9);
    if c5 then L31() else L32(agent9);
  D9():
    deopt 37 [r17];
  L8(dx3):
    popenv;
    return dx3;
  L28():
    popenv;
    return r17;
  L31():
    dr2 = tryDispatchBuiltin.1("[", agent9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(dr2);
  L32(agent11):
    __1 = ldf `[` in base;
    r18 = dyn __1(agent11, 1);
    goto L8(r18);
  L33():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  }
}