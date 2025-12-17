fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `xtfrm.numeric_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg _encode_numeric_version:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg NextMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    _encode_numeric_version = ldf `.encode_numeric_version`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn _encode_numeric_version(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    st x = r1;
    NextMethod = ldf NextMethod;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    r2 = dyn NextMethod("xtfrm");
    check L3() else D3();
  D3():
    deopt 8 [r2];
  L3():
    popenv;
    return r2;
  }
}