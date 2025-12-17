fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2203017188;
    st `.isSingleString` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2203017188(what) {
  (reg what:*) -+> V { var what:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg what1:*, reg what2:V, reg c:L, reg c1:L, reg c3:V, reg isTRUE:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg what3:*, reg what4:V, reg nzchar:cls, reg r4:V, reg p:p(V +), reg r6:V, reg c4:L, reg c5:V |
    mkenv;
    st what = what;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L5() else L1(c1);
  L2():
    what1 = ld what;
    check L4() else D0();
  L3():
    r = dyn base(<sym what>);
    goto L0(r);
  D0():
    deopt 1 [what1];
  L1(c3):
    popenv;
    return c3;
  L4():
    what2 = force? what1;
    checkMissing(what2);
    c = `is.character`(what2);
    goto L0(c);
  L5():
    isTRUE = ldf isTRUE;
    check L6() else D1();
  D1():
    deopt 5 [c1];
  L6():
    p = prom<V +>{
      sym1 = ldf nzchar;
      base1 = ldf nzchar in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      nzchar = ldf nzchar in base;
      r4 = dyn nzchar(what4);
      goto L0(r4);
    L2():
      r2 = dyn base1(<sym what>);
      goto L0(r2);
    };
    r6 = dyn isTRUE(p);
    check L7() else D2();
  D2():
    deopt 7 [c1, r6];
  L7():
    c4 = `as.logical`(r6);
    c5 = `&&`(c1, c4);
    goto L1(c5);
  }
}