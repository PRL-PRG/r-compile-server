fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1232375993;
    st `print.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1232375993(x, showEnv, `...`) {
  (reg x:*, reg showEnv:*, reg ddd:dots) -+> V { var x:*, var showEnv:*, reg showEnv_isMissing:L, reg showEnv_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e:*, reg e1:V, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg identical:cls, reg r2:V, reg r3:V, reg p:p(V +), var `...`:dots?, reg environment:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r6:V, reg l:*, reg attr__:cls, reg r7:V, reg print_default:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg unclass:cls, reg r10:V, reg p2:p(V +), reg ddd1:dots?, reg r12:V, reg showEnv1:*, reg showEnv2:V, reg c:L, reg print:cls, reg e2:*, reg e3:V, reg p3:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg _x:*, reg _x1:V, reg invisible:cls, reg r18:V |
    mkenv;
    st x = x;
    showEnv_isMissing = missing.0(showEnv);
    if showEnv_isMissing then L0() else L1(showEnv);
  L0():
    p = prom<V +>{
      sym = ldf identical;
      base = ldf identical in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      r3 = `!`(r1);
      return r3;
    L1():
      e = ld e;
      e1 = force? e;
      checkMissing(e1);
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      identical = ldf identical in base;
      r2 = dyn identical(e1, _GlobalEnv1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r2);
    L2():
      r = dyn base(<sym e>, <sym .GlobalEnv>);
      goto L0(r);
    };
    goto L1(p);
  L1(showEnv_orDefault):
    st showEnv = showEnv_orDefault;
    st `...` = ddd;
    environment = ldf environment;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      st `.x` = x2;
      invisible.0();
      return x2;
    };
    r6 = dyn environment(p1);
    check L6() else D1();
  D1():
    deopt 3 [r6];
  L6():
    st e = r6;
    l = ld x;
    attr__ = ldf `attr<-`;
    check L7() else D2();
  D2():
    deopt 8 [NULL, l, NULL];
  L7():
    r7 = dyn attr__(l, NULL, ".Environment", NULL);
    check L8() else D3();
  D3():
    deopt 11 [NULL, r7];
  L8():
    st x = r7;
    print_default = ldf `print.default`;
    check L9() else D4();
  D4():
    deopt 14 [];
  L9():
    p2 = prom<V +>{
      sym1 = ldf unclass;
      base1 = ldf unclass in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      unclass = ldf unclass in base;
      r10 = dyn unclass(x4);
      goto L0(r10);
    L2():
      r8 = dyn base1(<sym x>);
      goto L0(r8);
    };
    ddd1 = ld `...`;
    r12 = dyn print_default[, `...`](p2, ddd1);
    check L10() else D5();
  D5():
    deopt 17 [r12];
  L10():
    showEnv1 = ld showEnv;
    check L11() else D6();
  D6():
    deopt 18 [showEnv1];
  L11():
    showEnv2 = force? showEnv1;
    checkMissing(showEnv2);
    c = `as.logical`(showEnv2);
    if c then L12() else L2();
  L2():
    goto L3();
  L3():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L12():
    print = ldf print;
    check L13() else D7();
  D7():
    deopt 21 [];
  L4(r17):
    popenv;
    return r17;
  L13():
    p3 = prom<V +>{
      e2 = ld e;
      e3 = force? e2;
      checkMissing(e3);
      return e3;
    };
    r14 = dyn print(p3);
    check L14() else D8();
  L16():
    _x = ld `.x`;
    check L18() else D9();
  L17():
    r16 = dyn base2(<sym .x>);
    goto L4(r16);
  D8():
    deopt 23 [r14];
  D9():
    deopt 28 [_x];
  L14():
    goto L3();
  L18():
    _x1 = force? _x;
    checkMissing(_x1);
    invisible = ldf invisible in base;
    r18 = dyn invisible(_x1);
    check L19() else D10();
  D10():
    deopt 31 [r18];
  L19():
    goto L4(r18);
  }
}