fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st isBlankRd = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg grep:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg length:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg r9:V, reg x3:*, reg x4:V, reg length1:cls, reg r10:V, reg r11:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L2():
    grep = ldf grep;
    check L4() else D0();
  L3():
    r = dyn base(<lang grep("^[[:blank:]]*\n?$", x, perl=TRUE)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1(r8, r9):
    r11 = `==`(r8, r9);
    popenv;
    return r11;
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn grep[, , perl]("^[[:blank:]]*\n?$", p, TRUE);
    check L5() else D1();
  L7():
    x3 = ld x;
    check L9() else D3();
  L8():
    r7 = dyn base1(<sym x>);
    goto L1(r1, r7);
  D1():
    deopt 8 [r3];
  D3():
    deopt 12 [r1, x3];
  L5():
    length = ldf length in base;
    r4 = dyn length(r3);
    check L6() else D2();
  L9():
    x4 = force? x3;
    checkMissing(x4);
    length1 = ldf length in base;
    r10 = dyn length1(x4);
    check L10() else D4();
  D2():
    deopt 10 [r4];
  D4():
    deopt 15 [r1, r10];
  L6():
    goto L0(r4);
  L10():
    goto L1(r1, r10);
  }
}