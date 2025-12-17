fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner503153204;
    st `$.package_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner503153204(x, name) {
  (reg x:*, reg name:*) -+> V { var x:*, var name:*, reg pmatch:cls, reg name1:*, reg name2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x1:*, reg x2:V, reg unclass:cls, reg r8:V, reg name3:*, reg name4:V, reg c1:L, reg c2:L, reg c3:L, reg c4:L, reg c5:L, reg c6:L, reg i_ddd:dots, reg i:V, reg c7:L, reg c8:L, reg c9:L, reg vapply:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg __:*, reg __1:V, reg p3:p(V +), reg r11:V, reg vapply1:cls, reg x5:*, reg x6:V, reg p4:p(V +), reg __2:*, reg __3:V, reg p5:p(V +), reg r14:V, reg vapply2:cls, reg x7:*, reg x8:V, reg p6:p(V +), reg __4:*, reg __5:V, reg p7:p(V +), reg r17:V |
    mkenv;
    st x = x;
    st name = name;
    pmatch = ldf pmatch;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("major", "minor", "patchlevel");
      goto L0(r3);
    L2():
      r1 = dyn base("major", "minor", "patchlevel");
      goto L0(r1);
    };
    r5 = dyn pmatch(p, p1);
    check L6() else D1();
  D1():
    deopt 4 [r5];
  L6():
    st name = r5;
    sym1 = ldf unclass;
    base1 = ldf unclass in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L0(r7):
    st x = r7;
    name3 = ld name;
    check L11() else D4();
  L7():
    x1 = ld x;
    check L9() else D2();
  L8():
    r6 = dyn base1(<sym x>);
    goto L0(r6);
  D2():
    deopt 8 [x1];
  D4():
    deopt 13 [name3];
  L9():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r8 = dyn unclass(x2);
    check L10() else D3();
  L11():
    name4 = force? name3;
    checkMissing(name4);
    c1 = `is.vector`(name4, "any");
    if c1 then L12() else L13();
  D3():
    deopt 11 [r8];
  L10():
    goto L0(r8);
  L12():
    c2 = inherits(name4, "factor", FALSE);
    if c2 then L14() else L15();
  L13():
    stop(<dot "EXPR must be a length 1 vector">, TRUE, NULL);
    unreachable;
  L14():
    c3 = `is.character`(name4);
    if c3 then L16() else L17();
  L15():
    warning(<dot "EXPR is a \"factor\", treated as integer.\n Consider using 'switch(as.character( * ), ...)' instead.">, TRUE, FALSE, FALSE, NULL);
    goto L14();
  L1():
    vapply = ldf vapply;
    check L25() else D5();
  L2():
    vapply1 = ldf vapply;
    check L28() else D7();
  L3():
    vapply2 = ldf vapply;
    check L31() else D9();
  L4():
    invisible.0();
    popenv;
    return NULL;
  L16():
    c4 = `==`.6(name4, "major");
    if c4 then L1() else L18();
  L17():
    i_ddd = dots[name4];
    i = `as.integer`(i_ddd);
    c7 = `==`.5(i, 1);
    if c7 then L1() else L21();
  D5():
    deopt 19 [];
  D7():
    deopt 26 [];
  D9():
    deopt 33 [];
  L18():
    c5 = `==`.6(name4, "minor");
    if c5 then L2() else L19();
  L21():
    c8 = `==`.5(i, 2);
    if c8 then L2() else L22();
  L25():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      __ = ld `[`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r11 = dyn vapply(p2, p3, 0, 1);
    check L26() else D6();
  L28():
    p4 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p5 = prom<V +>{
      __2 = ld `[`;
      __3 = force? __2;
      checkMissing(__3);
      return __3;
    };
    r14 = dyn vapply1(p4, p5, 0, 2);
    check L29() else D8();
  L31():
    p6 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p7 = prom<V +>{
      __4 = ld `[`;
      __5 = force? __4;
      checkMissing(__5);
      return __5;
    };
    r17 = dyn vapply2(p6, p7, 0, 3);
    check L32() else D10();
  D6():
    deopt 24 [r11];
  D8():
    deopt 31 [r14];
  D10():
    deopt 38 [r17];
  L19():
    c6 = `==`.6(name4, "patchlevel");
    if c6 then L3() else L20();
  L22():
    c9 = `==`.5(i, 3);
    if c9 then L3() else L23();
  L26():
    popenv;
    return r11;
  L29():
    popenv;
    return r14;
  L32():
    popenv;
    return r17;
  L20():
    goto L4();
  L23():
    goto L4();
  }
}