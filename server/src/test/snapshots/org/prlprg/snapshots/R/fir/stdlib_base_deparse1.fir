fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1509258808;
    st deparse1 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1509258808(expr, collapse, `width.cutoff`, `...`) {
  (reg expr:*, reg collapse:*, reg width_cutoff:*, reg ddd:dots) -+> V { var expr:*, var collapse:*, reg collapse_isMissing:L, reg collapse_orDefault:*, var `width.cutoff`:*, reg width_cutoff_isMissing:L, reg width_cutoff_orDefault:*, var `...`:dots?, reg paste:cls, reg deparse:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg width_cutoff1:*, reg width_cutoff2:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V, reg p2:p(V +), reg collapse1:*, reg collapse2:V, reg p3:p(V +), reg r5:V |
    mkenv;
    st expr = expr;
    collapse_isMissing = missing.0(collapse);
    if collapse_isMissing then L0(" ") else L0(collapse);
  L0(collapse_orDefault):
    st collapse = collapse_orDefault;
    width_cutoff_isMissing = missing.0(width_cutoff);
    if width_cutoff_isMissing then L1(500) else L1(width_cutoff);
  L1(width_cutoff_orDefault):
    st `width.cutoff` = width_cutoff_orDefault;
    st `...` = ddd;
    paste = ldf paste;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p2 = prom<V +>{
      deparse = ldf deparse;
      p = prom<V +>{
        expr1 = ld expr;
        expr2 = force? expr1;
        checkMissing(expr2);
        return expr2;
      };
      p1 = prom<V +>{
        width_cutoff1 = ld `width.cutoff`;
        width_cutoff2 = force? width_cutoff1;
        checkMissing(width_cutoff2);
        return width_cutoff2;
      };
      ddd1 = ld `...`;
      r2 = dyn deparse[, , `...`](p, p1, ddd1);
      return r2;
    };
    p3 = prom<V +>{
      collapse1 = ld collapse;
      collapse2 = force? collapse1;
      checkMissing(collapse2);
      return collapse2;
    };
    r5 = dyn paste[, collapse](p2, p3);
    check L3() else D1();
  D1():
    deopt 5 [r5];
  L3():
    popenv;
    return r5;
  }
}