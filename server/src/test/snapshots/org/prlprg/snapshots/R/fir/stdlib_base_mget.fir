fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246831130;
    st mget = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246831130(x, envir, mode, ifnotfound, inherits) {
  (reg x:*, reg envir:*, reg mode:*, reg ifnotfound:*, reg inherits:*) -+> V { var x:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg as_environment:cls, reg r2:V, reg p:p(V +), var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, var ifnotfound:*, var inherits:*, reg inherits_isMissing:L, reg inherits_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg envir1:*, reg envir2:V, reg mode1:*, reg mode2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg missing:cls, reg r8:V, reg c:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg r11:cls, reg list:cls, reg r12:V, reg r13:V, reg ifnotfound1:*, reg ifnotfound2:V, reg inherits1:*, reg inherits2:V, reg mget:cls, reg r14:V |
    mkenv;
    st x = x;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p = prom<V +>{
      sym = ldf `as.environment`;
      base = ldf `as.environment` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      as_environment = ldf `as.environment` in base;
      r2 = dyn as_environment(-1);
      goto L0(r2);
    L2():
      r = dyn base(<lang `-`(1)>);
      goto L0(r);
    };
    goto L1(p);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    mode_isMissing = missing.0(mode);
    if mode_isMissing then L2("any") else L2(mode);
  L2(mode_orDefault):
    st mode = mode_orDefault;
    st ifnotfound = ifnotfound;
    inherits_isMissing = missing.0(inherits);
    if inherits_isMissing then L3(FALSE) else L3(inherits);
  L3(inherits_orDefault):
    st inherits = inherits_orDefault;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L4(r5):
    popenv;
    return r5;
  L9():
    x1 = ld x;
    check L11() else D0();
  L10():
    r4 = dyn base1(<lang mget(x, envir, mode, if(missing(ifnotfound), list(function((x=), stop(gettextf("value for %s not found", sQuote(x)), call.=FALSE), NULL)), ifnotfound), inherits)>);
    goto L4(r4);
  D0():
    deopt 2 [x1];
  L11():
    x2 = force? x1;
    checkMissing(x2);
    envir1 = ld envir;
    check L12() else D1();
  D1():
    deopt 4 [envir1];
  L12():
    envir2 = force? envir1;
    checkMissing(envir2);
    mode1 = ld mode;
    check L13() else D2();
  D2():
    deopt 6 [mode1];
  L13():
    mode2 = force? mode1;
    checkMissing(mode2);
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L5(r7):
    c = `as.logical`(r7);
    if c then L16() else L6();
  L14():
    missing = ldf missing in base;
    r8 = dyn missing(<sym ifnotfound>);
    goto L5(r8);
  L15():
    r6 = dyn base2(<sym ifnotfound>);
    goto L5(r6);
  L6():
    ifnotfound1 = ld ifnotfound;
    check L21() else D4();
  L8(r13):
    inherits1 = ld inherits;
    check L22() else D5();
  L16():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L17() else L18();
  D4():
    deopt 17 [ifnotfound1];
  D5():
    deopt 19 [inherits1];
  L7(r10):
    goto L8(r10);
  L17():
    r11 = clos inner354062069;
    list = ldf list in base;
    r12 = dyn list(r11);
    check L19() else D3();
  L18():
    r9 = dyn base3(<lang function((x=), stop(gettextf("value for %s not found", sQuote(x)), call.=FALSE), NULL)>);
    goto L7(r9);
  L21():
    ifnotfound2 = force? ifnotfound1;
    checkMissing(ifnotfound2);
    goto L8(ifnotfound2);
  L22():
    inherits2 = force? inherits1;
    checkMissing(inherits2);
    mget = ldf mget in base;
    r14 = dyn mget(x2, envir2, mode2, r13, inherits2);
    check L23() else D6();
  D3():
    deopt 16 [r12];
  D6():
    deopt 22 [r14];
  L19():
    goto L7(r12);
  L23():
    goto L4(r14);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st x = x;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        sQuote = ldf sQuote;
        p = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        r1 = dyn sQuote(p);
        return r1;
      };
      r3 = dyn gettextf("value for %s not found", p1);
      return r3;
    };
    r5 = dyn stop[, `call.`](p2, FALSE);
    check L1() else D1();
  D1():
    deopt 5 [r5];
  L1():
    popenv;
    return r5;
  }
}