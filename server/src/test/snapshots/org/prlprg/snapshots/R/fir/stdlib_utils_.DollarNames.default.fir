fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3204389973;
    st `.DollarNames.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3204389973(x, pattern) {
  (reg x:*, reg pattern:*) -+> V { var x:*, var pattern:*, reg pattern_isMissing:L, reg pattern_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_atomic:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg x3:*, reg x4:V, reg c6:L, reg c7:L, reg c8:V, reg c10:L, reg character:cls, reg r5:V, reg findMatches:cls, reg pattern1:*, reg pattern2:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg names:cls, reg r9:V, reg p1:p(V +), reg r11:V |
    mkenv;
    st x = x;
    pattern_isMissing = missing.0(pattern);
    if pattern_isMissing then L0("") else L0(pattern);
  L0(pattern_orDefault):
    st pattern = pattern_orDefault;
    sym = ldf `is.atomic`;
    base = ldf `is.atomic` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r1):
    c = `as.logical`(r1);
    if c then L2(c) else L9();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2(c1):
    c10 = `as.logical`(c1);
    if c10 then L14() else L4();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    is_atomic = ldf `is.atomic` in base;
    r2 = dyn is_atomic(x2);
    check L8() else D1();
  L9():
    sym1 = ldf `is.symbol`;
    base1 = ldf `is.symbol` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  D1():
    deopt 5 [r2];
  L3(c5, r4):
    c7 = `as.logical`(r4);
    c8 = `||`(c5, c7);
    goto L2(c8);
  L4():
    findMatches = ldf findMatches;
    check L18() else D5();
  L8():
    goto L1(r2);
  L10():
    x3 = ld x;
    check L12() else D2();
  L11():
    r3 = dyn base1(<sym x>);
    goto L3(c, r3);
  L14():
    character = ldf character;
    check L15() else D3();
  D2():
    deopt 7 [c, x3];
  D3():
    deopt 12 [];
  D5():
    deopt 15 [];
  L12():
    x4 = force? x3;
    checkMissing(x4);
    c6 = `is.symbol`(x4);
    goto L3(c, c6);
  L15():
    r5 = dyn character();
    check L16() else D4();
  L18():
    p = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p1 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      names = ldf names in base;
      r9 = dyn names(x6);
      goto L0(r9);
    L2():
      r7 = dyn base2(<sym x>);
      goto L0(r7);
    };
    r11 = dyn findMatches(p, p1);
    check L19() else D6();
  D4():
    deopt 13 [r5];
  D6():
    deopt 18 [r11];
  L16():
    popenv;
    return r5;
  L19():
    popenv;
    return r11;
  }
}