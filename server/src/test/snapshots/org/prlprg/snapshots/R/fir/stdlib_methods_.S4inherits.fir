fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner836691033;
    st `.S4inherits` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner836691033(x, what, which) {
  (reg x:*, reg what:*, reg which:*) -+> V { var x:*, var what:*, var which:*, reg extends:cls, reg getClass:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg class:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg which1:*, reg which2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg what1:*, reg what2:V, reg superClasses:*, reg superClasses1:V, reg match:cls, reg r9:V, reg _in_:cls, reg what3:*, reg what4:V, reg p2:p(V +), reg superClasses2:*, reg superClasses3:V, reg p3:p(V +), reg r12:V |
    mkenv;
    st x = x;
    st what = what;
    st which = which;
    extends = ldf extends;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      getClass = ldf getClass;
      p = prom<V +>{
        sym = ldf class;
        base = ldf class in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        class = ldf class in base;
        r2 = dyn class(x2);
        goto L0(r2);
      L2():
        r = dyn base(<sym x>);
        goto L0(r);
      };
      r4 = dyn getClass(p);
      return r4;
    };
    r6 = dyn extends(p1);
    check L3() else D1();
  D1():
    deopt 3 [r6];
  L3():
    st superClasses = r6;
    which1 = ld which;
    check L4() else D2();
  D2():
    deopt 5 [which1];
  L4():
    which2 = force? which1;
    checkMissing(which2);
    c = `as.logical`(which2);
    if c then L5() else L0();
  L0():
    _in_ = ldf `%in%`;
    check L12() else D6();
  L5():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  D6():
    deopt 18 [];
  L1(r8):
    popenv;
    return r8;
  L6():
    what1 = ld what;
    check L8() else D3();
  L7():
    r7 = dyn base1(<sym what>, <sym superClasses>, 0);
    goto L1(r7);
  L12():
    p2 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    p3 = prom<V +>{
      superClasses2 = ld superClasses;
      superClasses3 = force? superClasses2;
      checkMissing(superClasses3);
      return superClasses3;
    };
    r12 = dyn _in_(p2, p3);
    check L13() else D7();
  D3():
    deopt 9 [what1];
  D7():
    deopt 21 [r12];
  L8():
    what2 = force? what1;
    checkMissing(what2);
    superClasses = ld superClasses;
    check L9() else D4();
  L13():
    popenv;
    return r12;
  D4():
    deopt 11 [superClasses];
  L9():
    superClasses1 = force? superClasses;
    checkMissing(superClasses1);
    match = ldf match in base;
    r9 = dyn match(what2, superClasses1, 0, NULL);
    check L10() else D5();
  D5():
    deopt 16 [r9];
  L10():
    goto L1(r9);
  }
}