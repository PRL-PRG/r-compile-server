fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1261373293;
    st `%o%` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner1261373293(X, Y) {
  (reg X:*, reg Y:*) -+> V { var X:*, var Y:*, reg outer:cls, reg X1:*, reg X2:V, reg p:p(V +), reg Y1:*, reg Y2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st X = X;
    st Y = Y;
    outer = ldf outer;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      X1 = ld X;
      X2 = force? X1;
      checkMissing(X2);
      return X2;
    };
    p1 = prom<V +>{
      Y1 = ld Y;
      Y2 = force? Y1;
      checkMissing(Y2);
      return Y2;
    };
    r2 = dyn outer(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}