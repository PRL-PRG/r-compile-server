fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `vcov.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg summary:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg sm:*, reg sm1:V, reg c:L, reg sm3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg sm4:*, reg sm5:V, reg c1:L, reg dx3:V, reg sm7:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg r3:V, reg r4:V, reg r5:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    summary = ldf summary;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn summary(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    st sm = r1;
    sm = ld sm;
    check L2() else D2();
  D2():
    deopt 5 [sm];
  L2():
    sm1 = force? sm;
    checkMissing(sm1);
    c = `is.object`(sm1);
    if c then L4() else L5(sm1);
  L3(dx1):
    sm4 = ld sm;
    check L7() else D3();
  L4():
    dr = tryDispatchBuiltin.1("$", sm1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(sm3):
    r2 = `$`(sm3, <sym cov.unscaled>);
    goto L3(r2);
  D3():
    deopt 7 [dx1, sm4];
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L7():
    sm5 = force? sm4;
    checkMissing(sm5);
    c1 = `is.object`(sm5);
    if c1 then L9() else L10(dx1, sm5);
  L8(dx6, dx7):
    r4 = `^`(dx7, 2.0);
    r5 = `*`(dx6, r4);
    popenv;
    return r5;
  L9():
    dr2 = tryDispatchBuiltin.1("$", sm5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L11() else L10(dx1, dr2);
  L10(dx3, sm7):
    r3 = `$`(sm7, <sym sigma>);
    goto L8(dx3, r3);
  L11():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx1, dx5);
  }
}