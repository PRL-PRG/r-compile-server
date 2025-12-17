fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1896859337;
    st get0 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1896859337(x, envir, mode, inherits, ifnotfound) {
  (reg x:*, reg envir:*, reg mode:*, reg inherits:*, reg ifnotfound:*) -+> V { var x:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg pos_to_env:cls, reg r2:V, reg p:p(V +), var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, var inherits:*, reg inherits_isMissing:L, reg inherits_orDefault:*, var ifnotfound:*, reg ifnotfound_isMissing:L, reg ifnotfound_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg envir1:*, reg envir2:V, reg mode1:*, reg mode2:V, reg inherits1:*, reg inherits2:V, reg ifnotfound1:*, reg ifnotfound2:V, reg get0:cls, reg r6:V |
    mkenv;
    st x = x;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p = prom<V +>{
      sym = ldf `pos.to.env`;
      base = ldf `pos.to.env` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      pos_to_env = ldf `pos.to.env` in base;
      r2 = dyn pos_to_env(-1);
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
    inherits_isMissing = missing.0(inherits);
    if inherits_isMissing then L3(TRUE) else L3(inherits);
  L3(inherits_orDefault):
    st inherits = inherits_orDefault;
    ifnotfound_isMissing = missing.0(ifnotfound);
    if ifnotfound_isMissing then L4(NULL) else L4(ifnotfound);
  L4(ifnotfound_orDefault):
    st ifnotfound = ifnotfound_orDefault;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5(r5):
    popenv;
    return r5;
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r4 = dyn base1(<lang get0(x, envir, mode, inherits, ifnotfound)>);
    goto L5(r4);
  D0():
    deopt 2 [x1];
  L8():
    x2 = force? x1;
    checkMissing(x2);
    envir1 = ld envir;
    check L9() else D1();
  D1():
    deopt 4 [envir1];
  L9():
    envir2 = force? envir1;
    checkMissing(envir2);
    mode1 = ld mode;
    check L10() else D2();
  D2():
    deopt 6 [mode1];
  L10():
    mode2 = force? mode1;
    checkMissing(mode2);
    inherits1 = ld inherits;
    check L11() else D3();
  D3():
    deopt 8 [inherits1];
  L11():
    inherits2 = force? inherits1;
    checkMissing(inherits2);
    ifnotfound1 = ld ifnotfound;
    check L12() else D4();
  D4():
    deopt 10 [ifnotfound1];
  L12():
    ifnotfound2 = force? ifnotfound1;
    checkMissing(ifnotfound2);
    get0 = ldf get0 in base;
    r6 = dyn get0(x2, envir2, mode2, inherits2, ifnotfound2);
    check L13() else D5();
  D5():
    deopt 13 [r6];
  L13():
    goto L5(r6);
  }
}