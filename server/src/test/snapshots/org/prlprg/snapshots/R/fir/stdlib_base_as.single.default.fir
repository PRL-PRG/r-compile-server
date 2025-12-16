fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `as.single.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg as_vector:cls, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    structure = ldf structure;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf `.Internal`;
      base = ldf `.Internal` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      as_vector = ldf `as.vector` in base;
      r2 = dyn as_vector(x2, "double");
      goto L0(r2);
    L2():
      r = dyn base(<lang as.vector(x, "double")>);
      goto L0(r);
    };
    r4 = dyn structure[, Csingle](p, TRUE);
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    popenv;
    return r4;
  }
}