fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-497502118`;
    st single = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-497502118`(length) {
  (reg length:*) -+> V { var length:*, reg length_isMissing:L, reg length_orDefault:*, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg length1:*, reg length2:V, reg vector:cls, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    length_isMissing = missing.0(length);
    if length_isMissing then L0(0) else L0(length);
  L0(length_orDefault):
    st length = length_orDefault;
    structure = ldf structure;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf vector;
      base = ldf vector in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      length1 = ld length;
      length2 = force? length1;
      checkMissing(length2);
      vector = ldf vector in base;
      r2 = dyn vector("double", length2);
      goto L0(r2);
    L2():
      r = dyn base("double", <sym length>);
      goto L0(r);
    };
    r4 = dyn structure[, Csingle](p, TRUE);
    check L2() else D1();
  D1():
    deopt 5 [r4];
  L2():
    popenv;
    return r4;
  }
}