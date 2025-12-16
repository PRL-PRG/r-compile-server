fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-966773075`;
    st isa = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-966773075`(x, what) {
  (reg x:*, reg what:*) -+> V { var x:*, var what:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg isS4:cls, reg r2:V, reg c:L, reg __:cls, reg r3:V, reg r4:cls, reg x3:*, reg x4:V, reg p:p(V +), reg what1:*, reg what2:V, reg p1:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg _in_:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x5:*, reg x6:V, reg class:cls, reg r12:V, reg p2:p(V +), reg what3:*, reg what4:V, reg p3:p(V +), reg r15:V, reg all:cls, reg r16:V |
    mkenv;
    st x = x;
    st what = what;
    sym = ldf isS4;
    base = ldf isS4 in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L5():
    x2 = force? x1;
    checkMissing(x2);
    isS4 = ldf isS4 in base;
    r2 = dyn isS4(x2);
    check L6() else D1();
  L7():
    __ = ldf `::`;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L2(r9):
    popenv;
    return r9;
  L6():
    goto L0(r2);
  L8():
    r3 = dyn __("methods", "is");
    check L9() else D3();
  L12():
    _in_ = ldf `%in%`;
    check L14() else D5();
  L13():
    r8 = dyn base1(<lang `%in%`(class(x), what)>);
    goto L2(r8);
  D3():
    deopt 10 [r3];
  D5():
    deopt 18 [];
  L9():
    checkFun.0(r3);
    r4 = r3 as cls;
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p1 = prom<V +>{
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      return what2;
    };
    r7 = dyn r4(p, p1);
    check L10() else D4();
  L14():
    p2 = prom<V +>{
      sym2 = ldf class;
      base2 = ldf class in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      class = ldf class in base;
      r12 = dyn class(x6);
      goto L0(r12);
    L2():
      r10 = dyn base2(<sym x>);
      goto L0(r10);
    };
    p3 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    r15 = dyn _in_(p2, p3);
    check L15() else D6();
  D4():
    deopt 14 [r7];
  D6():
    deopt 21 [r15];
  L10():
    popenv;
    return r7;
  L15():
    all = ldf all in base;
    r16 = dyn all(r15);
    check L16() else D7();
  D7():
    deopt 23 [r16];
  L16():
    goto L2(r16);
  }
}