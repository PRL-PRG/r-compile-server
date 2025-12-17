fun main() {
  () -+> V { reg r:cls, reg na_action:cls, reg na_omit:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V |
    mkenv;
    r = clos inner64320599;
    st `na.action` = r;
    na_action = ldf `na.action`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p1 = prom<V +>{
      na_omit = ldf `na.omit`;
      p = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r2):
        return r2;
      L1():
        c = ldf c in base;
        r3 = dyn c(1.0, NA_LGL);
        goto L0(r3);
      L2():
        r1 = dyn base(1.0, NA_LGL);
        goto L0(r1);
      };
      r5 = dyn na_omit(p);
      return r5;
    };
    r7 = dyn na_action(p1);
    check L1() else D1();
  D1():
    deopt 6 [r7];
  L1():
    popenv;
    return r7;
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
    r2 = dyn UseMethod("na.action");
    goto L0(r2);
  L2():
    r = dyn base("na.action");
    goto L0(r);
  }
}