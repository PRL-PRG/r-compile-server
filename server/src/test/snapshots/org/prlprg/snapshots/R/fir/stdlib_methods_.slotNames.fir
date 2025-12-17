fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.slotNames` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg getClassDef:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg isS4:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg x3:*, reg x4:V, reg c6:L, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c15:L, reg r7:V, reg x5:*, reg x6:V, reg length:cls, reg r8:V, reg r9:V, reg c16:L, reg c17:V, reg c19:L, reg x7:*, reg x8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg x9:*, reg x10:V, reg class:cls, reg r12:V, reg p:p(V +), reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg classDef:*, reg classDef1:V, reg c20:V, reg c21:L, reg character:cls, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg __:cls, reg r20:V, reg names:cls, reg r21:V |
    mkenv;
    st x = x;
    getClassDef = ldf getClassDef;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      sym = ldf isS4;
      base = ldf isS4 in base;
      guard = `==`.4(sym, base);
      if guard then L7() else L8();
    L0(r1):
      r3 = `!`(r1);
      c = `as.logical`(r3);
      if c then L9() else L1(c);
    L7():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      isS4 = ldf isS4 in base;
      r2 = dyn isS4(x2);
      goto L0(r2);
    L8():
      r = dyn base(<sym x>);
      goto L0(r);
    L1(c2):
      c10 = `as.logical`(c2);
      if c10 then L13() else L3(c10);
    L9():
      sym1 = ldf `is.character`;
      base1 = ldf `is.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L10() else L11();
    L2(c5, r5):
      c7 = `as.logical`(r5);
      c8 = `&&`(c5, c7);
      goto L1(c8);
    L3(c12):
      c19 = `as.logical`(c12);
      if c19 then L17() else L5();
    L10():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c6 = `is.character`(x4);
      goto L2(c, c6);
    L11():
      r4 = dyn base1(<sym x>);
      goto L2(c, r4);
    L13():
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L14() else L15();
    L4(c15, r7):
      r9 = `==`(r7, 1);
      c16 = `as.logical`(r9);
      c17 = `&&`(c15, c16);
      goto L3(c17);
    L5():
      sym3 = ldf class;
      base3 = ldf class in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L19() else L20();
    L14():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      length = ldf length in base;
      r8 = dyn length(x6);
      goto L4(c10, r8);
    L15():
      r6 = dyn base2(<sym x>);
      goto L4(c10, r6);
    L17():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    L6(r11):
      return r11;
    L19():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      class = ldf class in base;
      r12 = dyn class(x10);
      goto L6(r12);
    L20():
      r10 = dyn base3(<sym x>);
      goto L6(r10);
    };
    r14 = dyn getClassDef(p);
    check L4() else D1();
  D1():
    deopt 3 [r14];
  L4():
    st classDef = r14;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L5() else L6();
  L0(r16):
    c21 = `as.logical`(r16);
    if c21 then L8() else L1();
  L5():
    classDef = ld classDef;
    check L7() else D2();
  L6():
    r15 = dyn base4(<sym classDef>);
    goto L0(r15);
  D2():
    deopt 6 [classDef];
  L1():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L12() else L13();
  L7():
    classDef1 = force? classDef;
    checkMissing(classDef1);
    c20 = `==`(classDef1, NULL);
    goto L0(c20);
  L8():
    character = ldf character;
    check L9() else D3();
  D3():
    deopt 10 [];
  L2(r19):
    popenv;
    return r19;
  L9():
    r17 = dyn character();
    check L10() else D4();
  L12():
    __ = ldf `@` in base;
    r20 = dyn __(<sym classDef>, <sym slots>);
    names = ldf names in base;
    r21 = dyn names(r20);
    check L14() else D5();
  L13():
    r18 = dyn base5(<lang `@`(classDef, slots)>);
    goto L2(r18);
  D4():
    deopt 11 [r17];
  D5():
    deopt 17 [r21];
  L10():
    popenv;
    return r17;
  L14():
    goto L2(r21);
  }
}