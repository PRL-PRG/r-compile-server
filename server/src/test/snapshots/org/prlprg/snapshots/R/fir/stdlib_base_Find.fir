fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1399396608;
    st Find = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner1399396608(f, x, right, nomatch) {
  (reg f:*, reg x:*, reg right:*, reg nomatch:*) -+> V { var f:*, var x:*, var right:*, reg right_isMissing:L, reg right_orDefault:*, var nomatch:*, reg nomatch_isMissing:L, reg nomatch_orDefault:*, reg match_fun:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg Position:cls, reg f3:*, reg f4:V, reg p1:p(V +), reg x1:*, reg x2:V, reg p2:p(V +), reg right1:*, reg right2:V, reg p3:p(V +), reg r5:V, reg r6:V, reg c:L, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos:*, reg pos1:V, reg __:cls, reg r7:V, reg nomatch1:*, reg nomatch2:V |
    mkenv;
    st f = f;
    st x = x;
    right_isMissing = missing.0(right);
    if right_isMissing then L0(FALSE) else L0(right);
  L0(right_orDefault):
    st right = right_orDefault;
    nomatch_isMissing = missing.0(nomatch);
    if nomatch_isMissing then L1(NULL) else L1(nomatch);
  L1(nomatch_orDefault):
    st nomatch = nomatch_orDefault;
    match_fun = ldf `match.fun`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r1 = dyn match_fun(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    st f = r1;
    Position = ldf Position;
    check L6() else D2();
  D2():
    deopt 6 [];
  L6():
    p1 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p2 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p3 = prom<V +>{
      right1 = ld right;
      right2 = force? right1;
      checkMissing(right2);
      return right2;
    };
    r5 = dyn Position[, , , nomatch](p1, p2, p3, 0);
    check L7() else D3();
  D3():
    deopt 12 [r5];
  L7():
    st pos = r5;
    r6 = `>`(r5, 0);
    c = `as.logical`(r6);
    if c then L8() else L2();
  L2():
    nomatch1 = ld nomatch;
    check L15() else D6();
  L8():
    x3 = ld x;
    check L9() else D4();
  D4():
    deopt 16 [x3];
  D6():
    deopt 21 [nomatch1];
  L9():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L10() else L11(x4);
  L15():
    nomatch2 = force? nomatch1;
    checkMissing(nomatch2);
    popenv;
    return nomatch2;
  L3(dx1):
    popenv;
    return dx1;
  L10():
    dr = tryDispatchBuiltin.1("[[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(x6):
    pos = ld pos;
    check L13() else D5();
  D5():
    deopt 18 [x6, pos];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L13():
    pos1 = force? pos;
    __ = ldf `[[` in base;
    r7 = dyn __(x6, pos1);
    goto L3(r7);
  }
}