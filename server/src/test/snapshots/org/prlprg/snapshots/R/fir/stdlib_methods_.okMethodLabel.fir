fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner815072961;
    st `.okMethodLabel` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner815072961(method) {
  (reg method:*) -+> V { var method:*, reg is:cls, reg method1:*, reg method2:V, reg p:p(V +), reg r1:V, reg c:L, reg packageSlot:cls, reg __:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg pkgs:*, reg pkgs1:V, reg length:cls, reg r7:V, reg r8:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg c6:L, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg c9:L, reg r12:V, reg pkgs2:*, reg pkgs3:V, reg nzchar:cls, reg r13:V, reg all:cls, reg r14:V, reg c10:L, reg c11:V |
    mkenv;
    st method = method;
    is = ldf is;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r1 = dyn is(p, "MethodDefinition");
    check L6() else D1();
  D1():
    deopt 4 [r1];
  L6():
    c = `as.logical`(r1);
    if c then L7() else L0();
  L0():
    popenv;
    return TRUE;
  L7():
    packageSlot = ldf packageSlot;
    check L8() else D2();
  D2():
    deopt 6 [];
  L8():
    p1 = prom<V +>{
      __ = ldf `@` in base;
      r2 = dyn __(<sym method>, <sym target>);
      return r2;
    };
    r4 = dyn packageSlot(p1);
    check L9() else D3();
  D3():
    deopt 8 [r4];
  L9():
    st pkgs = r4;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r6):
    r8 = `>`(r6, 0.0);
    c1 = `as.logical`(r8);
    if c1 then L14() else L2(c1);
  L10():
    pkgs = ld pkgs;
    check L12() else D4();
  L11():
    r5 = dyn base(<sym pkgs>);
    goto L1(r5);
  D4():
    deopt 12 [pkgs];
  L2(c3):
    popenv;
    return c3;
  L12():
    pkgs1 = force? pkgs;
    checkMissing(pkgs1);
    length = ldf length in base;
    r7 = dyn length(pkgs1);
    check L13() else D5();
  L14():
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  D5():
    deopt 15 [r7];
  L3(c6, r10):
    c10 = `as.logical`(r10);
    c11 = `&&`(c6, c10);
    goto L2(c11);
  L13():
    goto L1(r7);
  L15():
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L16():
    r9 = dyn base1(<lang nzchar(pkgs)>);
    goto L3(c1, r9);
  L4(c9, r12):
    all = ldf all in base;
    r14 = dyn all(r12);
    check L21() else D8();
  L17():
    pkgs2 = ld pkgs;
    check L19() else D6();
  L18():
    r11 = dyn base2(<sym pkgs>);
    goto L4(c1, r11);
  D6():
    deopt 22 [c1, pkgs2];
  D8():
    deopt 27 [c9, r14];
  L19():
    pkgs3 = force? pkgs2;
    checkMissing(pkgs3);
    nzchar = ldf nzchar in base;
    r13 = dyn nzchar(pkgs3);
    check L20() else D7();
  L21():
    goto L3(c9, r14);
  D7():
    deopt 25 [c1, r13];
  L20():
    goto L4(c1, r13);
  }
}