fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st cleanupLatex = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg x3:*, reg x4:V, reg tryCatch:cls, reg parseLatex:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r7:V, reg p1:p(V +), reg identity:*, reg identity1:V, reg p2:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg latex:*, reg latex1:V, reg inherits:cls, reg r13:V, reg c1:L, reg x7:*, reg x8:V, reg deparseLatex:cls, reg latexToUtf8:cls, reg latex2:*, reg latex3:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg r17:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L9() else L1();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    tryCatch = ldf tryCatch;
    check L13() else D3();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L8() else D1();
  L9():
    x3 = ld x;
    check L10() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [x3];
  D3():
    deopt 13 [];
  L8():
    goto L0(r2);
  L10():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L13():
    p1 = prom<V +>{
      parseLatex = ldf parseLatex;
      p = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r7 = dyn parseLatex(p);
      return r7;
    };
    p2 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r10 = dyn tryCatch[, error](p1, p2);
    check L14() else D4();
  D4():
    deopt 17 [r10];
  L14():
    st latex = r10;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L3(r12):
    c1 = `as.logical`(r12);
    if c1 then L19() else L4();
  L15():
    latex = ld latex;
    check L17() else D5();
  L16():
    r11 = dyn base1(<sym latex>, "error");
    goto L3(r11);
  D5():
    deopt 21 [latex];
  L4():
    deparseLatex = ldf deparseLatex;
    check L22() else D8();
  L17():
    latex1 = force? latex;
    checkMissing(latex1);
    inherits = ldf inherits in base;
    r13 = dyn inherits(latex1, "error", FALSE);
    check L18() else D6();
  L19():
    x7 = ld x;
    check L20() else D7();
  D6():
    deopt 26 [r13];
  D7():
    deopt 27 [x7];
  D8():
    deopt 30 [];
  L18():
    goto L3(r13);
  L20():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  L22():
    p4 = prom<V +>{
      latexToUtf8 = ldf latexToUtf8;
      p3 = prom<V +>{
        latex2 = ld latex;
        latex3 = force? latex2;
        checkMissing(latex3);
        return latex3;
      };
      r15 = dyn latexToUtf8(p3);
      return r15;
    };
    r17 = dyn deparseLatex[, dropBraces](p4, TRUE);
    check L23() else D9();
  D9():
    deopt 34 [r17];
  L23():
    popenv;
    return r17;
  }
}