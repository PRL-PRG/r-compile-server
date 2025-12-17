fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3204389973;
    st `.AtNames.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3204389973(x, pattern) {
  (reg x:*, reg pattern:*) -+> V { var x:*, var pattern:*, reg pattern_isMissing:L, reg pattern_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg isS4:cls, reg r2:V, reg c:L, reg findMatches:cls, reg pattern1:*, reg pattern2:V, reg p:p(V +), reg __:cls, reg r4:V, reg r5:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg character:cls, reg r10:V |
    mkenv;
    st x = x;
    pattern_isMissing = missing.0(pattern);
    if pattern_isMissing then L0("") else L0(pattern);
  L0(pattern_orDefault):
    st pattern = pattern_orDefault;
    sym = ldf isS4;
    base = ldf isS4 in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L1(r1):
    c = `as.logical`(r1);
    if c then L7() else L2();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    character = ldf character;
    check L11() else D4();
  L5():
    x2 = force? x1;
    checkMissing(x2);
    isS4 = ldf isS4 in base;
    r2 = dyn isS4(x2);
    check L6() else D1();
  L7():
    findMatches = ldf findMatches;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  D4():
    deopt 12 [];
  L6():
    goto L1(r2);
  L8():
    p = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p2 = prom<V +>{
      __ = ldf `::`;
      r4 = dyn __("methods", "slotNames");
      checkFun.0(r4);
      r5 = r4 as cls;
      p1 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r7 = dyn r5(p1);
      return r7;
    };
    r9 = dyn findMatches(p, p2);
    check L9() else D3();
  L11():
    r10 = dyn character();
    check L12() else D5();
  D3():
    deopt 10 [r9];
  D5():
    deopt 13 [r10];
  L9():
    popenv;
    return r9;
  L12():
    popenv;
    return r10;
  }
}