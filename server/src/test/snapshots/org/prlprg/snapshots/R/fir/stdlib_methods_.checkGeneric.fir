fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner667684203;
    st `.checkGeneric` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner667684203(what, where) {
  (reg what:*, reg where:*) -+> V { var what:*, var where:*, reg r:cls, reg vapply:cls, reg what1:*, reg what2:V, reg p:p(V +), reg _checkFun:*, reg _checkFun1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st what = what;
    st where = where;
    r = clos inner2501545716;
    st `.checkFun` = r;
    vapply = ldf vapply;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      return what2;
    };
    p1 = prom<V +>{
      _checkFun = ld `.checkFun`;
      _checkFun1 = force? _checkFun;
      checkMissing(_checkFun1);
      return _checkFun1;
    };
    r3 = dyn vapply(p, p1, NA_LGL);
    check L1() else D1();
  D1():
    deopt 8 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg get0:cls, reg x1:*, reg x2:V, reg p:p(V +), reg where:*, reg where1:V, reg p1:p(V +), reg r4:V, reg c:V, reg r5:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg f:*, reg f1:V, reg is_function:cls, reg r8:V, reg r9:V, reg maybe:*, reg maybe1:V, reg c2:L, reg is:cls, reg f2:*, reg f3:V, reg p2:p(V +), reg r11:V, reg c3:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg c8:L, reg r13:V, reg grep:cls, reg deparse:cls, reg f4:*, reg f5:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg r17:V, reg length:cls, reg r18:V, reg r19:V, reg c9:L, reg c10:V, reg c12:L, reg c13:V, reg is_primitive:cls, reg f6:*, reg f7:V, reg p5:p(V +), reg r21:V, reg c15:L, reg c16:V, reg maybe2:*, reg maybe3:V |
    mkenv;
    st x = x;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    r5 = `!`(r1);
    c1 = `as.logical`(r5);
    if c1 then L13() else L1();
  L9():
    get0 = ldf get0;
    check L11() else D0();
  L10():
    r = dyn base(<lang `<-`(f, get0(x, where))>);
    goto L0(r);
  D0():
    deopt 2 [];
  L1():
    goto L3(FALSE);
  L3(r9):
    st maybe = r9;
    maybe = ld maybe;
    check L19() else D4();
  L11():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      where = ld where;
      where1 = force? where;
      checkMissing(where1);
      return where1;
    };
    r4 = dyn get0(p, p1);
    check L12() else D1();
  L13():
    sym1 = ldf `is.function`;
    base1 = ldf `is.function` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D1():
    deopt 5 [r4];
  D4():
    deopt 18 [maybe];
  L2(r7):
    goto L3(r7);
  L12():
    st f = r4;
    c = `==`(r4, NULL);
    goto L0(c);
  L14():
    f = ld f;
    check L16() else D2();
  L15():
    r6 = dyn base1(<sym f>);
    goto L2(r6);
  L19():
    maybe1 = force? maybe;
    checkMissing(maybe1);
    c2 = `as.logical`(maybe1);
    if c2 then L20() else L4();
  D2():
    deopt 11 [f];
  L4():
    goto L8();
  L8():
    maybe2 = ld maybe;
    check L35() else D12();
  L16():
    f1 = force? f;
    checkMissing(f1);
    is_function = ldf `is.function` in base;
    r8 = dyn is_function(f1);
    check L17() else D3();
  L20():
    is = ldf is;
    check L21() else D5();
  D3():
    deopt 14 [r8];
  D5():
    deopt 21 [];
  D12():
    deopt 45 [maybe2];
  L17():
    goto L2(r8);
  L21():
    p2 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    r11 = dyn is(p2, "genericFunction");
    check L22() else D6();
  L35():
    maybe3 = force? maybe2;
    checkMissing(maybe3);
    popenv;
    return maybe3;
  D6():
    deopt 24 [r11];
  L22():
    c3 = `as.logical`(r11);
    if c3 then L5(c3) else L23();
  L5(c4):
    c12 = `as.logical`(c4);
    if c12 then L7(c12) else L30();
  L23():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L6(c8, r13):
    r19 = `>`(r13, 0.0);
    c9 = `as.logical`(r19);
    c10 = `||`(c8, c9);
    goto L5(c10);
  L7(c13):
    st maybe = c13;
    goto L8();
  L24():
    grep = ldf grep;
    check L26() else D7();
  L25():
    r12 = dyn base2(<lang grep("UseMethod", deparse(f))>);
    goto L6(c3, r12);
  L30():
    is_primitive = ldf `is.primitive`;
    check L31() else D10();
  D7():
    deopt 28 [c3];
  D10():
    deopt 38 [c12];
  L26():
    p4 = prom<V +>{
      deparse = ldf deparse;
      p3 = prom<V +>{
        f4 = ld f;
        f5 = force? f4;
        checkMissing(f5);
        return f5;
      };
      r15 = dyn deparse(p3);
      return r15;
    };
    r17 = dyn grep("UseMethod", p4);
    check L27() else D8();
  L31():
    p5 = prom<V +>{
      f6 = ld f;
      f7 = force? f6;
      checkMissing(f7);
      return f7;
    };
    r21 = dyn is_primitive(p5);
    check L32() else D11();
  D8():
    deopt 31 [c3, r17];
  D11():
    deopt 40 [c12, r21];
  L27():
    length = ldf length in base;
    r18 = dyn length(r17);
    check L28() else D9();
  L32():
    c15 = `as.logical`(r21);
    c16 = `||`(c12, c15);
    goto L7(c16);
  D9():
    deopt 33 [c3, r18];
  L28():
    goto L6(c3, r18);
  }
}