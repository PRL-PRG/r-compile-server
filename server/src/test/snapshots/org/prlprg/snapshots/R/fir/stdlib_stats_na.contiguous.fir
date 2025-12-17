fun main() {
  () -+> V { reg r:cls, reg na_contiguous:cls, reg presidents:*, reg presidents1:V, reg p:p(V +), reg r2:V |
    mkenv;
    r = clos inner64320599;
    st `na.contiguous` = r;
    na_contiguous = ldf `na.contiguous`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      presidents = ld presidents;
      presidents1 = force? presidents;
      checkMissing(presidents1);
      return presidents1;
    };
    r2 = dyn na_contiguous(p);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("na.contiguous");
    goto L0(r2);
  L2():
    r = dyn base("na.contiguous");
    goto L0(r);
  }
}