fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner586644901;
    st attachedPackageCompletions = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner586644901(text, add) {
  (reg text:*, reg add:*) -+> V { var text:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, reg rc_getOption:cls, reg r:V, reg p:p(V +), reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c:L, reg _CompletionEnv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r3:V, reg c2:L, reg grep:cls, reg search:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg findExactMatches:cls, reg sprintf:cls, reg makeRegexpSafe:cls, reg text1:*, reg text2:V, reg p2:p(V +), reg r8:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg substr:cls, reg s:*, reg s1:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg r15:V, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg r17:V, reg comps:*, reg comps1:V, reg length:cls, reg r18:V, reg c3:L, reg c5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg c8:L, reg r20:V, reg add1:*, reg add2:V, reg c9:V, reg r21:V, reg c10:L, reg c11:V, reg c13:L, reg sprintf1:cls, reg comps2:*, reg comps3:V, reg p7:p(V +), reg add3:*, reg add4:V, reg p8:p(V +), reg r24:V, reg comps4:*, reg comps5:V, reg character:cls, reg r25:V |
    mkenv;
    st text = text;
    add_isMissing = missing.0(add);
    if add_isMissing then L0() else L1(add);
  L0():
    p = prom<V +>{
      rc_getOption = ldf `rc.getOption`;
      r = dyn rc_getOption("package.suffix");
      return r;
    };
    goto L1(p);
  L1(add_orDefault):
    st add = add_orDefault;
    _CompletionEnv = ld `.CompletionEnv`;
    check L8() else D0();
  D0():
    deopt 0 [_CompletionEnv];
  L8():
    _CompletionEnv1 = force? _CompletionEnv;
    checkMissing(_CompletionEnv1);
    c = `is.object`(_CompletionEnv1);
    if c then L10() else L11(_CompletionEnv1);
  L9(dx1):
    c1 = `is.object`(dx1);
    if c1 then L13() else L14(dx1);
  L10():
    dr = tryDispatchBuiltin.1("$", _CompletionEnv1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(_CompletionEnv3):
    r2 = `$`(_CompletionEnv3, <sym settings>);
    goto L9(r2);
  L2(dx5):
    c2 = `as.logical`(dx5);
    if c2 then L16() else L3();
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    dr2 = tryDispatchBuiltin.1("[[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(dr2);
  L14(dx3):
    __ = ldf `[[` in base;
    r3 = dyn __(dx3, "ns");
    goto L2(r3);
  L3():
    character = ldf character;
    check L36() else D11();
  L15():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx4);
  L16():
    grep = ldf grep;
    check L17() else D1();
  D1():
    deopt 7 [];
  D11():
    deopt 41 [];
  L17():
    p1 = prom<V +>{
      search = ldf search;
      r4 = dyn search();
      return r4;
    };
    r6 = dyn grep[, , value]("^package", p1, TRUE);
    check L18() else D2();
  L36():
    r25 = dyn character();
    check L37() else D12();
  D2():
    deopt 12 [r6];
  D12():
    deopt 42 [r25];
  L18():
    st s = r6;
    findExactMatches = ldf findExactMatches;
    check L19() else D3();
  L37():
    popenv;
    return r25;
  D3():
    deopt 15 [];
  L19():
    p4 = prom<V +>{
      sprintf = ldf sprintf;
      p3 = prom<V +>{
        makeRegexpSafe = ldf makeRegexpSafe;
        p2 = prom<V +>{
          text1 = ld text;
          text2 = force? text1;
          checkMissing(text2);
          return text2;
        };
        r8 = dyn makeRegexpSafe(p2);
        return r8;
      };
      r10 = dyn sprintf("^%s", p3);
      return r10;
    };
    p6 = prom<V +>{
      substr = ldf substr;
      p5 = prom<V +>{
        s = ld s;
        s1 = force? s;
        checkMissing(s1);
        return s1;
      };
      r13 = dyn substr(p5, 9, 1000000);
      return r13;
    };
    r15 = dyn findExactMatches(p4, p6);
    check L20() else D4();
  D4():
    deopt 18 [r15];
  L20():
    st comps = r15;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L4(r17):
    c3 = `as.logical`(r17);
    if c3 then L25() else L5(c3);
  L21():
    comps = ld comps;
    check L23() else D5();
  L22():
    r16 = dyn base(<sym comps>);
    goto L4(r16);
  D5():
    deopt 22 [comps];
  L5(c5):
    c13 = `as.logical`(c5);
    if c13 then L30() else L7();
  L23():
    comps1 = force? comps;
    checkMissing(comps1);
    length = ldf length in base;
    r18 = dyn length(comps1);
    check L24() else D6();
  L25():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  D6():
    deopt 25 [r18];
  L6(c8, r20):
    r21 = `!`(r20);
    c10 = `as.logical`(r21);
    c11 = `&&`(c8, c10);
    goto L5(c11);
  L7():
    comps4 = ld comps;
    check L34() else D10();
  L24():
    goto L4(r18);
  L26():
    add1 = ld add;
    check L28() else D7();
  L27():
    r19 = dyn base1(<sym add>);
    goto L6(c3, r19);
  L30():
    sprintf1 = ldf sprintf;
    check L31() else D8();
  D7():
    deopt 27 [c3, add1];
  D8():
    deopt 33 [];
  D10():
    deopt 38 [comps4];
  L28():
    add2 = force? add1;
    checkMissing(add2);
    c9 = `==`(add2, NULL);
    goto L6(c3, c9);
  L31():
    p7 = prom<V +>{
      comps2 = ld comps;
      comps3 = force? comps2;
      checkMissing(comps3);
      return comps3;
    };
    p8 = prom<V +>{
      add3 = ld add;
      add4 = force? add3;
      checkMissing(add4);
      return add4;
    };
    r24 = dyn sprintf1("%s%s", p7, p8);
    check L32() else D9();
  L34():
    comps5 = force? comps4;
    checkMissing(comps5);
    popenv;
    return comps5;
  D9():
    deopt 37 [r24];
  L32():
    popenv;
    return r24;
  }
}