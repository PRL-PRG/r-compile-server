fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2203017188;
    st `.notSingleString` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2203017188(what) {
  (reg what:*) -+> V { var what:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg what1:*, reg what2:V, reg identical:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg what3:*, reg what4:V, reg c1:L, reg c2:L, reg paste:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg what5:*, reg what6:V, reg length:cls, reg r7:V, reg p:p(V +), reg r9:V, reg gettextf:cls, reg dQuote:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg what7:*, reg what8:V, reg class:cls, reg r12:V, reg c3:L, reg r14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg p1:p(V +), reg r17:V, reg p2:p(V +), reg r19:V |
    mkenv;
    st what = what;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L8() else L1();
  L4():
    what1 = ld what;
    check L6() else D0();
  L5():
    r = dyn base(<sym what>, "");
    goto L0(r);
  D0():
    deopt 2 [what1];
  L1():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L6():
    what2 = force? what1;
    checkMissing(what2);
    identical = ldf identical in base;
    r2 = dyn identical(what2, "", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L7() else D1();
  L8():
    popenv;
    return "non-empty string; got \"\"";
  D1():
    deopt 13 [r2];
  L2(r4):
    c2 = `as.logical`(r4);
    if c2 then L13() else L3();
  L7():
    goto L0(r2);
  L10():
    what3 = ld what;
    check L12() else D2();
  L11():
    r3 = dyn base1(<sym what>);
    goto L2(r3);
  D2():
    deopt 17 [what3];
  L3():
    gettextf = ldf gettextf;
    check L17() else D5();
  L12():
    what4 = force? what3;
    checkMissing(what4);
    c1 = `is.character`(what4);
    goto L2(c1);
  L13():
    paste = ldf paste;
    check L14() else D3();
  D3():
    deopt 21 [];
  D5():
    deopt 26 [];
  L14():
    p = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      what5 = ld what;
      what6 = force? what5;
      checkMissing(what6);
      length = ldf length in base;
      r7 = dyn length(what6);
      goto L0(r7);
    L2():
      r5 = dyn base2(<sym what>);
      goto L0(r5);
    };
    r9 = dyn paste("single string; got a character vector of length", p);
    check L15() else D4();
  L17():
    p2 = prom<V +>{
      dQuote = ldf dQuote;
      p1 = prom<V +>{
        sym3 = ldf class;
        base3 = ldf class in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L2() else L3();
      L0(r11):
        c3 = `is.object`(r11);
        if c3 then L4() else L5(r11);
      L2():
        what7 = ld what;
        what8 = force? what7;
        checkMissing(what8);
        class = ldf class in base;
        r12 = dyn class(what8);
        goto L0(r12);
      L3():
        r10 = dyn base3(<sym what>);
        goto L0(r10);
      L1(dx1):
        return dx1;
      L4():
        dr = tryDispatchBuiltin.1("[[", r11);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L6() else L5(dr);
      L5(r14):
        __ = ldf `[[` in base;
        r15 = dyn __(r14, 1);
        goto L1(r15);
      L6():
        dx = getTryDispatchBuiltinValue(dr);
        goto L1(dx);
      };
      r17 = dyn dQuote(p1);
      return r17;
    };
    r19 = dyn gettextf("single string; got an object of class %s", p2);
    check L18() else D6();
  D4():
    deopt 24 [r9];
  D6():
    deopt 29 [r19];
  L15():
    popenv;
    return r9;
  L18():
    popenv;
    return r19;
  }
}