fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1470635338;
    st enquote = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1470635338(cl) {
  (reg cl:*) -+> V { var cl:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg r5:V, reg quote:cls, reg r6:V, reg cl1:*, reg cl2:V, reg list:cls, reg r7:V, reg as_call:cls, reg r8:V |
    mkenv;
    st cl = cl;
    sym = ldf `as.call`;
    base = ldf `as.call` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang list(quote(`::`(base, quote)), cl)>);
    goto L0(r);
  L1(r3):
    as_call = ldf `as.call` in base;
    r8 = dyn as_call(r3);
    check L11() else D2();
  L5():
    sym2 = ldf quote;
    base2 = ldf quote in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L7() else L8();
  L6():
    r2 = dyn base1(<lang quote(`::`(base, quote))>, <sym cl>);
    goto L1(r2);
  D2():
    deopt 12 [r8];
  L2(r5):
    cl1 = ld cl;
    check L9() else D0();
  L7():
    quote = ldf quote in base;
    r6 = dyn quote(<lang `::`(base, quote)>);
    goto L2(r6);
  L8():
    r4 = dyn base2(<lang `::`(base, quote)>);
    goto L2(r4);
  L11():
    goto L0(r8);
  D0():
    deopt 7 [cl1];
  L9():
    cl2 = force? cl1;
    checkMissing(cl2);
    list = ldf list in base;
    r7 = dyn list(r5, cl2);
    check L10() else D1();
  D1():
    deopt 10 [r7];
  L10():
    goto L1(r7);
  }
}