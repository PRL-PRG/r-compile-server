fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `sigma.glm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg summary:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r3:V, reg c:L, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg r7:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    summary = ldf summary;
    check L3() else D0();
  L2():
    r = dyn base(<lang `$`(summary(object), dispersion)>);
    goto L0(r);
  D0():
    deopt 2 [];
  L3():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r3 = dyn summary(p);
    check L4() else D1();
  D1():
    deopt 4 [r3];
  L4():
    c = `is.object`(r3);
    if c then L6() else L7(r3);
  L5(dx1):
    r7 = sqrt(dx1);
    goto L0(r7);
  L6():
    dr = tryDispatchBuiltin.1("$", r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(r5):
    r6 = `$`(r5, <sym dispersion>);
    goto L5(r6);
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  }
}