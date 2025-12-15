fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg __:cls, reg r2:V, reg ___:cls, reg r3:V, reg list:cls, reg r4:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    __ = ldf `::`;
    check L3() else D0();
  L2():
    r = dyn base(<lang `::`(compiler, cmpfun)>, <lang `:::`(compiler, makeCenv)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    r2 = dyn __("compiler", "cmpfun");
    check L4() else D1();
  D1():
    deopt 6 [r2];
  L4():
    ___ = ldf `:::`;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    r3 = dyn ___("compiler", "makeCenv");
    check L6() else D3();
  D3():
    deopt 11 [r3];
  L6():
    list = ldf list in base;
    r4 = dyn list(r2, r3);
    check L7() else D4();
  D4():
    deopt 13 [r4];
  L7():
    goto L0(r4);
  }
}