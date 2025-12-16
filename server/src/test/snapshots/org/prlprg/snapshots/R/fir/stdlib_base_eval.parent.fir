fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1022397192`;
    st `eval.parent` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1022397192`(expr, n) {
  (reg expr:*, reg n:*) -+> V { var expr:*, var n:*, reg n_isMissing:L, reg n_orDefault:*, reg parent_frame:cls, reg n1:*, reg n2:V, reg r:V, reg p:p(V +), reg r2:V, reg eval:cls, reg expr1:*, reg expr2:V, reg p1:p(V +), reg p2:*, reg p3:V, reg p4:p(V +), reg r5:V |
    mkenv;
    st expr = expr;
    n_isMissing = missing.0(n);
    if n_isMissing then L0(1.0) else L0(n);
  L0(n_orDefault):
    st n = n_orDefault;
    parent_frame = ldf `parent.frame`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      r = `+`(n2, 1.0);
      return r;
    };
    r2 = dyn parent_frame(p);
    check L2() else D1();
  D1():
    deopt 3 [r2];
  L2():
    st p = r2;
    eval = ldf eval;
    check L3() else D2();
  D2():
    deopt 6 [];
  L3():
    p1 = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    p4 = prom<V +>{
      p2 = ld p;
      p3 = force? p2;
      checkMissing(p3);
      return p3;
    };
    r5 = dyn eval(p1, p4);
    check L4() else D3();
  D3():
    deopt 9 [r5];
  L4():
    popenv;
    return r5;
  }
}