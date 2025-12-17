fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1846976439;
    st `print.xtabs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1846976439(x, `na.print`, `...`) {
  (reg x:*, reg na_print:*, reg ddd:dots) -+> V { var x:*, var `na.print`:*, reg na_print_isMissing:L, reg na_print_orDefault:*, var `...`:dots?, reg x1:*, reg x2:V, reg l:*, reg attr__:cls, reg r:V, reg print_table:cls, reg x3:*, reg x4:V, reg p:p(V +), reg na_print1:*, reg na_print2:V, reg p1:p(V +), reg ddd1:dots?, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg ox:*, reg ox1:V, reg invisible:cls, reg r6:V |
    mkenv;
    st x = x;
    na_print_isMissing = missing.0(na_print);
    if na_print_isMissing then L0("") else L0(na_print);
  L0(na_print_orDefault):
    st `na.print` = na_print_orDefault;
    st `...` = ddd;
    x1 = ld x;
    check L2() else D0();
  D0():
    deopt 0 [x1];
  L2():
    x2 = force? x1;
    checkMissing(x2);
    st ox = x2;
    l = ld x;
    attr__ = ldf `attr<-`;
    check L3() else D1();
  D1():
    deopt 6 [NULL, l, NULL];
  L3():
    r = dyn attr__(l, NULL, "call", NULL);
    check L4() else D2();
  D2():
    deopt 9 [NULL, r];
  L4():
    st x = r;
    print_table = ldf `print.table`;
    check L5() else D3();
  D3():
    deopt 12 [];
  L5():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p1 = prom<V +>{
      na_print1 = ld `na.print`;
      na_print2 = force? na_print1;
      checkMissing(na_print2);
      return na_print2;
    };
    ddd1 = ld `...`;
    r3 = dyn print_table[, `na.print`, `...`](p, p1, ddd1);
    check L6() else D4();
  D4():
    deopt 17 [r3];
  L6():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(r5):
    popenv;
    return r5;
  L7():
    ox = ld ox;
    check L9() else D5();
  L8():
    r4 = dyn base(<sym ox>);
    goto L1(r4);
  D5():
    deopt 20 [ox];
  L9():
    ox1 = force? ox;
    checkMissing(ox1);
    invisible = ldf invisible in base;
    r6 = dyn invisible(ox1);
    check L10() else D6();
  D6():
    deopt 23 [r6];
  L10():
    goto L1(r6);
  }
}