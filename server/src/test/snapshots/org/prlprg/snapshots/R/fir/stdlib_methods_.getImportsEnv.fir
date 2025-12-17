fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner423301576;
    st `.getImportsEnv` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner423301576(pkg) {
  (reg pkg:*) -+> V { var pkg:*, reg paste0:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg emptyenv:cls, reg r4:V, reg asNamespace:cls, reg pkg3:*, reg pkg4:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg env:*, reg env1:V, reg empty:*, reg empty1:V, reg identical:cls, reg r9:V, reg r10:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg env2:*, reg env3:V, reg attr:cls, reg r15:V, reg iname:*, reg iname1:V, reg identical1:cls, reg r16:V, reg c1:L, reg env4:*, reg env5:V, reg parent_env:cls, reg env6:*, reg env7:V, reg p2:p(V +), reg r20:V |
    mkenv;
    st pkg = pkg;
    paste0 = ldf paste0;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    r1 = dyn paste0("imports:", p);
    check L9() else D1();
  D1():
    deopt 4 [r1];
  L9():
    st iname = r1;
    sym = ldf emptyenv;
    base = ldf emptyenv in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r3):
    st empty = r3;
    asNamespace = ldf asNamespace;
    check L13() else D3();
  L10():
    emptyenv = ldf emptyenv in base;
    r4 = dyn emptyenv();
    check L12() else D2();
  L11():
    r2 = dyn base();
    goto L0(r2);
  D2():
    deopt 9 [r4];
  D3():
    deopt 12 [];
  L12():
    goto L0(r4);
  L13():
    p1 = prom<V +>{
      pkg3 = ld pkg;
      pkg4 = force? pkg3;
      checkMissing(pkg4);
      return pkg4;
    };
    r6 = dyn asNamespace(p1);
    check L14() else D4();
  D4():
    deopt 14 [r6];
  L14():
    st env = r6;
    goto L7();
  L7():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L1(r8):
    r10 = `!`(r8);
    c = `as.logical`(r10);
    if c then L20() else L2();
  L15():
    env = ld env;
    check L17() else D5();
  L16():
    r7 = dyn base1(<sym env>, <sym empty>);
    goto L1(r7);
  D5():
    deopt 18 [env];
  L2():
    popenv;
    return NULL;
  L17():
    env1 = force? env;
    checkMissing(env1);
    empty = ld empty;
    check L18() else D6();
  L20():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  D6():
    deopt 20 [empty];
  L3(r12):
    c1 = `as.logical`(r12);
    if c1 then L29() else L5();
  L18():
    empty1 = force? empty;
    checkMissing(empty1);
    identical = ldf identical in base;
    r9 = dyn identical(env1, empty1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L19() else D7();
  L21():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  L22():
    r11 = dyn base2(<lang attr(env, "name")>, <sym iname>);
    goto L3(r11);
  D7():
    deopt 30 [r9];
  L4(r14):
    iname = ld iname;
    check L27() else D10();
  L5():
    parent_env = ldf `parent.env`;
    check L33() else D13();
  L19():
    goto L1(r9);
  L23():
    env2 = ld env;
    check L25() else D8();
  L24():
    r13 = dyn base3(<sym env>, "name");
    goto L4(r13);
  L29():
    env4 = ld env;
    check L30() else D12();
  D8():
    deopt 36 [env2];
  D10():
    deopt 41 [iname];
  D12():
    deopt 52 [env4];
  D13():
    deopt 58 [];
  L25():
    env3 = force? env2;
    checkMissing(env3);
    attr = ldf attr in base;
    r15 = dyn attr(env3, "name");
    check L26() else D9();
  L27():
    iname1 = force? iname;
    checkMissing(iname1);
    identical1 = ldf identical in base;
    r16 = dyn identical1(r14, iname1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L28() else D11();
  L30():
    env5 = force? env4;
    checkMissing(env5);
    popenv;
    return env5;
  L33():
    p2 = prom<V +>{
      env6 = ld env;
      env7 = force? env6;
      checkMissing(env7);
      return env7;
    };
    r20 = dyn parent_env(p2);
    check L34() else D14();
  D9():
    deopt 40 [r15];
  D11():
    deopt 51 [r16];
  D14():
    deopt 60 [r20];
  L26():
    goto L4(r15);
  L28():
    goto L3(r16);
  L34():
    st env = r20;
    goto L7();
  }
}