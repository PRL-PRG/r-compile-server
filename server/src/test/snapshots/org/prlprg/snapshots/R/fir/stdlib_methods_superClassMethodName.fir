fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1317922881;
    st superClassMethodName = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1317922881(def) {
  (reg def:*) -+> V { var def:*, reg paste:cls, reg __:cls, reg r:V, reg p:p(V +), reg __1:cls, reg r2:V, reg p1:p(V +), reg r4:V |
    mkenv;
    st def = def;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      __ = ldf `@` in base;
      r = dyn __(<sym def>, <sym name>);
      return r;
    };
    p1 = prom<V +>{
      __1 = ldf `@` in base;
      r2 = dyn __1(<sym def>, <sym refClassName>);
      return r2;
    };
    r4 = dyn paste[, , sep](p, p1, "#");
    check L1() else D1();
  D1():
    deopt 6 [r4];
  L1():
    popenv;
    return r4;
  }
}