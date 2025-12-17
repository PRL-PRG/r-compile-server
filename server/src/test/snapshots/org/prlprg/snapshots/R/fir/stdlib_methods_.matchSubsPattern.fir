fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner364439497;
    st `.matchSubsPattern` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner364439497(what, matchto, excludeVirtual) {
  (reg what:*, reg matchto:*, reg excludeVirtual:*) -+> V { var what:*, var matchto:*, var excludeVirtual:*, reg getClass:cls, reg what1:*, reg what2:V, reg p:p(V +), reg r1:V, reg excludeVirtual1:*, reg excludeVirtual2:V, reg c:L, reg c2:V, reg __:cls, reg r2:V, reg c3:L, reg c4:V, reg c6:L, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg __1:cls, reg r9:V, reg names:cls, reg r10:V, reg matchto1:*, reg matchto2:V, reg match:cls, reg r11:V, reg matches:*, reg matches1:V, reg c7:L, reg matches3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg matches4:*, reg matches5:V, reg r12:V, reg __2:cls, reg r13:V, reg paste:cls, reg matches6:*, reg matches7:V, reg p1:p(V +), reg r15:V |
    mkenv;
    st what = what;
    st matchto = matchto;
    st excludeVirtual = excludeVirtual;
    getClass = ldf getClass;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p = prom<V +>{
      what1 = ld what;
      what2 = force? what1;
      checkMissing(what2);
      return what2;
    };
    r1 = dyn getClass(p);
    check L7() else D1();
  D1():
    deopt 3 [r1];
  L7():
    st def = r1;
    excludeVirtual1 = ld excludeVirtual;
    check L8() else D2();
  D2():
    deopt 5 [excludeVirtual1];
  L8():
    excludeVirtual2 = force? excludeVirtual1;
    checkMissing(excludeVirtual2);
    c = `as.logical`(excludeVirtual2);
    if c then L9() else L0(c);
  L0(c2):
    c6 = `as.logical`(c2);
    if c6 then L11() else L1();
  L9():
    __ = ldf `@` in base;
    r2 = dyn __(<sym def>, <sym virtual>);
    c3 = `as.logical`(r2);
    c4 = `&&`(c, c3);
    goto L0(c4);
  L1():
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L11():
    popenv;
    return "";
  L3(r6):
    st matches = r6;
    matches = ld matches;
    check L21() else D6();
  L14():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L15():
    r5 = dyn base(<lang names(`@`(def, contains))>, <sym matchto>, 0);
    goto L3(r5);
  D6():
    deopt 30 [matches];
  L4(r8):
    matchto1 = ld matchto;
    check L19() else D4();
  L16():
    __1 = ldf `@` in base;
    r9 = dyn __1(<sym def>, <sym contains>);
    names = ldf names in base;
    r10 = dyn names(r9);
    check L18() else D3();
  L17():
    r7 = dyn base1(<lang `@`(def, contains)>);
    goto L4(r7);
  L21():
    matches1 = force? matches;
    checkMissing(matches1);
    c7 = `is.object`(matches1);
    if c7 then L22() else L23(matches1);
  D3():
    deopt 22 [r10];
  D4():
    deopt 23 [matchto1];
  L5(dx1):
    st matches = dx1;
    paste = ldf paste;
    check L26() else D8();
  L18():
    goto L4(r10);
  L19():
    matchto2 = force? matchto1;
    checkMissing(matchto2);
    match = ldf match in base;
    r11 = dyn match(r8, matchto2, 0, NULL);
    check L20() else D5();
  L22():
    dr = tryDispatchBuiltin.1("[", matches1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(matches3):
    matches4 = ld matches;
    check L25() else D7();
  D5():
    deopt 28 [r11];
  D7():
    deopt 32 [matches3, matches4];
  D8():
    deopt 39 [];
  L20():
    goto L3(r11);
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L25():
    matches5 = force? matches4;
    checkMissing(matches5);
    r12 = `>`(matches5, 0);
    __2 = ldf `[` in base;
    r13 = dyn __2(matches3, r12);
    goto L5(r13);
  L26():
    p1 = prom<V +>{
      matches6 = ld matches;
      matches7 = force? matches6;
      checkMissing(matches7);
      return matches7;
    };
    r15 = dyn paste[, collapse](p1, ".");
    check L27() else D9();
  D9():
    deopt 43 [r15];
  L27():
    popenv;
    return r15;
  }
}