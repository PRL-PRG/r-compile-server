fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3765640956;
    st Position = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3765640956(f, x, right, nomatch) {
  (reg f:*, reg x:*, reg right:*, reg nomatch:*) -+> V { var f:*, var x:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, var nomatch:*, reg nomatch_isMissing:L, reg nomatch_orDefault:*, reg match_fun:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg right1:*, reg right2:V, reg c:L, reg rev:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg r4:I, reg p1:p(V +), reg r6:V, reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg x3:*, reg x4:V, reg r9:I, reg ind:*, reg ind1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x5:V, reg f3:cls, reg x6:*, reg x7:V, reg c2:L, reg x9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg c3:L, reg i9:*, reg i10:V, reg nomatch1:*, reg nomatch2:V |
    mkenv;
    st f = f;
    st x = x;
    right_isMissing = missing.0(right);
    if right_isMissing then L0(FALSE) else L0(right);
  L0(right_orDefault):
    st right = right_orDefault;
    nomatch_isMissing = missing.0(nomatch);
    if nomatch_isMissing then L1(NA_INT) else L1(nomatch);
  L1(nomatch_orDefault):
    st nomatch = nomatch_orDefault;
    match_fun = ldf `match.fun`;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r1 = dyn match_fun(p);
    check L9() else D1();
  D1():
    deopt 3 [r1];
  L9():
    st f = r1;
    right1 = ld right;
    check L10() else D2();
  D2():
    deopt 5 [right1];
  L10():
    right2 = force? right1;
    checkMissing(right2);
    c = `as.logical`(right2);
    if c then L11() else L2();
  L2():
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L3(r7):
    st ind = r7;
    ind = ld ind;
    check L18() else D6();
  L11():
    rev = ldf rev;
    check L12() else D3();
  D3():
    deopt 8 [];
  D6():
    deopt 16 [ind];
  L12():
    p1 = prom<V +>{
      sym = ldf seq_along;
      base = ldf seq_along in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      r4 = seq_along(x2);
      goto L0(r4);
    L2():
      r2 = dyn base(<sym x>);
      goto L0(r2);
    };
    r6 = dyn rev(p1);
    check L13() else D4();
  L15():
    x3 = ld x;
    check L17() else D5();
  L16():
    r8 = dyn base1(<sym x>);
    goto L3(r8);
  L18():
    ind1 = force? ind;
    checkMissing(ind1);
    s = toForSeq(ind1);
    l = length(s);
    i = 0;
    goto L4(i);
  D4():
    deopt 10 [r6];
  D5():
    deopt 12 [x3];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L19() else L7();
  L13():
    goto L3(r6);
  L17():
    x4 = force? x3;
    checkMissing(x4);
    r9 = seq_along(x4);
    goto L3(r9);
  L7():
    x5 = `[[`(s, i2, NULL, TRUE);
    st i = x5;
    f3 = ldf f;
    check L20() else D7();
  L19():
    nomatch1 = ld nomatch;
    check L26() else D10();
  D7():
    deopt 19 [i2];
  D10():
    deopt 30 [nomatch1];
  L20():
    p2 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      c2 = `is.object`(x7);
      if c2 then L1() else L2(x7);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", x7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x9):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[[` in base;
      r10 = dyn __(x9, i6);
      goto L0(r10);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r12 = dyn f3(p2);
    check L21() else D8();
  L26():
    nomatch2 = force? nomatch1;
    checkMissing(nomatch2);
    popenv;
    return nomatch2;
  D8():
    deopt 21 [i2, r12];
  L21():
    c3 = `as.logical`(r12);
    if c3 then L22() else L5();
  L5():
    goto L4(i2);
  L22():
    i9 = ld i;
    check L23() else D9();
  D9():
    deopt 22 [i2, i9];
  L23():
    i10 = force? i9;
    checkMissing(i10);
    popenv;
    return i10;
  }
}