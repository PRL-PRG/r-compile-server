fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3602630564;
    st `vcov.aov` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3602630564(object, complete, `...`) {
  (reg object:*, reg complete:*, reg ddd:dots) -+> V { var object:*, var complete:*, reg complete_isMissing:L, reg complete_orDefault:*, var `...`:dots?, reg vcov_summary_lm:cls, reg summary_lm:cls, reg object1:*, reg object2:V, reg p:p(V +), reg ddd1:dots?, reg r1:V, reg p1:p(V +), reg complete1:*, reg complete2:V, reg p2:p(V +), reg r4:V |
    mkenv;
    st object = object;
    complete_isMissing = missing.0(complete);
    if complete_isMissing then L0(FALSE) else L0(complete);
  L0(complete_orDefault):
    st complete = complete_orDefault;
    st `...` = ddd;
    vcov_summary_lm = ldf `vcov.summary.lm`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      summary_lm = ldf `summary.lm`;
      p = prom<V +>{
        object1 = ld object;
        object2 = force? object1;
        checkMissing(object2);
        return object2;
      };
      ddd1 = ld `...`;
      r1 = dyn summary_lm[, `...`](p, ddd1);
      return r1;
    };
    p2 = prom<V +>{
      complete1 = ld complete;
      complete2 = force? complete1;
      checkMissing(complete2);
      return complete2;
    };
    r4 = dyn vcov_summary_lm[, complete](p1, p2);
    check L2() else D1();
  D1():
    deopt 5 [r4];
  L2():
    popenv;
    return r4;
  }
}