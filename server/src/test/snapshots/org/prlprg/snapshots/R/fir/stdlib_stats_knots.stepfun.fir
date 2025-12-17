fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner78491406;
    st `knots.stepfun` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner78491406(Fn, `...`) {
  (reg Fn:*, reg ddd:dots) -+> V { var Fn:*, var `...`:dots?, reg eval:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg expression:cls, reg r2:V, reg p:p(V +), reg environment:cls, reg Fn1:*, reg Fn2:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:V |
    mkenv;
    st Fn = Fn;
    st `...` = ddd;
    eval = ldf eval;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf expression;
      base = ldf expression in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      expression = ldf expression in base;
      r2 = dyn expression(<sym x>);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    p2 = prom<V +>{
      environment = ldf environment;
      p1 = prom<V +>{
        Fn1 = ld Fn;
        Fn2 = force? Fn1;
        checkMissing(Fn2);
        return Fn2;
      };
      r5 = dyn environment(p1);
      return r5;
    };
    r7 = dyn eval[, envir](p, p2);
    check L1() else D1();
  D1():
    deopt 5 [r7];
  L1():
    popenv;
    return r7;
  }
}