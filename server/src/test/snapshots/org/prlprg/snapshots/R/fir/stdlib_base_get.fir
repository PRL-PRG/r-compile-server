fun main() {
  () -+> V { reg r:cls, reg get:cls, reg r1:V, reg new_env:cls, reg r2:V, reg mget:cls, reg letters:*, reg letters1:V, reg p:p(V +), reg e1:*, reg e2:V, reg p1:p(V +), reg as_list:cls, reg LETTERS:*, reg LETTERS1:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V |
    mkenv;
    r = clos inner878758657;
    st get = r;
    get = ldf get;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn get("%o%");
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    new_env = ldf `new.env`;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    r2 = dyn new_env();
    check L3() else D3();
  D3():
    deopt 9 [r2];
  L3():
    st e1 = r2;
    mget = ldf mget;
    check L4() else D4();
  D4():
    deopt 12 [];
  L4():
    p = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      return letters1;
    };
    p1 = prom<V +>{
      e1 = ld e1;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    p3 = prom<V +>{
      as_list = ldf `as.list`;
      p2 = prom<V +>{
        LETTERS = ld LETTERS;
        LETTERS1 = force? LETTERS;
        checkMissing(LETTERS1);
        return LETTERS1;
      };
      r6 = dyn as_list(p2);
      return r6;
    };
    r8 = dyn mget[, , ifnotfound](p, p1, p3);
    check L5() else D5();
  D5():
    deopt 17 [r8];
  L5():
    popenv;
    return r8;
  }
}
fun inner878758657(x, pos, envir, mode, inherits) {
  (reg x:*, reg pos:*, reg envir:*, reg mode:*, reg inherits:*) -+> V { var x:*, var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, reg p:p(V +), var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg pos1:*, reg pos2:V, reg as_environment:cls, reg r3:V, reg p1:p(V +), var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, var inherits:*, reg inherits_isMissing:L, reg inherits_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x1:*, reg x2:V, reg envir1:*, reg envir2:V, reg mode1:*, reg mode2:V, reg inherits1:*, reg inherits2:V, reg get:cls, reg r7:V |
    mkenv;
    st x = x;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L0() else L1(pos);
  L0():
    p = prom<V +>{
      return -1;
    };
    goto L1(p);
  L1(pos_orDefault):
    st pos = pos_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L2() else L3(envir);
  L2():
    p1 = prom<V +>{
      sym = ldf `as.environment`;
      base = ldf `as.environment` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      pos1 = ld pos;
      pos2 = force? pos1;
      checkMissing(pos2);
      as_environment = ldf `as.environment` in base;
      r3 = dyn as_environment(pos2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym pos>);
      goto L0(r1);
    };
    goto L3(p1);
  L3(envir_orDefault):
    st envir = envir_orDefault;
    mode_isMissing = missing.0(mode);
    if mode_isMissing then L4("any") else L4(mode);
  L4(mode_orDefault):
    st mode = mode_orDefault;
    inherits_isMissing = missing.0(inherits);
    if inherits_isMissing then L5(TRUE) else L5(inherits);
  L5(inherits_orDefault):
    st inherits = inherits_orDefault;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6(r6):
    popenv;
    return r6;
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r5 = dyn base1(<lang get(x, envir, mode, inherits)>);
    goto L6(r5);
  D0():
    deopt 2 [x1];
  L9():
    x2 = force? x1;
    checkMissing(x2);
    envir1 = ld envir;
    check L10() else D1();
  D1():
    deopt 4 [envir1];
  L10():
    envir2 = force? envir1;
    checkMissing(envir2);
    mode1 = ld mode;
    check L11() else D2();
  D2():
    deopt 6 [mode1];
  L11():
    mode2 = force? mode1;
    checkMissing(mode2);
    inherits1 = ld inherits;
    check L12() else D3();
  D3():
    deopt 8 [inherits1];
  L12():
    inherits2 = force? inherits1;
    checkMissing(inherits2);
    get = ldf get in base;
    r7 = dyn get(x2, envir2, mode2, inherits2);
    check L13() else D4();
  D4():
    deopt 11 [r7];
  L13():
    goto L6(r7);
  }
}