fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1408531824;
    st `monthplot.StructTS` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1408531824(x, labels, ylab, choice, `...`) {
  (reg x:*, reg labels:*, reg ylab:*, reg choice:*, reg ddd:dots) -+> V { var x:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, reg choice1:*, reg choice2:V, reg p:p(V +), var choice:*, reg choice_isMissing:L, reg choice_orDefault:*, var `...`:dots?, reg monthplot:cls, reg fitted:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r2:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg choice3:*, reg choice4:V, reg __:cls, reg r5:V, reg p2:p(V +), reg labels1:*, reg labels2:V, reg p3:p(V +), reg ylab1:*, reg ylab2:V, reg p4:p(V +), reg ddd1:dots?, reg r9:V |
    mkenv;
    st x = x;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L0(NULL) else L0(labels);
  L0(labels_orDefault):
    st labels = labels_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L1() else L2(ylab);
  L1():
    p = prom<V +>{
      choice1 = ld choice;
      choice2 = force? choice1;
      checkMissing(choice2);
      return choice2;
    };
    goto L2(p);
  L2(ylab_orDefault):
    st ylab = ylab_orDefault;
    choice_isMissing = missing.0(choice);
    if choice_isMissing then L3("sea") else L3(choice);
  L3(choice_orDefault):
    st choice = choice_orDefault;
    st `...` = ddd;
    monthplot = ldf monthplot;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p2 = prom<V +>{
      fitted = ldf fitted;
      p1 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r2 = dyn fitted(p1);
      c = `is.object`(r2);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      choice3 = ld choice;
      choice4 = force? choice3;
      __ = ldf `[` in base;
      r5 = dyn __(r2, <missing>, choice4);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      return labels2;
    };
    p4 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    ddd1 = ld `...`;
    r9 = dyn monthplot[, labels, ylab, `...`](p2, p3, p4, ddd1);
    check L5() else D1();
  D1():
    deopt 8 [r9];
  L5():
    popenv;
    return r9;
  }
}