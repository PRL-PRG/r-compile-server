fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2245717122;
    st `influence.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2245717122(model, `do.coef`, `...`) {
  (reg model:*, reg do_coef:*, reg ddd:dots) -+> V { var model:*, var `do.coef`:*, reg do_coef_isMissing:L, reg do_coef_orDefault:*, var `...`:dots?, reg lm_influence:cls, reg model1:*, reg model2:V, reg p:p(V +), reg do_coef1:*, reg do_coef2:V, reg p1:p(V +), reg ddd1:dots?, reg r2:V |
    mkenv;
    st model = model;
    do_coef_isMissing = missing.0(do_coef);
    if do_coef_isMissing then L0(TRUE) else L0(do_coef);
  L0(do_coef_orDefault):
    st `do.coef` = do_coef_orDefault;
    st `...` = ddd;
    lm_influence = ldf `lm.influence`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      model1 = ld model;
      model2 = force? model1;
      checkMissing(model2);
      return model2;
    };
    p1 = prom<V +>{
      do_coef1 = ld `do.coef`;
      do_coef2 = force? do_coef1;
      checkMissing(do_coef2);
      return do_coef2;
    };
    ddd1 = ld `...`;
    r2 = dyn lm_influence[, `do.coef`, `...`](p, p1, ddd1);
    check L2() else D1();
  D1():
    deopt 6 [r2];
  L2():
    popenv;
    return r2;
  }
}