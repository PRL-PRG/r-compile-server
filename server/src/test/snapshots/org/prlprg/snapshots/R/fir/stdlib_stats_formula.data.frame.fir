fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `formula.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg attr:cls, reg r4:V, reg length:cls, reg r5:V, reg c:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c5:L, reg r7:V, reg formula_terms:cls, reg tx:*, reg tx1:V, reg p:p(V +), reg r9:V, reg length1:cls, reg r10:V, reg c6:L, reg c7:V, reg c9:L, reg ff:*, reg ff1:V, reg DF2formula:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg parent_frame:cls, reg r12:V, reg p2:p(V +), reg r14:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c = `as.logical`(r1);
    if c then L12() else L2(c);
  L5():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r = dyn base(<lang `<-`(tx, attr(x, "terms"))>);
    goto L0(r);
  L1(r3):
    st tx = r3;
    length = ldf length in base;
    r5 = dyn length(r3);
    check L11() else D2();
  L2(c2):
    c9 = `as.logical`(c2);
    if c9 then L19() else L4();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r2 = dyn base1(<sym x>, "terms");
    goto L1(r2);
  L12():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  D0():
    deopt 4 [x1];
  D2():
    deopt 11 [r5];
  L3(c5, r7):
    c6 = `as.logical`(r7);
    c7 = `&&`(c5, c6);
    goto L2(c7);
  L4():
    DF2formula = ldf DF2formula;
    check L22() else D7();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r4 = dyn attr(x2, "terms");
    check L10() else D1();
  L11():
    goto L0(r5);
  L13():
    formula_terms = ldf `formula.terms`;
    check L15() else D3();
  L14():
    r6 = dyn base2(<lang `<-`(ff, formula.terms(tx))>);
    goto L3(c, r6);
  L19():
    ff = ld ff;
    check L20() else D6();
  D1():
    deopt 8 [r4];
  D3():
    deopt 15 [c];
  D6():
    deopt 22 [ff];
  D7():
    deopt 25 [];
  L10():
    goto L1(r4);
  L15():
    p = prom<V +>{
      tx = ld tx;
      tx1 = force? tx;
      checkMissing(tx1);
      return tx1;
    };
    r9 = dyn formula_terms(p);
    check L16() else D4();
  L20():
    ff1 = force? ff;
    checkMissing(ff1);
    popenv;
    return ff1;
  L22():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p2 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r12 = dyn parent_frame();
      return r12;
    };
    r14 = dyn DF2formula(p1, p2);
    check L23() else D8();
  D4():
    deopt 17 [c, r9];
  D8():
    deopt 28 [r14];
  L16():
    st ff = r9;
    length1 = ldf length in base;
    r10 = dyn length1(r9);
    check L17() else D5();
  L23():
    popenv;
    return r14;
  D5():
    deopt 20 [c, r10];
  L17():
    goto L3(c, r10);
  }
}