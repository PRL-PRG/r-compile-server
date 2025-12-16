fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-88512307`;
    st local = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-88512307`(expr, envir) {
  (reg expr:*, reg envir:*) -+> V { var expr:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg new_env:cls, reg r:V, reg p:p(V +), reg eval_parent:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg substitute:cls, reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st expr = expr;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p = prom<V +>{
      new_env = ldf `new.env`;
      r = dyn new_env();
      return r;
    };
    goto L1(p);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    eval_parent = ldf `eval.parent`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      substitute = ldf substitute in base;
      r4 = dyn substitute(<lang eval(quote(expr), envir)>);
      goto L0(r4);
    L2():
      r2 = dyn base(<lang eval(quote(expr), envir)>);
      goto L0(r2);
    };
    r6 = dyn eval_parent(p1);
    check L3() else D1();
  D1():
    deopt 3 [r6];
  L3():
    popenv;
    return r6;
  }
}