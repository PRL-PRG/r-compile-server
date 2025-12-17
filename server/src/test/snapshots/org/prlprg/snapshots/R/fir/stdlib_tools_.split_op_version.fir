fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.split_op_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sub:cls, reg pat:*, reg pat1:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg r2:V, reg sub1:cls, reg pat2:*, reg pat3:V, reg p2:p(V +), reg x3:*, reg x4:V, reg p3:p(V +), reg r5:V, reg x5:*, reg x6:V, reg x7:*, reg x8:V, reg r6:V, reg c:L, reg sub2:cls, reg pat4:*, reg pat5:V, reg p4:p(V +), reg x9:*, reg x10:V, reg p5:p(V +), reg r9:V, reg startsWith:cls, reg version:*, reg version1:V, reg p6:p(V +), reg r11:V, reg r12:V, reg c1:L, reg package_version:cls, reg version2:*, reg version3:V, reg p7:p(V +), reg r14:V, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg r17:V, reg x11:*, reg x12:V, reg sub3:cls, reg pat6:*, reg pat7:V, reg p8:p(V +), reg x13:*, reg x14:V, reg p9:p(V +), reg r20:V, reg version4:*, reg version5:V, reg list:cls, reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg x15:*, reg x16:V, reg list1:cls, reg r24:V |
    mkenv;
    st x = x;
    st pat = "^([^\\([:space:]]+)[[:space:]]*\\(([^\\)]+)\\).*";
    sub = ldf sub;
    check L5() else D0();
  D0():
    deopt 4 [];
  L5():
    p = prom<V +>{
      pat = ld pat;
      pat1 = force? pat;
      checkMissing(pat1);
      return pat1;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r2 = dyn sub(p, "\\1", p1);
    check L6() else D1();
  D1():
    deopt 8 [r2];
  L6():
    st x1 = r2;
    sub1 = ldf sub;
    check L7() else D2();
  D2():
    deopt 11 [];
  L7():
    p2 = prom<V +>{
      pat2 = ld pat;
      pat3 = force? pat2;
      checkMissing(pat3);
      return pat3;
    };
    p3 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r5 = dyn sub1(p2, "\\2", p3);
    check L8() else D3();
  D3():
    deopt 15 [r5];
  L8():
    st x2 = r5;
    x5 = ld x2;
    check L9() else D4();
  D4():
    deopt 17 [x5];
  L9():
    x6 = force? x5;
    checkMissing(x6);
    x7 = ld x1;
    check L10() else D5();
  D5():
    deopt 18 [x6, x7];
  L10():
    x8 = force? x7;
    checkMissing(x8);
    r6 = `!=`(x6, x8);
    c = `as.logical`(r6);
    if c then L11() else L0();
  L0():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L11():
    st pat = "[[:space:]]*([[<>=!]+)[[:space:]]+(.*)";
    sub2 = ldf sub;
    check L12() else D6();
  D6():
    deopt 25 [];
  L4(r23):
    popenv;
    return r23;
  L12():
    p4 = prom<V +>{
      pat4 = ld pat;
      pat5 = force? pat4;
      checkMissing(pat5);
      return pat5;
    };
    p5 = prom<V +>{
      x9 = ld x2;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r9 = dyn sub2(p4, "\\2", p5);
    check L13() else D7();
  L28():
    x15 = ld x1;
    check L30() else D17();
  L29():
    r22 = dyn base1[name](<sym x1>);
    goto L4(r22);
  D7():
    deopt 29 [r9];
  D17():
    deopt 63 [x15];
  L13():
    st version = r9;
    startsWith = ldf startsWith;
    check L14() else D8();
  L30():
    x16 = force? x15;
    checkMissing(x16);
    list1 = ldf list in base;
    r24 = dyn list1(x16);
    check L31() else D18();
  D8():
    deopt 32 [];
  D18():
    deopt 67 [r24];
  L14():
    p6 = prom<V +>{
      version = ld version;
      version1 = force? version;
      checkMissing(version1);
      return version1;
    };
    r11 = dyn startsWith(p6, "r");
    check L15() else D9();
  L31():
    goto L4(r24);
  D9():
    deopt 35 [r11];
  L15():
    r12 = `!`(r11);
    c1 = `as.logical`(r12);
    if c1 then L16() else L1();
  L1():
    goto L2();
  L2():
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L16():
    package_version = ldf package_version;
    check L17() else D10();
  D10():
    deopt 38 [];
  L3(r17):
    popenv;
    return r17;
  L17():
    p7 = prom<V +>{
      version2 = ld version;
      version3 = force? version2;
      checkMissing(version3);
      return version3;
    };
    r14 = dyn package_version(p7);
    check L18() else D11();
  L20():
    x11 = ld x1;
    check L22() else D12();
  L21():
    r16 = dyn base[name, op, version](<sym x1>, <lang sub(pat, "\\1", x2)>, <sym version>);
    goto L3(r16);
  D11():
    deopt 40 [r14];
  D12():
    deopt 46 [x11];
  L18():
    st version = r14;
    goto L2();
  L22():
    x12 = force? x11;
    checkMissing(x12);
    sub3 = ldf sub;
    check L23() else D13();
  D13():
    deopt 50 [];
  L23():
    p8 = prom<V +>{
      pat6 = ld pat;
      pat7 = force? pat6;
      checkMissing(pat7);
      return pat7;
    };
    p9 = prom<V +>{
      x13 = ld x2;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r20 = dyn sub3(p8, "\\1", p9);
    check L24() else D14();
  D14():
    deopt 54 [r20];
  L24():
    version4 = ld version;
    check L25() else D15();
  D15():
    deopt 56 [version4];
  L25():
    version5 = force? version4;
    checkMissing(version5);
    list = ldf list in base;
    r21 = dyn list(x12, r20, version5);
    check L26() else D16();
  D16():
    deopt 60 [r21];
  L26():
    goto L3(r21);
  }
}