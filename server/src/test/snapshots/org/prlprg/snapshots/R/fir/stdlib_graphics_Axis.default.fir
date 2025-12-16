fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner842086906;
    st `Axis.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner842086906(x, at, `...`, side, labels) {
  (reg x:*, reg at:*, reg ddd:dots, reg side:*, reg labels:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, var at:*, reg at_isMissing:L, reg at_orDefault:*, var `...`:dots?, var side:*, var labels:*, reg labels_isMissing:L, reg labels_orDefault:*, reg axis:cls, reg side1:*, reg side2:V, reg p:p(V +), reg at1:*, reg at2:V, reg p1:p(V +), reg labels1:*, reg labels2:V, reg p2:p(V +), reg ddd1:dots?, reg r3:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0(NULL) else L0(x);
  L0(x_orDefault):
    st x = x_orDefault;
    at_isMissing = missing.0(at);
    if at_isMissing then L1(NULL) else L1(at);
  L1(at_orDefault):
    st at = at_orDefault;
    st `...` = ddd;
    st side = side;
    labels_isMissing = missing.0(labels);
    if labels_isMissing then L2(NULL) else L2(labels);
  L2(labels_orDefault):
    st labels = labels_orDefault;
    axis = ldf axis;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      side1 = ld side;
      side2 = force? side1;
      checkMissing(side2);
      return side2;
    };
    p1 = prom<V +>{
      at1 = ld at;
      at2 = force? at1;
      checkMissing(at2);
      return at2;
    };
    p2 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      return labels2;
    };
    ddd1 = ld `...`;
    r3 = dyn axis[side, at, labels, `...`](p, p1, p2, ddd1);
    check L4() else D1();
  D1():
    deopt 9 [r3];
  L4():
    popenv;
    return r3;
  }
}