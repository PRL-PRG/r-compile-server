fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `anova.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg list:cls, reg object1:*, reg object2:V, reg p:p(V +), reg ddd1:dots?, reg r5:V, reg length:cls, reg r6:V, reg r7:V, reg c:L, reg anovalist_nls:cls, reg object3:*, reg object4:V, reg p1:p(V +), reg ddd2:dots?, reg r9:V, reg stop:cls, reg r12:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    r7 = `>`(r1, 1);
    c = `as.logical`(r7);
    if c then L11() else L2();
  L4():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L5():
    r = dyn base(<lang list(object, ...)>);
    goto L0(r);
  L1(r3):
    length = ldf length in base;
    r6 = dyn length(r3);
    check L10() else D2();
  L2():
    stop = ldf stop;
    check L16() else D5();
  L6():
    list = ldf list;
    check L8() else D0();
  L7():
    r2 = dyn base1(<sym object>, <sym ...>);
    goto L1(r2);
  L11():
    anovalist_nls = ldf `anovalist.nls`;
    check L12() else D3();
  D0():
    deopt 4 [];
  D2():
    deopt 9 [r6];
  D3():
    deopt 13 [];
  D5():
    deopt 21 [];
  L8():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    ddd1 = ld `...`;
    r5 = dyn list[, `...`](p, ddd1);
    check L9() else D1();
  L10():
    goto L0(r6);
  L12():
    p1 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    ddd2 = ld `...`;
    r9 = dyn anovalist_nls[, `...`](p1, ddd2);
    check L13() else D4();
  L16():
    r12 = dyn stop("anova is only defined for sequences of \"nls\" objects");
    check L17() else D6();
  D1():
    deopt 7 [r5];
  D4():
    deopt 16 [r9];
  D6():
    deopt 23 [r12];
  L9():
    goto L1(r5);
  L13():
    popenv;
    return r9;
  L17():
    popenv;
    return r12;
  }
}