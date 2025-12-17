fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st citFooter = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg _bibentry:cls, reg paste:cls, reg ddd1:dots?, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st `...` = ddd;
    _bibentry = ldf `.bibentry`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      paste = ldf paste;
      ddd1 = ld `...`;
      r = dyn paste[`...`](ddd1);
      return r;
    };
    r2 = dyn _bibentry[mfooter](p);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}