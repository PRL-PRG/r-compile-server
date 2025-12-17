fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3771677315;
    st `with.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3771677315(data, expr, `...`) {
  (reg data:*, reg expr:*, reg ddd:dots) -+> V { var data:*, var expr:*, var `...`:dots?, reg eval:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg data1:*, reg data2:V, reg p1:p(V +), reg parent_frame:cls, reg r5:V, reg p2:p(V +), reg r7:V |
    mkenv;
    st data = data;
    st expr = expr;
    st `...` = ddd;
    eval = ldf eval;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      substitute = ldf substitute in base;
      r2 = dyn substitute(<sym expr>);
      goto L0(r2);
    L2():
      r = dyn base(<sym expr>);
      goto L0(r);
    };
    p1 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    p2 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r5 = dyn parent_frame();
      return r5;
    };
    r7 = dyn eval[, , enclos](p, p1, p2);
    check L1() else D1();
  D1():
    deopt 6 [r7];
  L1():
    popenv;
    return r7;
  }
}