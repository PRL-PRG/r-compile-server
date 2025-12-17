fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1109350330;
    st `.updateInImportsEnv` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1109350330(what, newFun, importingPkg) {
  (reg what:*, reg newFun:*, reg importingPkg:*) -+> V { var what:*, var newFun:*, var importingPkg:*, reg _getImportsEnv:cls, reg importingPkg1:*, reg importingPkg2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg where:*, reg where1:V, reg c:V, reg r4:V, reg c1:L, reg c3:V, reg _in_:cls, reg what1:*, reg what2:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg where2:*, reg where3:V, reg names:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg c4:L, reg c5:V, reg c7:L, reg _assignOverBinding:cls, reg what3:*, reg what4:V, reg p3:p(V +), reg newFun1:*, reg newFun2:V, reg p4:p(V +), reg where4:*, reg where5:V, reg p5:p(V +), reg r14:V |
    mkenv;
    st what = what;
    st newFun = newFun;
    st importingPkg = importingPkg;
    _getImportsEnv = ldf `.getImportsEnv`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      importingPkg1 = ld importingPkg;
      importingPkg2 = force? importingPkg1;
      checkMissing(importingPkg2);
      return importingPkg2;
    };
    r1 = dyn _getImportsEnv(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    st where = r1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r3):
    r4 = `!`(r3);
    c1 = `as.logical`(r4);
    if c1 then L8() else L1(c1);
  L5():
    where = ld where;
    check L7() else D2();
  L6():
    r2 = dyn base(<sym where>);
    goto L0(r2);
  D2():
    deopt 6 [where];
  L1(c3):
    c7 = `as.logical`(c3);
    if c7 then L12() else L2();
  L7():
    where1 = force? where;
    checkMissing(where1);
    c = `==`(where1, NULL);
    goto L0(c);
  L8():
    _in_ = ldf `%in%`;
    check L9() else D3();
  D3():
    deopt 11 [c1];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L9():
    p1 = prom<V +>{
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      return what2;
    };
    p2 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      where2 = ld where;
      where3 = force? where2;
      checkMissing(where3);
      names = ldf names in base;
      r8 = dyn names(where3);
      goto L0(r8);
    L2():
      r6 = dyn base1(<sym where>);
      goto L0(r6);
    };
    r10 = dyn _in_(p1, p2);
    check L10() else D4();
  L12():
    _assignOverBinding = ldf `.assignOverBinding`;
    check L13() else D5();
  D4():
    deopt 14 [c1, r10];
  D5():
    deopt 17 [];
  L10():
    c4 = `as.logical`(r10);
    c5 = `&&`(c1, c4);
    goto L1(c5);
  L13():
    p3 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    p4 = prom<V +>{
      newFun1 = ld newFun;
      newFun2 = force? newFun1;
      checkMissing(newFun2);
      return newFun2;
    };
    p5 = prom<V +>{
      where4 = ld where;
      where5 = force? where4;
      checkMissing(where5);
      return where5;
    };
    r14 = dyn _assignOverBinding(p3, p4, p5, FALSE);
    check L14() else D6();
  D6():
    deopt 22 [r14];
  L14():
    popenv;
    return r14;
  }
}