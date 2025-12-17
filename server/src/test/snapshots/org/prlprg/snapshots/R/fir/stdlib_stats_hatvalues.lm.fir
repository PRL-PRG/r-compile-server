fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3434495153;
    st `hatvalues.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3434495153(model, infl, `...`) {
  (reg model:*, reg infl:*, reg ddd:dots) -+> V { var model:*, var infl:*, reg infl_isMissing:L, reg infl_orDefault:*, reg lm_influence:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var `...`:dots?, reg infl1:*, reg infl2:V, reg c:L, reg infl4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V |
    mkenv;
    st model = model;
    infl_isMissing = missing.0(infl);
    if infl_isMissing then L0() else L1(infl);
  L0():
    p1 = prom<V +>{
      lm_influence = ldf `lm.influence`;
      p = prom<V +>{
        model1 = ld model;
        model2 = force? model1;
        checkMissing(model2);
        return model2;
      };
      r1 = dyn lm_influence[, `do.coef`](p, FALSE);
      return r1;
    };
    goto L1(p1);
  L1(infl_orDefault):
    st infl = infl_orDefault;
    st `...` = ddd;
    infl1 = ld infl;
    check L2() else D0();
  D0():
    deopt 0 [infl1];
  L2():
    infl2 = force? infl1;
    checkMissing(infl2);
    c = `is.object`(infl2);
    if c then L4() else L5(infl2);
  L3(dx1):
    popenv;
    return dx1;
  L4():
    dr = tryDispatchBuiltin.1("$", infl2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(infl4):
    r3 = `$`(infl4, <sym hat>);
    goto L3(r3);
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  }
}