fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner851005753;
    st `alias.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner851005753(object, data, `...`) {
  (reg object:*, reg data:*, reg ddd:dots) -+> V { var object:*, var data:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg aov:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r4:V, reg r5:V, reg aov1:cls, reg object3:*, reg object4:V, reg p1:p(V +), reg data1:*, reg data2:V, reg p2:p(V +), reg r8:V, reg alias:cls, reg lm_obj:*, reg lm_obj1:V, reg p3:p(V +), reg ddd1:dots?, reg r10:V |
    mkenv;
    st object = object;
    st data = data;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L5() else L1();
  L3():
    missing = ldf missing in base;
    r2 = dyn missing(<sym data>);
    goto L0(r2);
  L4():
    r = dyn base(<sym data>);
    goto L0(r);
  L1():
    aov1 = ldf aov;
    check L9() else D2();
  L2(r5):
    st `lm.obj` = r5;
    alias = ldf alias;
    check L11() else D4();
  L5():
    aov = ldf aov;
    check L6() else D0();
  D0():
    deopt 4 [];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L6():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r4 = dyn aov(p);
    check L7() else D1();
  L9():
    p1 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    p2 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r8 = dyn aov1(p1, p2);
    check L10() else D3();
  L11():
    p3 = prom<V +>{
      lm_obj = ld `lm.obj`;
      lm_obj1 = force? lm_obj;
      checkMissing(lm_obj1);
      return lm_obj1;
    };
    ddd1 = ld `...`;
    r10 = dyn alias[, `...`](p3, ddd1);
    check L12() else D5();
  D1():
    deopt 6 [r4];
  D3():
    deopt 11 [r8];
  D5():
    deopt 17 [r10];
  L7():
    goto L2(r4);
  L10():
    goto L2(r8);
  L12():
    popenv;
    return r10;
  }
}