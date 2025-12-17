fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st isBlankLineRd = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg ___:cls, reg r:V, reg r1:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg r4:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg c5:L, reg r6:V, reg grep:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg r8:V, reg length:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg c8:L, reg r13:V, reg r14:V, reg x5:*, reg x6:V, reg length1:cls, reg r15:V, reg r16:V, reg c9:L, reg c10:V |
    mkenv;
    st x = x;
    ___ = ldf `:::`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r = dyn ___("utils", "getSrcByte");
    check L4() else D1();
  D1():
    deopt 4 [r];
  L4():
    checkFun.0(r);
    r1 = r as cls;
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn r1(p);
    check L5() else D2();
  D2():
    deopt 7 [r3];
  L5():
    r4 = `==`(r3, 1);
    c = `as.logical`(r4);
    if c then L6() else L0(c);
  L0(c2):
    popenv;
    return c2;
  L6():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(c5, r6):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L7():
    grep = ldf grep;
    check L9() else D3();
  L8():
    r5 = dyn base(<lang grep("^[[:blank:]]*\n", x, perl=TRUE)>);
    goto L1(c, r5);
  D3():
    deopt 13 [c];
  L2(c8, r13, r14):
    r16 = `==`(r13, r14);
    c9 = `as.logical`(r16);
    c10 = `&&`(c8, c9);
    goto L0(c10);
  L9():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r8 = dyn grep[, , perl]("^[[:blank:]]*\n", p1, TRUE);
    check L10() else D4();
  L12():
    x5 = ld x;
    check L14() else D6();
  L13():
    r12 = dyn base1(<sym x>);
    goto L2(c5, r6, r12);
  D4():
    deopt 18 [c, r8];
  D6():
    deopt 22 [c5, r6, x5];
  L10():
    length = ldf length in base;
    r9 = dyn length(r8);
    check L11() else D5();
  L14():
    x6 = force? x5;
    checkMissing(x6);
    length1 = ldf length in base;
    r15 = dyn length1(x6);
    check L15() else D7();
  D5():
    deopt 20 [c, r9];
  D7():
    deopt 25 [c5, r6, r15];
  L11():
    goto L1(c, r9);
  L15():
    goto L2(c5, r6, r15);
  }
}