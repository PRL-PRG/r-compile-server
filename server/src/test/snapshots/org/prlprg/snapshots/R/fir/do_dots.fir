fun main() {
  () -+> V { reg r:cls, reg f:cls, reg r1:V |
    mkenv;
    r = clos inner1246119658;
    st f = r;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn f(1.0, 2.0);
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V |
    mkenv;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    list = ldf list;
    check L3() else D0();
  L2():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  L3():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L4() else D1();
  D1():
    deopt 4 [r2];
  L4():
    goto L0(r2);
  }
}