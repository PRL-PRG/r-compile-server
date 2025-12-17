fun main() {
  () -+> V { reg r:cls, reg coef:cls, reg lm:cls, reg __:cls, reg r1:V, reg p:p(V +), reg r3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    r = clos inner64320599;
    st coef = r;
    st x = <int 1, 2, 3, 4, 5>;
    coef = ldf coef;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    p1 = prom<V +>{
      lm = ldf lm;
      p = prom<V +>{
        __ = ldf `~` in base;
        r1 = dyn __(<lang c(`:`(1.0, 3.0), 7.0, 6.0)>, <sym x>);
        return r1;
      };
      r3 = dyn lm(p);
      return r3;
    };
    r5 = dyn coef(p1);
    check L1() else D1();
  D1():
    deopt 9 [r5];
  L1():
    popenv;
    return r5;
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
    r2 = dyn UseMethod("coef");
    goto L0(r2);
  L2():
    r = dyn base("coef");
    goto L0(r);
  }
}