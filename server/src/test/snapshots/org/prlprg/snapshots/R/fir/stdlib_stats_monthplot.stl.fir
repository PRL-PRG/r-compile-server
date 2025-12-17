fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner501855257;
    st `monthplot.stl` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner501855257(x, labels, ylab, choice, `...`) {
  (reg x:*, reg labels:*, reg ylab:*, reg choice:*, reg ddd:dots) -+> V { var x:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, reg choice1:*, reg choice2:V, reg p:p(V +), var choice:*, reg choice_isMissing:L, reg choice_orDefault:*, var `...`:dots?, reg monthplot:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg choice3:*, reg choice4:V, reg __:cls, reg r2:V, reg p1:p(V +), reg labels1:*, reg labels2:V, reg p2:p(V +), reg ylab1:*, reg ylab2:V, reg p3:p(V +), reg ddd1:dots?, reg r6:V |
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
    if choice_isMissing then L3("seasonal") else L3(choice);
  L3(choice_orDefault):
    st choice = choice_orDefault;
    st `...` = ddd;
    monthplot = ldf monthplot;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L2() else L3(x2);
    L1(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6();
    L2():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(x4):
      r1 = `$`(x4, <sym time.series>);
      goto L1(r1);
    L0(dx5):
      return dx5;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6();
    L6():
      choice3 = ld choice;
      choice4 = force? choice3;
      __ = ldf `[` in base;
      r2 = dyn __(dx1, <missing>, choice4);
      goto L0(r2);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx4);
    };
    p2 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      return labels2;
    };
    p3 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    ddd1 = ld `...`;
    r6 = dyn monthplot[, labels, ylab, `...`](p1, p2, p3, ddd1);
    check L5() else D1();
  D1():
    deopt 8 [r6];
  L5():
    popenv;
    return r6;
  }
}