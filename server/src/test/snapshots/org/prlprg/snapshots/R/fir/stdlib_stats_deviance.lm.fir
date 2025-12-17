fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `deviance.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg weighted_residuals:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r3:V, reg r4:V, reg sum:cls, reg r5:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    weighted_residuals = ldf `weighted.residuals`;
    check L3() else D0();
  L2():
    r = dyn base[, `na.rm`](<lang `^`(weighted.residuals(object), 2.0)>, TRUE);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r3 = dyn weighted_residuals(p);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    r4 = `^`(r3, 2.0);
    sum = ldf sum in base;
    r5 = dyn sum(r4, TRUE);
    check L5() else D2();
  D2():
    deopt 11 [r5];
  L5():
    goto L0(r5);
  }
}