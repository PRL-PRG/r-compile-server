fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1017016219;
    st `vcov.summary.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1017016219(object, complete, `...`) {
  (reg object:*, reg complete:*, reg ddd:dots) -+> V { var object:*, var complete:*, reg complete_isMissing:L, reg complete_orDefault:*, var `...`:dots?, reg _vcov_aliased:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg object5:*, reg object6:V, reg c1:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r2:V, reg p1:p(V +), reg complete1:*, reg complete2:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st object = object;
    complete_isMissing = missing.0(complete);
    if complete_isMissing then L0(TRUE) else L0(complete);
  L0(complete_orDefault):
    st complete = complete_orDefault;
    st `...` = ddd;
    _vcov_aliased = ldf `.vcov.aliased`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      c = `is.object`(object2);
      if c then L1() else L2(object2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", object2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(object4):
      r = `$`(object4, <sym aliased>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      c1 = `is.object`(object6);
      if c1 then L1() else L2(object6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", object6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(object8):
      r2 = `$`(object8, <sym cov.scaled>);
      goto L0(r2);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p2 = prom<V +>{
      complete1 = ld complete;
      complete2 = force? complete1;
      checkMissing(complete2);
      return complete2;
    };
    r5 = dyn _vcov_aliased[, , complete](p, p1, p2);
    check L2() else D1();
  D1():
    deopt 6 [r5];
  L2():
    popenv;
    return r5;
  }
}