fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2916718377;
    st `.hasS4MetaData` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2916718377(env) {
  (reg env:*) -+> V { var env:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg names:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg startsWith:cls, reg nms:*, reg nms1:V, reg p:p(V +), reg r6:V, reg any:cls, reg r7:V, reg c:L, reg c1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c5:L, reg r9:V, reg startsWith1:cls, reg nms2:*, reg nms3:V, reg p1:p(V +), reg r11:V, reg any1:cls, reg r12:V, reg c6:L, reg c7:V, reg c9:L, reg c10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg c14:L, reg r14:V, reg startsWith2:cls, reg nms4:*, reg nms5:V, reg p2:p(V +), reg r16:V, reg any2:cls, reg r17:V, reg c15:L, reg c16:V |
    mkenv;
    st env = env;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st nms = r1;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L6():
    env1 = ld env;
    check L8() else D0();
  L7():
    r = dyn base(<sym env>);
    goto L0(r);
  D0():
    deopt 2 [env1];
  L1(r4):
    c = `as.logical`(r4);
    if c then L2(c) else L15();
  L8():
    env2 = force? env1;
    checkMissing(env2);
    names = ldf names in base;
    r2 = dyn names(env2);
    check L9() else D1();
  L10():
    startsWith = ldf startsWith;
    check L12() else D2();
  L11():
    r3 = dyn base1(<lang startsWith(nms, ".__C__")>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 10 [];
  L2(c1):
    c9 = `as.logical`(c1);
    if c9 then L4(c9) else L22();
  L9():
    goto L0(r2);
  L12():
    p = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    r6 = dyn startsWith(p, ".__C__");
    check L13() else D3();
  L15():
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  D3():
    deopt 13 [r6];
  L3(c5, r9):
    c6 = `as.logical`(r9);
    c7 = `||`(c5, c6);
    goto L2(c7);
  L4(c10):
    popenv;
    return c10;
  L13():
    any = ldf any in base;
    r7 = dyn any(r6);
    check L14() else D4();
  L16():
    startsWith1 = ldf startsWith;
    check L18() else D5();
  L17():
    r8 = dyn base2(<lang startsWith(nms, ".__T__")>);
    goto L3(c, r8);
  L22():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  D4():
    deopt 15 [r7];
  D5():
    deopt 19 [c];
  L5(c14, r14):
    c15 = `as.logical`(r14);
    c16 = `||`(c14, c15);
    goto L4(c16);
  L14():
    goto L1(r7);
  L18():
    p1 = prom<V +>{
      nms2 = ld nms;
      nms3 = force? nms2;
      checkMissing(nms3);
      return nms3;
    };
    r11 = dyn startsWith1(p1, ".__T__");
    check L19() else D6();
  L23():
    startsWith2 = ldf startsWith;
    check L25() else D8();
  L24():
    r13 = dyn base3(<lang startsWith(nms, ".__A__")>);
    goto L5(c9, r13);
  D6():
    deopt 22 [c, r11];
  D8():
    deopt 29 [c9];
  L19():
    any1 = ldf any in base;
    r12 = dyn any1(r11);
    check L20() else D7();
  L25():
    p2 = prom<V +>{
      nms4 = ld nms;
      nms5 = force? nms4;
      checkMissing(nms5);
      return nms5;
    };
    r16 = dyn startsWith2(p2, ".__A__");
    check L26() else D9();
  D7():
    deopt 24 [c, r12];
  D9():
    deopt 32 [c9, r16];
  L20():
    goto L3(c, r12);
  L26():
    any2 = ldf any in base;
    r17 = dyn any2(r16);
    check L27() else D10();
  D10():
    deopt 34 [c9, r17];
  L27():
    goto L5(c9, r17);
  }
}