fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2916718377;
    st `.get_namespace_from_package_env` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2916718377(env) {
  (reg env:*) -+> V { var env:*, reg sub:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg attr:cls, reg r2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg package:*, reg package1:V, reg length:cls, reg r7:V, reg c:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c5:L, reg r9:V, reg package2:*, reg package3:V, reg nzchar:cls, reg r10:V, reg c6:L, reg c7:V, reg c9:L, reg _getNamespace:cls, reg as_name:cls, reg package4:*, reg package5:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V |
    mkenv;
    st env = env;
    sub = ldf sub;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      attr = ldf attr in base;
      r2 = dyn attr(env2, "name", TRUE);
      goto L0(r2);
    L2():
      r = dyn base[, , exact](<sym env>, "name", TRUE);
      goto L0(r);
    };
    r4 = dyn sub(".*:([^_]*).*", "\\1", p);
    check L5() else D1();
  D1():
    deopt 5 [r4];
  L5():
    st package = r4;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L0(r6):
    c = `as.logical`(r6);
    if c then L10() else L1(c);
  L6():
    package = ld package;
    check L8() else D2();
  L7():
    r5 = dyn base1(<sym package>);
    goto L0(r5);
  D2():
    deopt 9 [package];
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L16() else L3();
  L8():
    package1 = force? package;
    checkMissing(package1);
    length = ldf length in base;
    r7 = dyn length(package1);
    check L9() else D3();
  L10():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  D3():
    deopt 12 [r7];
  L2(c5, r9):
    c6 = `as.logical`(r9);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3():
    invisible.0();
    popenv;
    return NULL;
  L9():
    goto L0(r7);
  L11():
    package2 = ld package;
    check L13() else D4();
  L12():
    r8 = dyn base2(<sym package>);
    goto L2(c, r8);
  L16():
    _getNamespace = ldf `.getNamespace`;
    check L17() else D6();
  D4():
    deopt 15 [c, package2];
  D6():
    deopt 21 [];
  L13():
    package3 = force? package2;
    checkMissing(package3);
    nzchar = ldf nzchar in base;
    r10 = dyn nzchar(package3);
    check L14() else D5();
  L17():
    p2 = prom<V +>{
      as_name = ldf `as.name`;
      p1 = prom<V +>{
        package4 = ld package;
        package5 = force? package4;
        checkMissing(package5);
        return package5;
      };
      r12 = dyn as_name(p1);
      return r12;
    };
    r14 = dyn _getNamespace(p2);
    check L18() else D7();
  D5():
    deopt 18 [c, r10];
  D7():
    deopt 23 [r14];
  L14():
    goto L2(c, r10);
  L18():
    popenv;
    return r14;
  }
}