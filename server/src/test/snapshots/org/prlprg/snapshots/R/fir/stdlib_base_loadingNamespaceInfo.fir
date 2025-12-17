fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st loadingNamespaceInfo = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg dynGet:cls, reg stop:cls, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    dynGet = ldf dynGet;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      stop = ldf stop;
      r = dyn stop("not loading a namespace");
      return r;
    };
    r2 = dyn dynGet("__LoadingNamespaceInfo__", p);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}