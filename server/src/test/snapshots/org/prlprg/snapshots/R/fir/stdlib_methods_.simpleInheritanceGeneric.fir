fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4083244991;
    st `.simpleInheritanceGeneric` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4083244991(fdef) {
  (reg fdef:*) -+> V { var fdef:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg __:cls, reg r4:V, reg attr:cls, reg r5:V, reg identical:cls, reg r6:V |
    mkenv;
    st fdef = fdef;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L3():
    r = dyn base(<lang attr(`@`(fdef, signature), "simpleOnly")>, TRUE);
    goto L0(r);
  L1(r3):
    identical = ldf identical in base;
    r6 = dyn identical(r3, TRUE, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L7() else D1();
  L4():
    __ = ldf `@` in base;
    r4 = dyn __(<sym fdef>, <sym signature>);
    attr = ldf attr in base;
    r5 = dyn attr(r4, "simpleOnly");
    check L6() else D0();
  L5():
    r2 = dyn base1(<lang `@`(fdef, signature)>, "simpleOnly");
    goto L1(r2);
  D0():
    deopt 8 [r5];
  D1():
    deopt 18 [r6];
  L6():
    goto L1(r5);
  L7():
    goto L0(r6);
  }
}