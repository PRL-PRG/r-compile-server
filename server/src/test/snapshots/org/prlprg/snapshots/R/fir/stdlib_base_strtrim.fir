fun main() {
  () -+> V { reg r:cls, reg strtrim:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg p1:p(V +), reg r9:V |
    mkenv;
    r = clos inner655658746;
    st strtrim = r;
    strtrim = ldf strtrim;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("abcdef", "abcdef", "abcdef");
      goto L0(r3);
    L2():
      r1 = dyn base("abcdef", "abcdef", "abcdef");
      goto L0(r1);
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      c1 = ldf c in base;
      r7 = dyn c1(1.0, 5.0, 10.0);
      goto L0(r7);
    L2():
      r5 = dyn base1(1.0, 5.0, 10.0);
      goto L0(r5);
    };
    r9 = dyn strtrim(p, p1);
    check L1() else D1();
  D1():
    deopt 7 [r9];
  L1():
    popenv;
    return r9;
  }
}
fun inner655658746(x, width) {
  (reg x:*, reg width:*) -+> V { var x:*, var width:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg r2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg as_character:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg width1:*, reg width2:V, reg strtrim:cls, reg r9:V |
    mkenv;
    st x = x;
    st width = width;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L8() else L1();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    goto L3();
  L3():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L0(c);
  L8():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L2(r4):
    st x = r4;
    goto L3();
  L4(r8):
    popenv;
    return r8;
  L9():
    x3 = ld x;
    check L11() else D1();
  L10():
    r3 = dyn base1(<sym x>);
    goto L2(r3);
  L14():
    x5 = ld x;
    check L16() else D3();
  L15():
    r7 = dyn base2(<lang strtrim(x, width)>);
    goto L4(r7);
  D1():
    deopt 7 [x3];
  D3():
    deopt 16 [x5];
  L11():
    x4 = force? x3;
    checkMissing(x4);
    as_character = ldf `as.character` in base;
    r5 = dyn as_character(x4);
    check L12() else D2();
  L16():
    x6 = force? x5;
    checkMissing(x6);
    width1 = ld width;
    check L17() else D4();
  D2():
    deopt 10 [r5];
  D4():
    deopt 18 [width1];
  L12():
    goto L2(r5);
  L17():
    width2 = force? width1;
    checkMissing(width2);
    strtrim = ldf strtrim in base;
    r9 = dyn strtrim(x6, width2);
    check L18() else D5();
  D5():
    deopt 21 [r9];
  L18():
    goto L4(r9);
  }
}