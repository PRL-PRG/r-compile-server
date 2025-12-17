fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.isSingleName` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg r2:V, reg c1:L, reg paste0:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg class:cls, reg r5:V, reg c2:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg p:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg x5:*, reg x6:V, reg length:cls, reg r15:V, reg r16:V, reg c3:L, reg paste1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg x7:*, reg x8:V, reg length1:cls, reg r19:V, reg p1:p(V +), reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg x9:*, reg x10:V, reg is_na:cls, reg r26:V, reg c4:L, reg c5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg c9:L, reg r28:V, reg x11:*, reg x12:V, reg nzchar:cls, reg r29:V, reg r30:V, reg c10:L, reg c11:V, reg c13:L, reg paste2:cls, reg x13:*, reg x14:V, reg p2:p(V +), reg r32:V |
    mkenv;
    st x = x;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L14() else L1();
  L11():
    x1 = ld x;
    check L13() else D0();
  L12():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L13():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L0(c);
  L14():
    paste0 = ldf paste0;
    check L15() else D1();
  D1():
    deopt 6 [];
  L3(r14):
    r16 = `!=`(r14, 1.0);
    c3 = `as.logical`(r16);
    if c3 then L23() else L4();
  L15():
    p = prom<V +>{
      sym1 = ldf class;
      base1 = ldf class in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r4):
      c2 = `is.object`(r4);
      if c2 then L4() else L5(r4);
    L2():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      class = ldf class in base;
      r5 = dyn class(x4);
      goto L0(r5);
    L3():
      r3 = dyn base1(<sym x>);
      goto L0(r3);
    L1(dx1):
      return dx1;
    L4():
      dr = tryDispatchBuiltin.1("[[", r4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(r7):
      __ = ldf `[[` in base;
      r8 = dyn __(r7, 1);
      goto L1(r8);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    r10 = dyn paste0("required to be a character vector, got an object of class \"", p, "\"");
    check L16() else D2();
  L19():
    x5 = ld x;
    check L21() else D3();
  L20():
    r13 = dyn base2(<sym x>);
    goto L3(r13);
  D2():
    deopt 10 [r10];
  D3():
    deopt 16 [x5];
  L4():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  L16():
    popenv;
    return r10;
  L21():
    x6 = force? x5;
    checkMissing(x6);
    length = ldf length in base;
    r15 = dyn length(x6);
    check L22() else D4();
  L23():
    paste1 = ldf paste0;
    check L24() else D5();
  D4():
    deopt 19 [r15];
  D5():
    deopt 23 [];
  L6(r25):
    c4 = `as.logical`(r25);
    if c4 then L7(c4) else L32();
  L22():
    goto L3(r15);
  L24():
    p1 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      length1 = ldf length in base;
      r19 = dyn length1(x8);
      goto L0(r19);
    L2():
      r17 = dyn base3(<sym x>);
      goto L0(r17);
    };
    r21 = dyn paste1("required to be a character vector of length 1, got length ", p1);
    check L25() else D6();
  L28():
    x9 = ld x;
    check L30() else D7();
  L29():
    r24 = dyn base4(<sym x>);
    goto L6(r24);
  D6():
    deopt 26 [r21];
  D7():
    deopt 32 [x9];
  L7(c5):
    c13 = `as.logical`(c5);
    if c13 then L38() else L9();
  L25():
    popenv;
    return r21;
  L30():
    x10 = force? x9;
    checkMissing(x10);
    is_na = ldf `is.na` in base;
    r26 = dyn is_na(x10);
    check L31() else D8();
  L32():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L33() else L34();
  D8():
    deopt 35 [r26];
  L8(c9, r28):
    r30 = `!`(r28);
    c10 = `as.logical`(r30);
    c11 = `||`(c9, c10);
    goto L7(c11);
  L9():
    popenv;
    return TRUE;
  L31():
    goto L6(r26);
  L33():
    x11 = ld x;
    check L35() else D9();
  L34():
    r27 = dyn base5(<sym x>);
    goto L8(c4, r27);
  L38():
    paste2 = ldf paste0;
    check L39() else D11();
  D9():
    deopt 38 [c4, x11];
  D11():
    deopt 45 [];
  L35():
    x12 = force? x11;
    checkMissing(x12);
    nzchar = ldf nzchar in base;
    r29 = dyn nzchar(x12);
    check L36() else D10();
  L39():
    p2 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r32 = dyn paste2("required a non-empty string, got \"", p2, "\"");
    check L40() else D12();
  D10():
    deopt 41 [c4, r29];
  D12():
    deopt 49 [r32];
  L36():
    goto L8(c4, r29);
  L40():
    popenv;
    return r32;
  }
}