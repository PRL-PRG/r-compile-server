fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st icuSetCollate = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _Internal:cls, reg icuSetCollate:cls, reg ddd1:dots?, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st `...` = ddd;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    _Internal = ldf `.Internal`;
    check L3() else D0();
  L2():
    r = dyn base(<lang icuSetCollate(...)>);
    goto L0(r);
  D0():
    deopt 2 [];
  L3():
    p = prom<V +>{
      icuSetCollate = ldf icuSetCollate;
      ddd1 = ld `...`;
      r2 = dyn icuSetCollate[`...`](ddd1);
      return r2;
    };
    r4 = dyn _Internal(p);
    check L4() else D1();
  D1():
    deopt 4 [r4];
  L4():
    goto L0(r4);
  }
}